Players_House_1F_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Players_House_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, Players_House_1F_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
	.byte 0

Players_House_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
	map_script_2 VAR_MOM_TEXT, 0, Players_House_1F_EventScript_Mom_Telling_About_Barry
	map_script_2 VAR_MOM_TEXT, 4, Players_House_1F_EventScript_Mom_Get_To_Know_That_You_Got_Pokemon
	.2byte 0

Players_House_1F_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
	map_script_2 VAR_MOM_TEXT, 4, Players_House_1F_EventScript_Change_Player_Facing_Direction_To_Up
	.2byte 0


Players_House_1F_EventScript_Mom_Telling_About_Barry::
	lock
	applymovement OBJ_EVENT_ID_PLAYER, Players_House_1F_EventScript_Mom_Telling_About_Barry_Movement_0
	waitmovement 0
	playse SE_PIN
	applymovement LOCALID_MOM_SITTING, Players_House_1F_EventScript_Mom_Telling_About_Barry_Movement_1
	waitmovement 0
	delay 30
	applymovement LOCALID_MOM_SITTING, Players_House_1F_EventScript_Mom_Telling_About_Barry_Movement_2
	waitmovement 0
	setvar VAR_MOM_TEXT, 1
	msgbox Players_House_1F_EventScript_Mom_Telling_About_Barry_Text_0, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_MOM_SITTING, Players_House_1F_EventScript_Mom_Telling_About_Barry_Movement_3
	waitmovement 0
	release
	end


Players_House_1F_EventScript_Mom_SAY_DONT_GO_IN_GRASS::
	lock
	applymovement LOCALID_MOM_SITTING, Players_House_1F_EventScript_Mom_Telling_About_Barry_Movement_0
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Players_House_1F_EventScript_Mom_SAY_DONT_GO_IN_GRASS_Movement_0
	waitmovement 0
	msgbox Players_House_1F_EventScript_Mom_SAY_DONT_GO_IN_GRASS_Text_0, MSGBOX_SIGN
	setvar VAR_MOM_TEXT, 2
	applymovement LOCALID_MOM_SITTING, Players_House_1F_EventScript_Mom_SAY_DONT_GO_IN_GRASS_Movement_0
	waitmovement 0
	release
	end


Players_House_1F_EventScript_Mom::
	switch VAR_MOM_TEXT
	case 1, Players_House_1F_EventScript_Mom_2
	case 2, Players_House_1F_EventScript_Mom_3
	case 3, Players_House_1F_EventScript_Mom_4
	case 5, Players_House_1F_EventScript_Mom_5
	case 6, Players_House_1F_EventScript_Mom_6
	case 7, Players_House_1F_EventScript_Mom_7
	case 8, Players_House_1F_EventScript_Mom_8
	return

Players_House_1F_EventScript_Mom_2:
	goto Players_House_1F_EventScript_Mom_Tell_Barry_Impatient
	return

Players_House_1F_EventScript_Mom_3:
	goto Players_House_1F_EventScript_Mom_Say_Bye
	return

Players_House_1F_EventScript_Mom_4:
	goto Players_House_1F_EventScript_Mom_Say_Barry_Is_Waiting
	return

Players_House_1F_EventScript_Mom_5:
	goto Players_House_1F_EventScript_Mom_Heal_Your_Pokemon
	return

Players_House_1F_EventScript_Mom_6:
	goto Players_House_1F_EventScript_You_Tell_Mom_About_Leaving
	return

Players_House_1F_EventScript_Mom_7:
	goto Players_House_1F_EventScript_Mom_Heal_Your_Pokemon
	return

Players_House_1F_EventScript_Mom_8:
	goto Players_House_1F_EventScript_Mom_Heal_Your_Pokemon
	return


Players_House_1F_EventScript_Mom_Tell_Barry_Impatient::
	msgbox Players_House_1F_EventScript_Mom_Tell_Barry_Impatient_Text_0, MSGBOX_NPC
	end


Players_House_1F_EventScript_Mom_Say_Bye::
	msgbox Players_House_1F_EventScript_Mom_Say_Bye_Text_0, MSGBOX_NPC
	end


Players_House_1F_EventScript_Mom_Say_Barry_Is_Waiting::
	msgbox Players_House_1F_EventScript_Mom_Say_Barry_Is_Waiting_Text_0, MSGBOX_NPC
	end


