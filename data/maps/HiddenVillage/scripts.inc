HiddenVillage_MapScripts::
# 17 "data/maps/HiddenVillage/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, HiddenVillage_OnTransition
# 18 "data/maps/HiddenVillage/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, HiddenVillage_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
# 21 "data/maps/HiddenVillage/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, HiddenVillage_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
	.byte 0

HiddenVillage_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 19 "data/maps/HiddenVillage/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, HiddenVillage_EventScript_FriendHeart_Intro
	.2byte 0

HiddenVillage_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 22 "data/maps/HiddenVillage/scripts.pory"
	map_script_2 VAR_TEMP_2, 0, HiddenVillage_EventScript_FaceRight
	.2byte 0


HiddenVillage_EventScript_FaceRight::
# 27 "data/maps/HiddenVillage/scripts.pory"
	getplayerxy VAR_TEMP_3, VAR_TEMP_4
# 30 "data/maps/HiddenVillage/scripts.pory"
	compare VAR_TEMP_3, 0
	goto_if_eq HiddenVillage_EventScript_FaceRight_2
	return

HiddenVillage_EventScript_FaceRight_1:
# 31 "data/maps/HiddenVillage/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
	return

HiddenVillage_EventScript_FaceRight_2:
# 30 "data/maps/HiddenVillage/scripts.pory"
	compare VAR_TEMP_4, 14
	goto_if_eq HiddenVillage_EventScript_FaceRight_1
# 30 "data/maps/HiddenVillage/scripts.pory"
	compare VAR_TEMP_4, 15
	goto_if_eq HiddenVillage_EventScript_FaceRight_1
	return


HiddenVillage_OnTransition::
# 40 "data/maps/HiddenVillage/scripts.pory"
	goto_if_set FLAG_HIDDEN_VILLAGE_HEART_INTRO_COMPLETE, HiddenVillage_OnTransition_2
HiddenVillage_OnTransition_1:
# 44 "data/maps/HiddenVillage/scripts.pory"
	switch VAR_HIDDEN_VILLAGE_STATE
# 46 "data/maps/HiddenVillage/scripts.pory"
	case 0, HiddenVillage_OnTransition_6
# 51 "data/maps/HiddenVillage/scripts.pory"
	case 1, HiddenVillage_OnTransition_7
# 58 "data/maps/HiddenVillage/scripts.pory"
	case 2, HiddenVillage_OnTransition_8
# 76 "data/maps/HiddenVillage/scripts.pory"
	case 3, HiddenVillage_OnTransition_9
# 84 "data/maps/HiddenVillage/scripts.pory"
	case 4, HiddenVillage_OnTransition_10
HiddenVillage_OnTransition_4:
	end

HiddenVillage_OnTransition_2:
# 41 "data/maps/HiddenVillage/scripts.pory"
	setvar VAR_TEMP_1, 1
	goto HiddenVillage_OnTransition_1

HiddenVillage_OnTransition_6:
# 47 "data/maps/HiddenVillage/scripts.pory"
	setflag FLAG_TEMP_12
# 48 "data/maps/HiddenVillage/scripts.pory"
	setflag FLAG_TEMP_13
# 49 "data/maps/HiddenVillage/scripts.pory"
	setflag FLAG_TEMP_14
	goto HiddenVillage_OnTransition_4

HiddenVillage_OnTransition_7:
# 52 "data/maps/HiddenVillage/scripts.pory"
	setobjectxyperm 1, 14, 14
# 53 "data/maps/HiddenVillage/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_LOOK_AROUND
# 54 "data/maps/HiddenVillage/scripts.pory"
	setflag FLAG_TEMP_12
# 55 "data/maps/HiddenVillage/scripts.pory"
	setflag FLAG_TEMP_13
# 56 "data/maps/HiddenVillage/scripts.pory"
	setflag FLAG_TEMP_14
	goto HiddenVillage_OnTransition_4

HiddenVillage_OnTransition_8:
# 59 "data/maps/HiddenVillage/scripts.pory"
	setflag FLAG_TEMP_14
# 60 "data/maps/HiddenVillage/scripts.pory"
	setobjectxyperm 1, 15, 8
# 61 "data/maps/HiddenVillage/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_DOWN
# 64 "data/maps/HiddenVillage/scripts.pory"
	setflag FLAG_TEMP_11
# 67 "data/maps/HiddenVillage/scripts.pory"
	setflag FLAG_TEMP_12
# 70 "data/maps/HiddenVillage/scripts.pory"
	setobjectxyperm 7, 11, 11
# 71 "data/maps/HiddenVillage/scripts.pory"
	setobjectmovementtype 7, MOVEMENT_TYPE_FACE_LEFT
# 72 "data/maps/HiddenVillage/scripts.pory"
	setweather WEATHER_RAIN
# 73 "data/maps/HiddenVillage/scripts.pory"
	doweather
	goto HiddenVillage_OnTransition_4

HiddenVillage_OnTransition_9:
# 77 "data/maps/HiddenVillage/scripts.pory"
	setflag FLAG_TEMP_11
# 78 "data/maps/HiddenVillage/scripts.pory"
	setflag FLAG_TEMP_12
# 79 "data/maps/HiddenVillage/scripts.pory"
	setflag FLAG_TEMP_13
# 80 "data/maps/HiddenVillage/scripts.pory"
	setflag FLAG_TEMP_14
	goto HiddenVillage_OnTransition_4

HiddenVillage_OnTransition_10:
# 85 "data/maps/HiddenVillage/scripts.pory"
	setflag FLAG_TEMP_11
# 86 "data/maps/HiddenVillage/scripts.pory"
	setflag FLAG_TEMP_12
# 87 "data/maps/HiddenVillage/scripts.pory"
	setflag FLAG_TEMP_13
