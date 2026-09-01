HiddenVillage_MapScripts::
# 16 "data/maps/HiddenVillage/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, HiddenVillage_OnTransition
# 17 "data/maps/HiddenVillage/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, HiddenVillage_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

HiddenVillage_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 18 "data/maps/HiddenVillage/scripts.pory"
	map_script_2 VAR_TEMP_0, 0, HiddenVillage_EventScript_FriendHeart_Intro
	.2byte 0


HiddenVillage_OnTransition::
# 27 "data/maps/HiddenVillage/scripts.pory"
	goto_if_set FLAG_HIDDEN_VILLAGE_HEART_INTRO_COMPLETE, HiddenVillage_OnTransition_2
HiddenVillage_OnTransition_1:
# 30 "data/maps/HiddenVillage/scripts.pory"
	setflag FLAG_TEMP_14
# 32 "data/maps/HiddenVillage/scripts.pory"
	switch VAR_HIDDEN_VILLAGE_STATE
# 34 "data/maps/HiddenVillage/scripts.pory"
	case 0, HiddenVillage_OnTransition_6
# 38 "data/maps/HiddenVillage/scripts.pory"
	case 1, HiddenVillage_OnTransition_7
# 45 "data/maps/HiddenVillage/scripts.pory"
	case 2, HiddenVillage_OnTransition_8
# 61 "data/maps/HiddenVillage/scripts.pory"
	case 3, HiddenVillage_OnTransition_9
# 70 "data/maps/HiddenVillage/scripts.pory"
	case 4, HiddenVillage_OnTransition_10
HiddenVillage_OnTransition_4:
	end

HiddenVillage_OnTransition_2:
# 28 "data/maps/HiddenVillage/scripts.pory"
	setvar VAR_TEMP_0, 1
	goto HiddenVillage_OnTransition_1

HiddenVillage_OnTransition_6:
# 35 "data/maps/HiddenVillage/scripts.pory"
	setflag FLAG_TEMP_12
# 36 "data/maps/HiddenVillage/scripts.pory"
	setflag FLAG_TEMP_13
	goto HiddenVillage_OnTransition_4

HiddenVillage_OnTransition_7:
# 39 "data/maps/HiddenVillage/scripts.pory"
	setobjectxyperm 1, 14, 14
# 40 "data/maps/HiddenVillage/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_LOOK_AROUND
# 41 "data/maps/HiddenVillage/scripts.pory"
	setflag FLAG_TEMP_12
# 42 "data/maps/HiddenVillage/scripts.pory"
	setflag FLAG_TEMP_13
	goto HiddenVillage_OnTransition_4

HiddenVillage_OnTransition_8:
# 46 "data/maps/HiddenVillage/scripts.pory"
	setobjectxyperm 1, 17, 5
# 47 "data/maps/HiddenVillage/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_DOWN
# 50 "data/maps/HiddenVillage/scripts.pory"
	setflag FLAG_TEMP_11
# 53 "data/maps/HiddenVillage/scripts.pory"
	setflag FLAG_TEMP_12
# 54 "data/maps/HiddenVillage/scripts.pory"
	setflag FLAG_TEMP_13
# 57 "data/maps/HiddenVillage/scripts.pory"
	setobjectxyperm 7, 11, 11
# 58 "data/maps/HiddenVillage/scripts.pory"
	setobjectmovementtype 7, MOVEMENT_TYPE_FACE_LEFT
	goto HiddenVillage_OnTransition_4

HiddenVillage_OnTransition_9:
# 62 "data/maps/HiddenVillage/scripts.pory"
	setflag FLAG_TEMP_11
# 63 "data/maps/HiddenVillage/scripts.pory"
	setflag FLAG_TEMP_12
# 64 "data/maps/HiddenVillage/scripts.pory"
	setflag FLAG_TEMP_13
# 68 "data/maps/HiddenVillage/scripts.pory"
	setflag FLAG_TEMP_13
	goto HiddenVillage_OnTransition_4

HiddenVillage_OnTransition_10:
# 71 "data/maps/HiddenVillage/scripts.pory"
	setflag FLAG_TEMP_11
# 72 "data/maps/HiddenVillage/scripts.pory"
	setflag FLAG_TEMP_12
# 73 "data/maps/HiddenVillage/scripts.pory"
	setflag FLAG_TEMP_13
	goto HiddenVillage_OnTransition_4


HiddenVillage_EventScript_FriendHeart_Intro::
# 82 "data/maps/HiddenVillage/scripts.pory"
	lockall
# 84 "data/maps/HiddenVillage/scripts.pory"
	applymovement 6, Common_Movement_ExclamationMark
# 85 "data/maps/HiddenVillage/scripts.pory"
	playse SE_PIN
# 86 "data/maps/HiddenVillage/scripts.pory"
	waitmovement 0
# 87 "data/maps/HiddenVillage/scripts.pory"
	applymovement 6, Heart_Movement_TowardsPlayer
