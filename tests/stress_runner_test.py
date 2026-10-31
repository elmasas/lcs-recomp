"""Regression checks for save comparison; never launches the game."""
import importlib.util
from pathlib import Path
import shutil
import subprocess
import sys
import tempfile
import unittest

source = Path(__file__).resolve().parents[1] / 'lcs/scripts/stress_test.py'
spec = importlib.util.spec_from_file_location('stress_test', source)
runner = importlib.util.module_from_spec(spec)
spec.loader.exec_module(runner)


class SaveComparisonTest(unittest.TestCase):
    def test_linked_save_contents_are_compared(self):
        with tempfile.TemporaryDirectory() as temporary:
            root = Path(temporary)
            saves, real = root / 'saves', root / 'real-save'
            saves.mkdir()
            real.mkdir()
            (real / 'DATA.BIN').write_bytes(b'original')
            try:
                (saves / 'SLOT0').symlink_to(real, target_is_directory=True)
            except OSError:
                self.skipTest('directory symlinks unavailable')
            before = runner.fingerprint(saves)
            runner.validate_save_links(saves)
            shutil.copytree(saves, root / 'isolated')
            self.assertEqual((root / 'isolated/SLOT0/DATA.BIN').read_bytes(), b'original')
            self.assertIn('SLOT0/DATA.BIN', before)
            (real / 'DATA.BIN').write_bytes(b'changed')
            self.assertNotEqual(before, runner.fingerprint(saves))

    def test_link_cycle_does_not_recurse_forever(self):
        with tempfile.TemporaryDirectory() as temporary:
            root = Path(temporary)
            (root / 'DATA.BIN').write_bytes(b'original')
            try:
                (root / 'loop').symlink_to(root, target_is_directory=True)
            except OSError:
                self.skipTest('directory symlinks unavailable')
            result = runner.fingerprint(root)
            self.assertEqual(set(result), {'DATA.BIN', 'loop'})
            with self.assertRaisesRegex(ValueError, 'cyclic save directory link'):
                runner.validate_save_links(root)

    def test_dangling_link_can_be_compared(self):
        with tempfile.TemporaryDirectory() as temporary:
            root = Path(temporary)
            try:
                (root / 'missing').symlink_to(root / 'absent')
            except OSError:
                self.skipTest('symlinks unavailable')
            before = runner.fingerprint(root)
            self.assertEqual(before, {'missing': '<non-file>'})
            with self.assertRaisesRegex(ValueError, 'dangling save link'):
                runner.validate_save_links(root)
            (root / 'absent').write_bytes(b'now present')
            self.assertNotEqual(before, runner.fingerprint(root))

    def test_invalid_save_link_is_rejected_before_launch(self):
        with tempfile.TemporaryDirectory() as temporary:
            root = Path(temporary)
            game = root / 'game'
            (game / 'PSP/SAVEDATA').mkdir(parents=True)
            (game / 'PSP_GAME').mkdir()
            (game / 'EBOOT.ELF').write_bytes(b'fixture')
            config = root / 'settings.ini'
            config.write_text('[Display]\n')
            try:
                (game / 'PSP/SAVEDATA/missing').symlink_to(root / 'absent')
            except OSError:
                self.skipTest('symlinks unavailable')
            output = root / 'output'
            process = subprocess.run([sys.executable, str(source), '--game', str(game),
                '--binary', sys.executable, '--config', str(config), '--output', str(output)],
                capture_output=True, text=True)
            self.assertEqual(process.returncode, 2)
            self.assertIn('dangling save link', process.stderr)
            self.assertFalse(output.exists())


if __name__ == '__main__':
    unittest.main()
