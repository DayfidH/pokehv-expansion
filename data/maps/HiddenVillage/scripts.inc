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
# 74 "data/maps/HiddenVillage/scripts.pory"
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
	setweather WEATHER_RAIN
# 66 "data/maps/HiddenVillage/scripts.pory"
	doweather
# 67 "data/maps/HiddenVillage/scripts.pory"
	setflag FLAG_TEMP_11
# 68 "data/maps/HiddenVillage/scripts.pory"
	setflag FLAG_TEMP_12
# 69 "data/maps/HiddenVillage/scripts.pory"
	setflag FLAG_TEMP_13
# 70 "data/maps/HiddenVillage/scripts.pory"
	setflag FLAG_TEMP_14
	goto HiddenVillage_OnTransition_4

HiddenVillage_OnTransition_10:
# 75 "data/maps/HiddenVillage/scripts.pory"
	setflag FLAG_TEMP_11
# 76 "data/maps/HiddenVillage/scripts.pory"
	setflag FLAG_TEMP_12
# 77 "data/maps/HiddenVillage/scripts.pory"
	setflag FLAG_TEMP_13
# 78 "data/maps/HiddenVillage/scripts.pory"
	setflag FLAG_TEMP_14
# 79 "data/maps/HiddenVillage/scripts.pory"
	setflag FLAG_TEMP_15
	goto HiddenVillage_OnTransition_4


HiddenVillage_EventScript_FriendHeart_Intro::
# 88 "data/maps/HiddenVillage/scripts.pory"
	lockall
# 90 "data/maps/HiddenVillage/scripts.pory"
	applymovement 6, Common_Movement_ExclamationMark
# 91 "data/maps/HiddenVillage/scripts.pory"
	playse SE_PIN
# 92 "data/maps/HiddenVillage/scripts.pory"
	waitmovement 0
# 93 "data/maps/HiddenVillage/scripts.pory"
	applymovement 6, Heart_Movement_TowardsPlayer
# 94 "data/maps/HiddenVillage/scripts.pory"
	waitmovement 0
# 95 "data/maps/HiddenVillage/scripts.pory"
	applymovement 6, Common_Movement_FaceUp
# 97 "data/maps/HiddenVillage/scripts.pory"
	msgbox HiddenVillage_EventScript_FriendHeart_Intro_Text_0
# 98 "data/maps/HiddenVillage/scripts.pory"
	closemessage
# 100 "data/maps/HiddenVillage/scripts.pory"
	applymovement 6, Heart_RunToBackyard
# 101 "data/maps/HiddenVillage/scripts.pory"
	waitmovement 0
# 102 "data/maps/HiddenVillage/scripts.pory"
	removeobject 6
# 104 "data/maps/HiddenVillage/scripts.pory"
	setflag FLAG_HIDDEN_VILLAGE_HEART_INTRO_COMPLETE
# 105 "data/maps/HiddenVillage/scripts.pory"
	setvar VAR_TEMP_0, 1
# 107 "data/maps/HiddenVillage/scripts.pory"
	releaseall
	end


HiddenVillage_EventScript_ElderClass_Left::
# 115 "data/maps/HiddenVillage/scripts.pory"
	lockall
# 116 "data/maps/HiddenVillage/scripts.pory"
	setvar VAR_TEMP_1, 0
# 117 "data/maps/HiddenVillage/scripts.pory"
	goto HiddenVillage_EventScript_ElderClass
	return


HiddenVillage_EventScript_ElderClass_Right::
# 121 "data/maps/HiddenVillage/scripts.pory"
	lockall
# 122 "data/maps/HiddenVillage/scripts.pory"
	setvar VAR_TEMP_1, 1
# 123 "data/maps/HiddenVillage/scripts.pory"
	goto HiddenVillage_EventScript_ElderClass
	return


HiddenVillage_EventScript_ElderClass::
# 127 "data/maps/HiddenVillage/scripts.pory"
	msgbox HiddenVillage_EventScript_ElderClass_Text_0
# 128 "data/maps/HiddenVillage/scripts.pory"
	closemessage
# 130 "data/maps/HiddenVillage/scripts.pory"
	compare VAR_TEMP_1, 0
	goto_if_eq HiddenVillage_EventScript_ElderClass_2
# 133 "data/maps/HiddenVillage/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, HiddenVillage_Movement_PlayerToClassRight
HiddenVillage_EventScript_ElderClass_1:
# 136 "data/maps/HiddenVillage/scripts.pory"
	applymovement 4, HiddenVillage_Movement_StrengthToClass
# 137 "data/maps/HiddenVillage/scripts.pory"
	applymovement 3, HiddenVillage_Movement_HeartToClass
# 138 "data/maps/HiddenVillage/scripts.pory"
	applymovement 2, HiddenVillage_Movement_BrainToClass
# 139 "data/maps/HiddenVillage/scripts.pory"
	waitmovement 0
# 141 "data/maps/HiddenVillage/scripts.pory"
	msgbox HiddenVillage_EventScript_ElderClass_Text_1
# 142 "data/maps/HiddenVillage/scripts.pory"
	closemessage
# 143 "data/maps/HiddenVillage/scripts.pory"
	clearflag FLAG_TEMP_14
# 144 "data/maps/HiddenVillage/scripts.pory"
	addobject 11