# 88 "data/maps/HiddenVillage/scripts.pory"
	waitmovement 0
# 89 "data/maps/HiddenVillage/scripts.pory"
	applymovement 6, Common_Movement_FaceUp
# 91 "data/maps/HiddenVillage/scripts.pory"
	msgbox HiddenVillage_EventScript_FriendHeart_Intro_Text_0
# 92 "data/maps/HiddenVillage/scripts.pory"
	closemessage
# 94 "data/maps/HiddenVillage/scripts.pory"
	applymovement 6, Heart_RunToBackyard
# 95 "data/maps/HiddenVillage/scripts.pory"
	waitmovement 0
# 96 "data/maps/HiddenVillage/scripts.pory"
	removeobject 6
# 98 "data/maps/HiddenVillage/scripts.pory"
	setflag FLAG_HIDDEN_VILLAGE_HEART_INTRO_COMPLETE
# 99 "data/maps/HiddenVillage/scripts.pory"
	setvar VAR_TEMP_0, 1
# 101 "data/maps/HiddenVillage/scripts.pory"
	releaseall
	end


HiddenVillage_EventScript_ElderClass_Left::
# 109 "data/maps/HiddenVillage/scripts.pory"
	lockall
# 110 "data/maps/HiddenVillage/scripts.pory"
	setvar VAR_TEMP_1, 0
# 111 "data/maps/HiddenVillage/scripts.pory"
	goto HiddenVillage_EventScript_ElderClass
	return


HiddenVillage_EventScript_ElderClass_Right::
# 115 "data/maps/HiddenVillage/scripts.pory"
	lockall
# 116 "data/maps/HiddenVillage/scripts.pory"
	setvar VAR_TEMP_1, 1
# 117 "data/maps/HiddenVillage/scripts.pory"
	goto HiddenVillage_EventScript_ElderClass
	return


HiddenVillage_EventScript_ElderClass::
# 121 "data/maps/HiddenVillage/scripts.pory"
	msgbox HiddenVillage_EventScript_ElderClass_Text_0
# 122 "data/maps/HiddenVillage/scripts.pory"
	closemessage
# 124 "data/maps/HiddenVillage/scripts.pory"
	compare VAR_TEMP_1, 0
	goto_if_eq HiddenVillage_EventScript_ElderClass_2
# 127 "data/maps/HiddenVillage/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, HiddenVillage_Movement_PlayerToClassRight
HiddenVillage_EventScript_ElderClass_1:
# 130 "data/maps/HiddenVillage/scripts.pory"
	applymovement 4, HiddenVillage_Movement_StrengthToClass
# 131 "data/maps/HiddenVillage/scripts.pory"
	applymovement 3, HiddenVillage_Movement_HeartToClass
# 132 "data/maps/HiddenVillage/scripts.pory"
	applymovement 2, HiddenVillage_Movement_BrainToClass
# 133 "data/maps/HiddenVillage/scripts.pory"
	waitmovement 0
# 135 "data/maps/HiddenVillage/scripts.pory"
	msgbox HiddenVillage_EventScript_ElderClass_Text_1
# 136 "data/maps/HiddenVillage/scripts.pory"
	closemessage
# 137 "data/maps/HiddenVillage/scripts.pory"
	clearflag FLAG_TEMP_14
# 138 "data/maps/HiddenVillage/scripts.pory"
	applymovement 11, HiddenVillage_Movement_ShadowFlyOver
# 139 "data/maps/HiddenVillage/scripts.pory"
	playse SE_M_FLY
# 141 "data/maps/HiddenVillage/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 142 "data/maps/HiddenVillage/scripts.pory"
	playse SE_PIN
# 143 "data/maps/HiddenVillage/scripts.pory"
	waitmovement
# 144 "data/maps/HiddenVillage/scripts.pory"
	applymovement 2, Common_Movement_ExclamationMark
# 145 "data/maps/HiddenVillage/scripts.pory"
	playse SE_PIN
# 146 "data/maps/HiddenVillage/scripts.pory"
	waitmovement
# 147 "data/maps/HiddenVillage/scripts.pory"
	applymovement 3, Common_Movement_ExclamationMark
# 148 "data/maps/HiddenVillage/scripts.pory"
	playse SE_PIN
# 149 "data/maps/HiddenVillage/scripts.pory"
	waitmovement
# 150 "data/maps/HiddenVillage/scripts.pory"
	applymovement 4, Common_Movement_ExclamationMark
# 151 "data/maps/HiddenVillage/scripts.pory"
	playse SE_PIN
# 152 "data/maps/HiddenVillage/scripts.pory"
	waitmovement
# 153 "data/maps/HiddenVillage/scripts.pory"
	msgbox HiddenVillage_EventScript_ElderClass_Text_2
# 154 "data/maps/HiddenVillage/scripts.pory"
	closemessage
# 155 "data/maps/HiddenVillage/scripts.pory"
	setweather WEATHER_RAIN
