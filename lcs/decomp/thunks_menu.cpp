// Guest calling convention to C++ for the menu functions in decomp_functions.def.
#include "thunks.hpp"

#include "game/MenuManager.hpp"

namespace lcs::decomp::thunk {

using namespace lcs::game;

namespace {
CMenuManager &Menu(Context &ctx) { return guest_ref<CMenuManager>(ctx.gpr[4]); }
}  // namespace

void CMenuManager_NavUpJustDown(Runtime &, Context &ctx) { ctx.gpr[2] = Menu(ctx).NavUpJustDown() ? 1u : 0u; }
void CMenuManager_NavDownJustDown(Runtime &, Context &ctx) { ctx.gpr[2] = Menu(ctx).NavDownJustDown() ? 1u : 0u; }
void CMenuManager_NavLeftJustDown(Runtime &, Context &ctx) { ctx.gpr[2] = Menu(ctx).NavLeftJustDown() ? 1u : 0u; }
void CMenuManager_NavRightJustDown(Runtime &, Context &ctx) { ctx.gpr[2] = Menu(ctx).NavRightJustDown() ? 1u : 0u; }
void CMenuManager_ClampToField584(Runtime &, Context &ctx) {
    ctx.gpr[2] = static_cast<uint32>(Menu(ctx).ClampToField584(static_cast<int32>(ctx.gpr[5])));
}
void CMenuManager_ResetField588(Runtime &, Context &ctx) { Menu(ctx).ResetField588(); }

void CMenuManager_SwitchToScreen(Runtime &, Context &ctx) {
    Menu(ctx).SwitchToScreen(static_cast<int32>(ctx.gpr[5]));
}
void CMenuManager_OnScreenChanged(Runtime &, Context &ctx) { Menu(ctx).OnScreenChanged(); }
void CMenuManager_RequestCloseMenu(Runtime &, Context &) { CMenuManager::RequestCloseMenu(); }
void CMenuManager_AdjustSlider(Runtime &, Context &ctx) {
    Menu(ctx).AdjustSlider(ctx, static_cast<int32>(ctx.gpr[5]));
}

// The next two hand the call back to the recompiled original, before
// anything is written, when it would reach guest code that can block.
void CMenuManager_ToggleOption(Runtime &, Context &ctx) {
    CMenuManager &menu = Menu(ctx);
    if (menu.ToggleNeedsOriginal()) return decline();
    menu.ToggleOption(ctx);
}
void CMenuManager_ProcessUserInput(Runtime &, Context &ctx) {
    CMenuManager &menu = Menu(ctx);
    if (menu.InputNeedsOriginal()) return decline();
    ctx.gpr[2] = static_cast<uint32>(menu.ProcessUserInput(ctx));
}

}  // namespace lcs::decomp::thunk