# 88 "data/maps/HiddenVillage/scripts.pory"
	setflag FLAG_TEMP_14
	goto HiddenVillage_OnTransition_4


HiddenVillage_EventScript_WarpToFarmsTop::
# 94 "data/maps/HiddenVillage/scripts.pory"
	warp MAP_HIDDEN_FARMS, 27, 14
# 95 "data/maps/HiddenVillage/scripts.pory"
	waitstate
	end


HiddenVillage_EventScript_WarpToFarmsBottom::
# 100 "data/maps/HiddenVillage/scripts.pory"
	warp MAP_HIDDEN_FARMS, 27, 15
# 101 "data/maps/HiddenVillage/scripts.pory"
	waitstate
	end


HiddenVillage_EventScript_FriendHeart_Intro::
# 109 "data/maps/HiddenVillage/scripts.pory"
	lockall
# 111 "data/maps/HiddenVillage/scripts.pory"
	applymovement 6, Common_Movement_ExclamationMark
# 112 "data/maps/HiddenVillage/scripts.pory"
	playse SE_PIN
# 113 "data/maps/HiddenVillage/scripts.pory"
	waitmovement 0
# 114 "data/maps/HiddenVillage/scripts.pory"
	applymovement 6, Heart_Movement_TowardsPlayer
# 115 "data/maps/HiddenVillage/scripts.pory"
	waitmovement 0
# 116 "data/maps/HiddenVillage/scripts.pory"
	applymovement 6, Common_Movement_FaceUp
# 118 "data/maps/HiddenVillage/scripts.pory"
	msgbox HiddenVillage_EventScript_FriendHeart_Intro_Text_0
# 119 "data/maps/HiddenVillage/scripts.pory"
	closemessage
# 121 "data/maps/HiddenVillage/scripts.pory"
	applymovement 6, Heart_RunToBackyard
# 122 "data/maps/HiddenVillage/scripts.pory"
	waitmovement 0
# 123 "data/maps/HiddenVillage/scripts.pory"
	removeobject 6
# 125 "data/maps/HiddenVillage/scripts.pory"
	setflag FLAG_HIDDEN_VILLAGE_HEART_INTRO_COMPLETE
# 126 "data/maps/HiddenVillage/scripts.pory"
	setvar VAR_TEMP_1, 1
# 128 "data/maps/HiddenVillage/scripts.pory"
	releaseall
	end


HiddenVillage_EventScript_ElderClass_Left::
# 136 "data/maps/HiddenVillage/scripts.pory"
	lockall
# 137 "data/maps/HiddenVillage/scripts.pory"
	setvar VAR_TEMP_1, 0
# 138 "data/maps/HiddenVillage/scripts.pory"
	goto HiddenVillage_EventScript_ElderClass
	return


HiddenVillage_EventScript_ElderClass_Right::
# 142 "data/maps/HiddenVillage/scripts.pory"
	lockall
# 143 "data/maps/HiddenVillage/scripts.pory"
	setvar VAR_TEMP_1, 1
# 144 "data/maps/HiddenVillage/scripts.pory"
	goto HiddenVillage_EventScript_ElderClass
	return


HiddenVillage_EventScript_ElderClass::
# 148 "data/maps/HiddenVillage/scripts.pory"
	msgbox HiddenVillage_EventScript_ElderClass_Text_0
# 149 "data/maps/HiddenVillage/scripts.pory"
	closemessage
# 151 "data/maps/HiddenVillage/scripts.pory"
	compare VAR_TEMP_1, 0
	goto_if_eq HiddenVillage_EventScript_ElderClass_2
# 154 "data/maps/HiddenVillage/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, HiddenVillage_Movement_PlayerToClassRight
HiddenVillage_EventScript_ElderClass_1:
# 157 "data/maps/HiddenVillage/scripts.pory"
	applymovement 4, HiddenVillage_Movement_StrengthToClass
# 158 "data/maps/HiddenVillage/scripts.pory"
	applymovement 3, HiddenVillage_Movement_HeartToClass
# 159 "data/maps/HiddenVillage/scripts.pory"
	applymovement 2, HiddenVillage_Movement_BrainToClass
# 160 "data/maps/HiddenVillage/scripts.pory"
	waitmovement 0
# 162 "data/maps/HiddenVillage/scripts.pory"
	msgbox HiddenVillage_EventScript_ElderClass_Text_1
# 163 "data/maps/HiddenVillage/scripts.pory"
	closemessage
# 164 "data/maps/HiddenVillage/scripts.pory"
	clearflag FLAG_TEMP_14
# 165 "data/maps/HiddenVillage/scripts.pory"
	addobject 11
# 166 "data/maps/HiddenVillage/scripts.pory"
	applymovement 11, HiddenVillage_Movement_ShadowFlyOver
# 167 "data/maps/HiddenVillage/scripts.pory"
	playse SE_M_FLY
# 169 "data/maps/HiddenVillage/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 170 "data/maps/HiddenVillage/scripts.pory"
	playse SE_PIN
# 171 "data/maps/HiddenVillage/scripts.pory"
	waitmovement
# 172 "data/maps/HiddenVillage/scripts.pory"
	applymovement 2, Common_Movement_ExclamationMark
# 173 "data/maps/HiddenVillage/scripts.pory"
	playse SE_PIN
# 174 "data/maps/HiddenVillage/scripts.pory"
	waitmovement
# 175 "data/maps/HiddenVillage/scripts.pory"
	applymovement 3, Common_Movement_ExclamationMark
# 176 "data/maps/HiddenVillage/scripts.pory"
	playse SE_PIN
# 177 "data/maps/HiddenVillage/scripts.pory"
	waitmovement
# 178 "data/maps/HiddenVillage/scripts.pory"
	applymovement 4, Common_Movement_ExclamationMark
# 179 "data/maps/HiddenVillage/scripts.pory"
	playse SE_PIN
