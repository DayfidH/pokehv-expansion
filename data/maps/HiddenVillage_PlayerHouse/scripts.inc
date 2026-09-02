HiddenVillage_PlayerHouse_MapScripts::
	.byte 0


HiddenVillage_PlayerHouse_EventScript_PlayersDad::
# 6 "data/maps/HiddenVillage_PlayerHouse/scripts.pory"
	lock
# 7 "data/maps/HiddenVillage_PlayerHouse/scripts.pory"
	faceplayer
# 8 "data/maps/HiddenVillage_PlayerHouse/scripts.pory"
	switch VAR_HIDDEN_VILLAGE_STATE
# 9 "data/maps/HiddenVillage_PlayerHouse/scripts.pory"
	case 0, HiddenVillage_PlayerHouse_EventScript_PlayersDad_3
# 19 "data/maps/HiddenVillage_PlayerHouse/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_HIDDEN_VILLAGE_STATE
# 20 "data/maps/HiddenVillage_PlayerHouse/scripts.pory"
	msgbox HiddenVillage_PlayerHouse_EventScript_PlayersDad_Text_2
HiddenVillage_PlayerHouse_EventScript_PlayersDad_1:
# 22 "data/maps/HiddenVillage_PlayerHouse/scripts.pory"
	applymovement 1, Common_Movement_FaceRight
# 23 "data/maps/HiddenVillage_PlayerHouse/scripts.pory"
	release
	end

HiddenVillage_PlayerHouse_EventScript_PlayersDad_3:
# 10 "data/maps/HiddenVillage_PlayerHouse/scripts.pory"
	goto_if_unset FLAG_SYS_B_DASH, HiddenVillage_PlayerHouse_EventScript_PlayersDad_5
# 15 "data/maps/HiddenVillage_PlayerHouse/scripts.pory"
	msgbox HiddenVillage_PlayerHouse_EventScript_PlayersDad_Text_1
# 16 "data/maps/HiddenVillage_PlayerHouse/scripts.pory"
	closemessage
	goto HiddenVillage_PlayerHouse_EventScript_PlayersDad_1

HiddenVillage_PlayerHouse_EventScript_PlayersDad_5:
# 11 "data/maps/HiddenVillage_PlayerHouse/scripts.pory"
	msgbox HiddenVillage_PlayerHouse_EventScript_PlayersDad_Text_0
# 12 "data/maps/HiddenVillage_PlayerHouse/scripts.pory"
	closemessage
# 13 "data/maps/HiddenVillage_PlayerHouse/scripts.pory"
	setflag FLAG_SYS_B_DASH
	goto HiddenVillage_PlayerHouse_EventScript_PlayersDad_1


HiddenVillage_PlayerHouse_EventScript_PlayersDad_Text_0:
# 11 "data/maps/HiddenVillage_PlayerHouse/scripts.pory"
	.string "Good morning {PLAYER}! I found these\n"
	.string "running shoes tucked away in a box in\l"
	.string "my bedroom... You can have them, they're\l"
	.string "your size!$"

HiddenVillage_PlayerHouse_EventScript_PlayersDad_Text_1:
# 15 "data/maps/HiddenVillage_PlayerHouse/scripts.pory"
	.string "You better be off or you'll be late...\n"
	.string "Good thing I gave you those running\l"
	.string "shoes!$"

HiddenVillage_PlayerHouse_EventScript_PlayersDad_Text_2:
# 20 "data/maps/HiddenVillage_PlayerHouse/scripts.pory"
	.string "DEBUG_MISSING TEXT\n"
	.string "State ({STR_VAR_1})$"