# 145 "data/maps/HiddenVillage/scripts.pory"
	applymovement 11, HiddenVillage_Movement_ShadowFlyOver
# 146 "data/maps/HiddenVillage/scripts.pory"
	playse SE_M_FLY
# 148 "data/maps/HiddenVillage/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 149 "data/maps/HiddenVillage/scripts.pory"
	playse SE_PIN
# 150 "data/maps/HiddenVillage/scripts.pory"
	waitmovement
# 151 "data/maps/HiddenVillage/scripts.pory"
	applymovement 2, Common_Movement_ExclamationMark
# 152 "data/maps/HiddenVillage/scripts.pory"
	playse SE_PIN
# 153 "data/maps/HiddenVillage/scripts.pory"
	waitmovement
# 154 "data/maps/HiddenVillage/scripts.pory"
	applymovement 3, Common_Movement_ExclamationMark
# 155 "data/maps/HiddenVillage/scripts.pory"
	playse SE_PIN
# 156 "data/maps/HiddenVillage/scripts.pory"
	waitmovement
# 157 "data/maps/HiddenVillage/scripts.pory"
	applymovement 4, Common_Movement_ExclamationMark
# 158 "data/maps/HiddenVillage/scripts.pory"
	playse SE_PIN
# 159 "data/maps/HiddenVillage/scripts.pory"
	waitmovement
# 160 "data/maps/HiddenVillage/scripts.pory"
	msgbox HiddenVillage_EventScript_ElderClass_Text_2
# 161 "data/maps/HiddenVillage/scripts.pory"
	closemessage
# 162 "data/maps/HiddenVillage/scripts.pory"
	setweather WEATHER_RAIN
# 163 "data/maps/HiddenVillage/scripts.pory"
	doweather
# 164 "data/maps/HiddenVillage/scripts.pory"
	msgbox HiddenVillage_EventScript_ElderClass_Text_3
# 165 "data/maps/HiddenVillage/scripts.pory"
	setflag FLAG_TEMP_14
# 166 "data/maps/HiddenVillage/scripts.pory"
	removeobject 11
# 167 "data/maps/HiddenVillage/scripts.pory"
	closemessage
# 170 "data/maps/HiddenVillage/scripts.pory"
	applymovement 4, Movement_StrengthWalkOff
# 171 "data/maps/HiddenVillage/scripts.pory"
	applymovement 3, Movement_HeartWalkOff
# 172 "data/maps/HiddenVillage/scripts.pory"
	applymovement 2, Movement_BrainWalkOff
# 173 "data/maps/HiddenVillage/scripts.pory"
	waitmovement 0
# 175 "data/maps/HiddenVillage/scripts.pory"
	applymovement 1, Movement_WalkToLabGrass
# 176 "data/maps/HiddenVillage/scripts.pory"
	applymovement 5, Movement_HeadToLab
# 177 "data/maps/HiddenVillage/scripts.pory"
	waitmovement 0
# 180 "data/maps/HiddenVillage/scripts.pory"
	removeobject 4
# 181 "data/maps/HiddenVillage/scripts.pory"
	removeobject 3
# 182 "data/maps/HiddenVillage/scripts.pory"
	removeobject 2
# 183 "data/maps/HiddenVillage/scripts.pory"
	removeobject 5
# 184 "data/maps/HiddenVillage/scripts.pory"
	setflag FLAG_TEMP_11
# 187 "data/maps/HiddenVillage/scripts.pory"
	clearflag FLAG_TEMP_12
# 188 "data/maps/HiddenVillage/scripts.pory"
	clearflag FLAG_TEMP_13
# 189 "data/maps/HiddenVillage/scripts.pory"
	addobject 7
# 190 "data/maps/HiddenVillage/scripts.pory"
	addobject 8
# 191 "data/maps/HiddenVillage/scripts.pory"
	addobject 9
# 194 "data/maps/HiddenVillage/scripts.pory"
	applymovement 7, Movement_StrengthReappear
# 195 "data/maps/HiddenVillage/scripts.pory"
	applymovement 8, Movement_HeartReappear
# 196 "data/maps/HiddenVillage/scripts.pory"
	applymovement 9, Movement_BrainReappear
# 199 "data/maps/HiddenVillage/scripts.pory"
	waitmovement 8
# 200 "data/maps/HiddenVillage/scripts.pory"
	playse SE_EXIT
# 201 "data/maps/HiddenVillage/scripts.pory"
	removeobject 8
# 203 "data/maps/HiddenVillage/scripts.pory"
	waitmovement 9
# 204 "data/maps/HiddenVillage/scripts.pory"
	playse SE_EXIT
# 205 "data/maps/HiddenVillage/scripts.pory"
	removeobject 9
# 208 "data/maps/HiddenVillage/scripts.pory"
	setflag FLAG_TEMP_12
# 211 "data/maps/HiddenVillage/scripts.pory"
	waitmovement 7
# 212 "data/maps/HiddenVillage/scripts.pory"
	setobjectxyperm 7, 11, 11
# 213 "data/maps/HiddenVillage/scripts.pory"
	setobjectmovementtype 7, MOVEMENT_TYPE_FACE_LEFT
# 216 "data/maps/HiddenVillage/scripts.pory"
	setvar VAR_HIDDEN_VILLAGE_STATE, 2
# 218 "data/maps/HiddenVillage/scripts.pory"
	releaseall
	end