# 156 "data/maps/HiddenVillage/scripts.pory"
	doweather
# 157 "data/maps/HiddenVillage/scripts.pory"
	msgbox HiddenVillage_EventScript_ElderClass_Text_3
# 158 "data/maps/HiddenVillage/scripts.pory"
	setflag FLAG_TEMP_14
# 159 "data/maps/HiddenVillage/scripts.pory"
	closemessage
# 162 "data/maps/HiddenVillage/scripts.pory"
	applymovement 4, Movement_StrengthWalkOff
# 163 "data/maps/HiddenVillage/scripts.pory"
	applymovement 3, Movement_HeartWalkOff
# 164 "data/maps/HiddenVillage/scripts.pory"
	applymovement 2, Movement_BrainWalkOff
# 165 "data/maps/HiddenVillage/scripts.pory"
	waitmovement 0
# 168 "data/maps/HiddenVillage/scripts.pory"
	removeobject 4
# 169 "data/maps/HiddenVillage/scripts.pory"
	removeobject 3
# 170 "data/maps/HiddenVillage/scripts.pory"
	removeobject 2
# 171 "data/maps/HiddenVillage/scripts.pory"
	setflag FLAG_TEMP_11
# 174 "data/maps/HiddenVillage/scripts.pory"
	clearflag FLAG_TEMP_12
# 175 "data/maps/HiddenVillage/scripts.pory"
	clearflag FLAG_TEMP_13
# 176 "data/maps/HiddenVillage/scripts.pory"
	addobject 7
# 177 "data/maps/HiddenVillage/scripts.pory"
	addobject 8
# 178 "data/maps/HiddenVillage/scripts.pory"
	addobject 9
# 181 "data/maps/HiddenVillage/scripts.pory"
	applymovement 7, Movement_StrengthReappear
# 182 "data/maps/HiddenVillage/scripts.pory"
	applymovement 8, Movement_HeartReappear
# 183 "data/maps/HiddenVillage/scripts.pory"
	applymovement 9, Movement_BrainReappear
# 186 "data/maps/HiddenVillage/scripts.pory"
	waitmovement 8
# 187 "data/maps/HiddenVillage/scripts.pory"
	playse SE_EXIT
# 188 "data/maps/HiddenVillage/scripts.pory"
	removeobject 8
# 190 "data/maps/HiddenVillage/scripts.pory"
	waitmovement 9
# 191 "data/maps/HiddenVillage/scripts.pory"
	playse SE_EXIT
# 192 "data/maps/HiddenVillage/scripts.pory"
	removeobject 9
# 195 "data/maps/HiddenVillage/scripts.pory"
	setflag FLAG_TEMP_12
# 198 "data/maps/HiddenVillage/scripts.pory"
	waitmovement 7
# 199 "data/maps/HiddenVillage/scripts.pory"
	setobjectxyperm 7, 11, 11
# 200 "data/maps/HiddenVillage/scripts.pory"
	setobjectmovementtype 7, MOVEMENT_TYPE_FACE_LEFT
# 203 "data/maps/HiddenVillage/scripts.pory"
	setvar VAR_HIDDEN_VILLAGE_STATE, 2
# 205 "data/maps/HiddenVillage/scripts.pory"
	releaseall
	end

HiddenVillage_EventScript_ElderClass_2:
# 125 "data/maps/HiddenVillage/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, HiddenVillage_Movement_PlayerToClassLeft
	goto HiddenVillage_EventScript_ElderClass_1


HiddenVillage_EventScript_LateTriggerLeft::
# 213 "data/maps/HiddenVillage/scripts.pory"
	lockall
# 214 "data/maps/HiddenVillage/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 215 "data/maps/HiddenVillage/scripts.pory"
	playse SE_PIN
# 216 "data/maps/HiddenVillage/scripts.pory"
	waitmovement 0
# 217 "data/maps/HiddenVillage/scripts.pory"
	applymovement 1, Common_Movement_FaceLeft
# 218 "data/maps/HiddenVillage/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 219 "data/maps/HiddenVillage/scripts.pory"
	waitmovement 0
# 220 "data/maps/HiddenVillage/scripts.pory"
	call HiddenVillage_EventScript_LateTriggerMain
# 221 "data/maps/HiddenVillage/scripts.pory"
	releaseall
	end


HiddenVillage_EventScript_LateTriggerRight::
# 226 "data/maps/HiddenVillage/scripts.pory"
	lockall
# 227 "data/maps/HiddenVillage/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 228 "data/maps/HiddenVillage/scripts.pory"
	playse SE_PIN
# 229 "data/maps/HiddenVillage/scripts.pory"
	waitmovement 0
# 230 "data/maps/HiddenVillage/scripts.pory"
	applymovement 1, Common_Movement_FaceRight
# 231 "data/maps/HiddenVillage/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 232 "data/maps/HiddenVillage/scripts.pory"
	waitmovement 0