# 180 "data/maps/HiddenVillage/scripts.pory"
	waitmovement
# 181 "data/maps/HiddenVillage/scripts.pory"
	msgbox HiddenVillage_EventScript_ElderClass_Text_2
# 182 "data/maps/HiddenVillage/scripts.pory"
	closemessage
# 183 "data/maps/HiddenVillage/scripts.pory"
	setweather WEATHER_RAIN
# 184 "data/maps/HiddenVillage/scripts.pory"
	doweather
# 185 "data/maps/HiddenVillage/scripts.pory"
	msgbox HiddenVillage_EventScript_ElderClass_Text_3
# 186 "data/maps/HiddenVillage/scripts.pory"
	setflag FLAG_TEMP_14
# 187 "data/maps/HiddenVillage/scripts.pory"
	removeobject 11
# 188 "data/maps/HiddenVillage/scripts.pory"
	closemessage
# 191 "data/maps/HiddenVillage/scripts.pory"
	applymovement 4, Movement_StrengthWalkOff
# 192 "data/maps/HiddenVillage/scripts.pory"
	applymovement 3, Movement_HeartWalkOff
# 193 "data/maps/HiddenVillage/scripts.pory"
	applymovement 2, Movement_BrainWalkOff
# 194 "data/maps/HiddenVillage/scripts.pory"
	waitmovement 0
# 196 "data/maps/HiddenVillage/scripts.pory"
	applymovement 1, Movement_WalkToLabGrass
# 197 "data/maps/HiddenVillage/scripts.pory"
	applymovement 5, Movement_HeadToLab
# 198 "data/maps/HiddenVillage/scripts.pory"
	waitmovement 0
# 201 "data/maps/HiddenVillage/scripts.pory"
	removeobject 4
# 202 "data/maps/HiddenVillage/scripts.pory"
	removeobject 3
# 203 "data/maps/HiddenVillage/scripts.pory"
	removeobject 2
# 204 "data/maps/HiddenVillage/scripts.pory"
	removeobject 5
# 205 "data/maps/HiddenVillage/scripts.pory"
	setflag FLAG_TEMP_11
# 208 "data/maps/HiddenVillage/scripts.pory"
	clearflag FLAG_TEMP_12
# 209 "data/maps/HiddenVillage/scripts.pory"
	clearflag FLAG_TEMP_13
# 210 "data/maps/HiddenVillage/scripts.pory"
	addobject 7
# 211 "data/maps/HiddenVillage/scripts.pory"
	addobject 8
# 212 "data/maps/HiddenVillage/scripts.pory"
	addobject 9
# 215 "data/maps/HiddenVillage/scripts.pory"
	applymovement 7, Movement_StrengthReappear
# 216 "data/maps/HiddenVillage/scripts.pory"
	applymovement 8, Movement_HeartReappear
# 217 "data/maps/HiddenVillage/scripts.pory"
	applymovement 9, Movement_BrainReappear
# 220 "data/maps/HiddenVillage/scripts.pory"
	waitmovement 8
# 221 "data/maps/HiddenVillage/scripts.pory"
	playse SE_EXIT
# 222 "data/maps/HiddenVillage/scripts.pory"
	removeobject 8
# 224 "data/maps/HiddenVillage/scripts.pory"
	waitmovement 9
# 225 "data/maps/HiddenVillage/scripts.pory"
	playse SE_EXIT
# 226 "data/maps/HiddenVillage/scripts.pory"
	removeobject 9
# 229 "data/maps/HiddenVillage/scripts.pory"
	setflag FLAG_TEMP_12
# 232 "data/maps/HiddenVillage/scripts.pory"
	waitmovement 7
# 233 "data/maps/HiddenVillage/scripts.pory"
	setobjectxyperm 7, 11, 11
# 234 "data/maps/HiddenVillage/scripts.pory"
	setobjectmovementtype 7, MOVEMENT_TYPE_FACE_LEFT
# 237 "data/maps/HiddenVillage/scripts.pory"
	setvar VAR_HIDDEN_VILLAGE_STATE, 2
# 239 "data/maps/HiddenVillage/scripts.pory"
	releaseall
	end

HiddenVillage_EventScript_ElderClass_2:
# 152 "data/maps/HiddenVillage/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, HiddenVillage_Movement_PlayerToClassLeft
	goto HiddenVillage_EventScript_ElderClass_1


HiddenVillage_EventScript_LateTriggerLeft::
# 247 "data/maps/HiddenVillage/scripts.pory"
	lockall
# 248 "data/maps/HiddenVillage/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 249 "data/maps/HiddenVillage/scripts.pory"
	playse SE_PIN
# 250 "data/maps/HiddenVillage/scripts.pory"
	waitmovement 0
# 251 "data/maps/HiddenVillage/scripts.pory"
	applymovement 1, Common_Movement_FaceLeft
# 252 "data/maps/HiddenVillage/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 253 "data/maps/HiddenVillage/scripts.pory"
	waitmovement 0
# 254 "data/maps/HiddenVillage/scripts.pory"
	call HiddenVillage_EventScript_LateTriggerMain
# 255 "data/maps/HiddenVillage/scripts.pory"
	releaseall
	end


HiddenVillage_EventScript_LateTriggerRight::
# 260 "data/maps/HiddenVillage/scripts.pory"
	lockall
# 261 "data/maps/HiddenVillage/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 262 "data/maps/HiddenVillage/scripts.pory"
	playse SE_PIN
# 263 "data/maps/HiddenVillage/scripts.pory"
	waitmovement 0
# 264 "data/maps/HiddenVillage/scripts.pory"
	applymovement 1, Common_Movement_FaceRight
# 265 "data/maps/HiddenVillage/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 266 "data/maps/HiddenVillage/scripts.pory"
	waitmovement 0
