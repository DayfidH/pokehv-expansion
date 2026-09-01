HiddenVillage_MapScripts::
# 14 "data/maps/HiddenVillage/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, HiddenVillage_OnTransition
# 15 "data/maps/HiddenVillage/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, HiddenVillage_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

HiddenVillage_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 16 "data/maps/HiddenVillage/scripts.pory"
	map_script_2 VAR_TEMP_0, 0, HiddenVillage_EventScript_FriendHeart_Intro
	.2byte 0


HiddenVillage_OnTransition::
# 25 "data/maps/HiddenVillage/scripts.pory"
	goto_if_set FLAG_HIDDEN_VILLAGE_HEART_INTRO_COMPLETE, HiddenVillage_OnTransition_2
HiddenVillage_OnTransition_1:
# 30 "data/maps/HiddenVillage/scripts.pory"
	switch VAR_HIDDEN_VILLAGE_STATE
# 32 "data/maps/HiddenVillage/scripts.pory"
	case 0, HiddenVillage_OnTransition_6
# 36 "data/maps/HiddenVillage/scripts.pory"
	case 1, HiddenVillage_OnTransition_7
# 42 "data/maps/HiddenVillage/scripts.pory"
	case 2, HiddenVillage_OnTransition_8
# 57 "data/maps/HiddenVillage/scripts.pory"
	case 3, HiddenVillage_OnTransition_9
# 65 "data/maps/HiddenVillage/scripts.pory"
	case 4, HiddenVillage_OnTransition_10
HiddenVillage_OnTransition_4:
	end

HiddenVillage_OnTransition_2:
# 26 "data/maps/HiddenVillage/scripts.pory"
	setvar VAR_TEMP_0, 1
	goto HiddenVillage_OnTransition_1

HiddenVillage_OnTransition_6:
# 33 "data/maps/HiddenVillage/scripts.pory"
	setflag FLAG_TEMP_12
# 34 "data/maps/HiddenVillage/scripts.pory"
	setflag FLAG_TEMP_13
	goto HiddenVillage_OnTransition_4

HiddenVillage_OnTransition_7:
# 37 "data/maps/HiddenVillage/scripts.pory"
	setobjectxyperm 1, 14, 14
# 38 "data/maps/HiddenVillage/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_LOOK_AROUND
# 39 "data/maps/HiddenVillage/scripts.pory"
	setflag FLAG_TEMP_12
# 40 "data/maps/HiddenVillage/scripts.pory"
	setflag FLAG_TEMP_13
	goto HiddenVillage_OnTransition_4

HiddenVillage_OnTransition_8:
# 43 "data/maps/HiddenVillage/scripts.pory"
	setobjectxyperm 1, 17, 5
# 44 "data/maps/HiddenVillage/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_DOWN
# 47 "data/maps/HiddenVillage/scripts.pory"
	setflag FLAG_TEMP_11
# 50 "data/maps/HiddenVillage/scripts.pory"
	setflag FLAG_TEMP_12
# 53 "data/maps/HiddenVillage/scripts.pory"
	setobjectxyperm 7, 11, 11
# 54 "data/maps/HiddenVillage/scripts.pory"
	setobjectmovementtype 7, MOVEMENT_TYPE_FACE_LEFT
	goto HiddenVillage_OnTransition_4

HiddenVillage_OnTransition_9:
# 58 "data/maps/HiddenVillage/scripts.pory"
	setflag FLAG_TEMP_11
# 59 "data/maps/HiddenVillage/scripts.pory"
	setflag FLAG_TEMP_12
# 63 "data/maps/HiddenVillage/scripts.pory"
	setflag FLAG_TEMP_13
	goto HiddenVillage_OnTransition_4

HiddenVillage_OnTransition_10:
# 66 "data/maps/HiddenVillage/scripts.pory"
	setflag FLAG_TEMP_11
# 67 "data/maps/HiddenVillage/scripts.pory"
	setflag FLAG_TEMP_12
# 68 "data/maps/HiddenVillage/scripts.pory"
	setflag FLAG_TEMP_13
	goto HiddenVillage_OnTransition_4


HiddenVillage_EventScript_FriendHeart_Intro::
# 77 "data/maps/HiddenVillage/scripts.pory"
	lockall
# 79 "data/maps/HiddenVillage/scripts.pory"
	applymovement 6, Common_Movement_ExclamationMark
# 80 "data/maps/HiddenVillage/scripts.pory"
	playse SE_PIN
# 81 "data/maps/HiddenVillage/scripts.pory"
	waitmovement 0
