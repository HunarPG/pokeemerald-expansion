Players_House_2F_MapScripts::
	.byte 0


Players_House_2F_EventScript_PC::
	msgbox Players_House_2F_EventScript_PC_Text_0, MSGBOX_SIGN
	end


Players_House_2F_EventScript_TV::
	msgbox Players_House_2F_EventScript_TV_Text_0, MSGBOX_SIGN
	end


Players_House_2F_EventScript_Tutorial::
	msgbox Players_House_2F_EventScript_Tutorial_Text_0, MSGBOX_SIGN
	end


Players_House_2F_EventScript_Switch::
	msgbox Players_House_2F_EventScript_Switch_Text_0, MSGBOX_SIGN
	end


Players_House_2F_EventScript_Rival_Comes_In::
	lock
	fadenewbgm MUS_DP_RIVAL
	applymovement LOCALID_BARRY, Players_House_2F_EventScript_Rival_Comes_In_Movement_0
	waitmovement 0
	showobjectat LOCALID_BARRY, MAP_PLAYERS_HOUSE_2F
	playse SE_EXIT
	waitse
	playse SE_PIN
	applymovement LOCALID_BARRY, Players_House_2F_EventScript_Rival_Comes_In_Movement_1
	waitmovement 0
	delay 30
	applymovement OBJ_EVENT_ID_PLAYER, Players_House_2F_EventScript_Rival_Comes_In_Movement_2
	waitmovement 0
	msgbox Players_House_2F_EventScript_Rival_Comes_In_Text_0, MSGBOX_DEFAULT
	closemessage
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	compare VAR_TEMP_0, 4
	goto_if_eq Players_House_2F_EventScript_Rival_Comes_In_2
	compare VAR_TEMP_0, 2
	goto_if_eq Players_House_2F_EventScript_Rival_Comes_In_3
	compare VAR_TEMP_0, 3
	goto_if_eq Players_House_2F_EventScript_Rival_Comes_In_4
Players_House_2F_EventScript_Rival_Comes_In_1:
	msgbox Players_House_2F_EventScript_Rival_Comes_In_Text_1, MSGBOX_DEFAULT
	closemessage
	playse SE_PIN
	applymovement LOCALID_BARRY, Players_House_2F_EventScript_Rival_Comes_In_Movement_1
	waitmovement 0
	delay 30
	applymovement OBJ_EVENT_ID_PLAYER, Players_House_2F_EventScript_Rival_Comes_In_Movement_7
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	compare VAR_TEMP_0, 4
	goto_if_eq Players_House_2F_EventScript_Rival_Comes_In_9
	compare VAR_TEMP_0, 2
	goto_if_eq Players_House_2F_EventScript_Rival_Comes_In_10
	compare VAR_TEMP_0, 3
	goto_if_eq Players_House_2F_EventScript_Rival_Comes_In_11
Players_House_2F_EventScript_Rival_Comes_In_8:
	msgbox Players_House_2F_EventScript_Rival_Comes_In_Text_2, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_BARRY, Players_House_2F_EventScript_Rival_Comes_In_Movement_2
	waitmovement 0
	msgbox Players_House_2F_EventScript_Rival_Comes_In_Text_3, MSGBOX_DEFAULT
	closemessage
	compare VAR_TEMP_0, 4
	goto_if_eq Players_House_2F_EventScript_Rival_Comes_In_20
	compare VAR_TEMP_0, 2
	goto_if_eq Players_House_2F_EventScript_Rival_Comes_In_21
	compare VAR_TEMP_0, 3
	goto_if_eq Players_House_2F_EventScript_Rival_Comes_In_22
Players_House_2F_EventScript_Rival_Comes_In_19:
	msgbox Players_House_2F_EventScript_Rival_Comes_In_Text_4, MSGBOX_DEFAULT
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, Players_House_2F_EventScript_Rival_Comes_In_Movement_2
	compare VAR_TEMP_0, 4
	goto_if_eq Players_House_2F_EventScript_Rival_Comes_In_31
	compare VAR_TEMP_0, 2
	goto_if_eq Players_House_2F_EventScript_Rival_Comes_In_32
	compare VAR_TEMP_0, 3
	goto_if_eq Players_House_2F_EventScript_Rival_Comes_In_33
