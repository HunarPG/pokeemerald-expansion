Players_House_1F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Players_House_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Players_House_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Players_House_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	removeobject 2
	return

Players_House_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
	map_script_2 VAR_MOM_TEXT, 0, Players_House_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0
	map_script_2 VAR_MOM_TEXT, 4, Players_House_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_1
	.2byte 0

Players_House_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0:
	goto Players_House_1F_EventScript_Mom_Telling_About_Barry
	return

Players_House_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_1:
	goto Players_House_1F_EventScript_Mom_Get_To_Know_That_You_Got_Pokemon
	return


Players_House_1F_EventScript_Mom_Telling_About_Barry::
	lock
	removeobject 2
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Face_Down
	waitmovement 0
	applymovement 1, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement 1, Common_Movement_Delay48
	waitmovement 0
	applymovement 1, Movement_Mom_Come_to_Player
	waitmovement 0
	setvar VAR_MOM_TEXT, 1
	msgbox Players_House_1F_EventScript_Mom_Tell_About_Barry_Text
	closemessage
	applymovement 1, Movement_Mom_Back_to_Seat
	waitmovement 0
	return


Players_House_1F_EventScript_Mom::
	switch VAR_MOM_TEXT
	case 1, Players_House_1F_EventScript_Mom_2
	case 2, Players_House_1F_EventScript_Mom_3
	case 3, Players_House_1F_EventScript_Mom_4
	case 5, Players_House_1F_EventScript_Mom_5
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


Players_House_1F_EventScript_Mom_SAY_DONT_GO_IN_GRASS::
	applymovement 1, Movement_Face_Down
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Face_Up
	waitmovement 0
	msgbox Players_House_1F_EventScript_Mom_Say_Dont_Go_in_Grass_Text, MSGBOX_SIGN
	setvar VAR_MOM_TEXT, 2
	applymovement 1, Movement_Face_Up
	waitmovement 0
	return


Players_House_1F_EventScript_Sink::
	msgbox Players_House_1F_EventScript_Sink_Text, MSGBOX_SIGN
	return


Players_House_1F_EventScript_Mom_Tell_Barry_Impatient::
	msgbox Players_House_1F_EventScript_Mom_Text, MSGBOX_NPC
	return


Players_House_1F_EventScript_Mom_Get_To_Know_That_You_Got_Pokemon::
	lock
	addobject 2
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Face_Up
	waitmovement 0
	applymovement 2, Common_Movement_Delay48
	waitmovement 0
	applymovement 2, Movement_Mom_Near_Sink
	waitmovement 0
	applymovement 2, Common_Movement_Delay48
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Face_Right
	applymovement 2, Movement_Mom_Going_Away_From_Sink
	waitmovement 0
	applymovement 2, Movement_Mom_Moves_Towards_Her_Seat
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Player_Moves_Towards_Moms_Seat
	waitmovement 0
	msgbox Players_House_1F_Text_Mom_Discusses_About_You_Getting_Pokemon, MSGBOX_SIGN
	closemessage
	applymovement 2, Common_Movement_Delay48
	waitmovement 0
	msgbox Players_House_1F_Text_Mom_Gives_You_Running_Shoes, MSGBOX_SIGN
	closemessage
	playfanfare MUS_OBTAIN_ITEM
	msgbox PlayersHouse1F_Text_Mom_Actually_Gives_You_Running_Shoes, MSGBOX_SIGN
	closemessage
	setflag FLAG_SYS_B_DASH
	setvar VAR_MOM_TEXT, 5
	applymovement 2, Movement_Face_Up
	removeobject 2
	addobject 1
	clearflag FLAG_HIDE_MOM_SITTING
	return


Players_House_1F_EventScript_Mom_Say_Bye::
	msgbox Players_House_1F_EventScript_Mom_Say_Bye_Text, MSGBOX_NPC
	return


Players_House_1F_EventScript_Mom_Say_Barry_Is_Waiting::
	msgbox Players_House_1F_EventScript_Mom_Say_Barry_Is_Waiting_Text, MSGBOX_NPC
	return