# 267 "data/maps/HiddenVillage/scripts.pory"
	call HiddenVillage_EventScript_LateTriggerMain
# 268 "data/maps/HiddenVillage/scripts.pory"
	releaseall
	end


HiddenVillage_EventScript_LateTriggerMain::
# 273 "data/maps/HiddenVillage/scripts.pory"
	msgbox HiddenVillage_EventScript_LateTriggerMain_Text_0
# 274 "data/maps/HiddenVillage/scripts.pory"
	closemessage
# 275 "data/maps/HiddenVillage/scripts.pory"
	applymovement 1, Common_Movement_FaceDown
# 276 "data/maps/HiddenVillage/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 277 "data/maps/HiddenVillage/scripts.pory"
	waitmovement 0
	return


HiddenVillage_EventScript_DefaultText::
# 285 "data/maps/HiddenVillage/scripts.pory"
	lock
# 286 "data/maps/HiddenVillage/scripts.pory"
	faceplayer
# 287 "data/maps/HiddenVillage/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_HIDDEN_VILLAGE_STATE
# 288 "data/maps/HiddenVillage/scripts.pory"
	msgbox HiddenVillage_EventScript_DefaultText_Text_0
# 289 "data/maps/HiddenVillage/scripts.pory"
	release
	end


HiddenVillage_EventScript_FriendHeart::
# 294 "data/maps/HiddenVillage/scripts.pory"
	lock
# 295 "data/maps/HiddenVillage/scripts.pory"
	faceplayer
# 296 "data/maps/HiddenVillage/scripts.pory"
	switch VAR_HIDDEN_VILLAGE_STATE
# 297 "data/maps/HiddenVillage/scripts.pory"
	case 1, HiddenVillage_EventScript_FriendHeart_3
# 301 "data/maps/HiddenVillage/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_HIDDEN_VILLAGE_STATE
# 302 "data/maps/HiddenVillage/scripts.pory"
	msgbox HiddenVillage_EventScript_DefaultText_Text_0
HiddenVillage_EventScript_FriendHeart_1:
# 304 "data/maps/HiddenVillage/scripts.pory"
	release
	end

HiddenVillage_EventScript_FriendHeart_3:
# 298 "data/maps/HiddenVillage/scripts.pory"
	msgbox HiddenVillage_EventScript_FriendHeart_Text_0
# 299 "data/maps/HiddenVillage/scripts.pory"
	closemessage
	goto HiddenVillage_EventScript_FriendHeart_1


HiddenVillage_EventScript_FriendStrength::
# 309 "data/maps/HiddenVillage/scripts.pory"
	lock
# 310 "data/maps/HiddenVillage/scripts.pory"
	faceplayer
# 311 "data/maps/HiddenVillage/scripts.pory"
	switch VAR_HIDDEN_VILLAGE_STATE
# 312 "data/maps/HiddenVillage/scripts.pory"
	case 1, HiddenVillage_EventScript_FriendStrength_3
# 315 "data/maps/HiddenVillage/scripts.pory"
	case 2, HiddenVillage_EventScript_FriendStrength_4
# 326 "data/maps/HiddenVillage/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_HIDDEN_VILLAGE_STATE
# 327 "data/maps/HiddenVillage/scripts.pory"
	msgbox HiddenVillage_EventScript_DefaultText_Text_0
HiddenVillage_EventScript_FriendStrength_1:
# 329 "data/maps/HiddenVillage/scripts.pory"
	release
	end

HiddenVillage_EventScript_FriendStrength_3:
# 313 "data/maps/HiddenVillage/scripts.pory"
	msgbox HiddenVillage_EventScript_FriendStrength_Text_0
# 314 "data/maps/HiddenVillage/scripts.pory"
	closemessage
	goto HiddenVillage_EventScript_FriendStrength_1

HiddenVillage_EventScript_FriendStrength_4:
# 316 "data/maps/HiddenVillage/scripts.pory"
	msgbox HiddenVillage_EventScript_FriendStrength_Text_1
# 317 "data/maps/HiddenVillage/scripts.pory"
	closemessage
# 319 "data/maps/HiddenVillage/scripts.pory"
	applymovement 7, Movement_ClimbTheVine
# 320 "data/maps/HiddenVillage/scripts.pory"
	waitmovement 0
# 321 "data/maps/HiddenVillage/scripts.pory"
	playse SE_EXIT
# 322 "data/maps/HiddenVillage/scripts.pory"
	removeobject 7
# 324 "data/maps/HiddenVillage/scripts.pory"
	setvar VAR_HIDDEN_VILLAGE_STATE, 3
	goto HiddenVillage_EventScript_FriendStrength_1


HiddenVillage_EventScript_Lady::
# 335 "data/maps/HiddenVillage/scripts.pory"
	lock
# 336 "data/maps/HiddenVillage/scripts.pory"
	faceplayer
# 338 "data/maps/HiddenVillage/scripts.pory"
	switch VAR_HIDDEN_VILLAGE_STATE
# 339 "data/maps/HiddenVillage/scripts.pory"
	case 0, HiddenVillage_EventScript_Lady_3
# 345 "data/maps/HiddenVillage/scripts.pory"
	case 1, HiddenVillage_EventScript_Lady_4
# 349 "data/maps/HiddenVillage/scripts.pory"
	case 2, HiddenVillage_EventScript_Lady_5
# 368 "data/maps/HiddenVillage/scripts.pory"
	case 3, HiddenVillage_EventScript_Lady_6
# 372 "data/maps/HiddenVillage/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_HIDDEN_VILLAGE_STATE
# 373 "data/maps/HiddenVillage/scripts.pory"
	msgbox HiddenVillage_EventScript_DefaultText_Text_0
# 374 "data/maps/HiddenVillage/scripts.pory"
	closemessage
