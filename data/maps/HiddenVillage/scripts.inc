HiddenVillage_MapScripts::
# 17 "data/maps/HiddenVillage/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, HiddenVillage_OnTransition
# 18 "data/maps/HiddenVillage/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, HiddenVillage_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

HiddenVillage_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 19 "data/maps/HiddenVillage/scripts.pory"
	map_script_2 VAR_TEMP_0, 0, HiddenVillage_EventScript_FriendHeart_Intro
	.2byte 0


HiddenVillage_OnTransition::
# 28 "data/maps/HiddenVillage/scripts.pory"
	goto_if_set FLAG_HIDDEN_VILLAGE_HEART_INTRO_COMPLETE, HiddenVillage_OnTransition_2
HiddenVillage_OnTransition_1:
# 32 "data/maps/HiddenVillage/scripts.pory"
	switch VAR_HIDDEN_VILLAGE_STATE
# 34 "data/maps/HiddenVillage/scripts.pory"
	case 0, HiddenVillage_OnTransition_6
# 39 "data/maps/HiddenVillage/scripts.pory"
	case 1, HiddenVillage_OnTransition_7
# 46 "data/maps/HiddenVillage/scripts.pory"
	case 2, HiddenVillage_OnTransition_8
# 64 "data/maps/HiddenVillage/scripts.pory"
	case 3, HiddenVillage_OnTransition_9
# 72 "data/maps/HiddenVillage/scripts.pory"
	case 4, HiddenVillage_OnTransition_10
HiddenVillage_OnTransition_4:
	end

HiddenVillage_OnTransition_2:
# 29 "data/maps/HiddenVillage/scripts.pory"
	setvar VAR_TEMP_0, 1
	goto HiddenVillage_OnTransition_1

HiddenVillage_OnTransition_6:
# 35 "data/maps/HiddenVillage/scripts.pory"
	setflag FLAG_TEMP_12
# 36 "data/maps/HiddenVillage/scripts.pory"
	setflag FLAG_TEMP_13
# 37 "data/maps/HiddenVillage/scripts.pory"
	setflag FLAG_TEMP_14
	goto HiddenVillage_OnTransition_4

HiddenVillage_OnTransition_7:
# 40 "data/maps/HiddenVillage/scripts.pory"
	setobjectxyperm 1, 14, 14
# 41 "data/maps/HiddenVillage/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_LOOK_AROUND
# 42 "data/maps/HiddenVillage/scripts.pory"
	setflag FLAG_TEMP_12
# 43 "data/maps/HiddenVillage/scripts.pory"
	setflag FLAG_TEMP_13
# 44 "data/maps/HiddenVillage/scripts.pory"
	setflag FLAG_TEMP_14
	goto HiddenVillage_OnTransition_4

HiddenVillage_OnTransition_8:
# 47 "data/maps/HiddenVillage/scripts.pory"
	setflag FLAG_TEMP_14
# 48 "data/maps/HiddenVillage/scripts.pory"
	setobjectxyperm 1, 15, 8
# 49 "data/maps/HiddenVillage/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_DOWN
# 52 "data/maps/HiddenVillage/scripts.pory"
	setflag FLAG_TEMP_11
# 55 "data/maps/HiddenVillage/scripts.pory"
	setflag FLAG_TEMP_12
# 58 "data/maps/HiddenVillage/scripts.pory"
	setobjectxyperm 7, 11, 11
# 59 "data/maps/HiddenVillage/scripts.pory"
	setobjectmovementtype 7, MOVEMENT_TYPE_FACE_LEFT
# 60 "data/maps/HiddenVillage/scripts.pory"
	setweather WEATHER_RAIN
# 61 "data/maps/HiddenVillage/scripts.pory"
	doweather
	goto HiddenVillage_OnTransition_4

HiddenVillage_OnTransition_9:
# 65 "data/maps/HiddenVillage/scripts.pory"
	setflag FLAG_TEMP_11
# 66 "data/maps/HiddenVillage/scripts.pory"
	setflag FLAG_TEMP_12
# 67 "data/maps/HiddenVillage/scripts.pory"
	setflag FLAG_TEMP_13
# 68 "data/maps/HiddenVillage/scripts.pory"
	setflag FLAG_TEMP_14
	goto HiddenVillage_OnTransition_4

HiddenVillage_OnTransition_10:
# 73 "data/maps/HiddenVillage/scripts.pory"
	setflag FLAG_TEMP_11
# 74 "data/maps/HiddenVillage/scripts.pory"
	setflag FLAG_TEMP_12
# 75 "data/maps/HiddenVillage/scripts.pory"
	setflag FLAG_TEMP_13
# 76 "data/maps/HiddenVillage/scripts.pory"
	setflag FLAG_TEMP_14
	goto HiddenVillage_OnTransition_4


HiddenVillage_EventScript_FriendHeart_Intro::
# 85 "data/maps/HiddenVillage/scripts.pory"
	lockall
# 87 "data/maps/HiddenVillage/scripts.pory"
	applymovement 6, Common_Movement_ExclamationMark
# 88 "data/maps/HiddenVillage/scripts.pory"
	playse SE_PIN
# 89 "data/maps/HiddenVillage/scripts.pory"
	waitmovement 0
# 90 "data/maps/HiddenVillage/scripts.pory"
	applymovement 6, Heart_Movement_TowardsPlayer
# 91 "data/maps/HiddenVillage/scripts.pory"
	waitmovement 0
# 92 "data/maps/HiddenVillage/scripts.pory"
	applymovement 6, Common_Movement_FaceUp