Players_House_1F_EventScript_Mom_Heal_Your_Pokemon::
	msgbox Players_House_1F_EventScript_Mom_Heal_Your_Pokemon_Text, MSGBOX_NPC
	call Common_EventScript_OutOfCenterPartyHeal
	return


Movement_Face_Up:
	face_up
	step_end

Movement_Face_Down:
	face_down
	step_end

Movement_Face_Right:
	face_right
	step_end

Movement_Face_Left:
	face_left
	step_end

Movement_Mom_Come_to_Player:
	walk_up
	walk_right
	walk_right
	walk_right
	walk_up
	walk_up
	step_end

Movement_Mom_Back_to_Seat:
	walk_down
	walk_down
	walk_left
	walk_left
	walk_left
	walk_down
	face_up
	step_end

Movement_Mom_Near_Sink:
	walk_left
	face_up
	step_end

Movement_Mom_Going_Away_From_Sink:
	walk_right
	walk_right
	walk_right
	walk_down
	walk_right
	step_end

Movement_Mom_Moves_Towards_Her_Seat:
	walk_down
	walk_down
	walk_down
	walk_right
	walk_right
	face_left
	step_end

Movement_Player_Moves_Towards_Moms_Seat:
	walk_right
	walk_right
	walk_right
	walk_down
	walk_down
	walk_right
	step_end

Players_House_1F_EventScript_Mom_Tell_About_Barry_Text::
	.string "Mom: {PLAYER}!\p"
	.string "{B_RIVAL_NAME} already left.\p"
	.string "I don't know what it was about, but\n"
	.string "he sure was in a hurry!$"

Players_House_1F_EventScript_Mom_Text::
	.string "Mom: You know how impatient\n"
	.string "{B_RIVAL_NAME} is.!\p$"

Players_House_1F_EventScript_Sink_Text::
	.string "Mom's kitchen is spotless!\n"
	.string "You can see you face on the floor!$"

Players_House_1F_EventScript_Mom_Say_Dont_Go_in_Grass_Text::
	.string "Mom: Oh, yes!\n"
	.string "{PLAYER}!\p"
	.string "Don't go into the tall grass.\n"
	.string "Wild Pokemon might attack you.\p"
	.string "It would be OK if you had your own\n"
	.string "Pokemon, but you don't, so...\p"
	.string "Well, take care, sweetie!$"

Players_House_1F_Text_Mom_Discusses_About_You_Getting_Pokemon::
	.string "Mom: What's the matter, dear?\p"
	.string "...\p"
	.string "Wow.\n"
	.string "That's what happened to you?\p"
	.string "You are lucky to have\n"
	.string "met Prof. Rowan.\p"
	.string "Imagine if you didn't...\p"
	.string "I wouldn't like to think what the wild\n"
	.string "Pokemon might have done to you two.\p"
	.string "{PLAYER}, go see Prof, Rowan, and\n"
	.string "thank him properly for your Pokemon.\p"
	.string "His lab is in Sandgem Town, isn't it?\p"
	.string "Now that you have your own Pokemon,\n"
	.string "the tall grass won't be so threatning.$"

Players_House_1F_Text_Mom_Gives_You_Running_Shoes::
	.string "Oh, I know!\n"
	.string "{PLAYER}, put these on.$"

PlayersHouse1F_Text_Mom_Actually_Gives_You_Running_Shoes::
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

Players_House_1F_EventScript_Mom_Say_Bye_Text::
	.string "Mom: Bye-bye, {PLAYER}!\n"
	.string "You take care now!$"

Players_House_1F_EventScript_Mom_Say_Barry_Is_Waiting_Text::
	.string "Mom: What is it, dear?\n"
	.string "Isn't Gavin waiting for you?$"

Players_House_1F_EventScript_Mom_Heal_Your_Pokemon_Text::
	.string "Mom: Welcome home, {PLAYER}.\n"
	.string "Are you and your Pokemon healthy?\l"
	.string "Take a quick rest, dear.$"