HiddenVillage_EventScript_Lady_1:
# 376 "data/maps/HiddenVillage/scripts.pory"
	release
	end

HiddenVillage_EventScript_Lady_3:
# 340 "data/maps/HiddenVillage/scripts.pory"
	msgbox HiddenVillage_EventScript_LateTriggerMain_Text_0
# 341 "data/maps/HiddenVillage/scripts.pory"
	closemessage
# 342 "data/maps/HiddenVillage/scripts.pory"
	applymovement 1, Common_Movement_FaceDown
# 343 "data/maps/HiddenVillage/scripts.pory"
	waitmovement 0
	goto HiddenVillage_EventScript_Lady_1

HiddenVillage_EventScript_Lady_4:
# 346 "data/maps/HiddenVillage/scripts.pory"
	msgbox HiddenVillage_EventScript_Lady_Text_0
# 347 "data/maps/HiddenVillage/scripts.pory"
	closemessage
	goto HiddenVillage_EventScript_Lady_1

HiddenVillage_EventScript_Lady_5:
# 351 "data/maps/HiddenVillage/scripts.pory"
	msgbox HiddenVillage_EventScript_Lady_Text_1
# 352 "data/maps/HiddenVillage/scripts.pory"
	closemessage
# 354 "data/maps/HiddenVillage/scripts.pory"
	special SpawnCameraObject
# 355 "data/maps/HiddenVillage/scripts.pory"
	applymovement 1, Common_Movement_FaceLeft
# 356 "data/maps/HiddenVillage/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 357 "data/maps/HiddenVillage/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Movement_CameraPanToTreehouse_FromLady
# 358 "data/maps/HiddenVillage/scripts.pory"
	waitmovement 0
# 360 "data/maps/HiddenVillage/scripts.pory"
	msgbox HiddenVillage_EventScript_Lady_Text_2
# 361 "data/maps/HiddenVillage/scripts.pory"
	closemessage
# 363 "data/maps/HiddenVillage/scripts.pory"
	faceplayer
# 364 "data/maps/HiddenVillage/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Movement_CameraReturnFromTreehouse_FromLady
# 365 "data/maps/HiddenVillage/scripts.pory"
	waitmovement 0
# 366 "data/maps/HiddenVillage/scripts.pory"
	special RemoveCameraObject
	goto HiddenVillage_EventScript_Lady_1

HiddenVillage_EventScript_Lady_6:
# 369 "data/maps/HiddenVillage/scripts.pory"
	msgbox HiddenVillage_EventScript_Lady_Text_3
# 370 "data/maps/HiddenVillage/scripts.pory"
	closemessage
	goto HiddenVillage_EventScript_Lady_1


HiddenVillage_EventScript_LadyTrigger::
# 386 "data/maps/HiddenVillage/scripts.pory"
	lockall
# 387 "data/maps/HiddenVillage/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 388 "data/maps/HiddenVillage/scripts.pory"
	playse SE_PIN
# 389 "data/maps/HiddenVillage/scripts.pory"
	waitmovement 0
# 392 "data/maps/HiddenVillage/scripts.pory"
	applymovement 1, Common_Movement_FaceRight
# 393 "data/maps/HiddenVillage/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 394 "data/maps/HiddenVillage/scripts.pory"
	waitmovement 0
# 397 "data/maps/HiddenVillage/scripts.pory"
	msgbox HiddenVillage_EventScript_Lady_Text_1
# 398 "data/maps/HiddenVillage/scripts.pory"
	closemessage
# 400 "data/maps/HiddenVillage/scripts.pory"
	special SpawnCameraObject
# 402 "data/maps/HiddenVillage/scripts.pory"
	applymovement 1, Common_Movement_FaceLeft
# 403 "data/maps/HiddenVillage/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 404 "data/maps/HiddenVillage/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Movement_CameraPanToTreehouse_FromTrigger
# 405 "data/maps/HiddenVillage/scripts.pory"
	waitmovement 0
# 407 "data/maps/HiddenVillage/scripts.pory"
	msgbox HiddenVillage_EventScript_Lady_Text_2
# 408 "data/maps/HiddenVillage/scripts.pory"
	closemessage
# 411 "data/maps/HiddenVillage/scripts.pory"
	applymovement 1, Common_Movement_FaceRight
# 413 "data/maps/HiddenVillage/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Movement_CameraReturnFromTreehouse_FromTrigger
# 414 "data/maps/HiddenVillage/scripts.pory"
	waitmovement 0
# 415 "data/maps/HiddenVillage/scripts.pory"
	special RemoveCameraObject
# 418 "data/maps/HiddenVillage/scripts.pory"
	applymovement 1, Common_Movement_FaceDown
# 419 "data/maps/HiddenVillage/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 420 "data/maps/HiddenVillage/scripts.pory"
	waitmovement 0
# 422 "data/maps/HiddenVillage/scripts.pory"
	releaseall
	end


# 430 "data/maps/HiddenVillage/scripts.pory"
Heart_Movement_TowardsPlayer:
# 431 "data/maps/HiddenVillage/scripts.pory"
	walk_left
# 431 "data/maps/HiddenVillage/scripts.pory"
	walk_left
# 431 "data/maps/HiddenVillage/scripts.pory"
	walk_left
# 431 "data/maps/HiddenVillage/scripts.pory"
	walk_left
# 431 "data/maps/HiddenVillage/scripts.pory"
	walk_left
	step_end

# 434 "data/maps/HiddenVillage/scripts.pory"
Heart_RunToBackyard:
# 435 "data/maps/HiddenVillage/scripts.pory"
	walk_right
# 435 "data/maps/HiddenVillage/scripts.pory"
	walk_right
# 435 "data/maps/HiddenVillage/scripts.pory"
	walk_right
# 435 "data/maps/HiddenVillage/scripts.pory"
	walk_right
# 435 "data/maps/HiddenVillage/scripts.pory"
	walk_right