Players_House_1F_EventScript_Mom_Get_To_Know_That_You_Got_Pokemon::
	lock
	applymovement LOCALID_MOM_STANDING, Players_House_1F_EventScript_Mom_Telling_About_Barry_Movement_0
	delay 30
	applymovement LOCALID_MOM_STANDING, Players_House_1F_EventScript_Mom_Get_To_Know_That_You_Got_Pokemon_Movement_0
	waitmovement 0
	delay 30
	applymovement OBJ_EVENT_ID_PLAYER, Players_House_1F_EventScript_Mom_Get_To_Know_That_You_Got_Pokemon_Movement_1
	applymovement LOCALID_MOM_STANDING, Players_House_1F_EventScript_Mom_Get_To_Know_That_You_Got_Pokemon_Movement_2
	waitmovement 0
	applymovement LOCALID_MOM_STANDING, Players_House_1F_EventScript_Mom_Get_To_Know_That_You_Got_Pokemon_Movement_3
	applymovement OBJ_EVENT_ID_PLAYER, Players_House_1F_EventScript_Mom_Get_To_Know_That_You_Got_Pokemon_Movement_4
	waitmovement 0
	msgbox Players_House_1F_EventScript_Mom_Get_To_Know_That_You_Got_Pokemon_Text_0, MSGBOX_DEFAULT
	closemessage
	delay 30
	msgbox Players_House_1F_EventScript_Mom_Get_To_Know_That_You_Got_Pokemon_Text_1, MSGBOX_DEFAULT
	closemessage
	playfanfare MUS_DP_OBTAIN_ITEM
	msgbox Players_House_1F_EventScript_Mom_Get_To_Know_That_You_Got_Pokemon_Text_2, MSGBOX_DEFAULT
	closemessage
	setflag FLAG_SYS_B_DASH
	setvar VAR_MOM_TEXT, 5
	applymovement LOCALID_MOM_STANDING, Players_House_1F_EventScript_Mom_SAY_DONT_GO_IN_GRASS_Movement_0
	removeobject LOCALID_MOM_STANDING
	setflag FLAG_HIDE_MOM_FROM_CUTSCENE
	addobject LOCALID_MOM_SITTING
	clearflag FLAG_HIDE_MOM_SITTING
	release
	end


Players_House_1F_EventScript_Mom_Heal_Your_Pokemon::
	msgbox Players_House_1F_EventScript_Mom_Heal_Your_Pokemon_Text_0, MSGBOX_NPC
	call Common_EventScript_OutOfCenterPartyHeal
	end


Players_House_1F_EventScript_You_Tell_Mom_About_Leaving::
	msgbox Players_House_1F_EventScript_Mom_Heal_Your_Pokemon_Text_0, MSGBOX_NPC
	call Common_EventScript_OutOfCenterPartyHeal
	msgbox Players_House_1F_EventScript_You_Tell_Mom_About_Leaving_Text_0, MSGBOX_SIGN
	giveitem ITEM_JOURNAL
	msgbox Players_House_1F_EventScript_You_Tell_Mom_About_Leaving_Text_1, MSGBOX_SIGN
	specialvar VAR_RESULT, GetPlayerFacingDirection
	switch VAR_RESULT
	case DIR_EAST, Players_House_1F_EventScript_You_Tell_Mom_About_Leaving_3
	case DIR_NORTH, Players_House_1F_EventScript_You_Tell_Mom_About_Leaving_3
	case DIR_WEST, Players_House_1F_EventScript_You_Tell_Mom_About_Leaving_3
	case DIR_SOUTH, Players_House_1F_EventScript_You_Tell_Mom_About_Leaving_4
Players_House_1F_EventScript_You_Tell_Mom_About_Leaving_1:
	waitmovement 0
	msgbox Players_House_1F_EventScript_You_Tell_Mom_About_Leaving_Text_2, MSGBOX_SIGN
	switch VAR_RESULT
	case DIR_EAST, Players_House_1F_EventScript_You_Tell_Mom_About_Leaving_7
	case DIR_NORTH, Players_House_1F_EventScript_You_Tell_Mom_About_Leaving_8
	case DIR_SOUTH, Players_House_1F_EventScript_You_Tell_Mom_About_Leaving_9
	case DIR_WEST, Players_House_1F_EventScript_You_Tell_Mom_About_Leaving_10
