HiddenFarms_MapScripts::
# 2 "data/maps/HiddenFarms/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, HiddenFarms_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
	.byte 0

HiddenFarms_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 3 "data/maps/HiddenFarms/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, HiddenFarms_EventScript_FaceLeft
	.2byte 0


HiddenFarms_EventScript_FaceLeft::
# 8 "data/maps/HiddenFarms/scripts.pory"
	getplayerxy VAR_TEMP_2, VAR_TEMP_3
# 12 "data/maps/HiddenFarms/scripts.pory"
	compare VAR_TEMP_2, 27
	goto_if_eq HiddenFarms_EventScript_FaceLeft_2
	return

HiddenFarms_EventScript_FaceLeft_1:
# 13 "data/maps/HiddenFarms/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_WEST
	return

HiddenFarms_EventScript_FaceLeft_2:
# 12 "data/maps/HiddenFarms/scripts.pory"
	compare VAR_TEMP_3, 14
	goto_if_eq HiddenFarms_EventScript_FaceLeft_1
# 12 "data/maps/HiddenFarms/scripts.pory"
	compare VAR_TEMP_3, 15
	goto_if_eq HiddenFarms_EventScript_FaceLeft_1
	return


HiddenFarms_EventScript_WarpToVillageTop::
# 19 "data/maps/HiddenFarms/scripts.pory"
	warp MAP_HIDDEN_VILLAGE, 0, 14
# 20 "data/maps/HiddenFarms/scripts.pory"
	waitstate
	end


HiddenFarms_EventScript_WarpToVillageBottom::
# 25 "data/maps/HiddenFarms/scripts.pory"
	warp MAP_HIDDEN_VILLAGE, 0, 15
# 26 "data/maps/HiddenFarms/scripts.pory"
	waitstate
	end