# 436 "data/maps/HiddenVillage/scripts.pory"
	walk_up
# 436 "data/maps/HiddenVillage/scripts.pory"
	walk_up
# 436 "data/maps/HiddenVillage/scripts.pory"
	walk_up
# 437 "data/maps/HiddenVillage/scripts.pory"
	walk_right
# 437 "data/maps/HiddenVillage/scripts.pory"
	walk_right
# 437 "data/maps/HiddenVillage/scripts.pory"
	walk_right
	step_end

# 440 "data/maps/HiddenVillage/scripts.pory"
Movement_ClimbTheVine:
# 441 "data/maps/HiddenVillage/scripts.pory"
	walk_right
# 441 "data/maps/HiddenVillage/scripts.pory"
	walk_right
# 442 "data/maps/HiddenVillage/scripts.pory"
	walk_slow_up
	step_end

# 446 "data/maps/HiddenVillage/scripts.pory"
Movement_CameraPanToTreehouse_FromLady:
# 447 "data/maps/HiddenVillage/scripts.pory"
	walk_left
# 447 "data/maps/HiddenVillage/scripts.pory"
	walk_left
	step_end

# 450 "data/maps/HiddenVillage/scripts.pory"
Movement_CameraReturnFromTreehouse_FromLady:
# 451 "data/maps/HiddenVillage/scripts.pory"
	walk_right
# 451 "data/maps/HiddenVillage/scripts.pory"
	walk_right
	step_end

# 455 "data/maps/HiddenVillage/scripts.pory"
Movement_CameraPanToTreehouse_FromTrigger:
# 457 "data/maps/HiddenVillage/scripts.pory"
	walk_left
# 457 "data/maps/HiddenVillage/scripts.pory"
	walk_left
# 457 "data/maps/HiddenVillage/scripts.pory"
	walk_left
# 458 "data/maps/HiddenVillage/scripts.pory"
	walk_down
	step_end

# 461 "data/maps/HiddenVillage/scripts.pory"
Movement_CameraReturnFromTreehouse_FromTrigger:
# 463 "data/maps/HiddenVillage/scripts.pory"
	walk_up
# 464 "data/maps/HiddenVillage/scripts.pory"
	walk_right
# 464 "data/maps/HiddenVillage/scripts.pory"
	walk_right
# 464 "data/maps/HiddenVillage/scripts.pory"
	walk_right
	step_end

# 467 "data/maps/HiddenVillage/scripts.pory"
HiddenVillage_Movement_StrengthToClass:
# 468 "data/maps/HiddenVillage/scripts.pory"
	walk_down
# 469 "data/maps/HiddenVillage/scripts.pory"
	walk_left
# 470 "data/maps/HiddenVillage/scripts.pory"
	walk_left
# 471 "data/maps/HiddenVillage/scripts.pory"
	walk_left
# 472 "data/maps/HiddenVillage/scripts.pory"
	walk_down
# 473 "data/maps/HiddenVillage/scripts.pory"
	face_up
	step_end

# 476 "data/maps/HiddenVillage/scripts.pory"
HiddenVillage_Movement_HeartToClass:
# 477 "data/maps/HiddenVillage/scripts.pory"
	walk_left
# 477 "data/maps/HiddenVillage/scripts.pory"
	walk_left
# 477 "data/maps/HiddenVillage/scripts.pory"
	walk_left
# 478 "data/maps/HiddenVillage/scripts.pory"
	face_up
	step_end

# 481 "data/maps/HiddenVillage/scripts.pory"
HiddenVillage_Movement_BrainToClass:
# 482 "data/maps/HiddenVillage/scripts.pory"
	delay_16
# 483 "data/maps/HiddenVillage/scripts.pory"
	walk_left
# 483 "data/maps/HiddenVillage/scripts.pory"
	walk_left
# 483 "data/maps/HiddenVillage/scripts.pory"
	walk_left
# 484 "data/maps/HiddenVillage/scripts.pory"
	face_up
	step_end

# 488 "data/maps/HiddenVillage/scripts.pory"
HiddenVillage_Movement_PlayerToClassLeft:
# 489 "data/maps/HiddenVillage/scripts.pory"
	walk_up
# 490 "data/maps/HiddenVillage/scripts.pory"
	walk_right
# 491 "data/maps/HiddenVillage/scripts.pory"
	face_up
	step_end

# 494 "data/maps/HiddenVillage/scripts.pory"
HiddenVillage_Movement_PlayerToClassRight:
# 495 "data/maps/HiddenVillage/scripts.pory"
	walk_up
	step_end

# 499 "data/maps/HiddenVillage/scripts.pory"
Movement_StrengthWalkOff:
# 500 "data/maps/HiddenVillage/scripts.pory"
	walk_down
# 500 "data/maps/HiddenVillage/scripts.pory"
	walk_down
# 500 "data/maps/HiddenVillage/scripts.pory"
	walk_down
# 500 "data/maps/HiddenVillage/scripts.pory"
	walk_down
# 501 "data/maps/HiddenVillage/scripts.pory"
	walk_left
# 501 "data/maps/HiddenVillage/scripts.pory"
	walk_left
# 502 "data/maps/HiddenVillage/scripts.pory"
	walk_down
# 502 "data/maps/HiddenVillage/scripts.pory"
	walk_down
	step_end

# 505 "data/maps/HiddenVillage/scripts.pory"
Movement_HeartWalkOff:
# 506 "data/maps/HiddenVillage/scripts.pory"
	walk_down
# 507 "data/maps/HiddenVillage/scripts.pory"
	walk_left
# 507 "data/maps/HiddenVillage/scripts.pory"
	walk_left
# 508 "data/maps/HiddenVillage/scripts.pory"
	walk_down
# 508 "data/maps/HiddenVillage/scripts.pory"
	walk_down