# 82 "data/maps/HiddenVillage/scripts.pory"
	applymovement 6, Heart_Movement_TowardsPlayer
# 83 "data/maps/HiddenVillage/scripts.pory"
	waitmovement 0
# 84 "data/maps/HiddenVillage/scripts.pory"
	applymovement 6, Common_Movement_FaceUp
# 86 "data/maps/HiddenVillage/scripts.pory"
	msgbox HiddenVillage_EventScript_FriendHeart_Intro_Text_0
# 87 "data/maps/HiddenVillage/scripts.pory"
	closemessage
# 89 "data/maps/HiddenVillage/scripts.pory"
	applymovement 6, Heart_RunToBackyard
# 90 "data/maps/HiddenVillage/scripts.pory"
	waitmovement 0
# 91 "data/maps/HiddenVillage/scripts.pory"
	removeobject 6
# 93 "data/maps/HiddenVillage/scripts.pory"
	setflag FLAG_HIDDEN_VILLAGE_HEART_INTRO_COMPLETE
# 94 "data/maps/HiddenVillage/scripts.pory"
	setvar VAR_TEMP_0, 1
# 96 "data/maps/HiddenVillage/scripts.pory"
	releaseall
	end


HiddenVillage_EventScript_ElderClass_Left::
# 104 "data/maps/HiddenVillage/scripts.pory"
	lockall
# 105 "data/maps/HiddenVillage/scripts.pory"
	setvar VAR_TEMP_1, 0
# 106 "data/maps/HiddenVillage/scripts.pory"
	goto HiddenVillage_EventScript_ElderClass
	return


HiddenVillage_EventScript_ElderClass_Right::
# 110 "data/maps/HiddenVillage/scripts.pory"
	lockall
# 111 "data/maps/HiddenVillage/scripts.pory"
	setvar VAR_TEMP_1, 1
# 112 "data/maps/HiddenVillage/scripts.pory"
	goto HiddenVillage_EventScript_ElderClass
	return


HiddenVillage_EventScript_ElderClass::
# 116 "data/maps/HiddenVillage/scripts.pory"
	msgbox HiddenVillage_EventScript_ElderClass_Text_0
# 117 "data/maps/HiddenVillage/scripts.pory"
	closemessage
# 119 "data/maps/HiddenVillage/scripts.pory"
	compare VAR_TEMP_1, 0
	goto_if_eq HiddenVillage_EventScript_ElderClass_2
# 122 "data/maps/HiddenVillage/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, HiddenVillage_Movement_PlayerToClassRight
HiddenVillage_EventScript_ElderClass_1:
# 125 "data/maps/HiddenVillage/scripts.pory"
	applymovement 4, HiddenVillage_Movement_StrengthToClass
# 126 "data/maps/HiddenVillage/scripts.pory"
	applymovement 3, HiddenVillage_Movement_HeartToClass
# 127 "data/maps/HiddenVillage/scripts.pory"
	applymovement 2, HiddenVillage_Movement_BrainToClass
# 128 "data/maps/HiddenVillage/scripts.pory"
	waitmovement 0
# 130 "data/maps/HiddenVillage/scripts.pory"
	msgbox HiddenVillage_EventScript_ElderClass_Text_1
# 131 "data/maps/HiddenVillage/scripts.pory"
	closemessage
# 133 "data/maps/HiddenVillage/scripts.pory"
	msgbox HiddenVillage_EventScript_ElderClass_Text_2
# 134 "data/maps/HiddenVillage/scripts.pory"
	closemessage
# 137 "data/maps/HiddenVillage/scripts.pory"
	applymovement 4, Movement_StrengthWalkOff
# 138 "data/maps/HiddenVillage/scripts.pory"
	applymovement 3, Movement_HeartWalkOff
# 139 "data/maps/HiddenVillage/scripts.pory"
	applymovement 2, Movement_BrainWalkOff
# 140 "data/maps/HiddenVillage/scripts.pory"
	waitmovement 0
# 143 "data/maps/HiddenVillage/scripts.pory"
	removeobject 4
# 144 "data/maps/HiddenVillage/scripts.pory"
	removeobject 3
# 145 "data/maps/HiddenVillage/scripts.pory"
	removeobject 2
# 146 "data/maps/HiddenVillage/scripts.pory"
	setflag FLAG_TEMP_11
# 149 "data/maps/HiddenVillage/scripts.pory"
	clearflag FLAG_TEMP_12