# 233 "data/maps/HiddenVillage/scripts.pory"
	call HiddenVillage_EventScript_LateTriggerMain
# 234 "data/maps/HiddenVillage/scripts.pory"
	releaseall
	end


HiddenVillage_EventScript_LateTriggerMain::
# 239 "data/maps/HiddenVillage/scripts.pory"
	msgbox HiddenVillage_EventScript_LateTriggerMain_Text_0
# 240 "data/maps/HiddenVillage/scripts.pory"
	closemessage
# 241 "data/maps/HiddenVillage/scripts.pory"
	applymovement 1, Common_Movement_FaceDown
# 242 "data/maps/HiddenVillage/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 243 "data/maps/HiddenVillage/scripts.pory"
	waitmovement 0
	return


HiddenVillage_EventScript_DefaultText::
# 251 "data/maps/HiddenVillage/scripts.pory"
	lock
# 252 "data/maps/HiddenVillage/scripts.pory"
	faceplayer
# 253 "data/maps/HiddenVillage/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_HIDDEN_VILLAGE_STATE
# 254 "data/maps/HiddenVillage/scripts.pory"
	msgbox HiddenVillage_EventScript_DefaultText_Text_0
# 255 "data/maps/HiddenVillage/scripts.pory"
	release
	end


HiddenVillage_EventScript_FriendHeart::
# 260 "data/maps/HiddenVillage/scripts.pory"
	lock
# 261 "data/maps/HiddenVillage/scripts.pory"
	faceplayer
# 262 "data/maps/HiddenVillage/scripts.pory"
	switch VAR_HIDDEN_VILLAGE_STATE
# 263 "data/maps/HiddenVillage/scripts.pory"
	case 1, HiddenVillage_EventScript_FriendHeart_3
# 266 "data/maps/HiddenVillage/scripts.pory"
	case 3, HiddenVillage_EventScript_FriendHeart_4
# 270 "data/maps/HiddenVillage/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_HIDDEN_VILLAGE_STATE
# 271 "data/maps/HiddenVillage/scripts.pory"
	msgbox HiddenVillage_EventScript_DefaultText_Text_0
HiddenVillage_EventScript_FriendHeart_1:
# 273 "data/maps/HiddenVillage/scripts.pory"
	release
	end

HiddenVillage_EventScript_FriendHeart_3:
# 264 "data/maps/HiddenVillage/scripts.pory"
	msgbox HiddenVillage_EventScript_FriendHeart_Text_0
# 265 "data/maps/HiddenVillage/scripts.pory"
	closemessage
	goto HiddenVillage_EventScript_FriendHeart_1

HiddenVillage_EventScript_FriendHeart_4:
# 267 "data/maps/HiddenVillage/scripts.pory"
	msgbox HiddenVillage_EventScript_FriendHeart_Text_1
# 268 "data/maps/HiddenVillage/scripts.pory"
	closemessage
	goto HiddenVillage_EventScript_FriendHeart_1


HiddenVillage_EventScript_FriendStrength::
# 278 "data/maps/HiddenVillage/scripts.pory"
	lock
# 279 "data/maps/HiddenVillage/scripts.pory"
	faceplayer
# 280 "data/maps/HiddenVillage/scripts.pory"
	switch VAR_HIDDEN_VILLAGE_STATE
# 281 "data/maps/HiddenVillage/scripts.pory"
	case 1, HiddenVillage_EventScript_FriendStrength_3
# 284 "data/maps/HiddenVillage/scripts.pory"
	case 2, HiddenVillage_EventScript_FriendStrength_4
# 295 "data/maps/HiddenVillage/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_HIDDEN_VILLAGE_STATE
# 296 "data/maps/HiddenVillage/scripts.pory"
	msgbox HiddenVillage_EventScript_DefaultText_Text_0
HiddenVillage_EventScript_FriendStrength_1:
# 298 "data/maps/HiddenVillage/scripts.pory"
	release
	end

HiddenVillage_EventScript_FriendStrength_3:
# 282 "data/maps/HiddenVillage/scripts.pory"
	msgbox HiddenVillage_EventScript_FriendStrength_Text_0
# 283 "data/maps/HiddenVillage/scripts.pory"
	closemessage
	goto HiddenVillage_EventScript_FriendStrength_1

HiddenVillage_EventScript_FriendStrength_4:
# 285 "data/maps/HiddenVillage/scripts.pory"
	msgbox HiddenVillage_EventScript_FriendStrength_Text_1
# 286 "data/maps/HiddenVillage/scripts.pory"
	closemessage
# 288 "data/maps/HiddenVillage/scripts.pory"
	applymovement 7, Movement_ClimbTheVine
# 289 "data/maps/HiddenVillage/scripts.pory"
	waitmovement 0
# 290 "data/maps/HiddenVillage/scripts.pory"
	playse SE_EXIT
# 291 "data/maps/HiddenVillage/scripts.pory"
	removeobject 7