# 94 "data/maps/HiddenVillage/scripts.pory"
	msgbox HiddenVillage_EventScript_FriendHeart_Intro_Text_0
# 95 "data/maps/HiddenVillage/scripts.pory"
	closemessage
# 97 "data/maps/HiddenVillage/scripts.pory"
	applymovement 6, Heart_RunToBackyard
# 98 "data/maps/HiddenVillage/scripts.pory"
	waitmovement 0
# 99 "data/maps/HiddenVillage/scripts.pory"
	removeobject 6
# 101 "data/maps/HiddenVillage/scripts.pory"
	setflag FLAG_HIDDEN_VILLAGE_HEART_INTRO_COMPLETE
# 102 "data/maps/HiddenVillage/scripts.pory"
	setvar VAR_TEMP_0, 1
# 104 "data/maps/HiddenVillage/scripts.pory"
	releaseall
	end


HiddenVillage_EventScript_ElderClass_Left::
# 112 "data/maps/HiddenVillage/scripts.pory"
	lockall
# 113 "data/maps/HiddenVillage/scripts.pory"
	setvar VAR_TEMP_1, 0
# 114 "data/maps/HiddenVillage/scripts.pory"
	goto HiddenVillage_EventScript_ElderClass
	return


HiddenVillage_EventScript_ElderClass_Right::
# 118 "data/maps/HiddenVillage/scripts.pory"
	lockall
# 119 "data/maps/HiddenVillage/scripts.pory"
	setvar VAR_TEMP_1, 1
# 120 "data/maps/HiddenVillage/scripts.pory"
	goto HiddenVillage_EventScript_ElderClass
	return


HiddenVillage_EventScript_ElderClass::
# 124 "data/maps/HiddenVillage/scripts.pory"
	msgbox HiddenVillage_EventScript_ElderClass_Text_0
# 125 "data/maps/HiddenVillage/scripts.pory"
	closemessage
# 127 "data/maps/HiddenVillage/scripts.pory"
	compare VAR_TEMP_1, 0
	goto_if_eq HiddenVillage_EventScript_ElderClass_2
# 130 "data/maps/HiddenVillage/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, HiddenVillage_Movement_PlayerToClassRight
HiddenVillage_EventScript_ElderClass_1:
# 133 "data/maps/HiddenVillage/scripts.pory"
	applymovement 4, HiddenVillage_Movement_StrengthToClass
# 134 "data/maps/HiddenVillage/scripts.pory"
	applymovement 3, HiddenVillage_Movement_HeartToClass
# 135 "data/maps/HiddenVillage/scripts.pory"
	applymovement 2, HiddenVillage_Movement_BrainToClass
# 136 "data/maps/HiddenVillage/scripts.pory"
	waitmovement 0
# 138 "data/maps/HiddenVillage/scripts.pory"
	msgbox HiddenVillage_EventScript_ElderClass_Text_1
# 139 "data/maps/HiddenVillage/scripts.pory"
	closemessage
# 140 "data/maps/HiddenVillage/scripts.pory"
	clearflag FLAG_TEMP_14
# 141 "data/maps/HiddenVillage/scripts.pory"
	addobject 11
# 142 "data/maps/HiddenVillage/scripts.pory"
	applymovement 11, HiddenVillage_Movement_ShadowFlyOver
# 143 "data/maps/HiddenVillage/scripts.pory"
	playse SE_M_FLY
# 145 "data/maps/HiddenVillage/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 146 "data/maps/HiddenVillage/scripts.pory"
	playse SE_PIN
# 147 "data/maps/HiddenVillage/scripts.pory"
	waitmovement
# 148 "data/maps/HiddenVillage/scripts.pory"
	applymovement 2, Common_Movement_ExclamationMark
# 149 "data/maps/HiddenVillage/scripts.pory"
	playse SE_PIN
# 150 "data/maps/HiddenVillage/scripts.pory"
	waitmovement
# 151 "data/maps/HiddenVillage/scripts.pory"
	applymovement 3, Common_Movement_ExclamationMark
# 152 "data/maps/HiddenVillage/scripts.pory"
	playse SE_PIN
# 153 "data/maps/HiddenVillage/scripts.pory"
	waitmovement
# 154 "data/maps/HiddenVillage/scripts.pory"
	applymovement 4, Common_Movement_ExclamationMark
# 155 "data/maps/HiddenVillage/scripts.pory"
	playse SE_PIN
# 156 "data/maps/HiddenVillage/scripts.pory"
	waitmovement
# 157 "data/maps/HiddenVillage/scripts.pory"
	msgbox HiddenVillage_EventScript_ElderClass_Text_2
# 158 "data/maps/HiddenVillage/scripts.pory"
	closemessage
# 159 "data/maps/HiddenVillage/scripts.pory"
	setweather WEATHER_RAIN
# 160 "data/maps/HiddenVillage/scripts.pory"
	doweather
# 161 "data/maps/HiddenVillage/scripts.pory"
	msgbox HiddenVillage_EventScript_ElderClass_Text_3
# 162 "data/maps/HiddenVillage/scripts.pory"
	setflag FLAG_TEMP_14
# 163 "data/maps/HiddenVillage/scripts.pory"
	removeobject 11
# 164 "data/maps/HiddenVillage/scripts.pory"
	closemessage
# 167 "data/maps/HiddenVillage/scripts.pory"
	applymovement 4, Movement_StrengthWalkOff
# 168 "data/maps/HiddenVillage/scripts.pory"
	applymovement 3, Movement_HeartWalkOff
# 169 "data/maps/HiddenVillage/scripts.pory"
	applymovement 2, Movement_BrainWalkOff
