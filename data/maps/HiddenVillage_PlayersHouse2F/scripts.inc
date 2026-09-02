HiddenVillage_PlayersHouse2F_MapScripts::
	.byte 0


HiddenVillage_EventScript_PlayersBedMasterTrigger::
# 4 "data/maps/HiddenVillage_PlayersHouse2F/scripts.pory"
	lockall
# 6 "data/maps/HiddenVillage_PlayersHouse2F/scripts.pory"
	switch VAR_HIDDEN_VILLAGE_STATE
# 7 "data/maps/HiddenVillage_PlayersHouse2F/scripts.pory"
	case 4, HiddenVillage_EventScript_PlayersBedMasterTrigger_3
# 29 "data/maps/HiddenVillage_PlayersHouse2F/scripts.pory"
	msgbox HiddenVillage_EventScript_PlayersBedMasterTrigger_Text_2
# 30 "data/maps/HiddenVillage_PlayersHouse2F/scripts.pory"
	closemessage
# 31 "data/maps/HiddenVillage_PlayersHouse2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, HiddenVillage_PlayersHouse2F_Movement_ExitBed
HiddenVillage_EventScript_PlayersBedMasterTrigger_1:
# 34 "data/maps/HiddenVillage_PlayersHouse2F/scripts.pory"
	releaseall
	end

HiddenVillage_EventScript_PlayersBedMasterTrigger_3:
# 8 "data/maps/HiddenVillage_PlayersHouse2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 9 "data/maps/HiddenVillage_PlayersHouse2F/scripts.pory"
	msgbox HiddenVillage_EventScript_PlayersBedMasterTrigger_Text_0
# 10 "data/maps/HiddenVillage_PlayersHouse2F/scripts.pory"
	closemessage
# 11 "data/maps/HiddenVillage_PlayersHouse2F/scripts.pory"
	fadescreen 1
# 12 "data/maps/HiddenVillage_PlayersHouse2F/scripts.pory"
	delay 30
# 13 "data/maps/HiddenVillage_PlayersHouse2F/scripts.pory"
	fadescreen 0
# 14 "data/maps/HiddenVillage_PlayersHouse2F/scripts.pory"
	delay 30
# 15 "data/maps/HiddenVillage_PlayersHouse2F/scripts.pory"
	fadescreen 1
# 16 "data/maps/HiddenVillage_PlayersHouse2F/scripts.pory"
	delay 45
# 17 "data/maps/HiddenVillage_PlayersHouse2F/scripts.pory"
	fadescreen 0
# 18 "data/maps/HiddenVillage_PlayersHouse2F/scripts.pory"
	delay 30
# 19 "data/maps/HiddenVillage_PlayersHouse2F/scripts.pory"
	fadescreen 1
# 20 "data/maps/HiddenVillage_PlayersHouse2F/scripts.pory"
	fadeoutbgm 1
# 21 "data/maps/HiddenVillage_PlayersHouse2F/scripts.pory"
	delay 180
# 22 "data/maps/HiddenVillage_PlayersHouse2F/scripts.pory"
	msgbox HiddenVillage_EventScript_PlayersBedMasterTrigger_Text_1
# 23 "data/maps/HiddenVillage_PlayersHouse2F/scripts.pory"
	closemessage
# 24 "data/maps/HiddenVillage_PlayersHouse2F/scripts.pory"
	fadescreen 0
# 25 "data/maps/HiddenVillage_PlayersHouse2F/scripts.pory"
	fadedefaultbgm
# 26 "data/maps/HiddenVillage_PlayersHouse2F/scripts.pory"
	setvar VAR_HIDDEN_VILLAGE_STATE, 5
	goto HiddenVillage_EventScript_PlayersBedMasterTrigger_1


# 38 "data/maps/HiddenVillage_PlayersHouse2F/scripts.pory"
HiddenVillage_PlayersHouse2F_Movement_ExitBed:
# 39 "data/maps/HiddenVillage_PlayersHouse2F/scripts.pory"
	walk_right
	step_end

HiddenVillage_EventScript_PlayersBedMasterTrigger_Text_0:
# 9 "data/maps/HiddenVillage_PlayersHouse2F/scripts.pory"
	.string "You laid down, and started drifting off\n"
	.string "to sleep...$"

HiddenVillage_EventScript_PlayersBedMasterTrigger_Text_1:
# 22 "data/maps/HiddenVillage_PlayersHouse2F/scripts.pory"
	.string "--DREAM SEQUENCE 2--$"

HiddenVillage_EventScript_PlayersBedMasterTrigger_Text_2:
# 29 "data/maps/HiddenVillage_PlayersHouse2F/scripts.pory"
	.string "It's still too early to go to bed...$"