Players_House_1F_EventScript_You_Tell_Mom_About_Leaving_5:
	waitmovement 0
	msgbox Players_House_1F_EventScript_You_Tell_Mom_About_Leaving_Text_3, MSGBOX_SIGN
	playse SE_DOOR
	addobject LOCALID_BARRY_MOM
	clearflag FLAG_HIDE_BARRY_MOM_IN_PLAYER_HOUSE
	applymovement LOCALID_MOM_SITTING, Players_House_1F_EventScript_Mom_Telling_About_Barry_Movement_0
	waitmovement 0
	playse SE_PIN
	applymovement OBJ_EVENT_ID_PLAYER, Players_House_1F_EventScript_Mom_Telling_About_Barry_Movement_0
	waitmovement 0
	delay 30
	playse SE_PIN
	applymovement LOCALID_MOM_SITTING, Players_House_1F_EventScript_Mom_Telling_About_Barry_Movement_1
	waitmovement 0
	delay 30
	applymovement LOCALID_BARRY_MOM, Players_House_1F_EventScript_You_Tell_Mom_About_Leaving_Movement_1
	waitmovement 0
	msgbox Players_House_1F_EventScript_You_Tell_Mom_About_Leaving_Text_4, MSGBOX_SIGN
	applymovement LOCALID_MOM_SITTING, Players_House_1F_EventScript_You_Tell_Mom_About_Leaving_Movement_2
	waitmovement 0
	msgbox Players_House_1F_EventScript_You_Tell_Mom_About_Leaving_Text_5, MSGBOX_SIGN
	switch VAR_RESULT
	case DIR_EAST, Players_House_1F_EventScript_You_Tell_Mom_About_Leaving_13
	case DIR_NORTH, Players_House_1F_EventScript_You_Tell_Mom_About_Leaving_14
	case DIR_SOUTH, Players_House_1F_EventScript_You_Tell_Mom_About_Leaving_15
	case DIR_WEST, Players_House_1F_EventScript_You_Tell_Mom_About_Leaving_16
Players_House_1F_EventScript_You_Tell_Mom_About_Leaving_11:
	waitmovement 0
	msgbox Players_House_1F_EventScript_You_Tell_Mom_About_Leaving_Text_6, MSGBOX_SIGN
	switch VAR_RESULT
	case DIR_EAST, Players_House_1F_EventScript_You_Tell_Mom_About_Leaving_19
	case DIR_NORTH, Players_House_1F_EventScript_You_Tell_Mom_About_Leaving_20
	case DIR_SOUTH, Players_House_1F_EventScript_You_Tell_Mom_About_Leaving_21
	case DIR_WEST, Players_House_1F_EventScript_You_Tell_Mom_About_Leaving_22
Players_House_1F_EventScript_You_Tell_Mom_About_Leaving_17:
	waitmovement LOCALID_BARRY_MOM
	msgbox Players_House_1F_EventScript_You_Tell_Mom_About_Leaving_Text_7, MSGBOX_SIGN
	giveitem ITEM_PARCEL
	msgbox Players_House_1F_EventScript_You_Tell_Mom_About_Leaving_Text_8, MSGBOX_SIGN
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	switch VAR_TEMP_0
	case 5, Players_House_1F_EventScript_You_Tell_Mom_About_Leaving_25
	case 6, Players_House_1F_EventScript_You_Tell_Mom_About_Leaving_26
	case 7, Players_House_1F_EventScript_You_Tell_Mom_About_Leaving_27
Players_House_1F_EventScript_You_Tell_Mom_About_Leaving_23:
	waitmovement LOCALID_BARRY_MOM
	playse SE_EXIT
	removeobject LOCALID_BARRY_MOM
	setflag FLAG_HIDE_BARRY_MOM_IN_PLAYER_HOUSE
	setvar VAR_MOM_TEXT, 7
	end

Players_House_1F_EventScript_You_Tell_Mom_About_Leaving_3:
	applymovement LOCALID_MOM_SITTING, Players_House_1F_EventScript_Mom_SAY_DONT_GO_IN_GRASS_Movement_0
	goto Players_House_1F_EventScript_You_Tell_Mom_About_Leaving_1