# 170 "data/maps/HiddenVillage/scripts.pory"
	waitmovement 0
# 172 "data/maps/HiddenVillage/scripts.pory"
	applymovement 1, Movement_WalkToLabGrass
# 173 "data/maps/HiddenVillage/scripts.pory"
	applymovement 5, Movement_HeadToLab
# 174 "data/maps/HiddenVillage/scripts.pory"
	waitmovement 0
# 177 "data/maps/HiddenVillage/scripts.pory"
	removeobject 4
# 178 "data/maps/HiddenVillage/scripts.pory"
	removeobject 3
# 179 "data/maps/HiddenVillage/scripts.pory"
	removeobject 2
# 180 "data/maps/HiddenVillage/scripts.pory"
	removeobject 5
# 181 "data/maps/HiddenVillage/scripts.pory"
	setflag FLAG_TEMP_11
# 184 "data/maps/HiddenVillage/scripts.pory"
	clearflag FLAG_TEMP_12
# 185 "data/maps/HiddenVillage/scripts.pory"
	clearflag FLAG_TEMP_13
# 186 "data/maps/HiddenVillage/scripts.pory"
	addobject 7
# 187 "data/maps/HiddenVillage/scripts.pory"
	addobject 8
# 188 "data/maps/HiddenVillage/scripts.pory"
	addobject 9
# 191 "data/maps/HiddenVillage/scripts.pory"
	applymovement 7, Movement_StrengthReappear
# 192 "data/maps/HiddenVillage/scripts.pory"
	applymovement 8, Movement_HeartReappear
# 193 "data/maps/HiddenVillage/scripts.pory"
	applymovement 9, Movement_BrainReappear
# 196 "data/maps/HiddenVillage/scripts.pory"
	waitmovement 8
# 197 "data/maps/HiddenVillage/scripts.pory"
	playse SE_EXIT
# 198 "data/maps/HiddenVillage/scripts.pory"
	removeobject 8
# 200 "data/maps/HiddenVillage/scripts.pory"
	waitmovement 9
# 201 "data/maps/HiddenVillage/scripts.pory"
	playse SE_EXIT
# 202 "data/maps/HiddenVillage/scripts.pory"
	removeobject 9
# 205 "data/maps/HiddenVillage/scripts.pory"
	setflag FLAG_TEMP_12
# 208 "data/maps/HiddenVillage/scripts.pory"
	waitmovement 7
# 209 "data/maps/HiddenVillage/scripts.pory"
	setobjectxyperm 7, 11, 11
# 210 "data/maps/HiddenVillage/scripts.pory"
	setobjectmovementtype 7, MOVEMENT_TYPE_FACE_LEFT
# 213 "data/maps/HiddenVillage/scripts.pory"
	setvar VAR_HIDDEN_VILLAGE_STATE, 2
# 215 "data/maps/HiddenVillage/scripts.pory"
	releaseall
	end

HiddenVillage_EventScript_ElderClass_2:
# 128 "data/maps/HiddenVillage/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, HiddenVillage_Movement_PlayerToClassLeft
	goto HiddenVillage_EventScript_ElderClass_1


HiddenVillage_EventScript_LateTriggerLeft::
# 223 "data/maps/HiddenVillage/scripts.pory"
	lockall
# 224 "data/maps/HiddenVillage/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 225 "data/maps/HiddenVillage/scripts.pory"
	playse SE_PIN
# 226 "data/maps/HiddenVillage/scripts.pory"
	waitmovement 0
# 227 "data/maps/HiddenVillage/scripts.pory"
	applymovement 1, Common_Movement_FaceLeft
# 228 "data/maps/HiddenVillage/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 229 "data/maps/HiddenVillage/scripts.pory"
	waitmovement 0
# 230 "data/maps/HiddenVillage/scripts.pory"
	call HiddenVillage_EventScript_LateTriggerMain
# 231 "data/maps/HiddenVillage/scripts.pory"
	releaseall
	end


HiddenVillage_EventScript_LateTriggerRight::
# 236 "data/maps/HiddenVillage/scripts.pory"
	lockall
# 237 "data/maps/HiddenVillage/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 238 "data/maps/HiddenVillage/scripts.pory"
	playse SE_PIN
# 239 "data/maps/HiddenVillage/scripts.pory"
	waitmovement 0
# 240 "data/maps/HiddenVillage/scripts.pory"
	applymovement 1, Common_Movement_FaceRight
# 241 "data/maps/HiddenVillage/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 242 "data/maps/HiddenVillage/scripts.pory"
	waitmovement 0
# 243 "data/maps/HiddenVillage/scripts.pory"
	call HiddenVillage_EventScript_LateTriggerMain
# 244 "data/maps/HiddenVillage/scripts.pory"
	releaseall
	end


HiddenVillage_EventScript_LateTriggerMain::
# 249 "data/maps/HiddenVillage/scripts.pory"
	msgbox HiddenVillage_EventScript_LateTriggerMain_Text_0
# 250 "data/maps/HiddenVillage/scripts.pory"
	closemessage
# 251 "data/maps/HiddenVillage/scripts.pory"
	applymovement 1, Common_Movement_FaceDown
# 252 "data/maps/HiddenVillage/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 253 "data/maps/HiddenVillage/scripts.pory"
	waitmovement 0
	return


HiddenVillage_EventScript_DefaultText::
# 261 "data/maps/HiddenVillage/scripts.pory"
	lock
# 262 "data/maps/HiddenVillage/scripts.pory"
	faceplayer
# 263 "data/maps/HiddenVillage/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_HIDDEN_VILLAGE_STATE
# 264 "data/maps/HiddenVillage/scripts.pory"
	msgbox HiddenVillage_EventScript_DefaultText_Text_0