HiddenVillage_EventScript_ElderClass_2:
# 131 "data/maps/HiddenVillage/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, HiddenVillage_Movement_PlayerToClassLeft
	goto HiddenVillage_EventScript_ElderClass_1


HiddenVillage_EventScript_LateTriggerLeft::
# 226 "data/maps/HiddenVillage/scripts.pory"
	lockall
# 227 "data/maps/HiddenVillage/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 228 "data/maps/HiddenVillage/scripts.pory"
	playse SE_PIN
# 229 "data/maps/HiddenVillage/scripts.pory"
	waitmovement 0
# 230 "data/maps/HiddenVillage/scripts.pory"
	applymovement 1, Common_Movement_FaceLeft
# 231 "data/maps/HiddenVillage/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 232 "data/maps/HiddenVillage/scripts.pory"
	waitmovement 0
# 233 "data/maps/HiddenVillage/scripts.pory"
	call HiddenVillage_EventScript_LateTriggerMain
# 234 "data/maps/HiddenVillage/scripts.pory"
	releaseall
	end


HiddenVillage_EventScript_LateTriggerRight::
# 239 "data/maps/HiddenVillage/scripts.pory"
	lockall
# 240 "data/maps/HiddenVillage/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 241 "data/maps/HiddenVillage/scripts.pory"
	playse SE_PIN
# 242 "data/maps/HiddenVillage/scripts.pory"
	waitmovement 0
# 243 "data/maps/HiddenVillage/scripts.pory"
	applymovement 1, Common_Movement_FaceRight
# 244 "data/maps/HiddenVillage/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 245 "data/maps/HiddenVillage/scripts.pory"
	waitmovement 0
# 246 "data/maps/HiddenVillage/scripts.pory"
	call HiddenVillage_EventScript_LateTriggerMain
# 247 "data/maps/HiddenVillage/scripts.pory"
	releaseall
	end


HiddenVillage_EventScript_LateTriggerMain::
# 252 "data/maps/HiddenVillage/scripts.pory"
	msgbox HiddenVillage_EventScript_LateTriggerMain_Text_0
# 253 "data/maps/HiddenVillage/scripts.pory"
	closemessage
# 254 "data/maps/HiddenVillage/scripts.pory"
	applymovement 1, Common_Movement_FaceDown
# 255 "data/maps/HiddenVillage/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 256 "data/maps/HiddenVillage/scripts.pory"
	waitmovement 0
	return


HiddenVillage_EventScript_DefaultText::
# 264 "data/maps/HiddenVillage/scripts.pory"
	lock
# 265 "data/maps/HiddenVillage/scripts.pory"
	faceplayer
# 266 "data/maps/HiddenVillage/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_HIDDEN_VILLAGE_STATE
# 267 "data/maps/HiddenVillage/scripts.pory"
	msgbox HiddenVillage_EventScript_DefaultText_Text_0
# 268 "data/maps/HiddenVillage/scripts.pory"
	release
	end


HiddenVillage_EventScript_FriendHeart::
# 273 "data/maps/HiddenVillage/scripts.pory"
	lock
# 274 "data/maps/HiddenVillage/scripts.pory"
	faceplayer
# 275 "data/maps/HiddenVillage/scripts.pory"
	switch VAR_HIDDEN_VILLAGE_STATE
# 276 "data/maps/HiddenVillage/scripts.pory"
	case 1, HiddenVillage_EventScript_FriendHeart_3
# 280 "data/maps/HiddenVillage/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_HIDDEN_VILLAGE_STATE
# 281 "data/maps/HiddenVillage/scripts.pory"
	msgbox HiddenVillage_EventScript_DefaultText_Text_0
HiddenVillage_EventScript_FriendHeart_1:
# 283 "data/maps/HiddenVillage/scripts.pory"
	release
	end

HiddenVillage_EventScript_FriendHeart_3:
# 277 "data/maps/HiddenVillage/scripts.pory"
	msgbox HiddenVillage_EventScript_FriendHeart_Text_0
# 278 "data/maps/HiddenVillage/scripts.pory"
	closemessage
	goto HiddenVillage_EventScript_FriendHeart_1


HiddenVillage_EventScript_FriendStrength::
# 288 "data/maps/HiddenVillage/scripts.pory"
	lock
# 289 "data/maps/HiddenVillage/scripts.pory"
	faceplayer
# 290 "data/maps/HiddenVillage/scripts.pory"
	switch VAR_HIDDEN_VILLAGE_STATE
# 291 "data/maps/HiddenVillage/scripts.pory"
	case 1, HiddenVillage_EventScript_FriendStrength_3
# 294 "data/maps/HiddenVillage/scripts.pory"
	case 2, HiddenVillage_EventScript_FriendStrength_4
# 305 "data/maps/HiddenVillage/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_HIDDEN_VILLAGE_STATE
# 306 "data/maps/HiddenVillage/scripts.pory"
	msgbox HiddenVillage_EventScript_DefaultText_Text_0
HiddenVillage_EventScript_FriendStrength_1:
# 308 "data/maps/HiddenVillage/scripts.pory"
	release
	end

HiddenVillage_EventScript_FriendStrength_3:
# 292 "data/maps/HiddenVillage/scripts.pory"
	msgbox HiddenVillage_EventScript_FriendStrength_Text_0
# 293 "data/maps/HiddenVillage/scripts.pory"
	closemessage
	goto HiddenVillage_EventScript_FriendStrength_1