# 150 "data/maps/HiddenVillage/scripts.pory"
	clearflag FLAG_TEMP_13
# 151 "data/maps/HiddenVillage/scripts.pory"
	addobject 7
# 152 "data/maps/HiddenVillage/scripts.pory"
	addobject 8
# 153 "data/maps/HiddenVillage/scripts.pory"
	addobject 9
# 156 "data/maps/HiddenVillage/scripts.pory"
	applymovement 7, Movement_StrengthReappear
# 157 "data/maps/HiddenVillage/scripts.pory"
	applymovement 8, Movement_HeartReappear
# 158 "data/maps/HiddenVillage/scripts.pory"
	applymovement 9, Movement_BrainReappear
# 161 "data/maps/HiddenVillage/scripts.pory"
	waitmovement 8
# 162 "data/maps/HiddenVillage/scripts.pory"
	playse SE_EXIT
# 163 "data/maps/HiddenVillage/scripts.pory"
	removeobject 8
# 165 "data/maps/HiddenVillage/scripts.pory"
	waitmovement 9
# 166 "data/maps/HiddenVillage/scripts.pory"
	playse SE_EXIT
# 167 "data/maps/HiddenVillage/scripts.pory"
	removeobject 9
# 170 "data/maps/HiddenVillage/scripts.pory"
	setflag FLAG_TEMP_12
# 173 "data/maps/HiddenVillage/scripts.pory"
	waitmovement 7
# 174 "data/maps/HiddenVillage/scripts.pory"
	setobjectxyperm 7, 11, 11
# 175 "data/maps/HiddenVillage/scripts.pory"
	setobjectmovementtype 7, MOVEMENT_TYPE_FACE_LEFT
# 178 "data/maps/HiddenVillage/scripts.pory"
	setvar VAR_HIDDEN_VILLAGE_STATE, 2
# 180 "data/maps/HiddenVillage/scripts.pory"
	releaseall
	end

HiddenVillage_EventScript_ElderClass_2:
# 120 "data/maps/HiddenVillage/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, HiddenVillage_Movement_PlayerToClassLeft
	goto HiddenVillage_EventScript_ElderClass_1


HiddenVillage_EventScript_LateTriggerLeft::
# 188 "data/maps/HiddenVillage/scripts.pory"
	lockall
# 189 "data/maps/HiddenVillage/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 190 "data/maps/HiddenVillage/scripts.pory"
	playse SE_PIN
# 191 "data/maps/HiddenVillage/scripts.pory"
	waitmovement 0
# 192 "data/maps/HiddenVillage/scripts.pory"
	applymovement 1, Common_Movement_FaceLeft
# 193 "data/maps/HiddenVillage/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 194 "data/maps/HiddenVillage/scripts.pory"
	waitmovement 0
# 195 "data/maps/HiddenVillage/scripts.pory"
	call HiddenVillage_EventScript_LateTriggerMain
# 196 "data/maps/HiddenVillage/scripts.pory"
	releaseall
	end


HiddenVillage_EventScript_LateTriggerRight::
# 201 "data/maps/HiddenVillage/scripts.pory"
	lockall
# 202 "data/maps/HiddenVillage/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 203 "data/maps/HiddenVillage/scripts.pory"
	playse SE_PIN
# 204 "data/maps/HiddenVillage/scripts.pory"
	waitmovement 0
# 205 "data/maps/HiddenVillage/scripts.pory"
	applymovement 1, Common_Movement_FaceRight
# 206 "data/maps/HiddenVillage/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 207 "data/maps/HiddenVillage/scripts.pory"
	waitmovement 0
# 208 "data/maps/HiddenVillage/scripts.pory"
	call HiddenVillage_EventScript_LateTriggerMain
# 209 "data/maps/HiddenVillage/scripts.pory"
	releaseall
	end


HiddenVillage_EventScript_LateTriggerMain::
# 214 "data/maps/HiddenVillage/scripts.pory"
	msgbox HiddenVillage_EventScript_LateTriggerMain_Text_0
# 215 "data/maps/HiddenVillage/scripts.pory"
	closemessage
# 216 "data/maps/HiddenVillage/scripts.pory"
	applymovement 1, Common_Movement_FaceDown
# 217 "data/maps/HiddenVillage/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 218 "data/maps/HiddenVillage/scripts.pory"
	waitmovement 0
	return


HiddenVillage_EventScript_DefaultText::
# 226 "data/maps/HiddenVillage/scripts.pory"
	lock
# 227 "data/maps/HiddenVillage/scripts.pory"
	faceplayer