# 265 "data/maps/HiddenVillage/scripts.pory"
	release
	end


HiddenVillage_EventScript_FriendHeart::
# 270 "data/maps/HiddenVillage/scripts.pory"
	lock
# 271 "data/maps/HiddenVillage/scripts.pory"
	faceplayer
# 272 "data/maps/HiddenVillage/scripts.pory"
	switch VAR_HIDDEN_VILLAGE_STATE
# 273 "data/maps/HiddenVillage/scripts.pory"
	case 1, HiddenVillage_EventScript_FriendHeart_3
# 277 "data/maps/HiddenVillage/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_HIDDEN_VILLAGE_STATE
# 278 "data/maps/HiddenVillage/scripts.pory"
	msgbox HiddenVillage_EventScript_DefaultText_Text_0
HiddenVillage_EventScript_FriendHeart_1:
# 280 "data/maps/HiddenVillage/scripts.pory"
	release
	end

HiddenVillage_EventScript_FriendHeart_3:
# 274 "data/maps/HiddenVillage/scripts.pory"
	msgbox HiddenVillage_EventScript_FriendHeart_Text_0
# 275 "data/maps/HiddenVillage/scripts.pory"
	closemessage
	goto HiddenVillage_EventScript_FriendHeart_1


HiddenVillage_EventScript_FriendStrength::
# 285 "data/maps/HiddenVillage/scripts.pory"
	lock
# 286 "data/maps/HiddenVillage/scripts.pory"
	faceplayer
# 287 "data/maps/HiddenVillage/scripts.pory"
	switch VAR_HIDDEN_VILLAGE_STATE
# 288 "data/maps/HiddenVillage/scripts.pory"
	case 1, HiddenVillage_EventScript_FriendStrength_3
# 291 "data/maps/HiddenVillage/scripts.pory"
	case 2, HiddenVillage_EventScript_FriendStrength_4
# 302 "data/maps/HiddenVillage/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_HIDDEN_VILLAGE_STATE
# 303 "data/maps/HiddenVillage/scripts.pory"
	msgbox HiddenVillage_EventScript_DefaultText_Text_0
HiddenVillage_EventScript_FriendStrength_1:
# 305 "data/maps/HiddenVillage/scripts.pory"
	release
	end

HiddenVillage_EventScript_FriendStrength_3:
# 289 "data/maps/HiddenVillage/scripts.pory"
	msgbox HiddenVillage_EventScript_FriendStrength_Text_0
# 290 "data/maps/HiddenVillage/scripts.pory"
	closemessage
	goto HiddenVillage_EventScript_FriendStrength_1

HiddenVillage_EventScript_FriendStrength_4:
# 292 "data/maps/HiddenVillage/scripts.pory"
	msgbox HiddenVillage_EventScript_FriendStrength_Text_1
# 293 "data/maps/HiddenVillage/scripts.pory"
	closemessage
# 295 "data/maps/HiddenVillage/scripts.pory"
	applymovement 7, Movement_ClimbTheVine
# 296 "data/maps/HiddenVillage/scripts.pory"
	waitmovement 0
# 297 "data/maps/HiddenVillage/scripts.pory"
	playse SE_EXIT
# 298 "data/maps/HiddenVillage/scripts.pory"
	removeobject 7
# 300 "data/maps/HiddenVillage/scripts.pory"
	setvar VAR_HIDDEN_VILLAGE_STATE, 3
	goto HiddenVillage_EventScript_FriendStrength_1


HiddenVillage_EventScript_Lady::
# 311 "data/maps/HiddenVillage/scripts.pory"
	lock
# 312 "data/maps/HiddenVillage/scripts.pory"
	faceplayer
# 314 "data/maps/HiddenVillage/scripts.pory"
	switch VAR_HIDDEN_VILLAGE_STATE
# 315 "data/maps/HiddenVillage/scripts.pory"
	case 0, HiddenVillage_EventScript_Lady_3
# 321 "data/maps/HiddenVillage/scripts.pory"
	case 1, HiddenVillage_EventScript_Lady_4
# 325 "data/maps/HiddenVillage/scripts.pory"
	case 2, HiddenVillage_EventScript_Lady_5
# 344 "data/maps/HiddenVillage/scripts.pory"
	case 3, HiddenVillage_EventScript_Lady_6
# 348 "data/maps/HiddenVillage/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_HIDDEN_VILLAGE_STATE
# 349 "data/maps/HiddenVillage/scripts.pory"
	msgbox HiddenVillage_EventScript_DefaultText_Text_0
# 350 "data/maps/HiddenVillage/scripts.pory"
	closemessage
HiddenVillage_EventScript_Lady_1:
# 352 "data/maps/HiddenVillage/scripts.pory"
	release
	end

HiddenVillage_EventScript_Lady_3:
# 316 "data/maps/HiddenVillage/scripts.pory"
	msgbox HiddenVillage_EventScript_LateTriggerMain_Text_0
# 317 "data/maps/HiddenVillage/scripts.pory"
	closemessage
# 318 "data/maps/HiddenVillage/scripts.pory"
	applymovement 1, Common_Movement_FaceDown
# 319 "data/maps/HiddenVillage/scripts.pory"
	waitmovement 0
	goto HiddenVillage_EventScript_Lady_1

HiddenVillage_EventScript_Lady_4:
# 322 "data/maps/HiddenVillage/scripts.pory"
	msgbox HiddenVillage_EventScript_Lady_Text_0
