Players_House_1F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Players_House_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Players_House_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Players_House_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	removeobject 2
	return

Players_House_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
	map_script_2 VAR_MOM_TEXT, 0, Players_House_1F_EventScript_Mom_Telling_About_Barry
	map_script_2 VAR_MOM_TEXT, 4, Players_House_1F_EventScript_Mom_Get_To_Know_That_You_Got_Pokemon
	.2byte 0


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


Players_House_1F_EventScript_Mom_SAY_DONT_GO_IN_GRASS::
	lock
	applymovement 1, Movement_Face_Down
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Face_Up
	waitmovement 0
	msgbox Players_House_1F_EventScript_Mom_Say_Dont_Go_in_Grass_Text, MSGBOX_SIGN
	setvar VAR_MOM_TEXT, 2
	applymovement 1, Movement_Face_Up
	waitmovement 0
	release
	end


Players_House_1F_EventScript_Sink::
	msgbox Players_House_1F_EventScript_Sink_Text, MSGBOX_SIGN
	end


Players_House_1F_EventScript_Mom_Tell_Barry_Impatient::
	msgbox Players_House_1F_EventScript_Mom_Text, MSGBOX_NPC
	end


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
	playfanfare MUS_DP_OBTAIN_ITEM
	msgbox PlayersHouse1F_Text_Mom_Actually_Gives_You_Running_Shoes, MSGBOX_SIGN
	closemessage
	setflag FLAG_SYS_B_DASH
	setvar VAR_MOM_TEXT, 5
	applymovement 2, Movement_Face_Up
	removeobject 2
	addobject 1
	clearflag FLAG_HIDE_MOM_SITTING
	release
	end


Players_House_1F_EventScript_Mom_Say_Bye::
	msgbox Players_House_1F_EventScript_Mom_Say_Bye_Text, MSGBOX_NPC
	end


Players_House_1F_EventScript_Mom_Say_Barry_Is_Waiting::
	msgbox Players_House_1F_EventScript_Mom_Say_Barry_Is_Waiting_Text, MSGBOX_NPC
	end


Players_House_1F_EventScript_Mom_Heal_Your_Pokemon::
	msgbox Players_House_1F_EventScript_Mom_Heal_Your_Pokemon_Text, MSGBOX_NPC
	call Common_EventScript_OutOfCenterPartyHeal
	end


Players_House_1F_EventScript_You_Tell_Mom_About_Leaving::
	msgbox Players_House_1F_EventScript_Mom_Heal_Your_Pokemon_Text, MSGBOX_NPC
	call Common_EventScript_OutOfCenterPartyHeal
	msgbox Players_House_1F_EventScript_You_Tell_Mom_About_Leaving_Text, MSGBOX_SIGN
	msgbox Players_House_1F_EventScript_Mom_Talk_About_Journal, MSGBOX_SIGN
	specialvar VAR_RESULT, GetPlayerFacingDirection
	goto_if_eq VAR_RESULT, DIR_EAST, Players_House_1F_EventScript_You_Tell_Mom_About_Leaving_Continue_Player_Face_Right
	goto_if_eq VAR_RESULT, DIR_NORTH, Players_House_1F_EventScript_You_Tell_Mom_About_Leaving_Continue_Player_Face_Up
	goto_if_eq VAR_RESULT, DIR_SOUTH, Players_House_1F_EventScript_You_Tell_Mom_About_Leaving_Continue_Player_Face_Down
	goto_if_eq VAR_RESULT, DIR_WEST, Players_House_1F_EventScript_You_Tell_Mom_About_Leaving_Continue_Player_Face_Left
	return