HiddenVillage_EventScript_FriendStrength_4:
# 295 "data/maps/HiddenVillage/scripts.pory"
	msgbox HiddenVillage_EventScript_FriendStrength_Text_1
# 296 "data/maps/HiddenVillage/scripts.pory"
	closemessage
# 298 "data/maps/HiddenVillage/scripts.pory"
	applymovement 7, Movement_ClimbTheVine
# 299 "data/maps/HiddenVillage/scripts.pory"
	waitmovement 0
# 300 "data/maps/HiddenVillage/scripts.pory"
	playse SE_EXIT
# 301 "data/maps/HiddenVillage/scripts.pory"
	removeobject 7
# 303 "data/maps/HiddenVillage/scripts.pory"
	setvar VAR_HIDDEN_VILLAGE_STATE, 3
	goto HiddenVillage_EventScript_FriendStrength_1


HiddenVillage_EventScript_Lady::
# 314 "data/maps/HiddenVillage/scripts.pory"
	lock
# 315 "data/maps/HiddenVillage/scripts.pory"
	faceplayer
# 317 "data/maps/HiddenVillage/scripts.pory"
	switch VAR_HIDDEN_VILLAGE_STATE
# 318 "data/maps/HiddenVillage/scripts.pory"
	case 0, HiddenVillage_EventScript_Lady_3
# 324 "data/maps/HiddenVillage/scripts.pory"
	case 1, HiddenVillage_EventScript_Lady_4
# 328 "data/maps/HiddenVillage/scripts.pory"
	case 2, HiddenVillage_EventScript_Lady_5
# 347 "data/maps/HiddenVillage/scripts.pory"
	case 3, HiddenVillage_EventScript_Lady_6
# 351 "data/maps/HiddenVillage/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_HIDDEN_VILLAGE_STATE
# 352 "data/maps/HiddenVillage/scripts.pory"
	msgbox HiddenVillage_EventScript_DefaultText_Text_0
# 353 "data/maps/HiddenVillage/scripts.pory"
	closemessage
HiddenVillage_EventScript_Lady_1:
# 355 "data/maps/HiddenVillage/scripts.pory"
	release
	end

HiddenVillage_EventScript_Lady_3:
# 319 "data/maps/HiddenVillage/scripts.pory"
	msgbox HiddenVillage_EventScript_LateTriggerMain_Text_0
# 320 "data/maps/HiddenVillage/scripts.pory"
	closemessage
# 321 "data/maps/HiddenVillage/scripts.pory"
	applymovement 1, Common_Movement_FaceDown
# 322 "data/maps/HiddenVillage/scripts.pory"
	waitmovement 0
	goto HiddenVillage_EventScript_Lady_1

HiddenVillage_EventScript_Lady_4:
# 325 "data/maps/HiddenVillage/scripts.pory"
	msgbox HiddenVillage_EventScript_Lady_Text_0
# 326 "data/maps/HiddenVillage/scripts.pory"
	closemessage
	goto HiddenVillage_EventScript_Lady_1

HiddenVillage_EventScript_Lady_5:
# 330 "data/maps/HiddenVillage/scripts.pory"
	msgbox HiddenVillage_EventScript_Lady_Text_1
# 331 "data/maps/HiddenVillage/scripts.pory"
	closemessage
# 333 "data/maps/HiddenVillage/scripts.pory"
	special SpawnCameraObject
# 334 "data/maps/HiddenVillage/scripts.pory"
	applymovement 1, Common_Movement_FaceLeft
# 335 "data/maps/HiddenVillage/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 336 "data/maps/HiddenVillage/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Movement_CameraPanToTreehouse_FromLady
# 337 "data/maps/HiddenVillage/scripts.pory"
	waitmovement 0
# 339 "data/maps/HiddenVillage/scripts.pory"
	msgbox HiddenVillage_EventScript_Lady_Text_2
# 340 "data/maps/HiddenVillage/scripts.pory"
	closemessage
# 342 "data/maps/HiddenVillage/scripts.pory"
	faceplayer
# 343 "data/maps/HiddenVillage/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Movement_CameraReturnFromTreehouse_FromLady
# 344 "data/maps/HiddenVillage/scripts.pory"
	waitmovement 0
# 345 "data/maps/HiddenVillage/scripts.pory"
	special RemoveCameraObject
	goto HiddenVillage_EventScript_Lady_1

HiddenVillage_EventScript_Lady_6:
# 348 "data/maps/HiddenVillage/scripts.pory"
	msgbox HiddenVillage_EventScript_Lady_Text_3
# 349 "data/maps/HiddenVillage/scripts.pory"
	closemessage
	goto HiddenVillage_EventScript_Lady_1


HiddenVillage_EventScript_LadyTrigger::
# 365 "data/maps/HiddenVillage/scripts.pory"
	lockall
# 366 "data/maps/HiddenVillage/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 367 "data/maps/HiddenVillage/scripts.pory"
	playse SE_PIN
# 368 "data/maps/HiddenVillage/scripts.pory"
	waitmovement 0
# 371 "data/maps/HiddenVillage/scripts.pory"
	applymovement 1, Common_Movement_FaceRight
# 372 "data/maps/HiddenVillage/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 373 "data/maps/HiddenVillage/scripts.pory"
	waitmovement 0