# 323 "data/maps/HiddenVillage/scripts.pory"
	closemessage
	goto HiddenVillage_EventScript_Lady_1

HiddenVillage_EventScript_Lady_5:
# 327 "data/maps/HiddenVillage/scripts.pory"
	msgbox HiddenVillage_EventScript_Lady_Text_1
# 328 "data/maps/HiddenVillage/scripts.pory"
	closemessage
# 330 "data/maps/HiddenVillage/scripts.pory"
	special SpawnCameraObject
# 331 "data/maps/HiddenVillage/scripts.pory"
	applymovement 1, Common_Movement_FaceLeft
# 332 "data/maps/HiddenVillage/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 333 "data/maps/HiddenVillage/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Movement_CameraPanToTreehouse_FromLady
# 334 "data/maps/HiddenVillage/scripts.pory"
	waitmovement 0
# 336 "data/maps/HiddenVillage/scripts.pory"
	msgbox HiddenVillage_EventScript_Lady_Text_2
# 337 "data/maps/HiddenVillage/scripts.pory"
	closemessage
# 339 "data/maps/HiddenVillage/scripts.pory"
	faceplayer
# 340 "data/maps/HiddenVillage/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Movement_CameraReturnFromTreehouse_FromLady
# 341 "data/maps/HiddenVillage/scripts.pory"
	waitmovement 0
# 342 "data/maps/HiddenVillage/scripts.pory"
	special RemoveCameraObject
	goto HiddenVillage_EventScript_Lady_1

HiddenVillage_EventScript_Lady_6:
# 345 "data/maps/HiddenVillage/scripts.pory"
	msgbox HiddenVillage_EventScript_Lady_Text_3
# 346 "data/maps/HiddenVillage/scripts.pory"
	closemessage
	goto HiddenVillage_EventScript_Lady_1


HiddenVillage_EventScript_LadyTrigger::
# 362 "data/maps/HiddenVillage/scripts.pory"
	lockall
# 363 "data/maps/HiddenVillage/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 364 "data/maps/HiddenVillage/scripts.pory"
	playse SE_PIN
# 365 "data/maps/HiddenVillage/scripts.pory"
	waitmovement 0
# 368 "data/maps/HiddenVillage/scripts.pory"
	applymovement 1, Common_Movement_FaceRight
# 369 "data/maps/HiddenVillage/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 370 "data/maps/HiddenVillage/scripts.pory"
	waitmovement 0
# 373 "data/maps/HiddenVillage/scripts.pory"
	msgbox HiddenVillage_EventScript_Lady_Text_1
# 374 "data/maps/HiddenVillage/scripts.pory"
	closemessage
# 376 "data/maps/HiddenVillage/scripts.pory"
	special SpawnCameraObject
# 378 "data/maps/HiddenVillage/scripts.pory"
	applymovement 1, Common_Movement_FaceLeft
# 379 "data/maps/HiddenVillage/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 380 "data/maps/HiddenVillage/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Movement_CameraPanToTreehouse_FromTrigger
# 381 "data/maps/HiddenVillage/scripts.pory"
	waitmovement 0
# 383 "data/maps/HiddenVillage/scripts.pory"
	msgbox HiddenVillage_EventScript_Lady_Text_2
# 384 "data/maps/HiddenVillage/scripts.pory"
	closemessage
# 387 "data/maps/HiddenVillage/scripts.pory"
	applymovement 1, Common_Movement_FaceRight
# 389 "data/maps/HiddenVillage/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Movement_CameraReturnFromTreehouse_FromTrigger
# 390 "data/maps/HiddenVillage/scripts.pory"
	waitmovement 0
# 391 "data/maps/HiddenVillage/scripts.pory"
	special RemoveCameraObject
# 394 "data/maps/HiddenVillage/scripts.pory"
	applymovement 1, Common_Movement_FaceDown
# 395 "data/maps/HiddenVillage/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 396 "data/maps/HiddenVillage/scripts.pory"
	waitmovement 0
# 398 "data/maps/HiddenVillage/scripts.pory"
	releaseall
	end


# 406 "data/maps/HiddenVillage/scripts.pory"
Heart_Movement_TowardsPlayer:
# 407 "data/maps/HiddenVillage/scripts.pory"
	walk_left
# 407 "data/maps/HiddenVillage/scripts.pory"
	walk_left
# 407 "data/maps/HiddenVillage/scripts.pory"
	walk_left
# 407 "data/maps/HiddenVillage/scripts.pory"
	walk_left
# 407 "data/maps/HiddenVillage/scripts.pory"
	walk_left
	step_end

# 410 "data/maps/HiddenVillage/scripts.pory"
Heart_RunToBackyard:
# 411 "data/maps/HiddenVillage/scripts.pory"
	walk_right
# 411 "data/maps/HiddenVillage/scripts.pory"
	walk_right
# 411 "data/maps/HiddenVillage/scripts.pory"
	walk_right
# 411 "data/maps/HiddenVillage/scripts.pory"
	walk_right
# 411 "data/maps/HiddenVillage/scripts.pory"
	walk_right
# 412 "data/maps/HiddenVillage/scripts.pory"
	walk_up
# 412 "data/maps/HiddenVillage/scripts.pory"
	walk_up
# 412 "data/maps/HiddenVillage/scripts.pory"
	walk_up
# 413 "data/maps/HiddenVillage/scripts.pory"
	walk_right
# 413 "data/maps/HiddenVillage/scripts.pory"
	walk_right
# 413 "data/maps/HiddenVillage/scripts.pory"
	walk_right
	step_end

# 416 "data/maps/HiddenVillage/scripts.pory"
Movement_ClimbTheVine:
# 417 "data/maps/HiddenVillage/scripts.pory"
	walk_right
