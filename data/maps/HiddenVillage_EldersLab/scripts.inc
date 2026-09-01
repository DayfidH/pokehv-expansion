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
# 32 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	special SpawnCameraObject
# 33 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, HiddenVillage_EldersLab_Movement_CameraMovementOne
# 34 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	waitmovement 0
# 36 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, HiddenVillage_EldersLab_Movement_CameraPansToPlayer
# 37 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	applymovement 1, HiddenVillage_EldersLab_Movement_ElderWalksToPlayer
# 38 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	waitmovement 0
# 40 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	special RemoveCameraObject
# 42 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	msgbox HiddenVillage_EldersLab_EventScript_IntroCutscene_Text_1
# 43 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	closemessage
# 45 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, HiddenVillage_EldersLab_Movement_PlayerMovesRight
# 46 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	waitmovement 0
# 48 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	applymovement 1, HiddenVillage_EldersLab_Movement_ElderExitsLab
# 49 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	waitmovement 0
# 50 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	applymovement 1, HiddenVillage_EldersLab_Movement_ElderExitsLab
# 51 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	playse SE_EXIT
# 52 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	removeobject 1
# 53 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	setflag FLAG_TEMP_1
# 55 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	setvar VAR_HIDDEN_VILLAGE_STATE, 1
# 57 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	releaseall
	end


HiddenVillage_EldersLab_EventScript_Elder::
# 65 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	lock
# 66 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	faceplayer
# 68 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	switch VAR_HIDDEN_VILLAGE_STATE
# 69 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	case 2, HiddenVillage_EldersLab_EventScript_Elder_3
# 71 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	case 3, HiddenVillage_EldersLab_EventScript_Elder_4
# 74 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	msgbox HiddenVillage_EldersLab_EventScript_Elder_Text_1
HiddenVillage_EldersLab_EventScript_Elder_1:
# 77 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	closemessage
# 78 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	release
	end

HiddenVillage_EldersLab_EventScript_Elder_3:
# 70 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	msgbox HiddenVillage_EldersLab_EventScript_Elder_Text_0
	goto HiddenVillage_EldersLab_EventScript_Elder_1

HiddenVillage_EldersLab_EventScript_Elder_4:
# 72 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	msgbox HiddenVillage_EldersLab_EventScript_Elder_Text_1
	goto HiddenVillage_EldersLab_EventScript_Elder_1


# 85 "data/maps/HiddenVillage_EldersLab/scripts.pory"
HiddenVillage_EldersLab_Movement_CameraMovementOne:
# 86 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	walk_up
# 86 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	walk_up
# 86 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	walk_up
# 87 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	walk_left
# 87 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	walk_left
# 87 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	walk_left
# 87 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	walk_left
# 88 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	walk_up
# 88 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	walk_up
	step_end

# 91 "data/maps/HiddenVillage_EldersLab/scripts.pory"
HiddenVillage_EldersLab_Movement_CameraPansToPlayer:
# 92 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	walk_down
# 92 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	walk_down
# 93 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	walk_right
# 93 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	walk_right
# 93 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	walk_right
# 93 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	walk_right
# 94 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	walk_down
# 94 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	walk_down
# 94 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	walk_down
	step_end

# 97 "data/maps/HiddenVillage_EldersLab/scripts.pory"
HiddenVillage_EldersLab_Movement_ElderWalksToPlayer:
# 98 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	walk_down
# 98 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	walk_down
# 99 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	walk_right
# 99 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	walk_right
# 99 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	walk_right
# 99 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	walk_right
# 100 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	walk_down
# 100 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	walk_down
# 100 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	walk_down
	step_end

# 103 "data/maps/HiddenVillage_EldersLab/scripts.pory"
HiddenVillage_EldersLab_Movement_PlayerMovesRight:
# 104 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	walk_right
# 105 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	face_left
	step_end

# 108 "data/maps/HiddenVillage_EldersLab/scripts.pory"
HiddenVillage_EldersLab_Movement_ElderExitsLab:
# 109 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	walk_down
	step_end

HiddenVillage_EldersLab_EventScript_IntroCutscene_Text_0:
# 29 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	.string "Ah! {PLAYER}!$"

HiddenVillage_EldersLab_EventScript_IntroCutscene_Text_1:
# 42 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	.string "You're finally here, everybody is\n"
	.string "already in the backyard waiting for us.\l"
	.string "Let's head out.$"

HiddenVillage_EldersLab_EventScript_Elder_Text_0:
# 70 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	.string "Ah, {PLAYER}. The meeting in the\n"
	.string "backyard went well. We have much to\l"
	.string "discuss.$"

HiddenVillage_EldersLab_EventScript_Elder_Text_1:
# 72 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	.string "The village is relying on you. Have you\n"
	.string "checked the garden yet?$"