# 376 "data/maps/HiddenVillage/scripts.pory"
	msgbox HiddenVillage_EventScript_Lady_Text_1
# 377 "data/maps/HiddenVillage/scripts.pory"
	closemessage
# 379 "data/maps/HiddenVillage/scripts.pory"
	special SpawnCameraObject
# 381 "data/maps/HiddenVillage/scripts.pory"
	applymovement 1, Common_Movement_FaceLeft
# 382 "data/maps/HiddenVillage/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 383 "data/maps/HiddenVillage/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Movement_CameraPanToTreehouse_FromTrigger
# 384 "data/maps/HiddenVillage/scripts.pory"
	waitmovement 0
# 386 "data/maps/HiddenVillage/scripts.pory"
	msgbox HiddenVillage_EventScript_Lady_Text_2
# 387 "data/maps/HiddenVillage/scripts.pory"
	closemessage
# 390 "data/maps/HiddenVillage/scripts.pory"
	applymovement 1, Common_Movement_FaceRight
# 392 "data/maps/HiddenVillage/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Movement_CameraReturnFromTreehouse_FromTrigger
# 393 "data/maps/HiddenVillage/scripts.pory"
	waitmovement 0
# 394 "data/maps/HiddenVillage/scripts.pory"
	special RemoveCameraObject
# 397 "data/maps/HiddenVillage/scripts.pory"
	applymovement 1, Common_Movement_FaceDown
# 398 "data/maps/HiddenVillage/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 399 "data/maps/HiddenVillage/scripts.pory"
	waitmovement 0
# 401 "data/maps/HiddenVillage/scripts.pory"
	releaseall
	end


# 409 "data/maps/HiddenVillage/scripts.pory"
Heart_Movement_TowardsPlayer:
# 410 "data/maps/HiddenVillage/scripts.pory"
	walk_left
# 410 "data/maps/HiddenVillage/scripts.pory"
	walk_left
# 410 "data/maps/HiddenVillage/scripts.pory"
	walk_left
# 410 "data/maps/HiddenVillage/scripts.pory"
	walk_left
# 410 "data/maps/HiddenVillage/scripts.pory"
	walk_left
	step_end

# 413 "data/maps/HiddenVillage/scripts.pory"
Heart_RunToBackyard:
# 414 "data/maps/HiddenVillage/scripts.pory"
	walk_right
# 414 "data/maps/HiddenVillage/scripts.pory"
	walk_right
# 414 "data/maps/HiddenVillage/scripts.pory"
	walk_right
# 414 "data/maps/HiddenVillage/scripts.pory"
	walk_right
# 414 "data/maps/HiddenVillage/scripts.pory"
	walk_right
# 415 "data/maps/HiddenVillage/scripts.pory"
	walk_up
# 415 "data/maps/HiddenVillage/scripts.pory"
	walk_up
# 415 "data/maps/HiddenVillage/scripts.pory"
	walk_up
# 416 "data/maps/HiddenVillage/scripts.pory"
	walk_right
# 416 "data/maps/HiddenVillage/scripts.pory"
	walk_right
# 416 "data/maps/HiddenVillage/scripts.pory"
	walk_right
	step_end

# 419 "data/maps/HiddenVillage/scripts.pory"
Movement_ClimbTheVine:
# 420 "data/maps/HiddenVillage/scripts.pory"
	walk_right
# 420 "data/maps/HiddenVillage/scripts.pory"
	walk_right
# 421 "data/maps/HiddenVillage/scripts.pory"
	walk_slow_up
	step_end

# 425 "data/maps/HiddenVillage/scripts.pory"
Movement_CameraPanToTreehouse_FromLady:
# 426 "data/maps/HiddenVillage/scripts.pory"
	walk_left
# 426 "data/maps/HiddenVillage/scripts.pory"
	walk_left
	step_end

# 429 "data/maps/HiddenVillage/scripts.pory"
Movement_CameraReturnFromTreehouse_FromLady:
# 430 "data/maps/HiddenVillage/scripts.pory"
	walk_right
# 430 "data/maps/HiddenVillage/scripts.pory"
	walk_right
	step_end

# 434 "data/maps/HiddenVillage/scripts.pory"
Movement_CameraPanToTreehouse_FromTrigger:
# 436 "data/maps/HiddenVillage/scripts.pory"
	walk_left
# 436 "data/maps/HiddenVillage/scripts.pory"
	walk_left
# 436 "data/maps/HiddenVillage/scripts.pory"
	walk_left
# 437 "data/maps/HiddenVillage/scripts.pory"
	walk_down
	step_end

# 440 "data/maps/HiddenVillage/scripts.pory"
Movement_CameraReturnFromTreehouse_FromTrigger:
# 442 "data/maps/HiddenVillage/scripts.pory"
	walk_up
# 443 "data/maps/HiddenVillage/scripts.pory"
	walk_right
# 443 "data/maps/HiddenVillage/scripts.pory"
	walk_right
# 443 "data/maps/HiddenVillage/scripts.pory"
	walk_right
	step_end

# 446 "data/maps/HiddenVillage/scripts.pory"
HiddenVillage_Movement_StrengthToClass:
# 447 "data/maps/HiddenVillage/scripts.pory"
	walk_down
# 448 "data/maps/HiddenVillage/scripts.pory"
	walk_left
# 449 "data/maps/HiddenVillage/scripts.pory"
	walk_left