# 417 "data/maps/HiddenVillage/scripts.pory"
	walk_right
# 418 "data/maps/HiddenVillage/scripts.pory"
	walk_slow_up
	step_end

# 422 "data/maps/HiddenVillage/scripts.pory"
Movement_CameraPanToTreehouse_FromLady:
# 423 "data/maps/HiddenVillage/scripts.pory"
	walk_left
# 423 "data/maps/HiddenVillage/scripts.pory"
	walk_left
	step_end

# 426 "data/maps/HiddenVillage/scripts.pory"
Movement_CameraReturnFromTreehouse_FromLady:
# 427 "data/maps/HiddenVillage/scripts.pory"
	walk_right
# 427 "data/maps/HiddenVillage/scripts.pory"
	walk_right
	step_end

# 431 "data/maps/HiddenVillage/scripts.pory"
Movement_CameraPanToTreehouse_FromTrigger:
# 433 "data/maps/HiddenVillage/scripts.pory"
	walk_left
# 433 "data/maps/HiddenVillage/scripts.pory"
	walk_left
# 433 "data/maps/HiddenVillage/scripts.pory"
	walk_left
# 434 "data/maps/HiddenVillage/scripts.pory"
	walk_down
	step_end

# 437 "data/maps/HiddenVillage/scripts.pory"
Movement_CameraReturnFromTreehouse_FromTrigger:
# 439 "data/maps/HiddenVillage/scripts.pory"
	walk_up
# 440 "data/maps/HiddenVillage/scripts.pory"
	walk_right
# 440 "data/maps/HiddenVillage/scripts.pory"
	walk_right
# 440 "data/maps/HiddenVillage/scripts.pory"
	walk_right
	step_end

# 443 "data/maps/HiddenVillage/scripts.pory"
HiddenVillage_Movement_StrengthToClass:
# 444 "data/maps/HiddenVillage/scripts.pory"
	walk_down
# 445 "data/maps/HiddenVillage/scripts.pory"
	walk_left
# 446 "data/maps/HiddenVillage/scripts.pory"
	walk_left
# 447 "data/maps/HiddenVillage/scripts.pory"
	walk_left
# 448 "data/maps/HiddenVillage/scripts.pory"
	walk_down
# 449 "data/maps/HiddenVillage/scripts.pory"
	face_up
	step_end

# 452 "data/maps/HiddenVillage/scripts.pory"
HiddenVillage_Movement_HeartToClass:
# 453 "data/maps/HiddenVillage/scripts.pory"
	walk_left
# 453 "data/maps/HiddenVillage/scripts.pory"
	walk_left
# 453 "data/maps/HiddenVillage/scripts.pory"
	walk_left
# 454 "data/maps/HiddenVillage/scripts.pory"
	face_up
	step_end

# 457 "data/maps/HiddenVillage/scripts.pory"
HiddenVillage_Movement_BrainToClass:
# 458 "data/maps/HiddenVillage/scripts.pory"
	delay_16
# 459 "data/maps/HiddenVillage/scripts.pory"
	walk_left
# 459 "data/maps/HiddenVillage/scripts.pory"
	walk_left
# 459 "data/maps/HiddenVillage/scripts.pory"
	walk_left
# 460 "data/maps/HiddenVillage/scripts.pory"
	face_up
	step_end

# 464 "data/maps/HiddenVillage/scripts.pory"
HiddenVillage_Movement_PlayerToClassLeft:
# 465 "data/maps/HiddenVillage/scripts.pory"
	walk_up
# 466 "data/maps/HiddenVillage/scripts.pory"
	walk_right
# 467 "data/maps/HiddenVillage/scripts.pory"
	face_up
	step_end

# 470 "data/maps/HiddenVillage/scripts.pory"
HiddenVillage_Movement_PlayerToClassRight:
# 471 "data/maps/HiddenVillage/scripts.pory"
	walk_up
	step_end

# 475 "data/maps/HiddenVillage/scripts.pory"
Movement_StrengthWalkOff:
# 476 "data/maps/HiddenVillage/scripts.pory"
	walk_down
# 476 "data/maps/HiddenVillage/scripts.pory"
	walk_down
# 476 "data/maps/HiddenVillage/scripts.pory"
	walk_down
# 476 "data/maps/HiddenVillage/scripts.pory"
	walk_down
# 477 "data/maps/HiddenVillage/scripts.pory"
	walk_left
# 477 "data/maps/HiddenVillage/scripts.pory"
	walk_left
# 478 "data/maps/HiddenVillage/scripts.pory"
	walk_down
# 478 "data/maps/HiddenVillage/scripts.pory"
	walk_down
	step_end

# 481 "data/maps/HiddenVillage/scripts.pory"
Movement_HeartWalkOff:
# 482 "data/maps/HiddenVillage/scripts.pory"
	walk_down
# 483 "data/maps/HiddenVillage/scripts.pory"
	walk_left
# 483 "data/maps/HiddenVillage/scripts.pory"
	walk_left
# 484 "data/maps/HiddenVillage/scripts.pory"
	walk_down
# 484 "data/maps/HiddenVillage/scripts.pory"
	walk_down
# 484 "data/maps/HiddenVillage/scripts.pory"
	walk_down
# 485 "data/maps/HiddenVillage/scripts.pory"
	walk_left
# 485 "data/maps/HiddenVillage/scripts.pory"
	walk_left
# 486 "data/maps/HiddenVillage/scripts.pory"
	walk_down
# 486 "data/maps/HiddenVillage/scripts.pory"
	walk_down
	step_end

