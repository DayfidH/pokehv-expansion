# Global Overworld Sprite Deduplication

I have scanned the entire `graphics/object_events/pics` directory and found 46 sets of exact 1:1 pixel duplicates. Many of the newly added `_hns` sprites are actually perfect copies of existing base Emerald sprites (or even match other existing graphics).

## Proposed Mapping

Here is the mapping of which file will be **KEPT** and which duplicate file(s) will be **REMOVED** and aliased:

| Kept (Target) | Removed (Duplicate) |
|---|---|
| `berry_trees/nomel_hns.png` | `berry_trees/spelon_hns.png` |
| `misc/birth_island_stone.png` | `misc/birth_island_stone_hns.png` |
| `misc/mart_light.png` | `misc/mart_light_hns.png` |
| `misc/poke_center_light.png` | `misc/poke_center_light_hns.png` |
| `misc/ss_tidal.png` | `misc/ss_aqua_hns.png` |
| `people/balding_man.png` | `people/balding_man_hns.png` |
| `people/battle_girl.png` | `people/crush_girl.png` |
| `people/battle_girl.png` | `people/battle_girl_hns.png` |
| `people/biker.png` | `people/biker_hns.png` |
| `people/bill.png` | `people/special/bill_hns.png` |
| `people/blackbelt.png` | `people/black_belt_hns.png` |
| `people/boy.png` | `people/boy_2_hns.png` |
| `people/brendan/underwater.png` | `people/gold/underwater_hns.png` |
| `people/brendan/watering.png` | `people/gold/watering_hns.png` |
| `people/bruno.png` | `people/elite_four/bruno_hns.png` |
| `people/cable_club_receptionist.png` | `people/attendant_f_hns.png` |
| `people/channeler.png` | `people/channeler_hns.png` |
| `people/chef.png` | `people/cook_hns.png` |
| `people/clerk.png` | `people/mart_employee_hns.png` |
| `people/cooltrainer_f.png` | `people/cooltrainer_f_hns.png` |
| `people/cooltrainer_m.png` | `people/cooltrainer_m_hns.png` |
| `people/daisy.png` | `people/girl_1_hns.png` |
| `people/fisher.png` | `people/fisherman_hns.png` |
| `people/frontier_brains/greta.png` | `people/frontier_brains/greta_hns.png` |
| `people/frontier_brains/lucy.png` | `people/frontier_brains/lucy_hns.png` |
| `people/frontier_brains/spenser.png` | `people/frontier_brains/spenser_hns.png` |
| `people/gba_kid.png` | `people/gameboy_kid_hns.png` |
| `people/gym_guy.png` | `people/gym_guy_hns.png` |
| `people/koga.png` | `people/elite_four/koga_hns.png` |
| `people/may/underwater.png` | `people/kris/underwater_hns.png` |
| `people/may/watering.png` | `people/kris/watering_hns.png` |
| `people/mg_deliveryman.png` | `people/mystery_event_deliveryman_hns.png` |
| `people/old_man_1.png` | `people/old_man_hns.png` |
| `people/old_man_2.png` | `people/old_man_2_hns.png` |
| `people/prof_oak.png` | `people/special/prof_oak_hns.png` |
| `people/red/red_normal.png` | `people/special/red_normal_hns.png` |
| `people/rocker.png` | `people/rocker_hns.png` |
| `people/rocket_m.png` | `people/rockets/rocket_m_hns.png` |
| `people/scientist.png` | `people/scientist_m_hns.png` |
| `people/scott.png` | `people/scott_hns.png` |
| `people/super_nerd.png` | `people/super_nerd_hns.png` |
| `people/swimmer_f_water.png` | `people/swimmer_f_hns.png` |
| `people/swimmer_m_water.png` | `people/swimmer_m_hns.png` |
| `people/trainer_tower_dude.png` | `people/battle_tower_trainer_dude_hns.png` |
| `people/tuber_m_water.png` | `people/tuber_m_swimming_hns.png` |
| `people/worker_f.png` | `people/worker_f_hns.png` |
| `pokemon/surfable/0139_omastar_shiny.png` | `pokemon/surfable/0139_omastar.png` |

## Implementation Details

For every duplicate file listed above, I will perform the exact same deduplication process as we did for the FRLG sprites:
1. **Delete Assets**: Delete the duplicate `.png` and `.4bpp` files.
2. **Clean C Code**: Remove their `INCGFX` definitions, pic tables, graphics info structs, and pointer array entries.
3. **Apply Aliases**: Remove the duplicate's `OBJ_EVENT_GFX_*` constant from the enum and append a `#define` alias mapping it to the kept target's constant (e.g., `#define OBJ_EVENT_GFX_COOK_HNS OBJ_EVENT_GFX_CHEF`).

> [!WARNING]
> Notice that some player character frames (like `gold/underwater_hns.png` and `kris/watering_hns.png`) are exact duplicates of Brendan/May. Deduplicating these means Gold/Kris will share the same underlying memory structures as Brendan/May for those actions. If you plan to replace these with custom Gold/Kris sprites in the future, you will have to undo the alias and re-add them. 

## Open Questions

- Please review the mapping table above. Do you want me to proceed with deduplicating **ALL** of these, or should I exclude any specific ones (like the player character animations)?