# 450 "data/maps/HiddenVillage/scripts.pory"
	walk_left
# 451 "data/maps/HiddenVillage/scripts.pory"
	walk_down
# 452 "data/maps/HiddenVillage/scripts.pory"
	face_up
	step_end

# 455 "data/maps/HiddenVillage/scripts.pory"
HiddenVillage_Movement_HeartToClass:
# 456 "data/maps/HiddenVillage/scripts.pory"
	walk_left
# 456 "data/maps/HiddenVillage/scripts.pory"
	walk_left
# 456 "data/maps/HiddenVillage/scripts.pory"
	walk_left
# 457 "data/maps/HiddenVillage/scripts.pory"
	face_up
	step_end

# 460 "data/maps/HiddenVillage/scripts.pory"
HiddenVillage_Movement_BrainToClass:
# 461 "data/maps/HiddenVillage/scripts.pory"
	delay_16
# 462 "data/maps/HiddenVillage/scripts.pory"
	walk_left
# 462 "data/maps/HiddenVillage/scripts.pory"
	walk_left
# 462 "data/maps/HiddenVillage/scripts.pory"
	walk_left
# 463 "data/maps/HiddenVillage/scripts.pory"
	face_up
	step_end

# 467 "data/maps/HiddenVillage/scripts.pory"
HiddenVillage_Movement_PlayerToClassLeft:
# 468 "data/maps/HiddenVillage/scripts.pory"
	walk_up
# 469 "data/maps/HiddenVillage/scripts.pory"
	walk_right
# 470 "data/maps/HiddenVillage/scripts.pory"
	face_up
	step_end

# 473 "data/maps/HiddenVillage/scripts.pory"
HiddenVillage_Movement_PlayerToClassRight:
# 474 "data/maps/HiddenVillage/scripts.pory"
	walk_up
	step_end

# 478 "data/maps/HiddenVillage/scripts.pory"
Movement_StrengthWalkOff:
# 479 "data/maps/HiddenVillage/scripts.pory"
	walk_down
# 479 "data/maps/HiddenVillage/scripts.pory"
	walk_down
# 479 "data/maps/HiddenVillage/scripts.pory"
	walk_down
# 479 "data/maps/HiddenVillage/scripts.pory"
	walk_down
# 480 "data/maps/HiddenVillage/scripts.pory"
	walk_left
# 480 "data/maps/HiddenVillage/scripts.pory"
	walk_left
# 481 "data/maps/HiddenVillage/scripts.pory"
	walk_down
# 481 "data/maps/HiddenVillage/scripts.pory"
	walk_down
	step_end

# 484 "data/maps/HiddenVillage/scripts.pory"
Movement_HeartWalkOff:
# 485 "data/maps/HiddenVillage/scripts.pory"
	walk_down
# 486 "data/maps/HiddenVillage/scripts.pory"
	walk_left
# 486 "data/maps/HiddenVillage/scripts.pory"
	walk_left
# 487 "data/maps/HiddenVillage/scripts.pory"
	walk_down
# 487 "data/maps/HiddenVillage/scripts.pory"
	walk_down
# 487 "data/maps/HiddenVillage/scripts.pory"
	walk_down
# 488 "data/maps/HiddenVillage/scripts.pory"
	walk_left
# 488 "data/maps/HiddenVillage/scripts.pory"
	walk_left
# 489 "data/maps/HiddenVillage/scripts.pory"
	walk_down
# 489 "data/maps/HiddenVillage/scripts.pory"
	walk_down
	step_end

# 492 "data/maps/HiddenVillage/scripts.pory"
Movement_BrainWalkOff:
# 493 "data/maps/HiddenVillage/scripts.pory"
	walk_down
# 494 "data/maps/HiddenVillage/scripts.pory"
	delay_8
# 495 "data/maps/HiddenVillage/scripts.pory"
	walk_left
# 495 "data/maps/HiddenVillage/scripts.pory"
	walk_left
# 495 "data/maps/HiddenVillage/scripts.pory"
	walk_left
# 496 "data/maps/HiddenVillage/scripts.pory"
	walk_down
# 496 "data/maps/HiddenVillage/scripts.pory"
	walk_down
# 496 "data/maps/HiddenVillage/scripts.pory"
	walk_down
# 497 "data/maps/HiddenVillage/scripts.pory"
	walk_left
# 497 "data/maps/HiddenVillage/scripts.pory"
	walk_left
# 498 "data/maps/HiddenVillage/scripts.pory"
	walk_down
# 498 "data/maps/HiddenVillage/scripts.pory"
	walk_down
	step_end

# 502 "data/maps/HiddenVillage/scripts.pory"
Movement_StrengthReappear:
# 503 "data/maps/HiddenVillage/scripts.pory"
	walk_right
# 504 "data/maps/HiddenVillage/scripts.pory"
	walk_right
# 505 "data/maps/HiddenVillage/scripts.pory"
	walk_right
# 506 "data/maps/HiddenVillage/scripts.pory"
	walk_right
# 507 "data/maps/HiddenVillage/scripts.pory"
	delay_16
# 507 "data/maps/HiddenVillage/scripts.pory"
	delay_16
# 507 "data/maps/HiddenVillage/scripts.pory"
	delay_16
# 507 "data/maps/HiddenVillage/scripts.pory"
	delay_16