Players_House_1F_EventScript_You_Tell_Mom_About_Leaving_4:
	applymovement LOCALID_MOM_SITTING, Players_House_1F_EventScript_Mom_Telling_About_Barry_Movement_0
	goto Players_House_1F_EventScript_You_Tell_Mom_About_Leaving_1

Players_House_1F_EventScript_You_Tell_Mom_About_Leaving_7:
	applymovement LOCALID_MOM_SITTING, Players_House_1F_EventScript_You_Tell_Mom_About_Leaving_Movement_0
	goto Players_House_1F_EventScript_You_Tell_Mom_About_Leaving_5

Players_House_1F_EventScript_You_Tell_Mom_About_Leaving_8:
	applymovement LOCALID_MOM_SITTING, Players_House_1F_EventScript_Mom_Telling_About_Barry_Movement_0
	goto Players_House_1F_EventScript_You_Tell_Mom_About_Leaving_5

Players_House_1F_EventScript_You_Tell_Mom_About_Leaving_9:
	applymovement LOCALID_MOM_SITTING, Players_House_1F_EventScript_Mom_SAY_DONT_GO_IN_GRASS_Movement_0
	goto Players_House_1F_EventScript_You_Tell_Mom_About_Leaving_5

Players_House_1F_EventScript_You_Tell_Mom_About_Leaving_10:
	applymovement LOCALID_MOM_SITTING, Players_House_1F_EventScript_Mom_Get_To_Know_That_You_Got_Pokemon_Movement_1
	goto Players_House_1F_EventScript_You_Tell_Mom_About_Leaving_5

Players_House_1F_EventScript_You_Tell_Mom_About_Leaving_13:
	applymovement OBJ_EVENT_ID_PLAYER, Players_House_1F_EventScript_Mom_Get_To_Know_That_You_Got_Pokemon_Movement_1
	applymovement LOCALID_MOM_SITTING, Players_House_1F_EventScript_You_Tell_Mom_About_Leaving_Movement_0
	goto Players_House_1F_EventScript_You_Tell_Mom_About_Leaving_11

Players_House_1F_EventScript_You_Tell_Mom_About_Leaving_14:
	applymovement OBJ_EVENT_ID_PLAYER, Players_House_1F_EventScript_Mom_SAY_DONT_GO_IN_GRASS_Movement_0
	applymovement LOCALID_MOM_SITTING, Players_House_1F_EventScript_Mom_Telling_About_Barry_Movement_0
	goto Players_House_1F_EventScript_You_Tell_Mom_About_Leaving_11

Players_House_1F_EventScript_You_Tell_Mom_About_Leaving_15:
	applymovement OBJ_EVENT_ID_PLAYER, Players_House_1F_EventScript_Mom_Telling_About_Barry_Movement_0
	applymovement LOCALID_MOM_SITTING, Players_House_1F_EventScript_Mom_SAY_DONT_GO_IN_GRASS_Movement_0
	goto Players_House_1F_EventScript_You_Tell_Mom_About_Leaving_11

Players_House_1F_EventScript_You_Tell_Mom_About_Leaving_16:
	applymovement OBJ_EVENT_ID_PLAYER, Players_House_1F_EventScript_You_Tell_Mom_About_Leaving_Movement_0
	applymovement LOCALID_MOM_SITTING, Players_House_1F_EventScript_Mom_Get_To_Know_That_You_Got_Pokemon_Movement_1
	goto Players_House_1F_EventScript_You_Tell_Mom_About_Leaving_11

Players_House_1F_EventScript_You_Tell_Mom_About_Leaving_19:
	applymovement OBJ_EVENT_ID_PLAYER, Players_House_1F_EventScript_Mom_Telling_About_Barry_Movement_0
	applymovement LOCALID_BARRY_MOM, Players_House_1F_EventScript_Mom_SAY_DONT_GO_IN_GRASS_Movement_0
	goto Players_House_1F_EventScript_You_Tell_Mom_About_Leaving_17

Players_House_1F_EventScript_You_Tell_Mom_About_Leaving_20:
	applymovement OBJ_EVENT_ID_PLAYER, Players_House_1F_EventScript_You_Tell_Mom_About_Leaving_Movement_0
	goto Players_House_1F_EventScript_You_Tell_Mom_About_Leaving_17