# 508 "data/maps/HiddenVillage/scripts.pory"
	walk_down
# 509 "data/maps/HiddenVillage/scripts.pory"
	walk_left
# 509 "data/maps/HiddenVillage/scripts.pory"
	walk_left
# 510 "data/maps/HiddenVillage/scripts.pory"
	walk_down
# 510 "data/maps/HiddenVillage/scripts.pory"
	walk_down
	step_end

# 513 "data/maps/HiddenVillage/scripts.pory"
Movement_BrainWalkOff:
# 514 "data/maps/HiddenVillage/scripts.pory"
	walk_down
# 515 "data/maps/HiddenVillage/scripts.pory"
	delay_8
# 516 "data/maps/HiddenVillage/scripts.pory"
	walk_left
# 516 "data/maps/HiddenVillage/scripts.pory"
	walk_left
# 516 "data/maps/HiddenVillage/scripts.pory"
	walk_left
# 517 "data/maps/HiddenVillage/scripts.pory"
	walk_down
# 517 "data/maps/HiddenVillage/scripts.pory"
	walk_down
# 517 "data/maps/HiddenVillage/scripts.pory"
	walk_down
# 518 "data/maps/HiddenVillage/scripts.pory"
	walk_left
# 518 "data/maps/HiddenVillage/scripts.pory"
	walk_left
# 519 "data/maps/HiddenVillage/scripts.pory"
	walk_down
# 519 "data/maps/HiddenVillage/scripts.pory"
	walk_down
	step_end

# 523 "data/maps/HiddenVillage/scripts.pory"
Movement_StrengthReappear:
# 524 "data/maps/HiddenVillage/scripts.pory"
	walk_right
# 525 "data/maps/HiddenVillage/scripts.pory"
	walk_right
# 526 "data/maps/HiddenVillage/scripts.pory"
	walk_right
# 527 "data/maps/HiddenVillage/scripts.pory"
	walk_right
# 528 "data/maps/HiddenVillage/scripts.pory"
	delay_16
# 528 "data/maps/HiddenVillage/scripts.pory"
	delay_16
# 528 "data/maps/HiddenVillage/scripts.pory"
	delay_16
# 528 "data/maps/HiddenVillage/scripts.pory"
	delay_16
# 529 "data/maps/HiddenVillage/scripts.pory"
	walk_up
# 530 "data/maps/HiddenVillage/scripts.pory"
	face_left
	step_end

# 533 "data/maps/HiddenVillage/scripts.pory"
Movement_HeartReappear:
# 534 "data/maps/HiddenVillage/scripts.pory"
	walk_up
# 534 "data/maps/HiddenVillage/scripts.pory"
	walk_up
# 535 "data/maps/HiddenVillage/scripts.pory"
	walk_right
# 535 "data/maps/HiddenVillage/scripts.pory"
	walk_right
# 535 "data/maps/HiddenVillage/scripts.pory"
	walk_right
# 535 "data/maps/HiddenVillage/scripts.pory"
	walk_right
# 535 "data/maps/HiddenVillage/scripts.pory"
	walk_right
# 535 "data/maps/HiddenVillage/scripts.pory"
	walk_right
# 536 "data/maps/HiddenVillage/scripts.pory"
	walk_slow_up
	step_end

# 539 "data/maps/HiddenVillage/scripts.pory"
Movement_BrainReappear:
# 540 "data/maps/HiddenVillage/scripts.pory"
	delay_8
# 541 "data/maps/HiddenVillage/scripts.pory"
	walk_up
# 541 "data/maps/HiddenVillage/scripts.pory"
	walk_up
# 541 "data/maps/HiddenVillage/scripts.pory"
	walk_up
# 542 "data/maps/HiddenVillage/scripts.pory"
	walk_right
# 542 "data/maps/HiddenVillage/scripts.pory"
	walk_right
# 542 "data/maps/HiddenVillage/scripts.pory"
	walk_right
# 542 "data/maps/HiddenVillage/scripts.pory"
	walk_right
# 542 "data/maps/HiddenVillage/scripts.pory"
	walk_right
# 542 "data/maps/HiddenVillage/scripts.pory"
	walk_right
# 543 "data/maps/HiddenVillage/scripts.pory"
	walk_slow_up
	step_end

# 546 "data/maps/HiddenVillage/scripts.pory"
HiddenVillage_Movement_ShadowFlyOver:
# 547 "data/maps/HiddenVillage/scripts.pory"
	walk_fast_down
# 547 "data/maps/HiddenVillage/scripts.pory"
	walk_fast_down
# 547 "data/maps/HiddenVillage/scripts.pory"
	walk_fast_down
# 547 "data/maps/HiddenVillage/scripts.pory"
	walk_fast_down
# 547 "data/maps/HiddenVillage/scripts.pory"
	walk_fast_down
# 547 "data/maps/HiddenVillage/scripts.pory"
	walk_fast_down
# 547 "data/maps/HiddenVillage/scripts.pory"
	walk_fast_down
# 547 "data/maps/HiddenVillage/scripts.pory"
	walk_fast_down
# 547 "data/maps/HiddenVillage/scripts.pory"
	walk_fast_down
# 547 "data/maps/HiddenVillage/scripts.pory"
	walk_fast_down
# 547 "data/maps/HiddenVillage/scripts.pory"
	walk_fast_down
# 547 "data/maps/HiddenVillage/scripts.pory"
	walk_fast_down
# 547 "data/maps/HiddenVillage/scripts.pory"
	walk_fast_down
# 547 "data/maps/HiddenVillage/scripts.pory"
	walk_fast_down
# 547 "data/maps/HiddenVillage/scripts.pory"
	walk_fast_down
	step_end

# 550 "data/maps/HiddenVillage/scripts.pory"
Movement_WalkToLabGrass:
# 551 "data/maps/HiddenVillage/scripts.pory"
	walk_right
