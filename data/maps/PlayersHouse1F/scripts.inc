PlayersHouse1F_MapScripts::
    map_script MAP_SCRIPT_ON_TRANSITION, PlayersHouse1F_OnTransition
	map_script MAP_SCRIPT_ON_FRAME_TABLE, PlayersHouse1F_OnFrame
	.2byte 0

PlayersHouse1F_OnFrame::
	map_script_2 VAR_MOM_TEXT, 0, PlayersHouse1F_EventScript_Mom_Telling_About_Barry
	map_script_2 VAR_MOM_TEXT, 4, PlayersHouse1F_EventScript_Mom_Get_To_Know_That_You_Got_Pokemon
	.2byte 0

PlayersHouse1F_OnTransition::
   removeobject 2
   end

PlayersHouse1F_EventScript_Mom_Telling_About_Barry::
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
	msgbox PlayersHouse1F_EventScript_Mom_Tell_About_Barry_Text
	closemessage
    applymovement 1, Movement_Mom_Back_to_Seat
	waitmovement 0
	release
	end

PlayersHouse1F_EventScript_Sink::
	msgbox PlayersHouse1F_EventScript_Sink_Text, MSGBOX_SIGN
	end

PlayersHouse1F_EventScript_Mom::
    compare VAR_MOM_TEXT, 1 
	goto_if_eq PlayersHouse1F_EventScript_Mom_Tell_Barry_Impatient
    compare VAR_MOM_TEXT, 2 
	goto_if_eq PlayersHouse1F_EventScript_Mom_Say_Bye
    compare VAR_MOM_TEXT, 3 
	goto_if_eq PlayersHouse1F_EventScript_Mom_Say_Barry_Is_Waiting
    compare VAR_MOM_TEXT, 5 
	goto_if_eq PlayersHouse1F_EventScript_Mom_Heal_Your_Pokemon
	end

PlayersHouse1F_EventScript_Mom_Tell_Barry_Impatient::
	msgbox PlayersHouse1F_EventScript_Mom_Text, MSGBOX_NPC
	end

PlayersHouse1F_EventScript_Mom_Say_Bye::
	msgbox PlayersHouse1F_EventScript_Mom_Say_Bye_Text, MSGBOX_NPC
	setvar VAR_MOM_TEXT, 3
	end

PlayersHouse1F_EventScript_Mom_Say_Barry_Is_Waiting::
	msgbox PlayersHouse1F_EventScript_Mom_Say_Barry_Is_Waiting_Text, MSGBOX_NPC
	end

PlayersHouse1F_EventScript_Mom_SAY_DONT_GO_IN_GRASS::
	applymovement 1, Movement_Face_Down
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Face_UP
	waitmovement 0
	msgbox PlayersHouse1F_EventScript_Mom_Say_Dont_Go_in_Grass_Text, MSGBOX_SIGN
	setvar VAR_MOM_TEXT, 2
	applymovement 1, Movement_Face_UP
	waitmovement 0
	end

PlayersHouse1F_EventScript_Mom_Get_To_Know_That_You_Got_Pokemon::
    lock
	addobject 2
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Player_Faces_Up
	waitmovement 0
	applymovement 2, Common_Movement_Delay48
	waitmovement 0
	applymovement 2, Movement_Mom_Near_Sink
	waitmovement 0
	applymovement 2, Common_Movement_Delay48
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Player_Faces_Right
	applymovement 2, Movement_Mom_Going_Away_From_Sink
	waitmovement 0
	applymovement 2, Movement_Mom_Moves_Towards_Her_Seat
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Player_Moves_Towards_Moms_Seat
	waitmovement 0
	msgbox PlayersHouse1F_Text_Mom_Discusses_About_You_Getting_Pokemon, MSGBOX_SIGN
	closemessage
	applymovement 2, Common_Movement_Delay48
	waitmovement 0
	msgbox PlayersHouse1F_Text_Mom_Gives_You_Running_Shoes, MSGBOX_SIGN
	closemessage
	playfanfare MUS_DP_OBTAIN_KEY_ITEM
	msgbox PlayersHouse1F_Text_Mom_Actually_Gives_You_Running_Shoes, MSGBOX_SIGN
	closemessage
	setflag FLAG_SYS_B_DASH
	setvar VAR_MOM_TEXT, 5
	applymovement 2, Movement_Mom_Faces_Up
	removeobject 2
	addobject 1
	clearflag FLAG_HIDE_MOM_SITTING
	release
	end

PlayersHouse1F_EventScript_Mom_Read_Running_Shoes_Instructions::
	msgbox PlayersHouse1F_Text_Mom_Reads_Running_Shoes_Instructions_Again MSGBOX_NPC
	end

PlayersHouse1F_EventScript_Mom_Heal_Your_Pokemon::
	msgbox PlayersHouse1F_Text_Mom_Heals_Your_Pokemon MSGBOX_NPC
	call Common_EventScript_OutOfCenterPartyHeal
    end

PlayersHouse1F_EventScript_Sink_Text:
	.string "Mom's kitchen is spotless!\n"
	.string "You can see you face on the floor!$"

PlayersHouse1F_EventScript_Mom_Tell_About_Barry_Text:
	.string "Mom: {PLAYER}!\p"
	.string "{B_RIVAL_NAME} already left.\p"
	.string "I don't know what it was about, but\n"
	.string "he sure was in a hurry!$"

PlayersHouse1F_EventScript_Mom_Text:
	.string "Mom: You know how impatient\n"
	.string "{B_RIVAL_NAME} is.!\p"
	.string "He took off before I could even\n"
	.string "ask what it was about.$"

PlayersHouse1F_EventScript_Mom_Say_Bye_Text:
	.string "Mom: Bye-bye, {PLAYER}!\n"
	.string "You take care now!$"

PlayersHouse1F_EventScript_Mom_Say_Barry_Is_Waiting_Text:
	.string "Mom: What is it, dear?\n"
	.string "Isn't Gavin waitingfor you?$"

PlayersHouse1F_EventScript_Mom_Say_Dont_Go_in_Grass_Text:
	.string "Mom: Oh, yes!\n"
	.string "{PLAYER}!\p"
	.string "Don't go into the tall grass.\n"
	.string "Wild Pokemon might attack you.\p"
	.string "It would be OK if you had your own\n"
	.string "Pokemon, but you don't, so...\p"
	.string "Well, take care, sweetie!$"

PlayersHouse1F_Text_Mom_Discusses_About_You_Getting_Pokemon:
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

PlayersHouse1F_Text_Mom_Gives_You_Running_Shoes:
	.string "Oh, I know!\n"
	.string "{PLAYER}, put these on.$"

PlayersHouse1F_Text_Mom_Actually_Gives_You_Running_Shoes:
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

PlayersHouse1F_Text_Mom_Reads_Running_Shoes_Instructions_Again:
	.string "Mom: I'll read you the instructions\n"
	.string "for the Running Shoes...\p"
	.string "Press the B Button and dash\n"
	.string "about faster than ever before!\p"
	.string "Put on the running shoes and\n"
	.string "blaze new trails of adventure!\p"
	.string "Isn't that just nifty!$"

PlayersHouse1F_Text_Mom_Heals_Your_Pokemon:
	.string "Mom: Welcome home, {PLAYER}.\n"
	.string "Are you and your Pokemon healthy?\l"
	.string "Take a quick rest, dear.$"

Movement_Face_Down:
	face_down
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

Movement_Face_UP:
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

Movement_Mom_Faces_Up:
    face_up
	step_end
