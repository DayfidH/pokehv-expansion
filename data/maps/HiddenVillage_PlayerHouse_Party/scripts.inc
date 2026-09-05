HiddenVillage_PlayerHouse_Party_MapScripts::
# 3 "data/maps/HiddenVillage_PlayerHouse_Party/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, HiddenVillage_PlayerHouse_Party_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 9 "data/maps/HiddenVillage_PlayerHouse_Party/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, HiddenVillage_PlayerHouse_Party_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

HiddenVillage_PlayerHouse_Party_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 5 "data/maps/HiddenVillage_PlayerHouse_Party/scripts.pory"
	compare VAR_TEMP_0, 0
	goto_if_eq HiddenVillage_PlayerHouse_Party_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

HiddenVillage_PlayerHouse_Party_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 6 "data/maps/HiddenVillage_PlayerHouse_Party/scripts.pory"
	setflashlevel 8
	return

HiddenVillage_PlayerHouse_Party_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 11 "data/maps/HiddenVillage_PlayerHouse_Party/scripts.pory"
	map_script_2 VAR_TEMP_0, 0, Event_BirthdaySurprise
	.2byte 0


Event_StrengthBirthday::
# 16 "data/maps/HiddenVillage_PlayerHouse_Party/scripts.pory"
	lock
# 17 "data/maps/HiddenVillage_PlayerHouse_Party/scripts.pory"
	faceplayer
# 18 "data/maps/HiddenVillage_PlayerHouse_Party/scripts.pory"
	msgbox Event_StrengthBirthday_Text_0
# 19 "data/maps/HiddenVillage_PlayerHouse_Party/scripts.pory"
	closemessage
# 20 "data/maps/HiddenVillage_PlayerHouse_Party/scripts.pory"
	release
	return


Event_HeartBirthday::
# 24 "data/maps/HiddenVillage_PlayerHouse_Party/scripts.pory"
	lock
# 25 "data/maps/HiddenVillage_PlayerHouse_Party/scripts.pory"
	faceplayer
# 26 "data/maps/HiddenVillage_PlayerHouse_Party/scripts.pory"
	msgbox Event_HeartBirthday_Text_0
# 27 "data/maps/HiddenVillage_PlayerHouse_Party/scripts.pory"
	closemessage
# 28 "data/maps/HiddenVillage_PlayerHouse_Party/scripts.pory"
	release
	return


Event_BrainBirthday::
# 32 "data/maps/HiddenVillage_PlayerHouse_Party/scripts.pory"
	lock
# 33 "data/maps/HiddenVillage_PlayerHouse_Party/scripts.pory"
	faceplayer
# 34 "data/maps/HiddenVillage_PlayerHouse_Party/scripts.pory"
	msgbox Event_BrainBirthday_Text_0
# 35 "data/maps/HiddenVillage_PlayerHouse_Party/scripts.pory"
	closemessage
# 36 "data/maps/HiddenVillage_PlayerHouse_Party/scripts.pory"
	release
	return


Event_DavidBirthday::
# 40 "data/maps/HiddenVillage_PlayerHouse_Party/scripts.pory"
	lock
# 41 "data/maps/HiddenVillage_PlayerHouse_Party/scripts.pory"
	faceplayer
# 42 "data/maps/HiddenVillage_PlayerHouse_Party/scripts.pory"
	msgbox Event_DavidBirthday_Text_0
# 43 "data/maps/HiddenVillage_PlayerHouse_Party/scripts.pory"
	closemessage
# 44 "data/maps/HiddenVillage_PlayerHouse_Party/scripts.pory"
	release
	return


Event_ElderBirthday::
# 48 "data/maps/HiddenVillage_PlayerHouse_Party/scripts.pory"
	lock
# 49 "data/maps/HiddenVillage_PlayerHouse_Party/scripts.pory"
	faceplayer
# 50 "data/maps/HiddenVillage_PlayerHouse_Party/scripts.pory"
	msgbox Event_ElderBirthday_Text_0
# 51 "data/maps/HiddenVillage_PlayerHouse_Party/scripts.pory"
	closemessage
# 52 "data/maps/HiddenVillage_PlayerHouse_Party/scripts.pory"
	release
	return


Event_LadyBirthday::
# 56 "data/maps/HiddenVillage_PlayerHouse_Party/scripts.pory"
	lock
# 57 "data/maps/HiddenVillage_PlayerHouse_Party/scripts.pory"
	faceplayer
# 58 "data/maps/HiddenVillage_PlayerHouse_Party/scripts.pory"
	msgbox Event_LadyBirthday_Text_0
# 59 "data/maps/HiddenVillage_PlayerHouse_Party/scripts.pory"
	closemessage
# 60 "data/maps/HiddenVillage_PlayerHouse_Party/scripts.pory"
	release
	return


Event_BirthdaySurprise::
# 63 "data/maps/HiddenVillage_PlayerHouse_Party/scripts.pory"
	lockall
# 66 "data/maps/HiddenVillage_PlayerHouse_Party/scripts.pory"
	msgbox Event_BirthdaySurprise_Text_0, MSGBOX_DEFAULT