# 552 "data/maps/HiddenVillage/scripts.pory"
	walk_up
# 552 "data/maps/HiddenVillage/scripts.pory"
	walk_up
# 552 "data/maps/HiddenVillage/scripts.pory"
	walk_up
# 552 "data/maps/HiddenVillage/scripts.pory"
	walk_up
# 552 "data/maps/HiddenVillage/scripts.pory"
	walk_up
# 552 "data/maps/HiddenVillage/scripts.pory"
	walk_up
# 553 "data/maps/HiddenVillage/scripts.pory"
	face_down
	step_end

# 556 "data/maps/HiddenVillage/scripts.pory"
Movement_HeadToLab:
# 557 "data/maps/HiddenVillage/scripts.pory"
	walk_down
# 558 "data/maps/HiddenVillage/scripts.pory"
	face_left
# 559 "data/maps/HiddenVillage/scripts.pory"
	delay_16
# 559 "data/maps/HiddenVillage/scripts.pory"
	delay_16
# 560 "data/maps/HiddenVillage/scripts.pory"
	walk_left
# 561 "data/maps/HiddenVillage/scripts.pory"
	walk_down
# 561 "data/maps/HiddenVillage/scripts.pory"
	walk_down
# 561 "data/maps/HiddenVillage/scripts.pory"
	walk_down
# 561 "data/maps/HiddenVillage/scripts.pory"
	walk_down
# 561 "data/maps/HiddenVillage/scripts.pory"
	walk_down
# 562 "data/maps/HiddenVillage/scripts.pory"
	walk_left
# 562 "data/maps/HiddenVillage/scripts.pory"
	walk_left
# 563 "data/maps/HiddenVillage/scripts.pory"
	walk_down
# 563 "data/maps/HiddenVillage/scripts.pory"
	walk_down
# 563 "data/maps/HiddenVillage/scripts.pory"
	walk_down
	step_end

HiddenVillage_EventScript_FriendHeart_Intro_Text_0:
# 118 "data/maps/HiddenVillage/scripts.pory"
	.string "Heart: Good morning {PLAYER}! I was\n"
	.string "wondering if you were going to wake up\l"
	.string "today.\p"
	.string "Everybody else is waiting in the\n"
	.string "backyard, go and see the Elder in his\l"
	.string "lab and let him know you're ready!$"

HiddenVillage_EventScript_ElderClass_Text_0:
# 148 "data/maps/HiddenVillage/scripts.pory"
	.string "Elder: Good, you're all here! Everybody\n"
	.string "gather around.$"

HiddenVillage_EventScript_ElderClass_Text_1:
# 162 "data/maps/HiddenVillage/scripts.pory"
	.string "Elder: Welcome everybody, today we're\n"
	.string "going to be learning about taming\l"
	.string "Pokémon.\p"
	.string "Taming Pokemon is the act of forming\n"
	.string "trust with a Pokémon. Both sides need\l"
	.string "to trust each other.\p"
	.string "--To be continued--$"

HiddenVillage_EventScript_ElderClass_Text_2:
# 181 "data/maps/HiddenVillage/scripts.pory"
	.string "Strength: What was that?!\p"
	.string "Brain: Was that a Pokémon?!\p"
	.string "HEART: There's no way that was a\n"
	.string "Pokémon! Right Elder?!\p"
	.string "$"

HiddenVillage_EventScript_ElderClass_Text_3:
# 185 "data/maps/HiddenVillage/scripts.pory"
	.string "Elder: Alright everybody, that's enough\n"
	.string "for today...\p"
	.string "We can finish this lesson tomorrow!\p"
	.string "STENGTH: Now that class is over let's go\n"
	.string "to the treehouse!$"

HiddenVillage_EventScript_LateTriggerMain_Text_0:
# 273 "data/maps/HiddenVillage/scripts.pory"
	.string "{PLAYER}! You're going to be late! Hurry\n"
	.string "up and see the Village Elder...$"

HiddenVillage_EventScript_DefaultText_Text_0:
# 288 "data/maps/HiddenVillage/scripts.pory"
	.string "DEBUG_MISSING TEXT\n"
	.string "State ({STR_VAR_1})$"

HiddenVillage_EventScript_FriendHeart_Text_0:
# 298 "data/maps/HiddenVillage/scripts.pory"
	.string "Heart: It took you long enough! Hey...\n"
	.string "are you okay?$"

HiddenVillage_EventScript_FriendStrength_Text_0:
# 313 "data/maps/HiddenVillage/scripts.pory"
	.string "Strength: You're finally here! We've\n"
	.string "been waiting for you!$"

HiddenVillage_EventScript_FriendStrength_Text_1:
# 316 "data/maps/HiddenVillage/scripts.pory"
	.string "Strength: Hey {PLAYER}! Do you remember\n"
	.string "how to get into the treehouse?\p"
	.string "Just climb the vine like this!$"

HiddenVillage_EventScript_Lady_Text_0:
# 346 "data/maps/HiddenVillage/scripts.pory"
	.string "The Elder asked for help keeping an eye\n"
	.string "on you kids!$"

HiddenVillage_EventScript_Lady_Text_1:
# 351 "data/maps/HiddenVillage/scripts.pory"
	.string "H-hey! There's nothing past here...\n"
	.string "Weren't you going to see your friends\l"
	.string "at the Treehouse? It's right over\l"
	.string "there!$"

HiddenVillage_EventScript_Lady_Text_2:
# 360 "data/maps/HiddenVillage/scripts.pory"
	.string "You can climb up it using the vine!$"

HiddenVillage_EventScript_Lady_Text_3:
# 369 "data/maps/HiddenVillage/scripts.pory"
	.string "It's pretty late... Isn't it past your\n"
	.string "bedtime?$"