# 293 "data/maps/HiddenVillage/scripts.pory"
	setvar VAR_HIDDEN_VILLAGE_STATE, 3
	goto HiddenVillage_EventScript_FriendStrength_1


HiddenVillage_EventScript_Lady::
# 303 "data/maps/HiddenVillage/scripts.pory"
	lock
# 304 "data/maps/HiddenVillage/scripts.pory"
	faceplayer
# 306 "data/maps/HiddenVillage/scripts.pory"
	switch VAR_HIDDEN_VILLAGE_STATE
# 307 "data/maps/HiddenVillage/scripts.pory"
	case 0, HiddenVillage_EventScript_Lady_3
# 313 "data/maps/HiddenVillage/scripts.pory"
	case 1, HiddenVillage_EventScript_Lady_4
# 317 "data/maps/HiddenVillage/scripts.pory"
	case 2, HiddenVillage_EventScript_Lady_5
# 336 "data/maps/HiddenVillage/scripts.pory"
	case 3, HiddenVillage_EventScript_Lady_6
# 340 "data/maps/HiddenVillage/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_HIDDEN_VILLAGE_STATE
# 341 "data/maps/HiddenVillage/scripts.pory"
	msgbox HiddenVillage_EventScript_DefaultText_Text_0
HiddenVillage_EventScript_Lady_1:
# 343 "data/maps/HiddenVillage/scripts.pory"
	release
	end

HiddenVillage_EventScript_Lady_3:
# 308 "data/maps/HiddenVillage/scripts.pory"
	msgbox HiddenVillage_EventScript_LateTriggerMain_Text_0
# 309 "data/maps/HiddenVillage/scripts.pory"
	closemessage
# 310 "data/maps/HiddenVillage/scripts.pory"
	applymovement 1, Common_Movement_FaceDown
# 311 "data/maps/HiddenVillage/scripts.pory"
	waitmovement 0
	goto HiddenVillage_EventScript_Lady_1

HiddenVillage_EventScript_Lady_4:
# 314 "data/maps/HiddenVillage/scripts.pory"
	msgbox HiddenVillage_EventScript_Lady_Text_0
# 315 "data/maps/HiddenVillage/scripts.pory"
	closemessage
	goto HiddenVillage_EventScript_Lady_1

HiddenVillage_EventScript_Lady_5:
# 319 "data/maps/HiddenVillage/scripts.pory"
	msgbox HiddenVillage_EventScript_Lady_Text_1
# 320 "data/maps/HiddenVillage/scripts.pory"
	closemessage
# 322 "data/maps/HiddenVillage/scripts.pory"
	special SpawnCameraObject
# 323 "data/maps/HiddenVillage/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Movement_CameraPanLeftAndDown
# 324 "data/maps/HiddenVillage/scripts.pory"
	waitmovement 0
# 326 "data/maps/HiddenVillage/scripts.pory"
	msgbox HiddenVillage_EventScript_Lady_Text_2
# 327 "data/maps/HiddenVillage/scripts.pory"
	closemessage
# 329 "data/maps/HiddenVillage/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Movement_CameraPanRightAndUp
# 330 "data/maps/HiddenVillage/scripts.pory"
	waitmovement 0
# 331 "data/maps/HiddenVillage/scripts.pory"
	special RemoveCameraObject
# 333 "data/maps/HiddenVillage/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 334 "data/maps/HiddenVillage/scripts.pory"
	waitmovement 0
	goto HiddenVillage_EventScript_Lady_1

HiddenVillage_EventScript_Lady_6:
# 337 "data/maps/HiddenVillage/scripts.pory"
	msgbox HiddenVillage_EventScript_Lady_Text_3
# 338 "data/maps/HiddenVillage/scripts.pory"
	closemessage
	goto HiddenVillage_EventScript_Lady_1


# 351 "data/maps/HiddenVillage/scripts.pory"
Heart_Movement_TowardsPlayer:
# 352 "data/maps/HiddenVillage/scripts.pory"
	walk_left
# 352 "data/maps/HiddenVillage/scripts.pory"
	walk_left
# 352 "data/maps/HiddenVillage/scripts.pory"
	walk_left
# 352 "data/maps/HiddenVillage/scripts.pory"
	walk_left
# 352 "data/maps/HiddenVillage/scripts.pory"
	walk_left
	step_end

# 355 "data/maps/HiddenVillage/scripts.pory"
Heart_RunToBackyard:
# 356 "data/maps/HiddenVillage/scripts.pory"
	walk_right
# 356 "data/maps/HiddenVillage/scripts.pory"
	walk_right
# 356 "data/maps/HiddenVillage/scripts.pory"
	walk_right
# 356 "data/maps/HiddenVillage/scripts.pory"
	walk_right
# 356 "data/maps/HiddenVillage/scripts.pory"
	walk_right
# 357 "data/maps/HiddenVillage/scripts.pory"
	walk_up
# 357 "data/maps/HiddenVillage/scripts.pory"
	walk_up
