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


Event_BiffBirthday::
# 24 "data/maps/HiddenVillage_PlayerHouse_Party/scripts.pory"
	lock
# 25 "data/maps/HiddenVillage_PlayerHouse_Party/scripts.pory"
	showmonpic SPECIES_BULBASAUR, 10, 3
# 26 "data/maps/HiddenVillage_PlayerHouse_Party/scripts.pory"
	msgbox Event_BiffBirthday_Text_0
# 27 "data/maps/HiddenVillage_PlayerHouse_Party/scripts.pory"
	hidemonpic
# 28 "data/maps/HiddenVillage_PlayerHouse_Party/scripts.pory"
	release
	return


Event_HeartBirthday::
# 33 "data/maps/HiddenVillage_PlayerHouse_Party/scripts.pory"
	lock
# 34 "data/maps/HiddenVillage_PlayerHouse_Party/scripts.pory"
	faceplayer
# 35 "data/maps/HiddenVillage_PlayerHouse_Party/scripts.pory"
	msgbox Event_HeartBirthday_Text_0
# 36 "data/maps/HiddenVillage_PlayerHouse_Party/scripts.pory"
	closemessage
# 37 "data/maps/HiddenVillage_PlayerHouse_Party/scripts.pory"
	release
	return


Event_BrainBirthday::
# 41 "data/maps/HiddenVillage_PlayerHouse_Party/scripts.pory"
	lock
# 42 "data/maps/HiddenVillage_PlayerHouse_Party/scripts.pory"
	faceplayer
# 43 "data/maps/HiddenVillage_PlayerHouse_Party/scripts.pory"
	msgbox Event_BrainBirthday_Text_0
# 44 "data/maps/HiddenVillage_PlayerHouse_Party/scripts.pory"
	closemessage
# 45 "data/maps/HiddenVillage_PlayerHouse_Party/scripts.pory"
	release
	return


Event_DavidBirthday::
# 49 "data/maps/HiddenVillage_PlayerHouse_Party/scripts.pory"
	lock
# 50 "data/maps/HiddenVillage_PlayerHouse_Party/scripts.pory"
	faceplayer
# 51 "data/maps/HiddenVillage_PlayerHouse_Party/scripts.pory"
	msgbox Event_DavidBirthday_Text_0
# 52 "data/maps/HiddenVillage_PlayerHouse_Party/scripts.pory"
	closemessage
# 53 "data/maps/HiddenVillage_PlayerHouse_Party/scripts.pory"
	release
	return


Event_ElderBirthday::
# 57 "data/maps/HiddenVillage_PlayerHouse_Party/scripts.pory"
	lock
# 58 "data/maps/HiddenVillage_PlayerHouse_Party/scripts.pory"
	faceplayer
# 59 "data/maps/HiddenVillage_PlayerHouse_Party/scripts.pory"
	msgbox Event_ElderBirthday_Text_0
# 60 "data/maps/HiddenVillage_PlayerHouse_Party/scripts.pory"
	closemessage
# 61 "data/maps/HiddenVillage_PlayerHouse_Party/scripts.pory"
	release
	return


Event_LadyBirthday::
# 65 "data/maps/HiddenVillage_PlayerHouse_Party/scripts.pory"
	lock
# 66 "data/maps/HiddenVillage_PlayerHouse_Party/scripts.pory"
	faceplayer
# 67 "data/maps/HiddenVillage_PlayerHouse_Party/scripts.pory"
	msgbox Event_LadyBirthday_Text_0
# 68 "data/maps/HiddenVillage_PlayerHouse_Party/scripts.pory"
	closemessage
# 69 "data/maps/HiddenVillage_PlayerHouse_Party/scripts.pory"
	release
	return


Event_BirthdaySurprise::
# 72 "data/maps/HiddenVillage_PlayerHouse_Party/scripts.pory"
	lockall
# 75 "data/maps/HiddenVillage_PlayerHouse_Party/scripts.pory"
	msgbox Event_BirthdaySurprise_Text_0, MSGBOX_DEFAULT
# 76 "data/maps/HiddenVillage_PlayerHouse_Party/scripts.pory"
	closemessage
# 79 "data/maps/HiddenVillage_PlayerHouse_Party/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_LightSwitch
# 80 "data/maps/HiddenVillage_PlayerHouse_Party/scripts.pory"
	waitmovement 0
# 83 "data/maps/HiddenVillage_PlayerHouse_Party/scripts.pory"
	playse SE_SWITCH
# 84 "data/maps/HiddenVillage_PlayerHouse_Party/scripts.pory"
	animateflash 0
# 85 "data/maps/HiddenVillage_PlayerHouse_Party/scripts.pory"
	setflashlevel 0
# 89 "data/maps/HiddenVillage_PlayerHouse_Party/scripts.pory"
	msgbox Event_BirthdaySurprise_Text_1, MSGBOX_DEFAULT