Players_House_1F_EventScript_You_Tell_Mom_About_Leaving_21:
	applymovement OBJ_EVENT_ID_PLAYER, Players_House_1F_EventScript_You_Tell_Mom_About_Leaving_Movement_0
	applymovement LOCALID_BARRY_MOM, Players_House_1F_EventScript_You_Tell_Mom_About_Leaving_Movement_3
	goto Players_House_1F_EventScript_You_Tell_Mom_About_Leaving_17

Players_House_1F_EventScript_You_Tell_Mom_About_Leaving_22:
	applymovement OBJ_EVENT_ID_PLAYER, Players_House_1F_EventScript_Mom_Telling_About_Barry_Movement_0
	applymovement LOCALID_BARRY_MOM, Players_House_1F_EventScript_You_Tell_Mom_About_Leaving_Movement_4
	goto Players_House_1F_EventScript_You_Tell_Mom_About_Leaving_17

Players_House_1F_EventScript_You_Tell_Mom_About_Leaving_25:
	applymovement OBJ_EVENT_ID_PLAYER, Players_House_1F_EventScript_Mom_Telling_About_Barry_Movement_0
	applymovement LOCALID_BARRY_MOM, Players_House_1F_EventScript_You_Tell_Mom_About_Leaving_Movement_5
	goto Players_House_1F_EventScript_You_Tell_Mom_About_Leaving_23

Players_House_1F_EventScript_You_Tell_Mom_About_Leaving_26:
	switch VAR_TEMP_1
	case 5, Players_House_1F_EventScript_You_Tell_Mom_About_Leaving_29
	case 7, Players_House_1F_EventScript_You_Tell_Mom_About_Leaving_30
	goto Players_House_1F_EventScript_You_Tell_Mom_About_Leaving_23

Players_House_1F_EventScript_You_Tell_Mom_About_Leaving_27:
	applymovement OBJ_EVENT_ID_PLAYER, Players_House_1F_EventScript_Mom_Telling_About_Barry_Movement_0
	applymovement LOCALID_BARRY_MOM, Players_House_1F_EventScript_You_Tell_Mom_About_Leaving_Movement_7
	applymovement LOCALID_MOM_SITTING, Players_House_1F_EventScript_Mom_Telling_About_Barry_Movement_0
	goto Players_House_1F_EventScript_You_Tell_Mom_About_Leaving_23

Players_House_1F_EventScript_You_Tell_Mom_About_Leaving_29:
	applymovement OBJ_EVENT_ID_PLAYER, Players_House_1F_EventScript_Mom_Telling_About_Barry_Movement_0
	applymovement LOCALID_BARRY_MOM, Players_House_1F_EventScript_You_Tell_Mom_About_Leaving_Movement_6
	applymovement LOCALID_MOM_SITTING, Players_House_1F_EventScript_Mom_Telling_About_Barry_Movement_0
	goto Players_House_1F_EventScript_You_Tell_Mom_About_Leaving_23

Players_House_1F_EventScript_You_Tell_Mom_About_Leaving_30:
	applymovement OBJ_EVENT_ID_PLAYER, Players_House_1F_EventScript_Mom_Telling_About_Barry_Movement_0
	applymovement LOCALID_BARRY_MOM, Players_House_1F_EventScript_You_Tell_Mom_About_Leaving_Movement_5
	goto Players_House_1F_EventScript_You_Tell_Mom_About_Leaving_23


Players_House_1F_EventScript_Change_Player_Facing_Direction_To_Up::
	applymovement OBJ_EVENT_ID_PLAYER, Players_House_1F_EventScript_Mom_SAY_DONT_GO_IN_GRASS_Movement_0
	return


Players_House_1F_EventScript_Sink::
	msgbox Players_House_1F_EventScript_Sink_Text_0, MSGBOX_SIGN
	end


Players_House_1F_EventScript_Mom_Telling_About_Barry_Movement_0:
	face_down
	step_end

Players_House_1F_EventScript_Mom_Telling_About_Barry_Movement_1:
	emote_exclamation_mark
	step_end

Players_House_1F_EventScript_Mom_Telling_About_Barry_Movement_2:
	walk_up
	walk_right
	walk_right
	walk_right
	walk_up
	walk_up
	step_end

Players_House_1F_EventScript_Mom_Telling_About_Barry_Movement_3:
	walk_down
	walk_down
	walk_left
	walk_left
	walk_left
	walk_down
	face_up
	step_end

Players_House_1F_EventScript_Mom_SAY_DONT_GO_IN_GRASS_Movement_0:
	face_up
	step_end