# 228 "data/maps/HiddenVillage/scripts.pory"
	msgbox HiddenVillage_EventScript_DefaultText_Text_0
# 229 "data/maps/HiddenVillage/scripts.pory"
	setvar VAR_HIDDEN_VILLAGE_STATE, 2
# 230 "data/maps/HiddenVillage/scripts.pory"
	release
	end


HiddenVillage_EventScript_FriendHeart::
# 235 "data/maps/HiddenVillage/scripts.pory"
	lock
# 236 "data/maps/HiddenVillage/scripts.pory"
	faceplayer
# 237 "data/maps/HiddenVillage/scripts.pory"
	switch VAR_HIDDEN_VILLAGE_STATE
# 238 "data/maps/HiddenVillage/scripts.pory"
	case 1, HiddenVillage_EventScript_FriendHeart_3
# 241 "data/maps/HiddenVillage/scripts.pory"
	case 3, HiddenVillage_EventScript_FriendHeart_4
# 245 "data/maps/HiddenVillage/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_HIDDEN_VILLAGE_STATE
# 246 "data/maps/HiddenVillage/scripts.pory"
	msgbox HiddenVillage_EventScript_FriendHeart_Text_2
HiddenVillage_EventScript_FriendHeart_1:
# 248 "data/maps/HiddenVillage/scripts.pory"
	release
	end

HiddenVillage_EventScript_FriendHeart_3:
# 239 "data/maps/HiddenVillage/scripts.pory"
	msgbox HiddenVillage_EventScript_FriendHeart_Text_0
# 240 "data/maps/HiddenVillage/scripts.pory"
	closemessage
	goto HiddenVillage_EventScript_FriendHeart_1

HiddenVillage_EventScript_FriendHeart_4:
# 242 "data/maps/HiddenVillage/scripts.pory"
	msgbox HiddenVillage_EventScript_FriendHeart_Text_1
# 243 "data/maps/HiddenVillage/scripts.pory"
	closemessage
	goto HiddenVillage_EventScript_FriendHeart_1


HiddenVillage_EventScript_FriendStrength::
# 253 "data/maps/HiddenVillage/scripts.pory"
	lock
# 254 "data/maps/HiddenVillage/scripts.pory"
	faceplayer
# 255 "data/maps/HiddenVillage/scripts.pory"
	switch VAR_HIDDEN_VILLAGE_STATE
# 256 "data/maps/HiddenVillage/scripts.pory"
	case 1, HiddenVillage_EventScript_FriendStrength_3
# 259 "data/maps/HiddenVillage/scripts.pory"
	case 2, HiddenVillage_EventScript_FriendStrength_4
# 270 "data/maps/HiddenVillage/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_HIDDEN_VILLAGE_STATE
# 271 "data/maps/HiddenVillage/scripts.pory"
	msgbox HiddenVillage_EventScript_FriendHeart_Text_2
HiddenVillage_EventScript_FriendStrength_1:
# 273 "data/maps/HiddenVillage/scripts.pory"
	release
	end

HiddenVillage_EventScript_FriendStrength_3:
# 257 "data/maps/HiddenVillage/scripts.pory"
	msgbox HiddenVillage_EventScript_FriendStrength_Text_0
# 258 "data/maps/HiddenVillage/scripts.pory"
	closemessage
	goto HiddenVillage_EventScript_FriendStrength_1

HiddenVillage_EventScript_FriendStrength_4:
# 260 "data/maps/HiddenVillage/scripts.pory"
	msgbox HiddenVillage_EventScript_FriendStrength_Text_1
# 261 "data/maps/HiddenVillage/scripts.pory"
	closemessage
# 263 "data/maps/HiddenVillage/scripts.pory"
	applymovement 7, Movement_ClimbTheVine
# 264 "data/maps/HiddenVillage/scripts.pory"
	waitmovement 0
# 265 "data/maps/HiddenVillage/scripts.pory"
	playse SE_EXIT
# 266 "data/maps/HiddenVillage/scripts.pory"
	removeobject 7
# 268 "data/maps/HiddenVillage/scripts.pory"
	setvar VAR_HIDDEN_VILLAGE_STATE, 3
	goto HiddenVillage_EventScript_FriendStrength_1


HiddenVillage_EventScript_Lady::
# 278 "data/maps/HiddenVillage/scripts.pory"
	lock
# 279 "data/maps/HiddenVillage/scripts.pory"
	faceplayer
# 281 "data/maps/HiddenVillage/scripts.pory"
	switch VAR_HIDDEN_VILLAGE_STATE
