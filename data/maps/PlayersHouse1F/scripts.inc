PlayersHouse1F_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, PlayersHouse1F_OnFrame
	.2byte 0

PlayersHouse1F_OnFrame::
	map_script_2 VAR_MOM_TEXT, 0, PlayersHouse1F_EventScript_Mom_Telling_About_Barry
	.2byte 0

PlayersHouse1F_EventScript_Mom_Telling_About_Barry::
    lock
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