# 357 "data/maps/HiddenVillage/scripts.pory"
	walk_up
# 358 "data/maps/HiddenVillage/scripts.pory"
	walk_right
# 358 "data/maps/HiddenVillage/scripts.pory"
	walk_right
# 358 "data/maps/HiddenVillage/scripts.pory"
	walk_right
	step_end

# 361 "data/maps/HiddenVillage/scripts.pory"
Movement_ClimbTheVine:
# 362 "data/maps/HiddenVillage/scripts.pory"
	walk_right
# 362 "data/maps/HiddenVillage/scripts.pory"
	walk_right
# 363 "data/maps/HiddenVillage/scripts.pory"
	walk_slow_up
	step_end

# 366 "data/maps/HiddenVillage/scripts.pory"
Movement_CameraPanLeftAndDown:
# 367 "data/maps/HiddenVillage/scripts.pory"
	walk_left
# 367 "data/maps/HiddenVillage/scripts.pory"
	walk_left
# 367 "data/maps/HiddenVillage/scripts.pory"
	walk_left
# 367 "data/maps/HiddenVillage/scripts.pory"
	walk_left
# 368 "data/maps/HiddenVillage/scripts.pory"
	walk_down
# 368 "data/maps/HiddenVillage/scripts.pory"
	walk_down
# 368 "data/maps/HiddenVillage/scripts.pory"
	walk_down
# 368 "data/maps/HiddenVillage/scripts.pory"
	walk_down
	step_end

# 371 "data/maps/HiddenVillage/scripts.pory"
Movement_CameraPanRightAndUp:
# 372 "data/maps/HiddenVillage/scripts.pory"
	walk_up
# 372 "data/maps/HiddenVillage/scripts.pory"
	walk_up
# 372 "data/maps/HiddenVillage/scripts.pory"
	walk_up
# 372 "data/maps/HiddenVillage/scripts.pory"
	walk_up
# 373 "data/maps/HiddenVillage/scripts.pory"
	walk_right
# 373 "data/maps/HiddenVillage/scripts.pory"
	walk_right
# 373 "data/maps/HiddenVillage/scripts.pory"
	walk_right
# 373 "data/maps/HiddenVillage/scripts.pory"
	walk_right
	step_end

# 376 "data/maps/HiddenVillage/scripts.pory"
HiddenVillage_Movement_StrengthToClass:
# 377 "data/maps/HiddenVillage/scripts.pory"
	walk_down
# 378 "data/maps/HiddenVillage/scripts.pory"
	walk_left
# 379 "data/maps/HiddenVillage/scripts.pory"
	walk_left
# 380 "data/maps/HiddenVillage/scripts.pory"
	walk_left
# 381 "data/maps/HiddenVillage/scripts.pory"
	walk_down
# 382 "data/maps/HiddenVillage/scripts.pory"
	face_up
	step_end

# 385 "data/maps/HiddenVillage/scripts.pory"
HiddenVillage_Movement_HeartToClass:
# 386 "data/maps/HiddenVillage/scripts.pory"
	walk_left
# 386 "data/maps/HiddenVillage/scripts.pory"
	walk_left
# 386 "data/maps/HiddenVillage/scripts.pory"
	walk_left
# 387 "data/maps/HiddenVillage/scripts.pory"
	face_up
	step_end

# 390 "data/maps/HiddenVillage/scripts.pory"
HiddenVillage_Movement_BrainToClass:
# 391 "data/maps/HiddenVillage/scripts.pory"
	delay_16
# 392 "data/maps/HiddenVillage/scripts.pory"
	walk_left
# 392 "data/maps/HiddenVillage/scripts.pory"
	walk_left
# 392 "data/maps/HiddenVillage/scripts.pory"
	walk_left
# 393 "data/maps/HiddenVillage/scripts.pory"
	face_up
	step_end

# 397 "data/maps/HiddenVillage/scripts.pory"
HiddenVillage_Movement_PlayerToClassLeft:
# 398 "data/maps/HiddenVillage/scripts.pory"
	walk_up
# 399 "data/maps/HiddenVillage/scripts.pory"
	walk_right
# 400 "data/maps/HiddenVillage/scripts.pory"
	face_up
	step_end

# 403 "data/maps/HiddenVillage/scripts.pory"
HiddenVillage_Movement_PlayerToClassRight:
# 404 "data/maps/HiddenVillage/scripts.pory"
	walk_up
	step_end

# 408 "data/maps/HiddenVillage/scripts.pory"
Movement_StrengthWalkOff:
# 409 "data/maps/HiddenVillage/scripts.pory"
	walk_down
# 409 "data/maps/HiddenVillage/scripts.pory"
	walk_down
# 409 "data/maps/HiddenVillage/scripts.pory"
	walk_down
# 409 "data/maps/HiddenVillage/scripts.pory"
	walk_down
# 410 "data/maps/HiddenVillage/scripts.pory"
	walk_left