# 282 "data/maps/HiddenVillage/scripts.pory"
	case 0, HiddenVillage_EventScript_Lady_3
# 288 "data/maps/HiddenVillage/scripts.pory"
	case 1, HiddenVillage_EventScript_Lady_4
# 292 "data/maps/HiddenVillage/scripts.pory"
	case 2, HiddenVillage_EventScript_Lady_5
# 311 "data/maps/HiddenVillage/scripts.pory"
	case 3, HiddenVillage_EventScript_Lady_6
# 315 "data/maps/HiddenVillage/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_HIDDEN_VILLAGE_STATE
# 316 "data/maps/HiddenVillage/scripts.pory"
	msgbox HiddenVillage_EventScript_FriendHeart_Text_2
HiddenVillage_EventScript_Lady_1:
# 318 "data/maps/HiddenVillage/scripts.pory"
	release
	end

HiddenVillage_EventScript_Lady_3:
# 283 "data/maps/HiddenVillage/scripts.pory"
	msgbox HiddenVillage_EventScript_LateTriggerMain_Text_0
# 284 "data/maps/HiddenVillage/scripts.pory"
	closemessage
# 285 "data/maps/HiddenVillage/scripts.pory"
	applymovement 1, Common_Movement_FaceDown
# 286 "data/maps/HiddenVillage/scripts.pory"
	waitmovement 0
	goto HiddenVillage_EventScript_Lady_1

HiddenVillage_EventScript_Lady_4:
# 289 "data/maps/HiddenVillage/scripts.pory"
	msgbox HiddenVillage_EventScript_Lady_Text_0
# 290 "data/maps/HiddenVillage/scripts.pory"
	closemessage
	goto HiddenVillage_EventScript_Lady_1

HiddenVillage_EventScript_Lady_5:
# 294 "data/maps/HiddenVillage/scripts.pory"
	msgbox HiddenVillage_EventScript_Lady_Text_1
# 295 "data/maps/HiddenVillage/scripts.pory"
	closemessage
# 297 "data/maps/HiddenVillage/scripts.pory"
	special SpawnCameraObject
# 298 "data/maps/HiddenVillage/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Movement_CameraPanLeftAndDown
# 299 "data/maps/HiddenVillage/scripts.pory"
	waitmovement 0
# 301 "data/maps/HiddenVillage/scripts.pory"
	msgbox HiddenVillage_EventScript_Lady_Text_2
# 302 "data/maps/HiddenVillage/scripts.pory"
	closemessage
# 304 "data/maps/HiddenVillage/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Movement_CameraPanRightAndUp
# 305 "data/maps/HiddenVillage/scripts.pory"
	waitmovement 0
# 306 "data/maps/HiddenVillage/scripts.pory"
	special RemoveCameraObject
# 308 "data/maps/HiddenVillage/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 309 "data/maps/HiddenVillage/scripts.pory"
	waitmovement 0
	goto HiddenVillage_EventScript_Lady_1

HiddenVillage_EventScript_Lady_6:
# 312 "data/maps/HiddenVillage/scripts.pory"
	msgbox HiddenVillage_EventScript_Lady_Text_3
# 313 "data/maps/HiddenVillage/scripts.pory"
	closemessage
	goto HiddenVillage_EventScript_Lady_1


# 359 "data/maps/HiddenVillage/scripts.pory"
Heart_Movement_TowardsPlayer:
# 360 "data/maps/HiddenVillage/scripts.pory"
	walk_left
# 360 "data/maps/HiddenVillage/scripts.pory"
	walk_left
# 360 "data/maps/HiddenVillage/scripts.pory"
	walk_left
# 360 "data/maps/HiddenVillage/scripts.pory"
	walk_left
# 360 "data/maps/HiddenVillage/scripts.pory"
	walk_left
	step_end

# 363 "data/maps/HiddenVillage/scripts.pory"
Heart_RunToBackyard:
# 364 "data/maps/HiddenVillage/scripts.pory"
	walk_right
# 364 "data/maps/HiddenVillage/scripts.pory"
	walk_right
# 364 "data/maps/HiddenVillage/scripts.pory"
	walk_right
# 364 "data/maps/HiddenVillage/scripts.pory"
	walk_right
# 364 "data/maps/HiddenVillage/scripts.pory"
	walk_right
# 365 "data/maps/HiddenVillage/scripts.pory"
	walk_up
# 365 "data/maps/HiddenVillage/scripts.pory"
	walk_up