# 508 "data/maps/HiddenVillage/scripts.pory"
	walk_up
# 509 "data/maps/HiddenVillage/scripts.pory"
	face_left
	step_end

# 512 "data/maps/HiddenVillage/scripts.pory"
Movement_HeartReappear:
# 513 "data/maps/HiddenVillage/scripts.pory"
	walk_up
# 513 "data/maps/HiddenVillage/scripts.pory"
	walk_up
# 514 "data/maps/HiddenVillage/scripts.pory"
	walk_right
# 514 "data/maps/HiddenVillage/scripts.pory"
	walk_right
# 514 "data/maps/HiddenVillage/scripts.pory"
	walk_right
# 514 "data/maps/HiddenVillage/scripts.pory"
	walk_right
# 514 "data/maps/HiddenVillage/scripts.pory"
	walk_right
# 514 "data/maps/HiddenVillage/scripts.pory"
	walk_right
# 515 "data/maps/HiddenVillage/scripts.pory"
	walk_slow_up
	step_end

# 518 "data/maps/HiddenVillage/scripts.pory"
Movement_BrainReappear:
# 519 "data/maps/HiddenVillage/scripts.pory"
	delay_8
# 520 "data/maps/HiddenVillage/scripts.pory"
	walk_up
# 520 "data/maps/HiddenVillage/scripts.pory"
	walk_up
# 520 "data/maps/HiddenVillage/scripts.pory"
	walk_up
# 521 "data/maps/HiddenVillage/scripts.pory"
	walk_right
# 521 "data/maps/HiddenVillage/scripts.pory"
	walk_right
# 521 "data/maps/HiddenVillage/scripts.pory"
	walk_right
# 521 "data/maps/HiddenVillage/scripts.pory"
	walk_right
# 521 "data/maps/HiddenVillage/scripts.pory"
	walk_right
# 521 "data/maps/HiddenVillage/scripts.pory"
	walk_right
# 522 "data/maps/HiddenVillage/scripts.pory"
	walk_slow_up
	step_end

# 525 "data/maps/HiddenVillage/scripts.pory"
HiddenVillage_Movement_ShadowFlyOver:
# 526 "data/maps/HiddenVillage/scripts.pory"
	walk_fast_down
# 526 "data/maps/HiddenVillage/scripts.pory"
	walk_fast_down
# 526 "data/maps/HiddenVillage/scripts.pory"
	walk_fast_down
# 526 "data/maps/HiddenVillage/scripts.pory"
	walk_fast_down
# 526 "data/maps/HiddenVillage/scripts.pory"
	walk_fast_down
# 526 "data/maps/HiddenVillage/scripts.pory"
	walk_fast_down
# 526 "data/maps/HiddenVillage/scripts.pory"
	walk_fast_down
# 526 "data/maps/HiddenVillage/scripts.pory"
	walk_fast_down
# 526 "data/maps/HiddenVillage/scripts.pory"
	walk_fast_down
# 526 "data/maps/HiddenVillage/scripts.pory"
	walk_fast_down
# 526 "data/maps/HiddenVillage/scripts.pory"
	walk_fast_down
# 526 "data/maps/HiddenVillage/scripts.pory"
	walk_fast_down
# 526 "data/maps/HiddenVillage/scripts.pory"
	walk_fast_down
# 526 "data/maps/HiddenVillage/scripts.pory"
	walk_fast_down
# 526 "data/maps/HiddenVillage/scripts.pory"
	walk_fast_down
	step_end

# 529 "data/maps/HiddenVillage/scripts.pory"
Movement_WalkToLabGrass:
# 530 "data/maps/HiddenVillage/scripts.pory"
	walk_right
# 531 "data/maps/HiddenVillage/scripts.pory"
	walk_up
# 531 "data/maps/HiddenVillage/scripts.pory"
	walk_up
# 531 "data/maps/HiddenVillage/scripts.pory"
	walk_up
# 531 "data/maps/HiddenVillage/scripts.pory"
	walk_up
# 531 "data/maps/HiddenVillage/scripts.pory"
	walk_up
# 531 "data/maps/HiddenVillage/scripts.pory"
	walk_up
# 532 "data/maps/HiddenVillage/scripts.pory"
	face_down
	step_end

# 535 "data/maps/HiddenVillage/scripts.pory"
Movement_HeadToLab:
# 536 "data/maps/HiddenVillage/scripts.pory"
	walk_down
# 537 "data/maps/HiddenVillage/scripts.pory"
	face_left
# 538 "data/maps/HiddenVillage/scripts.pory"
	delay_16
# 538 "data/maps/HiddenVillage/scripts.pory"
	delay_16
# 538 "data/maps/HiddenVillage/scripts.pory"
	delay_16
# 538 "data/maps/HiddenVillage/scripts.pory"
	delay_16
# 539 "data/maps/HiddenVillage/scripts.pory"
	walk_left
# 540 "data/maps/HiddenVillage/scripts.pory"
	walk_down
# 540 "data/maps/HiddenVillage/scripts.pory"
	walk_down
# 540 "data/maps/HiddenVillage/scripts.pory"
	walk_down
# 540 "data/maps/HiddenVillage/scripts.pory"
	walk_down
# 540 "data/maps/HiddenVillage/scripts.pory"
	walk_down
# 541 "data/maps/HiddenVillage/scripts.pory"
	walk_left
