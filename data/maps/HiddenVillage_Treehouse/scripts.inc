HiddenVillage_Treehouse_MapScripts::
# 3 "data/maps/HiddenVillage_Treehouse/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, HiddenVillage_Treehouse_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

HiddenVillage_Treehouse_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 4 "data/maps/HiddenVillage_Treehouse/scripts.pory"
	map_script_2 VAR_HIDDEN_VILLAGE_STATE, 3, HiddenVillage_Treehouse_EventScript_Cutscene
	.2byte 0


HiddenVillage_Treehouse_EventScript_Cutscene::
# 10 "data/maps/HiddenVillage_Treehouse/scripts.pory"
	lockall
# 12 "data/maps/HiddenVillage_Treehouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_PlayerMovesToChair
# 13 "data/maps/HiddenVillage_Treehouse/scripts.pory"
	waitmovement 0
# 17 "data/maps/HiddenVillage_Treehouse/scripts.pory"
	msgbox HiddenVillage_Treehouse_EventScript_Cutscene_Text_0
# 18 "data/maps/HiddenVillage_Treehouse/scripts.pory"
	closemessage
# 21 "data/maps/HiddenVillage_Treehouse/scripts.pory"
	setvar VAR_HIDDEN_VILLAGE_STATE, 4
# 24 "data/maps/HiddenVillage_Treehouse/scripts.pory"
	applymovement LOCALID_STRENGTH, Movement_StrengthLeaves
# 25 "data/maps/HiddenVillage_Treehouse/scripts.pory"
	applymovement LOCALID_HEART, Movement_HeartLeaves
# 26 "data/maps/HiddenVillage_Treehouse/scripts.pory"
	applymovement LOCALID_BRAIN, Movement_BrainLeaves
# 29 "data/maps/HiddenVillage_Treehouse/scripts.pory"
	waitmovement LOCALID_STRENGTH
# 30 "data/maps/HiddenVillage_Treehouse/scripts.pory"
	playse SE_EXIT
# 31 "data/maps/HiddenVillage_Treehouse/scripts.pory"
	removeobject LOCALID_STRENGTH
# 34 "data/maps/HiddenVillage_Treehouse/scripts.pory"
	waitmovement LOCALID_HEART
# 35 "data/maps/HiddenVillage_Treehouse/scripts.pory"
	playse SE_EXIT
# 36 "data/maps/HiddenVillage_Treehouse/scripts.pory"
	removeobject LOCALID_HEART
# 39 "data/maps/HiddenVillage_Treehouse/scripts.pory"
	waitmovement LOCALID_BRAIN
# 40 "data/maps/HiddenVillage_Treehouse/scripts.pory"
	playse SE_EXIT
# 41 "data/maps/HiddenVillage_Treehouse/scripts.pory"
	removeobject LOCALID_BRAIN
# 44 "data/maps/HiddenVillage_Treehouse/scripts.pory"
	setflag FLAG_HIDE_TREEHOUSE_NPCS
# 46 "data/maps/HiddenVillage_Treehouse/scripts.pory"
	releaseall
	end


HiddenVillage_Treehouse_EventScript_DefaultText::
# 51 "data/maps/HiddenVillage_Treehouse/scripts.pory"
	lock
# 52 "data/maps/HiddenVillage_Treehouse/scripts.pory"
	faceplayer
# 53 "data/maps/HiddenVillage_Treehouse/scripts.pory"
	msgbox HiddenVillage_Treehouse_EventScript_DefaultText_Text_0
# 54 "data/maps/HiddenVillage_Treehouse/scripts.pory"
	release
	end


# 58 "data/maps/HiddenVillage_Treehouse/scripts.pory"
Movement_PlayerMovesToChair:
# 59 "data/maps/HiddenVillage_Treehouse/scripts.pory"
	walk_up
# 59 "data/maps/HiddenVillage_Treehouse/scripts.pory"
	walk_up
# 60 "data/maps/HiddenVillage_Treehouse/scripts.pory"
	walk_left
# 61 "data/maps/HiddenVillage_Treehouse/scripts.pory"
	face_up
	step_end

# 64 "data/maps/HiddenVillage_Treehouse/scripts.pory"
Movement_StrengthLeaves:
# 65 "data/maps/HiddenVillage_Treehouse/scripts.pory"
	walk_down
# 65 "data/maps/HiddenVillage_Treehouse/scripts.pory"
	walk_down
# 65 "data/maps/HiddenVillage_Treehouse/scripts.pory"
	walk_down
# 66 "data/maps/HiddenVillage_Treehouse/scripts.pory"
	walk_slow_down
	step_end

# 69 "data/maps/HiddenVillage_Treehouse/scripts.pory"
Movement_HeartLeaves:
# 70 "data/maps/HiddenVillage_Treehouse/scripts.pory"
	walk_down
# 70 "data/maps/HiddenVillage_Treehouse/scripts.pory"
	walk_down
# 71 "data/maps/HiddenVillage_Treehouse/scripts.pory"
	walk_right
# 71 "data/maps/HiddenVillage_Treehouse/scripts.pory"
	walk_right
# 71 "data/maps/HiddenVillage_Treehouse/scripts.pory"
	walk_right
# 72 "data/maps/HiddenVillage_Treehouse/scripts.pory"
	walk_slow_down
	step_end

# 75 "data/maps/HiddenVillage_Treehouse/scripts.pory"
Movement_BrainLeaves:
# 76 "data/maps/HiddenVillage_Treehouse/scripts.pory"
	delay_16
# 77 "data/maps/HiddenVillage_Treehouse/scripts.pory"
	walk_right
# 77 "data/maps/HiddenVillage_Treehouse/scripts.pory"
	walk_right
# 78 "data/maps/HiddenVillage_Treehouse/scripts.pory"
	walk_down
# 78 "data/maps/HiddenVillage_Treehouse/scripts.pory"
	walk_down
# 78 "data/maps/HiddenVillage_Treehouse/scripts.pory"
	walk_down
# 78 "data/maps/HiddenVillage_Treehouse/scripts.pory"
	walk_down
# 79 "data/maps/HiddenVillage_Treehouse/scripts.pory"
	walk_slow_down
	step_end

HiddenVillage_Treehouse_EventScript_Cutscene_Text_0:
# 17 "data/maps/HiddenVillage_Treehouse/scripts.pory"
	.string "Heart: Today was so fun! Taming\n"
	.string "Pokémon looks so easy now thanks to\l"
	.string "the Elder!\p"
	.string "Brain: It looks easy but I guarantee\n"
	.string "you it's not...\p"
	.string "...\p"
	.string "...\p"
	.string "...\p"
	.string "They chatted for hours until the rain\n"
	.string "stopped...\p"
	.string "Strength: Hey! We forgot we all had\n"
	.string "something to do! We gotta go! Cya\l"
	.string "{PLAYER}$"

HiddenVillage_Treehouse_EventScript_DefaultText_Text_0:
# 53 "data/maps/HiddenVillage_Treehouse/scripts.pory"
	.string "Hi {PLAYER}!$"