# 90 "data/maps/HiddenVillage_PlayerHouse_Party/scripts.pory"
	closemessage
# 91 "data/maps/HiddenVillage_PlayerHouse_Party/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Surprised
# 92 "data/maps/HiddenVillage_PlayerHouse_Party/scripts.pory"
	waitmovement 0
# 94 "data/maps/HiddenVillage_PlayerHouse_Party/scripts.pory"
	setvar VAR_TEMP_0, 1
# 96 "data/maps/HiddenVillage_PlayerHouse_Party/scripts.pory"
	releaseall
	end


# 100 "data/maps/HiddenVillage_PlayerHouse_Party/scripts.pory"
Movement_LightSwitch:
# 101 "data/maps/HiddenVillage_PlayerHouse_Party/scripts.pory"
	walk_right
# 102 "data/maps/HiddenVillage_PlayerHouse_Party/scripts.pory"
	face_down
# 103 "data/maps/HiddenVillage_PlayerHouse_Party/scripts.pory"
	delay_16
# 104 "data/maps/HiddenVillage_PlayerHouse_Party/scripts.pory"
	step_end

# 107 "data/maps/HiddenVillage_PlayerHouse_Party/scripts.pory"
Movement_Surprised:
# 108 "data/maps/HiddenVillage_PlayerHouse_Party/scripts.pory"
	jump_in_place_up
# 109 "data/maps/HiddenVillage_PlayerHouse_Party/scripts.pory"
	walk_up
# 110 "data/maps/HiddenVillage_PlayerHouse_Party/scripts.pory"
	walk_left
# 111 "data/maps/HiddenVillage_PlayerHouse_Party/scripts.pory"
	walk_up
# 112 "data/maps/HiddenVillage_PlayerHouse_Party/scripts.pory"
	emote_exclamation_mark
	step_end

Event_StrengthBirthday_Text_0:
# 18 "data/maps/HiddenVillage_PlayerHouse_Party/scripts.pory"
	.string "Strength: Haha! I bet you thought we\n"
	.string "would forget about your birthday...\l"
	.string "Happy Birthday!$"

Event_BiffBirthday_Text_0:
# 26 "data/maps/HiddenVillage_PlayerHouse_Party/scripts.pory"
	.string "Biffie: Arf arf! (Happy Birthday!)$"

Event_HeartBirthday_Text_0:
# 35 "data/maps/HiddenVillage_PlayerHouse_Party/scripts.pory"
	.string "Heart: It's your birthday! um yes queen\n"
	.string "skinny legend versace boots the house\l"
	.string "down slay queen hunty mama and oop\l"
	.string "daddy work charli xcx snatch my wig!\l"
	.string "HAPPY BIRTHDAY DIVA!!$"

Event_BrainBirthday_Text_0:
# 43 "data/maps/HiddenVillage_PlayerHouse_Party/scripts.pory"
	.string "Brain: Happy Birthday! Did you know\n"
	.string "your birthday only happens once a\l"
	.string "year?$"

Event_DavidBirthday_Text_0:
# 51 "data/maps/HiddenVillage_PlayerHouse_Party/scripts.pory"
	.string "David: Happy Birthday Bestie! I hope\n"
	.string "you liked the surprise me and all our\l"
	.string "friends from Hidden Village put\l"
	.string "together for you! I hope you had the\l"
	.string "best birthday ever and have the best\l"
	.string "year of your life babes! Sending you\l"
	.string "lots of love!$"

Event_ElderBirthday_Text_0:
# 59 "data/maps/HiddenVillage_PlayerHouse_Party/scripts.pory"
	.string "Elder: Ah {PLAYER}... Happy Birthday! By\n"
	.string "the way... Have you heard that song\l"
	.string "Butterflies by m0m0? I can't find it on\l"
	.string "streaming anywhere!\p"
	.string "...\p"
	.string "Wait what? {PLAYER}, you're m0m0?!\n"
	.string "RELEASE BUTTERFLIES ON STREAMING\l"
	.string "THIS INSTANT!$"

Event_LadyBirthday_Text_0:
# 67 "data/maps/HiddenVillage_PlayerHouse_Party/scripts.pory"
	.string "Lady: Happy Birthday {PLAYER}! Now just\n"
	.string "because it's your birthday, doesn't\l"
	.string "mean you can just wander off through\l"
	.string "the Elder's backyard...$"

Event_BirthdaySurprise_Text_0:
# 75 "data/maps/HiddenVillage_PlayerHouse_Party/scripts.pory"
	.string "Morgan: Huh... Why are the lights off?\p"
	.string "Morgan flipped the light switch...$"

Event_BirthdaySurprise_Text_1:
# 89 "data/maps/HiddenVillage_PlayerHouse_Party/scripts.pory"
	.string "Everyone: SURPRISE!!!\nHappy Birthday Morgan!$"
