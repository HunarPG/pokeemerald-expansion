.set LOCALID_RIVAL, 1

PlayersHouse2F_MapScripts::
	.byte 0


PlayersHouse2F_EventScript_Switch::
	msgbox PlayersHouse2F_EventScript_Switch_Text, MSGBOX_SIGN
	return


PlayersHouse2F_EventScript_TV::
	msgbox PlayersHouse2F_EventScript_TV_Text, MSGBOX_SIGN
	return


PlayersHouse2F_EventScript_Tutorial::
	msgbox PlayersHouse2F_EventScript_Tutorial_Text, MSGBOX_SIGN
	return


PlayersHouse2F_EventScript_PC::
	msgbox PlayersHouse2F_EventScript_PC_Text, MSGBOX_SIGN
	return

PlayersHouse2F_EventScript_Player_Move_Right_and_rival_come::
    lock
    applymovement 1, Movement_Rival_Warps_In
	waitmovement 0
	showobjectat LOCALID_RIVAL, MAP_PLAYERS_HOUSE2F
	playse SE_DOOR
	waitse
    applymovement 1, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement 1, Common_Movement_Delay48
	waitmovement 0
	msgbox PlayersHouse2F_EventScript_Barry_comes_and_start_talking
	closemessage
	applymovement 1, Movement_Rival_Comes_To_The_Player
	waitmovement 0
	msgbox PlayersHouse2F_EventScript_Barry_talks_about_watching_TV
	closemessage
    applymovement 1, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement 1, Common_Movement_Delay48
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Face_Left
	applymovement 1, Movement_Rival_Goes_To_See_New_PC
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Face_Left
	waitmovement 0
	msgbox PlayersHouse2F_EventScript_Barry_talks_about_new_pc
	closemessage
	applymovement 1, Movement_Face_Right
	waitmovement 0
	msgbox PlayersHouse2F_EventScript_Barry_wonders_where_was_he
	closemessage
	applymovement 1, Movement_Rival_Comes_Back
	waitmovement 0
	msgbox PlayersHouse2F_EventScript_Barry_start_talking_again
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Face_Right
	applymovement 1, Movement_Rival_Leaves
	waitmovement 0
	removeobject 1
	playse SE_DOOR
	waitse
	setvar VAR_RIVAL_CAME_IN_YOUR_ROOM, 1
	release
	end

PlayersHouse2F_EventScript_Player_Move_Left_and_rival_come::
    lock
    applymovement 1, Movement_Rival_Warps_In
	waitmovement 0
	showobjectat LOCALID_RIVAL, MAP_PLAYERS_HOUSE2F
	playse SE_DOOR
	waitse
    applymovement 1, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement 1, Common_Movement_Delay48
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Face_Right
	msgbox PlayersHouse2F_EventScript_Barry_comes_and_start_talking
	closemessage
	applymovement 1, Movement_Rival_Comes_To_The_Player_1
	waitmovement 0
	msgbox PlayersHouse2F_EventScript_Barry_talks_about_watching_TV
	closemessage
    applymovement 1, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement 1, Common_Movement_Delay48
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Face_Left
	applymovement 1, Movement_Rival_Goes_To_See_New_PC_1
	waitmovement 0
	msgbox PlayersHouse2F_EventScript_Barry_talks_about_new_pc
	closemessage
	applymovement 1, Movement_Face_Right
	waitmovement 0
	msgbox PlayersHouse2F_EventScript_Barry_wonders_where_was_he
	closemessage
	applymovement 1, Movement_Rival_Comes_Back_1
	waitmovement 0
	msgbox PlayersHouse2F_EventScript_Barry_start_talking_again
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Face_Right
	applymovement 1, Movement_Rival_Leaves_1
	waitmovement 0
	removeobject 1
	playse SE_DOOR
	waitse
	setvar VAR_RIVAL_CAME_IN_YOUR_ROOM, 1
	release
	end