# 541 "data/maps/HiddenVillage/scripts.pory"
	walk_left
# 542 "data/maps/HiddenVillage/scripts.pory"
	walk_down
# 542 "data/maps/HiddenVillage/scripts.pory"
	walk_down
# 542 "data/maps/HiddenVillage/scripts.pory"
	walk_down
	step_end

EventScript_HiddenVillageBirthdayWarp::
# 548 "data/maps/HiddenVillage/scripts.pory"
	lockall
# 551 "data/maps/HiddenVillage/scripts.pory"
	opendoor 4, 25
# 552 "data/maps/HiddenVillage/scripts.pory"
	waitdooranim
# 555 "data/maps/HiddenVillage/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_WalkIntoDoor
# 556 "data/maps/HiddenVillage/scripts.pory"
	waitmovement 0
# 559 "data/maps/HiddenVillage/scripts.pory"
	warp MAP_HIDDEN_VILLAGE_PLAYER_HOUSE_PARTY, 3, 8
# 560 "data/maps/HiddenVillage/scripts.pory"
	waitstate
# 561 "data/maps/HiddenVillage/scripts.pory"
	releaseall
	end


# 565 "data/maps/HiddenVillage/scripts.pory"
Movement_WalkIntoDoor:
# 566 "data/maps/HiddenVillage/scripts.pory"
	walk_up
# 567 "data/maps/HiddenVillage/scripts.pory"
	set_invisible
# 568 "data/maps/HiddenVillage/scripts.pory"
	step_end

HiddenVillage_EventScript_FriendHeart_Intro_Text_0:
# 97 "data/maps/HiddenVillage/scripts.pory"
	.string "Heart: Good morning {PLAYER}! I was\n"
	.string "wondering if you were going to wake up\l"
	.string "today.\p"
	.string "Everybody else is waiting in the\n"
	.string "backyard, go and see the Elder in his\l"
	.string "lab and let him know you're ready!$"

HiddenVillage_EventScript_ElderClass_Text_0:
# 127 "data/maps/HiddenVillage/scripts.pory"
	.string "Elder: Good, you're all here! Everybody\n"
	.string "gather around.$"

HiddenVillage_EventScript_ElderClass_Text_1:
# 141 "data/maps/HiddenVillage/scripts.pory"
	.string "Elder: Welcome everybody, today we're\n"
	.string "going to be learning about taming\l"
	.string "Pokémon.\p"
	.string "Taming Pokemon is the act of forming\n"
	.string "trust with a Pokémon. Both sides need\l"
	.string "to trust each other.\p"
	.string "--To be continued--$"

HiddenVillage_EventScript_ElderClass_Text_2:
# 160 "data/maps/HiddenVillage/scripts.pory"
	.string "Strength: What was that?!\p"
	.string "Brain: Was that a Pokémon?!\p"
	.string "HEART: There's no way that was a\n"
	.string "Pokémon! Right Elder?!$"

HiddenVillage_EventScript_ElderClass_Text_3:
# 164 "data/maps/HiddenVillage/scripts.pory"
	.string "Elder: Alright everybody, that's enough\n"
	.string "for today...\p"
	.string "We can finish this lesson tomorrow!\p"
	.string "STENGTH: Now that class is over let's go\n"
	.string "to the treehouse!$"

HiddenVillage_EventScript_LateTriggerMain_Text_0:
# 252 "data/maps/HiddenVillage/scripts.pory"
	.string "{PLAYER}! You're going to be late! Hurry\n"
	.string "up and see the Village Elder...$"

HiddenVillage_EventScript_DefaultText_Text_0:
# 267 "data/maps/HiddenVillage/scripts.pory"
	.string "DEBUG_MISSING TEXT\n"
	.string "State ({STR_VAR_1})$"

HiddenVillage_EventScript_FriendHeart_Text_0:
# 277 "data/maps/HiddenVillage/scripts.pory"
	.string "Heart: It took you long enough! Hey...\n"
	.string "are you okay?$"

HiddenVillage_EventScript_FriendStrength_Text_0:
# 292 "data/maps/HiddenVillage/scripts.pory"
	.string "Strength: You're finally here! We've\n"
	.string "been waiting for you!$"

HiddenVillage_EventScript_FriendStrength_Text_1:
# 295 "data/maps/HiddenVillage/scripts.pory"
	.string "Strength: Hey {PLAYER}! Do you remember\n"
	.string "how to get into the treehouse?\p"
	.string "Just climb the vine like this!$"

HiddenVillage_EventScript_Lady_Text_0:
# 325 "data/maps/HiddenVillage/scripts.pory"
	.string "The Elder asked for help keeping an eye\n"
	.string "on you kids!$"

HiddenVillage_EventScript_Lady_Text_1:
# 330 "data/maps/HiddenVillage/scripts.pory"
	.string "H-hey! There's nothing past here...\n"
	.string "Weren't you going to see your friends\l"
	.string "at the Treehouse? It's right over\l"
	.string "there!$"

HiddenVillage_EventScript_Lady_Text_2:
# 339 "data/maps/HiddenVillage/scripts.pory"
	.string "You can climb up it using the vine!$"

HiddenVillage_EventScript_Lady_Text_3:
# 348 "data/maps/HiddenVillage/scripts.pory"
	.string "It's pretty late... Isn't it past your\n"
	.string "bedtime?$"