# 365 "data/maps/HiddenVillage/scripts.pory"
	walk_up
# 366 "data/maps/HiddenVillage/scripts.pory"
	walk_right
# 366 "data/maps/HiddenVillage/scripts.pory"
	walk_right
# 366 "data/maps/HiddenVillage/scripts.pory"
	walk_right
	step_end

# 369 "data/maps/HiddenVillage/scripts.pory"
Movement_ClimbTheVine:
# 370 "data/maps/HiddenVillage/scripts.pory"
	walk_right
# 370 "data/maps/HiddenVillage/scripts.pory"
	walk_right
# 371 "data/maps/HiddenVillage/scripts.pory"
	walk_slow_up
	step_end

# 374 "data/maps/HiddenVillage/scripts.pory"
Movement_CameraPanLeftAndDown:
# 375 "data/maps/HiddenVillage/scripts.pory"
	walk_left
# 375 "data/maps/HiddenVillage/scripts.pory"
	walk_left
# 375 "data/maps/HiddenVillage/scripts.pory"
	walk_left
# 375 "data/maps/HiddenVillage/scripts.pory"
	walk_left
# 376 "data/maps/HiddenVillage/scripts.pory"
	walk_down
# 376 "data/maps/HiddenVillage/scripts.pory"
	walk_down
# 376 "data/maps/HiddenVillage/scripts.pory"
	walk_down
# 376 "data/maps/HiddenVillage/scripts.pory"
	walk_down
	step_end

# 379 "data/maps/HiddenVillage/scripts.pory"
Movement_CameraPanRightAndUp:
# 380 "data/maps/HiddenVillage/scripts.pory"
	walk_up
# 380 "data/maps/HiddenVillage/scripts.pory"
	walk_up
# 380 "data/maps/HiddenVillage/scripts.pory"
	walk_up
# 380 "data/maps/HiddenVillage/scripts.pory"
	walk_up
# 381 "data/maps/HiddenVillage/scripts.pory"
	walk_right
# 381 "data/maps/HiddenVillage/scripts.pory"
	walk_right
# 381 "data/maps/HiddenVillage/scripts.pory"
	walk_right
# 381 "data/maps/HiddenVillage/scripts.pory"
	walk_right
	step_end

# 384 "data/maps/HiddenVillage/scripts.pory"
HiddenVillage_Movement_StrengthToClass:
# 385 "data/maps/HiddenVillage/scripts.pory"
	walk_down
# 386 "data/maps/HiddenVillage/scripts.pory"
	walk_left
# 387 "data/maps/HiddenVillage/scripts.pory"
	walk_left
# 388 "data/maps/HiddenVillage/scripts.pory"
	walk_left
# 389 "data/maps/HiddenVillage/scripts.pory"
	walk_down
# 390 "data/maps/HiddenVillage/scripts.pory"
	face_up
	step_end

# 393 "data/maps/HiddenVillage/scripts.pory"
HiddenVillage_Movement_HeartToClass:
# 394 "data/maps/HiddenVillage/scripts.pory"
	walk_left
# 394 "data/maps/HiddenVillage/scripts.pory"
	walk_left
# 394 "data/maps/HiddenVillage/scripts.pory"
	walk_left
# 395 "data/maps/HiddenVillage/scripts.pory"
	face_up
	step_end

# 398 "data/maps/HiddenVillage/scripts.pory"
HiddenVillage_Movement_BrainToClass:
# 399 "data/maps/HiddenVillage/scripts.pory"
	delay_16
# 400 "data/maps/HiddenVillage/scripts.pory"
	walk_left
# 400 "data/maps/HiddenVillage/scripts.pory"
	walk_left
# 400 "data/maps/HiddenVillage/scripts.pory"
	walk_left
# 401 "data/maps/HiddenVillage/scripts.pory"
	face_up
	step_end

# 405 "data/maps/HiddenVillage/scripts.pory"
HiddenVillage_Movement_PlayerToClassLeft:
# 406 "data/maps/HiddenVillage/scripts.pory"
	walk_up
# 407 "data/maps/HiddenVillage/scripts.pory"
	walk_right
# 408 "data/maps/HiddenVillage/scripts.pory"
	face_up
	step_end

# 411 "data/maps/HiddenVillage/scripts.pory"
HiddenVillage_Movement_PlayerToClassRight:
# 412 "data/maps/HiddenVillage/scripts.pory"
	walk_up
	step_end