# 67 "data/maps/HiddenVillage_PlayerHouse_Party/scripts.pory"
	closemessage
# 70 "data/maps/HiddenVillage_PlayerHouse_Party/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_LightSwitch
# 71 "data/maps/HiddenVillage_PlayerHouse_Party/scripts.pory"
	waitmovement 0
# 74 "data/maps/HiddenVillage_PlayerHouse_Party/scripts.pory"
	playse SE_SWITCH
# 75 "data/maps/HiddenVillage_PlayerHouse_Party/scripts.pory"
	animateflash 0
# 76 "data/maps/HiddenVillage_PlayerHouse_Party/scripts.pory"
	setflashlevel 0
# 80 "data/maps/HiddenVillage_PlayerHouse_Party/scripts.pory"
	msgbox Event_BirthdaySurprise_Text_1, MSGBOX_DEFAULT
# 81 "data/maps/HiddenVillage_PlayerHouse_Party/scripts.pory"
	closemessage
# 82 "data/maps/HiddenVillage_PlayerHouse_Party/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Surprised
# 83 "data/maps/HiddenVillage_PlayerHouse_Party/scripts.pory"
	waitmovement 0
# 85 "data/maps/HiddenVillage_PlayerHouse_Party/scripts.pory"
	setvar VAR_TEMP_0, 1
# 87 "data/maps/HiddenVillage_PlayerHouse_Party/scripts.pory"
	releaseall
	end


# 91 "data/maps/HiddenVillage_PlayerHouse_Party/scripts.pory"
Movement_LightSwitch:
# 92 "data/maps/HiddenVillage_PlayerHouse_Party/scripts.pory"
	walk_right
# 93 "data/maps/HiddenVillage_PlayerHouse_Party/scripts.pory"
	face_down
# 94 "data/maps/HiddenVillage_PlayerHouse_Party/scripts.pory"
	delay_16
# 95 "data/maps/HiddenVillage_PlayerHouse_Party/scripts.pory"
	step_end

# 98 "data/maps/HiddenVillage_PlayerHouse_Party/scripts.pory"
Movement_Surprised:
# 99 "data/maps/HiddenVillage_PlayerHouse_Party/scripts.pory"
	jump_in_place_up
# 100 "data/maps/HiddenVillage_PlayerHouse_Party/scripts.pory"
	walk_up
# 101 "data/maps/HiddenVillage_PlayerHouse_Party/scripts.pory"
	walk_left
# 102 "data/maps/HiddenVillage_PlayerHouse_Party/scripts.pory"
	walk_up
# 103 "data/maps/HiddenVillage_PlayerHouse_Party/scripts.pory"
	emote_exclamation_mark
	step_end

Event_StrengthBirthday_Text_0:
# 18 "data/maps/HiddenVillage_PlayerHouse_Party/scripts.pory"
	.string "Strength: Happy Birthday!$"

Event_HeartBirthday_Text_0:
# 26 "data/maps/HiddenVillage_PlayerHouse_Party/scripts.pory"
	.string "Heart: It's your birthday! um yes queen\n"
	.string "skinny legend versace boots the house\l"
	.string "down slay queen hunty mama and oop\l"
	.string "daddy work charli xcx snatch my wig!\l"
	.string "HAPPY BIRTHDAY DIVA!!$"

Event_BrainBirthday_Text_0:
# 34 "data/maps/HiddenVillage_PlayerHouse_Party/scripts.pory"
	.string "Brain: Happy Birthday! Did you know\n"
	.string "your birthday only happens once a\l"
	.string "year?$"

Event_DavidBirthday_Text_0:
# 42 "data/maps/HiddenVillage_PlayerHouse_Party/scripts.pory"
	.string "David: Happy Birthday Bestie! I hope\n"
	.string "you liked the surprise me and all our\l"
	.string "friends from Hidden Village put\l"
	.string "together for you! I hope you had the\l"
	.string "best birthday ever and another great\l"
	.string "year on this floating rock we call\l"
	.string "Earth!$"

Event_ElderBirthday_Text_0:
# 50 "data/maps/HiddenVillage_PlayerHouse_Party/scripts.pory"
	.string "Elder: Ah {PLAYER}... Happy Birthday!$"

Event_LadyBirthday_Text_0:
# 58 "data/maps/HiddenVillage_PlayerHouse_Party/scripts.pory"
	.string "Lady: Happy Birthday {PLAYER}! Now just\n"
	.string "because it's your birthday, doesn't\l"
	.string "mean you can just wonder off through\l"
	.string "the Elder's backyard...$"

Event_BirthdaySurprise_Text_0:
# 66 "data/maps/HiddenVillage_PlayerHouse_Party/scripts.pory"
	.string "Morgan: Huh... Why are the lights off?$"

Event_BirthdaySurprise_Text_1:
# 80 "data/maps/HiddenVillage_PlayerHouse_Party/scripts.pory"
	.string "Everyone: SURPRISE!!!\nHappy Birthday Morgan!$"
