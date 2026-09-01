HiddenVillage_PlayerHouse_MapScripts::
	.byte 0


HiddenVillage_PlayerHouse_EventScript_PlayersDad::
# 5 "data/maps/HiddenVillage_PlayerHouse/scripts.pory"
	switch VAR_HIDDEN_VILLAGE_STATE
# 6 "data/maps/HiddenVillage_PlayerHouse/scripts.pory"
	case 0, HiddenVillage_PlayerHouse_EventScript_PlayersDad_2
# 16 "data/maps/HiddenVillage_PlayerHouse/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_HIDDEN_VILLAGE_STATE
# 17 "data/maps/HiddenVillage_PlayerHouse/scripts.pory"
	msgbox HiddenVillage_PlayerHouse_EventScript_PlayersDad_Text_2
	return

HiddenVillage_PlayerHouse_EventScript_PlayersDad_2:
# 7 "data/maps/HiddenVillage_PlayerHouse/scripts.pory"
	goto_if_unset FLAG_RECEIVED_RUNNING_SHOES, HiddenVillage_PlayerHouse_EventScript_PlayersDad_4
# 12 "data/maps/HiddenVillage_PlayerHouse/scripts.pory"
	msgbox HiddenVillage_PlayerHouse_EventScript_PlayersDad_Text_1
# 13 "data/maps/HiddenVillage_PlayerHouse/scripts.pory"
	closemessage
	return

HiddenVillage_PlayerHouse_EventScript_PlayersDad_4:
# 8 "data/maps/HiddenVillage_PlayerHouse/scripts.pory"
	msgbox HiddenVillage_PlayerHouse_EventScript_PlayersDad_Text_0
# 9 "data/maps/HiddenVillage_PlayerHouse/scripts.pory"
	closemessage
# 10 "data/maps/HiddenVillage_PlayerHouse/scripts.pory"
	setflag FLAG_RECEIVED_RUNNING_SHOES
	return


HiddenVillage_PlayerHouse_EventScript_PlayersDad_Text_0:
# 8 "data/maps/HiddenVillage_PlayerHouse/scripts.pory"
	.string "Good morning {PLAYER}! I found these\n"
	.string "running shoes tucked away in a box in\l"
	.string "my bedroom... You can have them, they're\l"
	.string "your size!$"

HiddenVillage_PlayerHouse_EventScript_PlayersDad_Text_1:
# 12 "data/maps/HiddenVillage_PlayerHouse/scripts.pory"
	.string "You better be off or you'll be late...\n"
	.string "Good thing I gave you those running\l"
	.string "shoes!$"

HiddenVillage_PlayerHouse_EventScript_PlayersDad_Text_2:
# 17 "data/maps/HiddenVillage_PlayerHouse/scripts.pory"
	.string "DEBUG_MISSING TEXT\n"
	.string "State ({STR_VAR_1})$"