# 489 "data/maps/HiddenVillage/scripts.pory"
Movement_BrainWalkOff:
# 490 "data/maps/HiddenVillage/scripts.pory"
	walk_down
# 491 "data/maps/HiddenVillage/scripts.pory"
	delay_8
# 492 "data/maps/HiddenVillage/scripts.pory"
	walk_left
# 492 "data/maps/HiddenVillage/scripts.pory"
	walk_left
# 492 "data/maps/HiddenVillage/scripts.pory"
	walk_left
# 493 "data/maps/HiddenVillage/scripts.pory"
	walk_down
# 493 "data/maps/HiddenVillage/scripts.pory"
	walk_down
# 493 "data/maps/HiddenVillage/scripts.pory"
	walk_down
# 494 "data/maps/HiddenVillage/scripts.pory"
	walk_left
# 494 "data/maps/HiddenVillage/scripts.pory"
	walk_left
# 495 "data/maps/HiddenVillage/scripts.pory"
	walk_down
# 495 "data/maps/HiddenVillage/scripts.pory"
	walk_down
	step_end

# 499 "data/maps/HiddenVillage/scripts.pory"
Movement_StrengthReappear:
# 500 "data/maps/HiddenVillage/scripts.pory"
	walk_right
# 501 "data/maps/HiddenVillage/scripts.pory"
	walk_right
# 502 "data/maps/HiddenVillage/scripts.pory"
	walk_right
# 503 "data/maps/HiddenVillage/scripts.pory"
	walk_right
# 504 "data/maps/HiddenVillage/scripts.pory"
	delay_16
# 504 "data/maps/HiddenVillage/scripts.pory"
	delay_16
# 504 "data/maps/HiddenVillage/scripts.pory"
	delay_16
# 504 "data/maps/HiddenVillage/scripts.pory"
	delay_16
# 505 "data/maps/HiddenVillage/scripts.pory"
	walk_up
# 506 "data/maps/HiddenVillage/scripts.pory"
	face_left
	step_end

# 509 "data/maps/HiddenVillage/scripts.pory"
Movement_HeartReappear:
# 510 "data/maps/HiddenVillage/scripts.pory"
	walk_up
# 510 "data/maps/HiddenVillage/scripts.pory"
	walk_up
# 511 "data/maps/HiddenVillage/scripts.pory"
	walk_right
# 511 "data/maps/HiddenVillage/scripts.pory"
	walk_right
# 511 "data/maps/HiddenVillage/scripts.pory"
	walk_right
# 511 "data/maps/HiddenVillage/scripts.pory"
	walk_right
# 511 "data/maps/HiddenVillage/scripts.pory"
	walk_right
# 511 "data/maps/HiddenVillage/scripts.pory"
	walk_right
# 512 "data/maps/HiddenVillage/scripts.pory"
	walk_slow_up
	step_end

# 515 "data/maps/HiddenVillage/scripts.pory"
Movement_BrainReappear:
# 516 "data/maps/HiddenVillage/scripts.pory"
	delay_8
# 517 "data/maps/HiddenVillage/scripts.pory"
	walk_up
# 517 "data/maps/HiddenVillage/scripts.pory"
	walk_up
# 517 "data/maps/HiddenVillage/scripts.pory"
	walk_up
# 518 "data/maps/HiddenVillage/scripts.pory"
	walk_right
# 518 "data/maps/HiddenVillage/scripts.pory"
	walk_right
# 518 "data/maps/HiddenVillage/scripts.pory"
	walk_right
# 518 "data/maps/HiddenVillage/scripts.pory"
	walk_right
# 518 "data/maps/HiddenVillage/scripts.pory"
	walk_right
# 518 "data/maps/HiddenVillage/scripts.pory"
	walk_right
# 519 "data/maps/HiddenVillage/scripts.pory"
	walk_slow_up
	step_end

# 522 "data/maps/HiddenVillage/scripts.pory"
HiddenVillage_Movement_ShadowFlyOver:
# 523 "data/maps/HiddenVillage/scripts.pory"
	walk_fast_down
# 523 "data/maps/HiddenVillage/scripts.pory"
	walk_fast_down
# 523 "data/maps/HiddenVillage/scripts.pory"
	walk_fast_down
# 523 "data/maps/HiddenVillage/scripts.pory"
	walk_fast_down
# 523 "data/maps/HiddenVillage/scripts.pory"
	walk_fast_down
# 523 "data/maps/HiddenVillage/scripts.pory"
	walk_fast_down
# 523 "data/maps/HiddenVillage/scripts.pory"
	walk_fast_down
# 523 "data/maps/HiddenVillage/scripts.pory"
	walk_fast_down
# 523 "data/maps/HiddenVillage/scripts.pory"
	walk_fast_down
# 523 "data/maps/HiddenVillage/scripts.pory"
	walk_fast_down
# 523 "data/maps/HiddenVillage/scripts.pory"
	walk_fast_down
# 523 "data/maps/HiddenVillage/scripts.pory"
	walk_fast_down
# 523 "data/maps/HiddenVillage/scripts.pory"
	walk_fast_down
# 523 "data/maps/HiddenVillage/scripts.pory"
	walk_fast_down
# 523 "data/maps/HiddenVillage/scripts.pory"
	walk_fast_down
	step_end

# 526 "data/maps/HiddenVillage/scripts.pory"
Movement_WalkToLabGrass:
# 527 "data/maps/HiddenVillage/scripts.pory"
	walk_right
# 528 "data/maps/HiddenVillage/scripts.pory"
	walk_up
# 528 "data/maps/HiddenVillage/scripts.pory"
	walk_up