# 410 "data/maps/HiddenVillage/scripts.pory"
	walk_left
# 411 "data/maps/HiddenVillage/scripts.pory"
	walk_down
# 411 "data/maps/HiddenVillage/scripts.pory"
	walk_down
	step_end

# 414 "data/maps/HiddenVillage/scripts.pory"
Movement_HeartWalkOff:
# 415 "data/maps/HiddenVillage/scripts.pory"
	walk_down
# 416 "data/maps/HiddenVillage/scripts.pory"
	walk_left
# 416 "data/maps/HiddenVillage/scripts.pory"
	walk_left
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
Movement_BrainWalkOff:
# 423 "data/maps/HiddenVillage/scripts.pory"
	walk_down
# 424 "data/maps/HiddenVillage/scripts.pory"
	delay_8
# 425 "data/maps/HiddenVillage/scripts.pory"
	walk_left
# 425 "data/maps/HiddenVillage/scripts.pory"
	walk_left
# 425 "data/maps/HiddenVillage/scripts.pory"
	walk_left
# 426 "data/maps/HiddenVillage/scripts.pory"
	walk_down
# 426 "data/maps/HiddenVillage/scripts.pory"
	walk_down
# 426 "data/maps/HiddenVillage/scripts.pory"
	walk_down
# 427 "data/maps/HiddenVillage/scripts.pory"
	walk_left
# 427 "data/maps/HiddenVillage/scripts.pory"
	walk_left
# 428 "data/maps/HiddenVillage/scripts.pory"
	walk_down
# 428 "data/maps/HiddenVillage/scripts.pory"
	walk_down
	step_end

# 432 "data/maps/HiddenVillage/scripts.pory"
Movement_StrengthReappear:
# 433 "data/maps/HiddenVillage/scripts.pory"
	walk_right
# 434 "data/maps/HiddenVillage/scripts.pory"
	walk_right
# 435 "data/maps/HiddenVillage/scripts.pory"
	walk_right
# 436 "data/maps/HiddenVillage/scripts.pory"
	walk_right
# 437 "data/maps/HiddenVillage/scripts.pory"
	delay_16
# 437 "data/maps/HiddenVillage/scripts.pory"
	delay_16
# 437 "data/maps/HiddenVillage/scripts.pory"
	delay_16
# 437 "data/maps/HiddenVillage/scripts.pory"
	delay_16
# 438 "data/maps/HiddenVillage/scripts.pory"
	walk_up
# 439 "data/maps/HiddenVillage/scripts.pory"
	face_left
	step_end

# 442 "data/maps/HiddenVillage/scripts.pory"
Movement_HeartReappear:
# 443 "data/maps/HiddenVillage/scripts.pory"
	walk_up
# 443 "data/maps/HiddenVillage/scripts.pory"
	walk_up
# 444 "data/maps/HiddenVillage/scripts.pory"
	walk_right
# 444 "data/maps/HiddenVillage/scripts.pory"
	walk_right
# 444 "data/maps/HiddenVillage/scripts.pory"
	walk_right
# 444 "data/maps/HiddenVillage/scripts.pory"
	walk_right
# 444 "data/maps/HiddenVillage/scripts.pory"
	walk_right
# 444 "data/maps/HiddenVillage/scripts.pory"
	walk_right
# 445 "data/maps/HiddenVillage/scripts.pory"
	walk_slow_up
	step_end

# 448 "data/maps/HiddenVillage/scripts.pory"
Movement_BrainReappear:
# 449 "data/maps/HiddenVillage/scripts.pory"
	delay_8
# 450 "data/maps/HiddenVillage/scripts.pory"
	walk_up
# 450 "data/maps/HiddenVillage/scripts.pory"
	walk_up
# 450 "data/maps/HiddenVillage/scripts.pory"
	walk_up
# 451 "data/maps/HiddenVillage/scripts.pory"
	walk_right
# 451 "data/maps/HiddenVillage/scripts.pory"
	walk_right
# 451 "data/maps/HiddenVillage/scripts.pory"
	walk_right
# 451 "data/maps/HiddenVillage/scripts.pory"
	walk_right
# 451 "data/maps/HiddenVillage/scripts.pory"
	walk_right
# 451 "data/maps/HiddenVillage/scripts.pory"
	walk_right
# 452 "data/maps/HiddenVillage/scripts.pory"
	walk_slow_up
	step_end

# 455 "data/maps/HiddenVillage/scripts.pory"
HiddenVillage_Movement_ShadowFlyOver:
# 456 "data/maps/HiddenVillage/scripts.pory"
	walk_fast_down
# 456 "data/maps/HiddenVillage/scripts.pory"
	walk_fast_down
# 456 "data/maps/HiddenVillage/scripts.pory"
	walk_fast_down
# 456 "data/maps/HiddenVillage/scripts.pory"
	walk_fast_down
# 456 "data/maps/HiddenVillage/scripts.pory"
	walk_fast_down