# 416 "data/maps/HiddenVillage/scripts.pory"
Movement_StrengthWalkOff:
# 417 "data/maps/HiddenVillage/scripts.pory"
	walk_down
# 417 "data/maps/HiddenVillage/scripts.pory"
	walk_down
# 417 "data/maps/HiddenVillage/scripts.pory"
	walk_down
# 417 "data/maps/HiddenVillage/scripts.pory"
	walk_down
# 418 "data/maps/HiddenVillage/scripts.pory"
	walk_left
# 418 "data/maps/HiddenVillage/scripts.pory"
	walk_left
# 419 "data/maps/HiddenVillage/scripts.pory"
	walk_down
# 419 "data/maps/HiddenVillage/scripts.pory"
	walk_down
	step_end

# 422 "data/maps/HiddenVillage/scripts.pory"
Movement_HeartWalkOff:
# 423 "data/maps/HiddenVillage/scripts.pory"
	walk_down
# 424 "data/maps/HiddenVillage/scripts.pory"
	walk_left
# 424 "data/maps/HiddenVillage/scripts.pory"
	walk_left
# 425 "data/maps/HiddenVillage/scripts.pory"
	walk_down
# 425 "data/maps/HiddenVillage/scripts.pory"
	walk_down
# 425 "data/maps/HiddenVillage/scripts.pory"
	walk_down
# 426 "data/maps/HiddenVillage/scripts.pory"
	walk_left
# 426 "data/maps/HiddenVillage/scripts.pory"
	walk_left
# 427 "data/maps/HiddenVillage/scripts.pory"
	walk_down
# 427 "data/maps/HiddenVillage/scripts.pory"
	walk_down
	step_end

# 430 "data/maps/HiddenVillage/scripts.pory"
Movement_BrainWalkOff:
# 431 "data/maps/HiddenVillage/scripts.pory"
	walk_down
# 432 "data/maps/HiddenVillage/scripts.pory"
	delay_8
# 433 "data/maps/HiddenVillage/scripts.pory"
	walk_left
# 433 "data/maps/HiddenVillage/scripts.pory"
	walk_left
# 433 "data/maps/HiddenVillage/scripts.pory"
	walk_left
# 434 "data/maps/HiddenVillage/scripts.pory"
	walk_down
# 434 "data/maps/HiddenVillage/scripts.pory"
	walk_down
# 434 "data/maps/HiddenVillage/scripts.pory"
	walk_down
# 435 "data/maps/HiddenVillage/scripts.pory"
	walk_left
# 435 "data/maps/HiddenVillage/scripts.pory"
	walk_left
# 436 "data/maps/HiddenVillage/scripts.pory"
	walk_down
# 436 "data/maps/HiddenVillage/scripts.pory"
	walk_down
	step_end

# 440 "data/maps/HiddenVillage/scripts.pory"
Movement_StrengthReappear:
# 441 "data/maps/HiddenVillage/scripts.pory"
	walk_right
# 442 "data/maps/HiddenVillage/scripts.pory"
	walk_right
# 443 "data/maps/HiddenVillage/scripts.pory"
	walk_right
# 444 "data/maps/HiddenVillage/scripts.pory"
	walk_right
# 445 "data/maps/HiddenVillage/scripts.pory"
	delay_16
# 445 "data/maps/HiddenVillage/scripts.pory"
	delay_16
# 445 "data/maps/HiddenVillage/scripts.pory"
	delay_16
# 445 "data/maps/HiddenVillage/scripts.pory"
	delay_16
# 446 "data/maps/HiddenVillage/scripts.pory"
	walk_up
# 447 "data/maps/HiddenVillage/scripts.pory"
	face_left
	step_end

# 450 "data/maps/HiddenVillage/scripts.pory"
Movement_HeartReappear:
# 451 "data/maps/HiddenVillage/scripts.pory"
	walk_up
# 451 "data/maps/HiddenVillage/scripts.pory"
	walk_up
# 452 "data/maps/HiddenVillage/scripts.pory"
	walk_right
# 452 "data/maps/HiddenVillage/scripts.pory"
	walk_right
# 452 "data/maps/HiddenVillage/scripts.pory"
	walk_right
# 452 "data/maps/HiddenVillage/scripts.pory"
	walk_right
# 452 "data/maps/HiddenVillage/scripts.pory"
	walk_right
# 452 "data/maps/HiddenVillage/scripts.pory"
	walk_right
# 453 "data/maps/HiddenVillage/scripts.pory"
	walk_slow_up
	step_end