# 528 "data/maps/HiddenVillage/scripts.pory"
	walk_up
# 528 "data/maps/HiddenVillage/scripts.pory"
	walk_up
# 528 "data/maps/HiddenVillage/scripts.pory"
	walk_up
# 528 "data/maps/HiddenVillage/scripts.pory"
	walk_up
# 529 "data/maps/HiddenVillage/scripts.pory"
	face_down
	step_end

# 532 "data/maps/HiddenVillage/scripts.pory"
Movement_HeadToLab:
# 533 "data/maps/HiddenVillage/scripts.pory"
	walk_down
# 534 "data/maps/HiddenVillage/scripts.pory"
	face_left
# 535 "data/maps/HiddenVillage/scripts.pory"
	delay_16
# 535 "data/maps/HiddenVillage/scripts.pory"
	delay_16
# 536 "data/maps/HiddenVillage/scripts.pory"
	walk_left
# 537 "data/maps/HiddenVillage/scripts.pory"
	walk_down
# 537 "data/maps/HiddenVillage/scripts.pory"
	walk_down
# 537 "data/maps/HiddenVillage/scripts.pory"
	walk_down
# 537 "data/maps/HiddenVillage/scripts.pory"
	walk_down
# 537 "data/maps/HiddenVillage/scripts.pory"
	walk_down
# 538 "data/maps/HiddenVillage/scripts.pory"
	walk_left
# 538 "data/maps/HiddenVillage/scripts.pory"
	walk_left
# 539 "data/maps/HiddenVillage/scripts.pory"
	walk_down
# 539 "data/maps/HiddenVillage/scripts.pory"
	walk_down
# 539 "data/maps/HiddenVillage/scripts.pory"
	walk_down
	step_end

HiddenVillage_EventScript_FriendHeart_Intro_Text_0:
# 94 "data/maps/HiddenVillage/scripts.pory"
	.string "Heart: Good morning {PLAYER}! I was\n"
	.string "wondering if you were going to wake up\l"
	.string "today.\p"
	.string "Everybody else is waiting in the\n"
	.string "backyard, go and see the Elder in his\l"
	.string "lab and let him know you're ready!$"

HiddenVillage_EventScript_ElderClass_Text_0:
# 124 "data/maps/HiddenVillage/scripts.pory"
	.string "Elder: Good, you're all here! Everybody\n"
	.string "gather around.$"

HiddenVillage_EventScript_ElderClass_Text_1:
# 138 "data/maps/HiddenVillage/scripts.pory"
	.string "Elder: Welcome everybody, today we're\n"
	.string "going to be learning about taming\l"
	.string "Pokémon.\p"
	.string "Taming Pokemon is the act of forming\n"
	.string "trust with a Pokémon. Both sides need\l"
	.string "to trust each other.\p"
	.string "--To be continued--$"

HiddenVillage_EventScript_ElderClass_Text_2:
# 157 "data/maps/HiddenVillage/scripts.pory"
	.string "Strength: What was that?!\p"
	.string "Brain: Was that a Pokémon?!\p"
	.string "HEART: There's no way that was a\n"
	.string "Pokémon! Right Elder?!\p"
	.string "$"

HiddenVillage_EventScript_ElderClass_Text_3:
# 161 "data/maps/HiddenVillage/scripts.pory"
	.string "Elder: Alright everybody, that's enough\n"
	.string "for today...\p"
	.string "We can finish this lesson tomorrow!\p"
	.string "STENGTH: Now that class is over let's go\n"
	.string "to the treehouse!$"

HiddenVillage_EventScript_LateTriggerMain_Text_0:
# 249 "data/maps/HiddenVillage/scripts.pory"
	.string "{PLAYER}! You're going to be late! Hurry\n"
	.string "up and see the Village Elder...$"

HiddenVillage_EventScript_DefaultText_Text_0:
# 264 "data/maps/HiddenVillage/scripts.pory"
	.string "DEBUG_MISSING TEXT\n"
	.string "State ({STR_VAR_1})$"

HiddenVillage_EventScript_FriendHeart_Text_0:
# 274 "data/maps/HiddenVillage/scripts.pory"
	.string "Heart: It took you long enough! Hey...\n"
	.string "are you okay?$"

HiddenVillage_EventScript_FriendStrength_Text_0:
# 289 "data/maps/HiddenVillage/scripts.pory"
	.string "Strength: You're finally here! We've\n"
	.string "been waiting for you!$"

HiddenVillage_EventScript_FriendStrength_Text_1:
# 292 "data/maps/HiddenVillage/scripts.pory"
	.string "Strength: Hey {PLAYER}! Do you remember\n"
	.string "how to get into the treehouse?\p"
	.string "Just climb the vine like this!$"

HiddenVillage_EventScript_Lady_Text_0:
# 322 "data/maps/HiddenVillage/scripts.pory"
	.string "The Elder asked for help keeping an eye\n"
	.string "on you kids!$"

HiddenVillage_EventScript_Lady_Text_1:
# 327 "data/maps/HiddenVillage/scripts.pory"
	.string "H-hey! There's nothing past here...\n"
	.string "Weren't you going to see your friends\l"
	.string "at the Treehouse? It's right over\l"
	.string "there!$"

HiddenVillage_EventScript_Lady_Text_2:
# 336 "data/maps/HiddenVillage/scripts.pory"
	.string "You can climb up it using the vine!$"

HiddenVillage_EventScript_Lady_Text_3:
# 345 "data/maps/HiddenVillage/scripts.pory"
	.string "It's pretty late... Isn't it past your\n"
	.string "bedtime?$"