Players_House_2F_EventScript_Rival_Comes_In_30:
	removeobject LOCALID_BARRY
	fadedefaultbgm
	playse SE_EXIT
	waitse
	setvar VAR_RIVAL_CAME_IN_YOUR_ROOM, 1
	release
	end

Players_House_2F_EventScript_Rival_Comes_In_2:
	applymovement LOCALID_BARRY, Players_House_2F_EventScript_Rival_Comes_In_Movement_3
	waitmovement 0
	goto Players_House_2F_EventScript_Rival_Comes_In_1

Players_House_2F_EventScript_Rival_Comes_In_3:
	applymovement LOCALID_BARRY, Players_House_2F_EventScript_Rival_Comes_In_Movement_4
	waitmovement 0
	goto Players_House_2F_EventScript_Rival_Comes_In_1

Players_House_2F_EventScript_Rival_Comes_In_4:
	compare VAR_TEMP_1, 4
	goto_if_eq Players_House_2F_EventScript_Rival_Comes_In_15
	compare VAR_TEMP_1, 6
	goto_if_eq Players_House_2F_EventScript_Rival_Comes_In_16
	goto Players_House_2F_EventScript_Rival_Comes_In_1

Players_House_2F_EventScript_Rival_Comes_In_9:
	applymovement LOCALID_BARRY, Players_House_2F_EventScript_Rival_Comes_In_Movement_8
	waitmovement 0
	goto Players_House_2F_EventScript_Rival_Comes_In_8

Players_House_2F_EventScript_Rival_Comes_In_10:
	applymovement LOCALID_BARRY, Players_House_2F_EventScript_Rival_Comes_In_Movement_9
	waitmovement 0
	goto Players_House_2F_EventScript_Rival_Comes_In_8

Players_House_2F_EventScript_Rival_Comes_In_11:
	compare VAR_TEMP_1, 4
	goto_if_eq Players_House_2F_EventScript_Rival_Comes_In_26
	compare VAR_TEMP_1, 6
	goto_if_eq Players_House_2F_EventScript_Rival_Comes_In_27
	goto Players_House_2F_EventScript_Rival_Comes_In_8

Players_House_2F_EventScript_Rival_Comes_In_15:
	applymovement LOCALID_BARRY, Players_House_2F_EventScript_Rival_Comes_In_Movement_5
	waitmovement 0
	goto Players_House_2F_EventScript_Rival_Comes_In_1

Players_House_2F_EventScript_Rival_Comes_In_16:
	applymovement LOCALID_BARRY, Players_House_2F_EventScript_Rival_Comes_In_Movement_6
	waitmovement 0
	goto Players_House_2F_EventScript_Rival_Comes_In_1

Players_House_2F_EventScript_Rival_Comes_In_20:
	applymovement LOCALID_BARRY, Players_House_2F_EventScript_Rival_Comes_In_Movement_12
	waitmovement 0
	goto Players_House_2F_EventScript_Rival_Comes_In_19

Players_House_2F_EventScript_Rival_Comes_In_21:
	applymovement LOCALID_BARRY, Players_House_2F_EventScript_Rival_Comes_In_Movement_13
	waitmovement 0
	goto Players_House_2F_EventScript_Rival_Comes_In_19

Players_House_2F_EventScript_Rival_Comes_In_22:
	compare VAR_TEMP_1, 4
	goto_if_eq Players_House_2F_EventScript_Rival_Comes_In_37
	compare VAR_TEMP_1, 6
	goto_if_eq Players_House_2F_EventScript_Rival_Comes_In_38
	goto Players_House_2F_EventScript_Rival_Comes_In_19