# 456 "data/maps/HiddenVillage/scripts.pory"
	walk_fast_down
# 456 "data/maps/HiddenVillage/scripts.pory"
	walk_fast_down
# 456 "data/maps/HiddenVillage/scripts.pory"
	walk_fast_down
# 456 "data/maps/HiddenVillage/scripts.pory"
	walk_fast_down
# 456 "data/maps/HiddenVillage/scripts.pory"
	walk_fast_down
# 456 "data/maps/HiddenVillage/scripts.pory"
	walk_fast_down
# 456 "data/maps/HiddenVillage/scripts.pory"
	walk_fast_down
# 456 "data/maps/HiddenVillage/scripts.pory"
	walk_fast_down
# 456 "data/maps/HiddenVillage/scripts.pory"
	walk_fast_down
# 456 "data/maps/HiddenVillage/scripts.pory"
	walk_fast_down
	step_end

HiddenVillage_EventScript_FriendHeart_Intro_Text_0:
# 91 "data/maps/HiddenVillage/scripts.pory"
	.string "Heart: Good morning {PLAYER}! I was\n"
	.string "wondering if you were going to wake up\l"
	.string "today. Everybody else is waiting in the\l"
	.string "backyard, go and see the Elder in his\l"
	.string "lab and let him know you're ready!$"

HiddenVillage_EventScript_ElderClass_Text_0:
# 121 "data/maps/HiddenVillage/scripts.pory"
	.string "Elder: Good, you're all here! Everybody\n"
	.string "gather around.$"

HiddenVillage_EventScript_ElderClass_Text_1:
# 135 "data/maps/HiddenVillage/scripts.pory"
	.string "Elder: Welcome everybody, today we're\n"
	.string "going to be learning about taming\l"
	.string "Pokémon. Taming Pokemon is the act of\l"
	.string "forming trust with a Pokémon. Both\l"
	.string "sides need to trust each other. --To be\l"
	.string "continued--$"

HiddenVillage_EventScript_ElderClass_Text_2:
# 153 "data/maps/HiddenVillage/scripts.pory"
	.string "Strength: What was that?!\p"
	.string "Brain: Was that a Pokémon?!\p"
	.string "HEART: There's no way that was a\n"
	.string "Pokémon! Right Elder?!\p"
	.string "$"

HiddenVillage_EventScript_ElderClass_Text_3:
# 157 "data/maps/HiddenVillage/scripts.pory"
	.string "Elder: Alright everybody, that's enough\n"
	.string "for today... We can finish this lesson\l"
	.string "tomorrow!\p"
	.string "STENGTH: Now that class is over let's go\n"
	.string "to the treehouse!$"

HiddenVillage_EventScript_LateTriggerMain_Text_0:
# 239 "data/maps/HiddenVillage/scripts.pory"
	.string "{PLAYER}! You're going to be late! Hurry\n"
	.string "up and see the Village Elder...$"

HiddenVillage_EventScript_DefaultText_Text_0:
# 254 "data/maps/HiddenVillage/scripts.pory"
	.string "DEBUG_MISSING TEXT\n"
	.string "State ({STR_VAR_1})$"

HiddenVillage_EventScript_FriendHeart_Text_0:
# 264 "data/maps/HiddenVillage/scripts.pory"
	.string "Heart: It took you long enough! Hey...\n"
	.string "are you okay?$"

HiddenVillage_EventScript_FriendHeart_Text_1:
# 267 "data/maps/HiddenVillage/scripts.pory"
	.string "Heart: We're currently in state 3...$"

HiddenVillage_EventScript_FriendStrength_Text_0:
# 282 "data/maps/HiddenVillage/scripts.pory"
	.string "Strength: You're finally here! We've\n"
	.string "been waiting for you!$"

HiddenVillage_EventScript_FriendStrength_Text_1:
# 285 "data/maps/HiddenVillage/scripts.pory"
	.string "Strength: Hey {PLAYER}! Do you remember\n"
	.string "how to get into the treehouse? Just\l"
	.string "climb the vine like this!$"

HiddenVillage_EventScript_Lady_Text_0:
# 314 "data/maps/HiddenVillage/scripts.pory"
	.string "The Elder asked for help keeping an eye\n"
	.string "on you kids!$"

HiddenVillage_EventScript_Lady_Text_1:
# 319 "data/maps/HiddenVillage/scripts.pory"
	.string "H-hey! There's nothing past here...\n"
	.string "Weren't you going to see your friends\l"
	.string "at the Treehouse? It's right over\l"
	.string "there!$"

HiddenVillage_EventScript_Lady_Text_2:
# 326 "data/maps/HiddenVillage/scripts.pory"
	.string "You can climb up it using the vine!$"

HiddenVillage_EventScript_Lady_Text_3:
# 337 "data/maps/HiddenVillage/scripts.pory"
	.string "It's pretty late... Isn't it past your\n"
	.string "bedtime?$"