Players_House_1F_EventScript_Mom_Get_To_Know_That_You_Got_Pokemon_Movement_0:
	walk_left
	face_up
	step_end

Players_House_1F_EventScript_Mom_Get_To_Know_That_You_Got_Pokemon_Movement_1:
	face_right
	step_end

Players_House_1F_EventScript_Mom_Get_To_Know_That_You_Got_Pokemon_Movement_2:
	walk_right
	walk_right
	walk_right
	walk_down
	walk_right
	step_end

Players_House_1F_EventScript_Mom_Get_To_Know_That_You_Got_Pokemon_Movement_3:
	walk_down
	walk_down
	walk_down
	walk_right
	walk_right
	face_left
	step_end

Players_House_1F_EventScript_Mom_Get_To_Know_That_You_Got_Pokemon_Movement_4:
	walk_right
	walk_right
	walk_right
	walk_down
	walk_down
	walk_right
	step_end

Players_House_1F_EventScript_You_Tell_Mom_About_Leaving_Movement_0:
	face_left
	step_end

Players_House_1F_EventScript_You_Tell_Mom_About_Leaving_Movement_1:
	walk_up
	face_right
	step_end

Players_House_1F_EventScript_You_Tell_Mom_About_Leaving_Movement_2:
	walk_in_place_down
	step_end

Players_House_1F_EventScript_You_Tell_Mom_About_Leaving_Movement_3:
	walk_up
	walk_up
	face_right
	step_end

Players_House_1F_EventScript_You_Tell_Mom_About_Leaving_Movement_4:
	walk_right
	walk_right
	face_up
	step_end

Players_House_1F_EventScript_You_Tell_Mom_About_Leaving_Movement_5:
	walk_down
	step_end

Players_House_1F_EventScript_You_Tell_Mom_About_Leaving_Movement_6:
	walk_down
	walk_down
	walk_down
	step_end

Players_House_1F_EventScript_You_Tell_Mom_About_Leaving_Movement_7:
	walk_left
	walk_left
	walk_down
	step_end

Players_House_1F_EventScript_Mom_Telling_About_Barry_Text_0:
	.string "Mom: {PLAYER}!\p"
	.string "{RIVAL} already left.\p"
	.string "I don't know what it was about, but\n"
	.string "he sure was in a hurry!$"

Players_House_1F_EventScript_Mom_SAY_DONT_GO_IN_GRASS_Text_0:
	.string "Mom: Oh, yes!\n"
	.string "{PLAYER}!\p"
	.string "Don't go into the tall grass.\n"
	.string "Wild Pokémon might attack you.\p"
	.string "It would be OK if you had your own\n"
	.string "Pokémon, but you don't, so...\p"
	.string "Well, take care, sweetie!$"

Players_House_1F_EventScript_Mom_Tell_Barry_Impatient_Text_0:
	.string "Mom: You know how impatient\n"
	.string "{RIVAL} is.!$"

Players_House_1F_EventScript_Mom_Say_Bye_Text_0:
	.string "Mom: Bye-bye, {PLAYER}!\n"
	.string "You take care now!$"

Players_House_1F_EventScript_Mom_Say_Barry_Is_Waiting_Text_0:
	.string "Mom: What is it, dear?\n"
	.string "Isn't {RIVAL} waiting for you?$"

Players_House_1F_EventScript_Mom_Get_To_Know_That_You_Got_Pokemon_Text_0:
	.string "Mom: What's the matter, dear?\p"
	.string "...\p"
	.string "Wow.\n"
	.string "That's what happened to you?\p"
	.string "You are lucky to have\n"
	.string "met Prof. Rowan.\p"
	.string "Imagine if you didn't...\p"
	.string "I wouldn't like to think what the wild\n"
	.string "Pokémon might have done to you two.\p"
	.string "{PLAYER}, go see Prof, Rowan, and\n"
	.string "thank him properly for your Pokémon.\p"
	.string "His lab is in Sandgem Town, isn't it?\p"
	.string "Now that you have your own Pokémon,\n"
	.string "the tall grass won't be so threatning.$"

Players_House_1F_EventScript_Mom_Get_To_Know_That_You_Got_Pokemon_Text_1:
	.string "Oh, I know!\n"
	.string "{PLAYER}, put these on.$"

