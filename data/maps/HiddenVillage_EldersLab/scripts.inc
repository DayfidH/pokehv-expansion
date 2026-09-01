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
	compare VAR_HIDDEN_VILLAGE_STATE, 1
	goto_if_eq HiddenVillage_EldersLab_OnTransition_1
	return

HiddenVillage_EldersLab_OnTransition_1:
# 20 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	setflag FLAG_TEMP_1
	return


HiddenVillage_EldersLab_EventScript_IntroCutscene::
# 28 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	lockall
# 29 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	msgbox HiddenVillage_EldersLab_EventScript_IntroCutscene_Text_0
# 30 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	closemessage
# 31 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	applymovement 1, Common_Movement_FaceDown
# 34 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	special SpawnCameraObject
# 35 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, HiddenVillage_EldersLab_Movement_CameraMovementOne
# 36 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	waitmovement 0
# 39 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, HiddenVillage_EldersLab_Movement_CameraPansToPlayer
# 40 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	applymovement 1, HiddenVillage_EldersLab_Movement_ElderWalksToPlayer
# 41 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	waitmovement 0
# 44 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	special RemoveCameraObject
# 46 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	msgbox HiddenVillage_EldersLab_EventScript_IntroCutscene_Text_1
# 47 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	closemessage
# 50 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, HiddenVillage_EldersLab_Movement_PlayerMovesRight
# 51 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	waitmovement 0
# 54 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	applymovement 1, HiddenVillage_EldersLab_Movement_ElderExitsLab
# 55 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	waitmovement 0
# 56 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	applymovement 1, HiddenVillage_EldersLab_Movement_ElderExitsLab
# 57 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	playse SE_EXIT
# 58 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	removeobject 1
# 59 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	setflag FLAG_TEMP_1
# 61 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	setvar VAR_HIDDEN_VILLAGE_STATE, 1
# 63 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	releaseall
	end


HiddenVillage_EldersLab_EventScript_Elder::
# 71 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	lock
# 72 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	faceplayer
# 74 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	switch VAR_HIDDEN_VILLAGE_STATE
# 75 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	case 2, HiddenVillage_EldersLab_EventScript_Elder_3
# 77 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	case 3, HiddenVillage_EldersLab_EventScript_Elder_4
# 80 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_HIDDEN_VILLAGE_STATE
# 81 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	msgbox HiddenVillage_EldersLab_EventScript_Elder_Text_2
HiddenVillage_EldersLab_EventScript_Elder_1:
# 84 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	closemessage
# 85 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	release
	end

HiddenVillage_EldersLab_EventScript_Elder_3:
# 76 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	msgbox HiddenVillage_EldersLab_EventScript_Elder_Text_0
	goto HiddenVillage_EldersLab_EventScript_Elder_1

HiddenVillage_EldersLab_EventScript_Elder_4:
# 78 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	msgbox HiddenVillage_EldersLab_EventScript_Elder_Text_1
	goto HiddenVillage_EldersLab_EventScript_Elder_1


# 92 "data/maps/HiddenVillage_EldersLab/scripts.pory"
HiddenVillage_EldersLab_Movement_CameraMovementOne:
# 93 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	walk_up
# 93 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	walk_up
# 93 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	walk_up
# 94 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	walk_left
# 94 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	walk_left
# 94 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	walk_left
# 94 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	walk_left
# 95 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	walk_up
# 95 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	walk_up
	step_end

# 98 "data/maps/HiddenVillage_EldersLab/scripts.pory"
HiddenVillage_EldersLab_Movement_CameraPansToPlayer:
# 99 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	walk_down
# 99 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	walk_down
# 100 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	walk_right
# 100 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	walk_right
# 100 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	walk_right
# 100 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	walk_right
# 101 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	walk_down
# 101 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	walk_down
# 101 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	walk_down
	step_end

# 104 "data/maps/HiddenVillage_EldersLab/scripts.pory"
HiddenVillage_EldersLab_Movement_ElderWalksToPlayer:
# 105 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	walk_down
# 105 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	walk_down
# 106 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	walk_right
# 106 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	walk_right
# 106 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	walk_right
# 106 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	walk_right
# 107 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	walk_down
# 107 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	walk_down
# 107 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	walk_down
	step_end

# 110 "data/maps/HiddenVillage_EldersLab/scripts.pory"
HiddenVillage_EldersLab_Movement_PlayerMovesRight:
# 111 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	walk_right
# 112 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	face_left
	step_end

# 115 "data/maps/HiddenVillage_EldersLab/scripts.pory"
HiddenVillage_EldersLab_Movement_ElderExitsLab:
# 116 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	walk_down
	step_end

HiddenVillage_EldersLab_EventScript_IntroCutscene_Text_0:
# 29 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	.string "Ah! {PLAYER}!$"

HiddenVillage_EldersLab_EventScript_IntroCutscene_Text_1:
# 46 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	.string "You're finally here, everybody is\n"
	.string "already in the backyard waiting for us.\l"
	.string "Let's head out.$"

HiddenVillage_EldersLab_EventScript_Elder_Text_0:
# 76 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	.string "Ah, {PLAYER}. The meeting in the\n"
	.string "backyard went well. We have much to\l"
	.string "discuss.$"

HiddenVillage_EldersLab_EventScript_Elder_Text_1:
# 78 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	.string "The village is relying on you. Have you\n"
	.string "checked the garden yet?$"

HiddenVillage_EldersLab_EventScript_Elder_Text_2:
# 81 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	.string "DEBUG_MISSING TEXT\n"
	.string "State ({STR_VAR_1})$"