Players_House_1F_EventScript_You_Tell_Mom_About_Leaving_Continue_Player_Face_Right::
	applymovement 1, Movement_Face_Up
	msgbox Players_House_1F_EventScript_Mom_Talk_About_Journey, MSGBOX_SIGN
	applymovement 1, Movement_Face_Left
	msgbox Players_House_1F_EventScript_Mom_Joking_Text, MSGBOX_SIGN
	playse SE_DOOR
	addobject 3
	applymovement 1, Movement_Face_Down
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_Delay48
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Face_Down
	waitmovement 0
	playse SE_PIN
	applymovement 1, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_Delay48
	waitmovement 0
	applymovement 3, Movement_Barry_Mom_Come_Up
	waitmovement 0
	msgbox Players_House_1F_EventScript_Barry_Mom_Ask_About_Barry, MSGBOX_SIGN
	applymovement 1, Movement_Mom_Walk_In_Place_Down
	waitmovement 0
	msgbox Players_House_1F_EventScript_Discuss_About_Barry, MSGBOX_SIGN
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Face_Right
	applymovement 1, Movement_Face_Left
	waitmovement 0
	msgbox Players_House_1F_EventScript_Mom_Asks, MSGBOX_SIGN
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Face_Down
	applymovement 3, Movement_Face_Up
	waitmovement 0
	msgbox Players_House_1F_EventScript_Barry_Mom_Gives_Parcel, MSGBOX_SIGN
	msgbox Players_House_1F_EventScript_Mom_Wishes_Bye_And_Barry_Mom_Tell_Location, MSGBOX_SIGN
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Player_Walk_In_Place_Down
	applymovement 3, Movement_Barry_Mom_Leaves
	waitmovement 0
	playse SE_EXIT
	removeobject 3
	setflag FLAG_HIDE_BARRY_MOM_IN_PLAYER_HOUSE
	setvar VAR_MOM_TEXT, 7
	end


Players_House_1F_EventScript_You_Tell_Mom_About_Leaving_Continue_Player_Face_Up::
	applymovement 1, Movement_Face_Up
	msgbox Players_House_1F_EventScript_Mom_Talk_About_Journey, MSGBOX_SIGN
	applymovement 1, Movement_Face_Down
	msgbox Players_House_1F_EventScript_Mom_Joking_Text, MSGBOX_SIGN
	playse SE_DOOR
	addobject 3
	applymovement 1, Movement_Face_Down
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Face_Down
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_Delay48
	waitmovement 0
	playse SE_PIN
	applymovement 1, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_Delay48
	waitmovement 0
	applymovement 3, Movement_Barry_Mom_Come_Up
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Face_Left
	waitmovement 0
	msgbox Players_House_1F_EventScript_Barry_Mom_Ask_About_Barry, MSGBOX_SIGN
	applymovement 1, Movement_Mom_Walk_In_Place_Down
	waitmovement 0
	msgbox Players_House_1F_EventScript_Discuss_About_Barry, MSGBOX_SIGN
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Face_Up
	applymovement 1, Movement_Mom_Walk_In_Place_Down
	waitmovement 0
	msgbox Players_House_1F_EventScript_Mom_Asks, MSGBOX_SIGN
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Face_Left
	waitmovement 0
	msgbox Players_House_1F_EventScript_Barry_Mom_Gives_Parcel, MSGBOX_SIGN
	msgbox Players_House_1F_EventScript_Mom_Wishes_Bye_And_Barry_Mom_Tell_Location, MSGBOX_SIGN
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Player_Walk_In_Place_Down
	applymovement 3, Movement_Barry_Mom_Leaves
	waitmovement 0
	playse SE_EXIT
	removeobject 3
	setflag FLAG_HIDE_BARRY_MOM_IN_PLAYER_HOUSE
	setvar VAR_MOM_TEXT, 7
	end