Players_House_1F_EventScript_Mom_Get_To_Know_That_You_Got_Pokemon_Text_2:
	.string "{PLAYER} recieved a pair of\n"
	.string "Running Shoes!\p"
	.string "Going to Sandgem Town is like an\n"
	.string "adventure in itself, right?\p"
	.string "With those Running Shoes, you can\n"
	.string "get to faraway places much faster.\p"
	.string "Ok...\n"
	.string "Let me read the instructions...\p"
	.string "Press the B Button and dash\n"
	.string "about faster than ever before!\p"
	.string "Put on the running shoes and\n"
	.string "blaze new trails of adventure!\p"
	.string "Isn't that just nifty!$"

Players_House_1F_EventScript_Mom_Heal_Your_Pokemon_Text_0:
	.string "Mom: Welcome home, {PLAYER}.\n"
	.string "Are you and your Pokémon healthy?\l"
	.string "Take a quick rest, dear.$"

Players_House_1F_EventScript_You_Tell_Mom_About_Leaving_Text_0:
	.string "Mom: What is it, {PLAYER}?\p"
	.string "...\p"
	.string "Wow. Professor Rowan asked you\n"
	.string "to do something big.\p"
	.string "Ok, dear, got for it!\n"
	.string "Your mom's got your back!\p"
	.string "Oh, I know! {PLAYER}, I've got\n"
	.string "something that you'll find useful$"

Players_House_1F_EventScript_You_Tell_Mom_About_Leaving_Text_1:
	.string "That's a Journal. It keeps a record\n"
	.string "of your daily events.\p"
	.string "Check it, and you'll be able to\n"
	.string "remember what you did last.$"

Players_House_1F_EventScript_You_Tell_Mom_About_Leaving_Text_2:
	.string "Gee, a journey full of adventure...\n"
	.string "I envy you, kiddo.\p"
	.string "Plus, you are not alone.\n"
	.string "You have your Pokémon with you.\l"
	.string "I wish I could go instead!$"

Players_House_1F_EventScript_You_Tell_Mom_About_Leaving_Text_3:
	.string "I'm just joking dear!\n"
	.string "Yup, {PLAYER}!\p"
	.string "I'll be all right by myself, so you\n"
	.string "go and enjoy your adventure!\p"
	.string "When you're exposed to new things,\n"
	.string "and experience new sensations...\l"
	.string "It makes your mother happy, too.\p"
	.string "...But come back sometimes.\p"
	.string "I would like to see the kinds of\n"
	.string "Pokémon you've caught, dear.$"

Players_House_1F_EventScript_You_Tell_Mom_About_Leaving_Text_4:
	.string "{RIVAL}'s mom: Excuse me.\n"
	.string "Is my little {RIVAL} here?$"

Players_House_1F_EventScript_You_Tell_Mom_About_Leaving_Text_5:
	.string "Mom: Oh?\n"
	.string "No, he's not...\p"
	.string "{RIVAL}: Oh...\n"
	.string "Then, he must have left already...\l"
	.string "What to do...\p"
	.string "That boy shouted about going on an\n"
	.string "adventure, then he bolted\p"
	.string "He's so headstrong and reckless...\n"
	.string "I at least wanted him to take this...\p"
	.string "Mom: Not to worry, {PLAYER} will\n"
	.string "deliver that to him.$"

Players_House_1F_EventScript_You_Tell_Mom_About_Leaving_Text_6:
	.string "Won't you {PLAYER}?$"

Players_House_1F_EventScript_You_Tell_Mom_About_Leaving_Text_7:
	.string "{RIVAL}: Oh, really?\n"
	.string "You'd do that for me?\n"
	.string "{PLAYER}, please take this to\n"
	.string "{RIVAL} for me.$"

Players_House_1F_EventScript_You_Tell_Mom_About_Leaving_Text_8:
	.string "Mom: Bye-bye, {PLAYER}!\n"
	.string "Enjoy your adventure!\p"
	.string "{RIVAL}: Let me think...\p"
	.string "Knowing my boy, he would probably\n"
	.string "head straight to Jubilife City...\p"
	.string "Ok, please take that to my\n"
	.string "{RIVAL}.$"

Players_House_1F_EventScript_Sink_Text_0:
	.string "Mom's kitchen is spotless!\n"
	.string "You can see you face on the floor!$"