# 456 "data/maps/HiddenVillage/scripts.pory"
Movement_BrainReappear:
# 457 "data/maps/HiddenVillage/scripts.pory"
	delay_8
# 458 "data/maps/HiddenVillage/scripts.pory"
	walk_up
# 458 "data/maps/HiddenVillage/scripts.pory"
	walk_up
# 458 "data/maps/HiddenVillage/scripts.pory"
	walk_up
# 459 "data/maps/HiddenVillage/scripts.pory"
	walk_right
# 459 "data/maps/HiddenVillage/scripts.pory"
	walk_right
# 459 "data/maps/HiddenVillage/scripts.pory"
	walk_right
# 459 "data/maps/HiddenVillage/scripts.pory"
	walk_right
# 459 "data/maps/HiddenVillage/scripts.pory"
	walk_right
# 459 "data/maps/HiddenVillage/scripts.pory"
	walk_right
# 460 "data/maps/HiddenVillage/scripts.pory"
	walk_slow_up
	step_end

HiddenVillage_EventScript_FriendHeart_Intro_Text_0:
# 86 "data/maps/HiddenVillage/scripts.pory"
	.string "Heart: Good morning {PLAYER}! I was\n"
	.string "wondering if you were going to wake up\l"
	.string "today. Everybody else is waiting in the\l"
	.string "backyard, go and see the Elder in his\l"
	.string "lab and let him know you're ready!$"

HiddenVillage_EventScript_ElderClass_Text_0:
# 116 "data/maps/HiddenVillage/scripts.pory"
	.string "Elder: Good, you're all here! Everybody\n"
	.string "gather around.$"

HiddenVillage_EventScript_ElderClass_Text_1:
# 130 "data/maps/HiddenVillage/scripts.pory"
	.string "Elder: Welcome everybody, today we're\n"
	.string "going to be learning about taming\l"
	.string "Pokémon. --To be continued--$"

HiddenVillage_EventScript_ElderClass_Text_2:
# 133 "data/maps/HiddenVillage/scripts.pory"
	.string "Strength: Now that class is over we\n"
	.string "should go hangout at the treehouse!$"

HiddenVillage_EventScript_LateTriggerMain_Text_0:
# 214 "data/maps/HiddenVillage/scripts.pory"
	.string "{PLAYER}! You're going to be late! Hurry\n"
	.string "up and see the Village Elder...$"

HiddenVillage_EventScript_DefaultText_Text_0:
# 228 "data/maps/HiddenVillage/scripts.pory"
	.string "Hi {PLAYER}!$"

HiddenVillage_EventScript_FriendHeart_Text_0:
# 239 "data/maps/HiddenVillage/scripts.pory"
	.string "Heart: It took you long enough! Hey...\n"
	.string "are you okay?$"

HiddenVillage_EventScript_FriendHeart_Text_1:
# 242 "data/maps/HiddenVillage/scripts.pory"
	.string "Heart: We're currently in state 3...$"

HiddenVillage_EventScript_FriendHeart_Text_2:
# 246 "data/maps/HiddenVillage/scripts.pory"
	.string "DEBUG_MISSING TEXT\n"
	.string "State ({STR_VAR_1})$"

HiddenVillage_EventScript_FriendStrength_Text_0:
# 257 "data/maps/HiddenVillage/scripts.pory"
	.string "Strength: You're finally here! We've\n"
	.string "been waiting for you!$"

HiddenVillage_EventScript_FriendStrength_Text_1:
# 260 "data/maps/HiddenVillage/scripts.pory"
	.string "Strength: Hey {PLAYER}! Do you remember\n"
	.string "how to get into the treehouse? Just\l"
	.string "climb the vine like this!$"

HiddenVillage_EventScript_Lady_Text_0:
# 289 "data/maps/HiddenVillage/scripts.pory"
	.string "The Elder asked for help keeping an eye\n"
	.string "on you kids!$"

HiddenVillage_EventScript_Lady_Text_1:
# 294 "data/maps/HiddenVillage/scripts.pory"
	.string "H-hey! There's nothing past here...\n"
	.string "Weren't you going to see your friends\l"
	.string "at the Treehouse? It's right over\l"
	.string "there!$"

HiddenVillage_EventScript_Lady_Text_2:
# 301 "data/maps/HiddenVillage/scripts.pory"
	.string "You can climb up it using the vine!$"

HiddenVillage_EventScript_Lady_Text_3:
# 312 "data/maps/HiddenVillage/scripts.pory"
	.string "It's pretty late... Isn't it past your\n"
	.string "bedtime?$"