Players_House_2F_EventScript_Rival_Comes_In_26:
	applymovement LOCALID_BARRY, Players_House_2F_EventScript_Rival_Comes_In_Movement_10
	waitmovement 0
	goto Players_House_2F_EventScript_Rival_Comes_In_8

Players_House_2F_EventScript_Rival_Comes_In_27:
	applymovement LOCALID_BARRY, Players_House_2F_EventScript_Rival_Comes_In_Movement_11
	waitmovement 0
	goto Players_House_2F_EventScript_Rival_Comes_In_8

Players_House_2F_EventScript_Rival_Comes_In_31:
	applymovement LOCALID_BARRY, Players_House_2F_EventScript_Rival_Comes_In_Movement_16
	waitmovement 0
	goto Players_House_2F_EventScript_Rival_Comes_In_30

Players_House_2F_EventScript_Rival_Comes_In_32:
	applymovement LOCALID_BARRY, Players_House_2F_EventScript_Rival_Comes_In_Movement_17
	waitmovement 0
	goto Players_House_2F_EventScript_Rival_Comes_In_30

Players_House_2F_EventScript_Rival_Comes_In_33:
	compare VAR_TEMP_1, 4
	goto_if_eq Players_House_2F_EventScript_Rival_Comes_In_41
	compare VAR_TEMP_1, 6
	goto_if_eq Players_House_2F_EventScript_Rival_Comes_In_42
	goto Players_House_2F_EventScript_Rival_Comes_In_30

Players_House_2F_EventScript_Rival_Comes_In_37:
	applymovement LOCALID_BARRY, Players_House_2F_EventScript_Rival_Comes_In_Movement_14
	waitmovement 0
	goto Players_House_2F_EventScript_Rival_Comes_In_19

Players_House_2F_EventScript_Rival_Comes_In_38:
	applymovement LOCALID_BARRY, Players_House_2F_EventScript_Rival_Comes_In_Movement_15
	waitmovement 0
	goto Players_House_2F_EventScript_Rival_Comes_In_19

Players_House_2F_EventScript_Rival_Comes_In_41:
	applymovement LOCALID_BARRY, Players_House_2F_EventScript_Rival_Comes_In_Movement_18
	waitmovement 0
	goto Players_House_2F_EventScript_Rival_Comes_In_30

Players_House_2F_EventScript_Rival_Comes_In_42:
	applymovement LOCALID_BARRY, Players_House_2F_EventScript_Rival_Comes_In_Movement_19
	waitmovement 0
	goto Players_House_2F_EventScript_Rival_Comes_In_30


Players_House_2F_EventScript_Rival_Comes_In_Movement_0:
	walk_fast_left
	step_end

Players_House_2F_EventScript_Rival_Comes_In_Movement_1:
	emote_exclamation_mark
	step_end

Players_House_2F_EventScript_Rival_Comes_In_Movement_2:
	face_right
	step_end

Players_House_2F_EventScript_Rival_Comes_In_Movement_3:
	walk_fast_down
	walk_fast_down
	walk_fast_left
	walk_fast_left
	step_end

Players_House_2F_EventScript_Rival_Comes_In_Movement_4:
	walk_fast_left
	walk_fast_down
	walk_fast_down
	walk_fast_left
	walk_fast_left
	walk_fast_left
	step_end

Players_House_2F_EventScript_Rival_Comes_In_Movement_5:
	walk_fast_down
	walk_fast_left
	walk_fast_left
	walk_fast_left
	step_end

Players_House_2F_EventScript_Rival_Comes_In_Movement_6:
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_left
	walk_fast_left
	walk_fast_left
	step_end

Players_House_2F_EventScript_Rival_Comes_In_Movement_7:
	face_left
	step_end

Players_House_2F_EventScript_Rival_Comes_In_Movement_8:
	walk_fast_up
	walk_fast_left
	walk_fast_left
	walk_fast_up
	walk_fast_left
	walk_fast_left
	walk_fast_left
	face_up
	step_end