Players_House_1F_EventScript_You_Tell_Mom_About_Leaving_Continue_Player_Face_Down::
	applymovement 1, Movement_Face_Down
	msgbox Players_House_1F_EventScript_Mom_Talk_About_Journey, MSGBOX_SIGN
	applymovement 1, Movement_Face_Up
	msgbox Players_House_1F_EventScript_Mom_Joking_Text, MSGBOX_SIGN
	playse SE_DOOR
	addobject 3
	applymovement 1, Movement_Face_Down
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Player_Walk_In_Place_Down
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_Delay48
	waitmovement 0
	playse SE_PIN
	applymovement 1, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_Delay48
	waitmovement 0
	applymovement 3, Movement_Barry_Mom_Come_Up
	waitmovement 0
	msgbox Players_House_1F_EventScript_Barry_Mom_Ask_About_Barry, MSGBOX_SIGN
	applymovement 1, Movement_Mom_Walk_In_Place_Down
	waitmovement 0
	msgbox Players_House_1F_EventScript_Discuss_About_Barry, MSGBOX_SIGN
	applymovement 1, Movement_Face_Up
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Mom_Walk_In_Place_Down
	waitmovement 0
	msgbox Players_House_1F_EventScript_Mom_Asks, MSGBOX_SIGN
	applymovement 3, Players_House_1F_EventScript_Barry_Mom_Comes_Up_To_Give_Parcel_Up
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Face_Left
	waitmovement 0
	msgbox Players_House_1F_EventScript_Barry_Mom_Gives_Parcel, MSGBOX_SIGN
	msgbox Players_House_1F_EventScript_Mom_Wishes_Bye_And_Barry_Mom_Tell_Location, MSGBOX_SIGN
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Face_Down
	applymovement 1, Movement_Face_Down
	applymovement 3, Movement_Barry_Mom_Leaves_From_Top
	waitmovement 0
	playse SE_EXIT
	removeobject 3
	setflag FLAG_HIDE_BARRY_MOM_IN_PLAYER_HOUSE
	setvar VAR_MOM_TEXT, 7
	end


Players_House_1F_EventScript_You_Tell_Mom_About_Leaving_Continue_Player_Face_Left::
	applymovement 1, Movement_Face_Up
	msgbox Players_House_1F_EventScript_Mom_Talk_About_Journey, MSGBOX_SIGN
	applymovement 1, Movement_Face_Right
	msgbox Players_House_1F_EventScript_Mom_Joking_Text, MSGBOX_SIGN
	playse SE_DOOR
	addobject 3
	applymovement 1, Movement_Face_Down
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Face_Down
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_Delay48
	waitmovement 0
	playse SE_PIN
	applymovement 1, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_Delay48
	waitmovement 0
	applymovement 3, Movement_Barry_Mom_Come_Up
	waitmovement 0
	msgbox Players_House_1F_EventScript_Barry_Mom_Ask_About_Barry, MSGBOX_SIGN
	applymovement 1, Movement_Mom_Walk_In_Place_Down
	waitmovement 0
	msgbox Players_House_1F_EventScript_Discuss_About_Barry, MSGBOX_SIGN
	applymovement 1, Movement_Face_Right
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Face_Left
	waitmovement 0
	msgbox Players_House_1F_EventScript_Mom_Asks, MSGBOX_SIGN
	applymovement 3, Players_House_1F_EventScript_Barry_Mom_Comes_Up_To_Give_Parcel_Down
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Face_Down
	waitmovement 0
	msgbox Players_House_1F_EventScript_Barry_Mom_Gives_Parcel, MSGBOX_SIGN
	msgbox Players_House_1F_EventScript_Mom_Wishes_Bye_And_Barry_Mom_Tell_Location, MSGBOX_SIGN
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Face_Down
	applymovement 1, Movement_Face_Down
	applymovement 3, Movement_Barry_Mom_Leaves_From_Bottom
	waitmovement 0
	playse SE_EXIT
	removeobject 3
	setflag FLAG_HIDE_BARRY_MOM_IN_PLAYER_HOUSE
	setvar VAR_MOM_TEXT, 7
	end


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

Movement_Barry_Mom_Come_Up:
	walk_up
	face_right
	step_end

Movement_Mom_Walk_In_Place_Down:
	walk_in_place_down
	step_end

Movement_Player_Walk_In_Place_Down:
	walk_in_place_down
	step_end