PlayersHouse2F_EventScript_Player_Move_Up_and_rival_come::
    lock
    applymovement 1, Movement_Rival_Warps_In
	waitmovement 0
	showobjectat LOCALID_RIVAL, MAP_PLAYERS_HOUSE2F
	playse SE_DOOR
	waitse
    applymovement 1, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement 1, Common_Movement_Delay48
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Face_Right
	msgbox PlayersHouse2F_EventScript_Barry_comes_and_start_talking
	closemessage
	applymovement 1, Movement_Rival_Comes_To_The_Player_2
	waitmovement 0
	msgbox PlayersHouse2F_EventScript_Barry_talks_about_watching_TV
	closemessage
    applymovement 1, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement 1, Common_Movement_Delay48
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Face_Left
	applymovement 1, Movement_Rival_Goes_To_See_New_PC_2
	waitmovement 0
	msgbox PlayersHouse2F_EventScript_Barry_talks_about_new_pc
	closemessage
	applymovement 1, Movement_Face_Right
	waitmovement 0
	msgbox PlayersHouse2F_EventScript_Barry_wonders_where_was_he
	closemessage
	applymovement 1, Movement_Rival_Comes_Back_2
	waitmovement 0
	msgbox PlayersHouse2F_EventScript_Barry_start_talking_again
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Face_Right
	applymovement 1, Movement_Rival_Leaves_2
	waitmovement 0
	removeobject 1
	playse SE_DOOR
	waitse
	setvar VAR_RIVAL_CAME_IN_YOUR_ROOM, 1
	release
	end

PlayersHouse2F_EventScript_Switch_Text:
	.string "It's a Switch!\n"
	.string "It's controlled by the Joycons!$"

PlayersHouse2F_EventScript_TV_Text:
	.string "Mom bought this TV as a gift.$"

PlayersHouse2F_EventScript_Tutorial_Text:
	.string "The X Button\n"
	.string "opens the menu!$"

PlayersHouse2F_EventScript_PC_Text:
	.string "{PLAYER} checked the PC.\p"
	.string "Pokemon Basics...\p"
	.string "People live alongside Pokemon in\n"
	.string "this world.\p"
	.string "The people that battle Pokemon are\n"
	.string "called Pokemon Trainers.$"

PlayersHouse2F_EventScript_Barry_comes_and_start_talking:
    .string "{RIVAL}: There you are!$"

PlayersHouse2F_EventScript_Barry_talks_about_watching_TV:
    .string "Hey, {PLAYER}!\n"
    .string "Did you just see the TV? Sure you did!\p"
    .string "Prof. Rowan's that really important\n"
    .string "guy who studies Pokemon, right?\p"
    .string "That means he must have lots and lots\n"
    .string "of Pokemon.\p"
    .string "So, if we ask him, I bet he'd give us\n"
    .string "some Pokemon!$"

PlayersHouse2F_EventScript_Barry_talks_about_new_pc:
    .string "Oh, hey!\n"
    .string "Is this a new PC?$"

PlayersHouse2F_EventScript_Barry_wonders_where_was_he:
    .string "{RIVAL}: Uh...\n"
	.string "Where was I?$"

PlayersHouse2F_EventScript_Barry_start_talking_again:
    .string "Oh, right, right! We're going to go see\n"
	.string "Prof. Rowan and get some Pokemon.\p"
	.string "I will be waiting outside.\p"
	.string "Ok, {PLAYER}? If you're late, I'm\n"
	.string "fining you 10 million!$"

Movement_Rival_Warps_In:
	walk_left
	step_end

Movement_Rival_Comes_To_The_Player:
    walk_down
    walk_down
	walk_left
	walk_left
	step_end

Movement_Rival_Comes_To_The_Player_1:
	walk_left
    walk_down
    walk_down
	walk_left
	walk_left
	walk_left
	step_end

Movement_Rival_Comes_To_The_Player_2:
    walk_down
	walk_left
	walk_left
	walk_left
	step_end

Movement_Rival_Goes_To_See_New_PC:
    walk_up
	walk_left
	walk_left
    walk_up
	walk_left
	walk_left
	walk_left
	face_up
	step_end

Movement_Rival_Goes_To_See_New_PC_1:
    walk_up
    walk_up
	walk_left
	walk_left
	walk_left
	face_up
	step_end

Movement_Rival_Goes_To_See_New_PC_2:
    walk_down
	walk_left
	walk_left
	walk_left
	walk_left
	walk_up
	walk_up
	step_end

Movement_Face_Right:
	face_right
	step_end

Movement_Face_Left:
	face_left
	step_end

Movement_Rival_Comes_Back:
    walk_right
	walk_down
	walk_down
    walk_right
    walk_right
	step_end

Movement_Rival_Comes_Back_1:
    walk_right
	walk_down
	walk_down
	face_right
	step_end

Movement_Rival_Comes_Back_2:
	walk_down
	walk_right
	walk_right
	step_end

Movement_Rival_Leaves:
    walk_up
    walk_right
    walk_right
    walk_up
    walk_right
    walk_right
	step_end

Movement_Rival_Leaves_1:
    walk_up
    walk_right
    walk_right
    walk_right
    walk_right
    walk_up
    walk_right
    walk_right
	step_end

Movement_Rival_Leaves_2:
    walk_down
    walk_right
    walk_right
    walk_up
    walk_right
    walk_up
    walk_right
    walk_right
	step_end