Players_House_2F_EventScript_Rival_Comes_In_Movement_9:
	walk_fast_up
	walk_fast_up
	walk_fast_left
	walk_fast_left
	walk_fast_left
	face_up
	step_end

Players_House_2F_EventScript_Rival_Comes_In_Movement_10:
	walk_fast_down
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_up
	walk_fast_up
	step_end

Players_House_2F_EventScript_Rival_Comes_In_Movement_11:
	walk_fast_up
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_up
	walk_fast_up
	step_end

Players_House_2F_EventScript_Rival_Comes_In_Movement_12:
	walk_fast_right
	walk_fast_down
	walk_fast_down
	walk_fast_right
	walk_fast_right
	step_end

Players_House_2F_EventScript_Rival_Comes_In_Movement_13:
	walk_fast_right
	walk_fast_down
	walk_fast_down
	face_right
	step_end

Players_House_2F_EventScript_Rival_Comes_In_Movement_14:
	walk_fast_down
	walk_fast_right
	walk_fast_right
	step_end

Players_House_2F_EventScript_Rival_Comes_In_Movement_15:
	walk_fast_right
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_right
	step_end

Players_House_2F_EventScript_Rival_Comes_In_Movement_16:
	walk_fast_up
	walk_fast_right
	walk_fast_right
	walk_fast_up
	walk_fast_right
	walk_fast_right
	step_end

Players_House_2F_EventScript_Rival_Comes_In_Movement_17:
	walk_fast_up
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_up
	walk_fast_right
	walk_fast_right
	step_end

Players_House_2F_EventScript_Rival_Comes_In_Movement_18:
	walk_fast_down
	walk_fast_right
	walk_fast_right
	walk_fast_up
	walk_fast_right
	walk_fast_up
	walk_fast_right
	walk_fast_right
	step_end

Players_House_2F_EventScript_Rival_Comes_In_Movement_19:
	walk_fast_up
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_up
	walk_fast_up
	walk_fast_right
	walk_fast_right
	step_end

Players_House_2F_EventScript_PC_Text_0:
	.string "{PLAYER} checked the PC.\p"
	.string "Pokémon Basics...\p"
	.string "People live alongside Pokémon in\n"
	.string "this world.\p"
	.string "The people that battle Pokémon are\n"
	.string "called Pokémon Trainers.$"

Players_House_2F_EventScript_TV_Text_0:
	.string "Mom bought this TV as a gift.$"

Players_House_2F_EventScript_Tutorial_Text_0:
	.string "The X Button\n"
	.string "opens the menu!$"

Players_House_2F_EventScript_Switch_Text_0:
	.string "It's a Switch!\n"
	.string "It's controlled by the Joycons!$"

Players_House_2F_EventScript_Rival_Comes_In_Text_0:
	.string "{RIVAL}: There you are!$"

Players_House_2F_EventScript_Rival_Comes_In_Text_1:
	.string "Hey, {PLAYER}!\n"
	.string "Did you just see the TV? Sure you did!\p"
	.string "Prof. Rowan's that really important\n"
	.string "guy who studies Pokémon, right?\p"
	.string "That means he must have lots and lots\n"
	.string "of Pokémon.\p"
	.string "So, if we ask him, I bet he'd give us\n"
	.string "some Pokémon!$"

Players_House_2F_EventScript_Rival_Comes_In_Text_2:
	.string "Oh, hey!\n"
	.string "Is this a new PC?$"

Players_House_2F_EventScript_Rival_Comes_In_Text_3:
	.string "{RIVAL}: Uh...\n"
	.string "Where was I?$"

Players_House_2F_EventScript_Rival_Comes_In_Text_4:
	.string "Oh, right, right! We're going to go see\n"
	.string "Prof. Rowan and get some Pokémon.\p"
	.string "I will be waiting outside.\p"
	.string "Ok, {PLAYER}? If you're late, I'm\n"
	.string "fining you ¥10 million!$"