Movement_Barry_Mom_Leaves:
	walk_down
	step_end

Players_House_1F_EventScript_Barry_Mom_Comes_Up_To_Give_Parcel_Up:
	walk_up
	walk_up
	face_right
	step_end

Movement_Barry_Mom_Leaves_From_Top:
	walk_down
	walk_down
	walk_down
	step_end

Players_House_1F_EventScript_Barry_Mom_Comes_Up_To_Give_Parcel_Down:
	walk_right
	walk_right
	face_up
	step_end

Movement_Barry_Mom_Leaves_From_Bottom:
	walk_left
	walk_left
	walk_down
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

Players_House_1F_EventScript_You_Tell_Mom_About_Leaving_Text::
	.string "Mom: What is it, {PLAYER}?\p"
	.string "...\p"
	.string "Wow. Professor Rowan asked you\n"
	.string "to do something big.\p"
	.string "Ok, dear, got for it!\n"
	.string "Your mom's got your back!\p"
	.string "Oh, I know! {PLAYER}, I've got\n"
	.string "something that you'll find useful$"

Players_House_1F_EventScript_Mom_Give_Journal_Text::
	.string "{PLAYER} obtained\n"
	.string "the Journal!$"

Players_House_1F_EventScript_Mom_Talk_About_Journal::
	.string "That's a Journal. It keeps a record\n"
	.string "of your daily events.\p"
	.string "Check it, and you'll be able to\n"
	.string "remember what you did last.$"

Players_House_1F_EventScript_Mom_Talk_About_Journey::
	.string "Gee, a journey full of adventure...\n"
	.string "I envy you, kiddo.\p"
	.string "Plus, you are not alone.\n"
	.string "You have your Pokemon with you.\l"
	.string "I wish I could go instead!$"

Players_House_1F_EventScript_Mom_Joking_Text::
	.string "I'm just joking dear!\n"
	.string "Yup, {PLAYER}!\p"
	.string "I'll be all right by myself, so you\n"
	.string "go and enjoy your adventure!\p"
	.string "When you're exposed to new things,\n"
	.string "and experience new sensations...\l"
	.string "It makes your mother happy, too.\p"
	.string "...But come back sometimes.\p"
	.string "I would like to see the kinds of\n"
	.string "Pokemon you've caught, dear.$"

Players_House_1F_EventScript_Barry_Mom_Ask_About_Barry::
	.string "{B_RIVAL_NAME}'s mom: Excuse me.\n"
	.string "Is my little {B_RIVAL_NAME} here?$"

Players_House_1F_EventScript_Discuss_About_Barry::
	.string "Mom: Oh?\n"
	.string "No, he's not...\p"
	.string "{B_RIVAL_NAME}: Oh...\n"
	.string "Then, he must have left already...\l"
	.string "What to do...\p"
	.string "That boy shouted about going on an\n"
	.string "adventure, then he bolted\p"
	.string "He's so headstrong and reckless...\n"
	.string "I at least wanted him to take this...\p"
	.string "Mom: Not to worry, {PLAYER} will\n"
	.string "deliver that to him.$"

Players_House_1F_EventScript_Mom_Asks::
	.string "Won't you {PLAYER}?$"

Players_House_1F_EventScript_Barry_Mom_Gives_Parcel::
	.string "{B_RIVAL_NAME}: Oh, really?\n"
	.string "You'd do that for me?\n"
	.string "{PLAYER}, please take this to\n"
	.string "{B_RIVAL_NAME} for me.$"

Players_House_1F_EventScript_Mom_Wishes_Bye_And_Barry_Mom_Tell_Location::
	.string "Mom: Bye-bye, {PLAYER}!\n"
	.string "Enjoy your adventure!\p"
	.string "{B_RIVAL_NAME}: Let me think...\p"
	.string "Knowing my boy, he would probably\n"
	.string "head straight to Jubilife City...\p"
	.string "Ok, please take that to my\n"
	.string "{B_RIVAL_NAME}.$"
