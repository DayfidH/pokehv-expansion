HiddenVillage_EldersLab_MapScripts::
# 7 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, HiddenVillage_EldersLab_OnTransition
# 8 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, HiddenVillage_EldersLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

HiddenVillage_EldersLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 9 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	map_script_2 VAR_HIDDEN_VILLAGE_STATE, 0, HiddenVillage_EldersLab_EventScript_IntroCutscene
	.2byte 0


HiddenVillage_EldersLab_OnTransition::
# 19 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	switch VAR_HIDDEN_VILLAGE_STATE
# 20 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	case 1, HiddenVillage_EldersLab_OnTransition_2
# 21 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	case 4, HiddenVillage_EldersLab_OnTransition_3
	return

HiddenVillage_EldersLab_OnTransition_2:
# 20 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	setflag FLAG_TEMP_1
	return

HiddenVillage_EldersLab_OnTransition_3:
# 21 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	setflag FLAG_TEMP_1
	return


HiddenVillage_EldersLab_EventScript_IntroCutscene::
# 29 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	lockall
# 30 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	msgbox HiddenVillage_EldersLab_EventScript_IntroCutscene_Text_0
# 31 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	closemessage
# 32 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	applymovement 1, Common_Movement_FaceDown
# 35 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	special SpawnCameraObject
# 36 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, HiddenVillage_EldersLab_Movement_CameraMovementOne
# 37 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	waitmovement 0
# 40 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, HiddenVillage_EldersLab_Movement_CameraPansToPlayer
# 41 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	applymovement 1, HiddenVillage_EldersLab_Movement_ElderWalksToPlayer
# 42 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	waitmovement 0
# 45 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	special RemoveCameraObject
# 47 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	msgbox HiddenVillage_EldersLab_EventScript_IntroCutscene_Text_1
# 48 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	closemessage
# 51 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, HiddenVillage_EldersLab_Movement_PlayerMovesRight
# 52 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	waitmovement 0
# 55 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	applymovement 1, HiddenVillage_EldersLab_Movement_ElderExitsLab
# 56 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	waitmovement 0
# 57 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	applymovement 1, HiddenVillage_EldersLab_Movement_ElderExitsLab
# 58 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	playse SE_EXIT
# 59 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	removeobject 1
# 60 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	setflag FLAG_TEMP_1
# 62 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	setvar VAR_HIDDEN_VILLAGE_STATE, 1
# 64 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	releaseall
	end


HiddenVillage_EldersLab_EventScript_Elder::
# 72 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	lock
# 73 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	faceplayer
# 75 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	switch VAR_HIDDEN_VILLAGE_STATE
# 76 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	case 2, HiddenVillage_EldersLab_EventScript_Elder_3
# 78 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	case 3, HiddenVillage_EldersLab_EventScript_Elder_4
# 81 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_HIDDEN_VILLAGE_STATE
# 82 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	msgbox HiddenVillage_EldersLab_EventScript_Elder_Text_2
HiddenVillage_EldersLab_EventScript_Elder_1:
# 85 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	closemessage
# 86 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	release
	end

HiddenVillage_EldersLab_EventScript_Elder_3:
# 77 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	msgbox HiddenVillage_EldersLab_EventScript_Elder_Text_0
	goto HiddenVillage_EldersLab_EventScript_Elder_1

HiddenVillage_EldersLab_EventScript_Elder_4:
# 79 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	msgbox HiddenVillage_EldersLab_EventScript_Elder_Text_1
	goto HiddenVillage_EldersLab_EventScript_Elder_1


# 93 "data/maps/HiddenVillage_EldersLab/scripts.pory"
HiddenVillage_EldersLab_Movement_CameraMovementOne:
# 94 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	walk_up
# 94 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	walk_up
# 94 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	walk_up
# 95 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	walk_left
# 95 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	walk_left
# 95 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	walk_left
# 95 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	walk_left
# 96 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	walk_up
# 96 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	walk_up
	step_end

# 99 "data/maps/HiddenVillage_EldersLab/scripts.pory"
HiddenVillage_EldersLab_Movement_CameraPansToPlayer:
# 100 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	walk_down
# 100 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	walk_down
# 101 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	walk_right
# 101 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	walk_right
# 101 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	walk_right
# 101 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	walk_right
# 102 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	walk_down
# 102 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	walk_down
# 102 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	walk_down
	step_end

# 105 "data/maps/HiddenVillage_EldersLab/scripts.pory"
HiddenVillage_EldersLab_Movement_ElderWalksToPlayer:
# 106 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	walk_down
# 106 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	walk_down
# 107 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	walk_right
# 107 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	walk_right
# 107 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	walk_right
# 107 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	walk_right
# 108 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	walk_down
# 108 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	walk_down
# 108 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	walk_down
	step_end

# 111 "data/maps/HiddenVillage_EldersLab/scripts.pory"
HiddenVillage_EldersLab_Movement_PlayerMovesRight:
# 112 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	walk_right
# 113 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	face_left
	step_end

# 116 "data/maps/HiddenVillage_EldersLab/scripts.pory"
HiddenVillage_EldersLab_Movement_ElderExitsLab:
# 117 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	walk_down
	step_end

HiddenVillage_EldersLab_EventScript_IntroCutscene_Text_0:
# 30 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	.string "Ah! {PLAYER}!$"

HiddenVillage_EldersLab_EventScript_IntroCutscene_Text_1:
# 47 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	.string "You're finally here, everybody is\n"
	.string "already in the backyard waiting for us.\l"
	.string "Let's head out.$"

HiddenVillage_EldersLab_EventScript_Elder_Text_0:
# 77 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	.string "Ah, {PLAYER}. The meeting in the\n"
	.string "backyard went well. We have much to\l"
	.string "discuss.$"

HiddenVillage_EldersLab_EventScript_Elder_Text_1:
# 79 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	.string "The village is relying on you. Have you\n"
	.string "checked the garden yet?$"

HiddenVillage_EldersLab_EventScript_Elder_Text_2:
# 82 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	.string "DEBUG_MISSING TEXT\n"
	.string "State ({STR_VAR_1})$"
