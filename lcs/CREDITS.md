# Credits

Projects this one learned from. Unless a section says code is included (with its license, also listed in
`THIRD_PARTY.md`), only ideas are taken: everything else here is written new for this game.

# Other

`lcs/generated/generated_unit_0083.cpp`, at the start of the chunk loader `L_089514F8`, stops a crash of this project's own:
the world's list of loaded chunks holds 32, and at a view distance of 2 or more the game can queue more than that between
sector swaps.
