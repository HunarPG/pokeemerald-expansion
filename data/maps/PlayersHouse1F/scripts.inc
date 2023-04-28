PlayersHouse1F_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, PlayersHouse1F_OnFrame

PlayersHouse1F_OnFrame::
	map_script_2 VAR_MOM_TELL_ABOUT_BARRY, 0, PlayersHouse1F_EventScript_Mom_Telling_About_Barry
	.2byte 0

PlayersHouse1F_EventScript_Mom_Telling_About_Barry::
    lock
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Player_Face_Down
	waitmovement 0
    applymovement 1, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement 1, Common_Movement_Delay48
	waitmovement 0
    applymovement 1, Movement_Mom_Come_to_Player
	waitmovement 0
	setvar VAR_MOM_TELL_ABOUT_BARRY, 1
	msgbox PlayersHouse1F_EventScript_Mom_Tell_About_Barry_Text
	closemessage
    applymovement 1, Movement_Mom_Back_to_Seat
	waitmovement 0
	release
	end

PlayersHouse1F_EventScript_Sink::
	msgbox PlayersHouse1F_EventScript_Sink_Text, MSGBOX_SIGN
	end

PlayersHouse1F_EventScript_TV::
	msgbox PlayersHouse1F_EventScript_TV_Text, MSGBOX_SIGN
	end

PlayersHouse1F_EventScript_Sink_Text:
	.string "Mom's kitchen is spotless!\n"
	.string "You can see you face on the floor!$"

PlayersHouse1F_EventScript_TV_Text:
	.string "MC: Here we are!\n"
	.string "It's the Contest Digest!\p"
	.string "The winner of today's Normal Rank\n"
    .string "Smart Contest is...\p"
    .string "Westley, who won with his bright spark \n"
	.string "of a Pokemon!\p"
	.string "That's all the time we have today!\n"
	.string "Let's meet again!$"

PlayersHouse1F_EventScript_Mom_Tell_About_Barry_Text:
	.string "Mom: {PLAYER}!\p"
	.string "{RIVAL} already left.\p"
	.string "I don't know what it was about, but\n"
	.string "he sure was in a hurry!$"

Movement_Player_Face_Down:
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
