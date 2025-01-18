Route_202_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route_202_OnTransition
	.byte 0


Route_202_OnTransition::
	call_if_unset FLAG_CATCHING_TUTORIAL_DONE, Route_202_Hide_Dawn_Lucas
	end


Route_202_Hide_Dawn_Lucas::
	checkplayergender
	goto_if_eq VAR_RESULT, MALE, Route_202_EventScript_Hide_Lucas
	goto_if_eq VAR_RESULT, FEMALE, Route_202_EventScript_Hide_Dawn
	return


Route_202_EventScript_Hide_Lucas::
	setflag FLAG_HIDE_LUCAS_ROUTE_202
	end


Route_202_EventScript_Hide_Dawn::
	setflag FLAG_HIDE_DAWN_ROUTE_202
	end


Route_202_EventScript_Location_Sign::
	msgbox Route_202_EventScript_Location_Sign_Text, MSGBOX_SIGN
	return


Route_202_EventScript_Rival_2_Stops_Until_You_Talk_To_Mom_1::
	checkplayergender
	goto_if_eq VAR_RESULT, MALE, Route_202_EventScript_Dawn_Stops_You_1
	goto_if_eq VAR_RESULT, FEMALE, Route_202_EventScript_Lucas_Stops_You_1
	return


Route_202_EventScript_Rival_2_Stops_Until_You_Talk_To_Mom_2::
	checkplayergender
	goto_if_eq VAR_RESULT, MALE, Route_202_EventScript_Dawn_Stops_You_2
	goto_if_eq VAR_RESULT, FEMALE, Route_202_EventScript_Lucas_Stops_You_2
	return


Route_202_EventScript_Rival_2_Stops_Until_You_Talk_To_Mom_3::
	checkplayergender
	goto_if_eq VAR_RESULT, MALE, Route_202_EventScript_Dawn_Stops_You_3
	goto_if_eq VAR_RESULT, FEMALE, Route_202_EventScript_Lucas_Stops_You_3
	return


Route_202_EventScript_Rival_2_Stops_Until_You_Talk_To_Mom_4::
	checkplayergender
	goto_if_eq VAR_RESULT, MALE, Route_202_EventScript_Dawn_Stops_You_4
	goto_if_eq VAR_RESULT, FEMALE, Route_202_EventScript_Lucas_Stops_You_4
	return


Route_202_EventScript_Dawn_Stops_You_1::
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Face_Left
	waitmovement 0
	playse SE_PIN
	applymovement 2, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement 2, Common_Movement_Delay48
	waitmovement 0
	applymovement 2, Route_202_Movement_Rival_2_Comes_To_You_1
	waitmovement 0
	msgbox Route_202_Text_Dawn_Tells_To_Go_Home, MSGBOX_SIGN
	applymovement 2, Route_202_Movement_Rival_2_Walks_Right
	applymovement OBJ_EVENT_ID_PLAYER, Route_202_Movement_Player_Gets_Back
	waitmovement 0
	applymovement 2, Route_202_Movement_Rival_2_Goes_Back_1
	waitmovement 0
	return


Route_202_EventScript_Dawn_Stops_You_2::
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Face_Left
	waitmovement 0
	playse SE_PIN
	applymovement 2, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement 2, Common_Movement_Delay48
	waitmovement 0
	applymovement 2, Route_202_Movement_Rival_2_Comes_To_You_2
	waitmovement 0
	msgbox Route_202_Text_Dawn_Tells_To_Go_Home, MSGBOX_SIGN
	applymovement 2, Route_202_Movement_Rival_2_Walks_Right
	applymovement OBJ_EVENT_ID_PLAYER, Route_202_Movement_Player_Gets_Back
	waitmovement 0
	applymovement 2, Route_202_Movement_Rival_2_Goes_Back_2
	waitmovement 0
	return


Route_202_EventScript_Dawn_Stops_You_3::
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Face_Left
	waitmovement 0
	playse SE_PIN
	applymovement 2, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement 2, Common_Movement_Delay48
	waitmovement 0
	applymovement 2, Route_202_Movement_Rival_2_Comes_To_You_3
	waitmovement 0
	msgbox Route_202_Text_Dawn_Tells_To_Go_Home, MSGBOX_SIGN
	applymovement 2, Route_202_Movement_Rival_2_Walks_Right
	applymovement OBJ_EVENT_ID_PLAYER, Route_202_Movement_Player_Gets_Back
	waitmovement 0
	applymovement 2, Route_202_Movement_Rival_2_Goes_Back_3
	waitmovement 0
	return


Route_202_EventScript_Dawn_Stops_You_4::
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Face_Left
	waitmovement 0
	playse SE_PIN
	applymovement 2, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement 2, Common_Movement_Delay48
	waitmovement 0
	applymovement 2, Route_202_Movement_Rival_2_Comes_To_You_4
	waitmovement 0
	msgbox Route_202_Text_Dawn_Tells_To_Go_Home, MSGBOX_SIGN
	applymovement 2, Route_202_Movement_Rival_2_Walks_Right
	applymovement OBJ_EVENT_ID_PLAYER, Route_202_Movement_Player_Gets_Back
	waitmovement 0
	applymovement 2, Route_202_Movement_Rival_2_Goes_Back_4
	waitmovement 0
	return


Route_202_EventScript_Lucas_Stops_You_1::
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Face_Left
	waitmovement 0
	playse SE_PIN
	applymovement 1, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement 1, Common_Movement_Delay48
	waitmovement 0
	applymovement 1, Route_202_Movement_Rival_2_Comes_To_You_1
	waitmovement 0
	msgbox Route_202_Text_Lucas_Tells_To_Go_Home, MSGBOX_SIGN
	applymovement 1, Route_202_Movement_Rival_2_Walks_Right
	applymovement OBJ_EVENT_ID_PLAYER, Route_202_Movement_Player_Gets_Back
	waitmovement 0
	applymovement 1, Route_202_Movement_Rival_2_Goes_Back_1
	waitmovement 0
	return


Route_202_EventScript_Lucas_Stops_You_2::
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Face_Left
	waitmovement 0
	playse SE_PIN
	applymovement 1, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement 1, Common_Movement_Delay48
	waitmovement 0
	applymovement 1, Route_202_Movement_Rival_2_Comes_To_You_2
	waitmovement 0
	msgbox Route_202_Text_Lucas_Tells_To_Go_Home, MSGBOX_SIGN
	applymovement 1, Route_202_Movement_Rival_2_Walks_Right
	applymovement OBJ_EVENT_ID_PLAYER, Route_202_Movement_Player_Gets_Back
	waitmovement 0
	applymovement 1, Route_202_Movement_Rival_2_Goes_Back_2
	waitmovement 0
	return


Route_202_EventScript_Lucas_Stops_You_3::
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Face_Left
	waitmovement 0
	playse SE_PIN
	applymovement 1, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement 1, Common_Movement_Delay48
	waitmovement 0
	applymovement 1, Route_202_Movement_Rival_2_Comes_To_You_3
	waitmovement 0
	msgbox Route_202_Text_Lucas_Tells_To_Go_Home, MSGBOX_SIGN
	applymovement 1, Route_202_Movement_Rival_2_Walks_Right
	applymovement OBJ_EVENT_ID_PLAYER, Route_202_Movement_Player_Gets_Back
	waitmovement 0
	applymovement 1, Route_202_Movement_Rival_2_Goes_Back_3
	waitmovement 0
	return


Route_202_EventScript_Lucas_Stops_You_4::
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Face_Left
	waitmovement 0
	playse SE_PIN
	applymovement 1, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement 1, Common_Movement_Delay48
	waitmovement 0
	applymovement 1, Route_202_Movement_Rival_2_Comes_To_You_4
	waitmovement 0
	msgbox Route_202_Text_Lucas_Tells_To_Go_Home, MSGBOX_SIGN
	applymovement 1, Route_202_Movement_Rival_2_Walks_Right
	applymovement OBJ_EVENT_ID_PLAYER, Route_202_Movement_Player_Gets_Back
	waitmovement 0
	applymovement 1, Route_202_Movement_Rival_2_Goes_Back_4
	waitmovement 0
	return


Route_202_EventScript_Rival_2_Catching_Tutorial_1::
	checkplayergender
	goto_if_eq VAR_RESULT, MALE, Route_202_EventScript_Rival_2_Catching_Tutorial_1_Dawn
	goto_if_eq VAR_RESULT, FEMALE, Route_202_EventScript_Rival_2_Catching_Tutorial_1_Lucas
	return


Route_202_EventScript_Rival_2_Catching_Tutorial_2::
	checkplayergender
	goto_if_eq VAR_RESULT, MALE, Route_202_EventScript_Rival_2_Catching_Tutorial_2_Dawn
	goto_if_eq VAR_RESULT, FEMALE, Route_202_EventScript_Rival_2_Catching_Tutorial_2_Lucas
	return


Route_202_EventScript_Rival_2_Catching_Tutorial_3::
	checkplayergender
	goto_if_eq VAR_RESULT, MALE, Route_202_EventScript_Rival_2_Catching_Tutorial_3_Dawn
	goto_if_eq VAR_RESULT, FEMALE, Route_202_EventScript_Rival_2_Catching_Tutorial_3_Lucas
	return


Route_202_EventScript_Rival_2_Catching_Tutorial_4::
	checkplayergender
	goto_if_eq VAR_RESULT, MALE, Route_202_EventScript_Rival_2_Catching_Tutorial_4_Dawn
	goto_if_eq VAR_RESULT, FEMALE, Route_202_EventScript_Rival_2_Catching_Tutorial_4_Lucas
	return


Route_202_EventScript_Rival_2_Catching_Tutorial_1_Dawn::
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Face_Left
	waitmovement 0
	playse SE_PIN
	applymovement 2, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement 2, Common_Movement_Delay48
	waitmovement 0
	applymovement 2, Route_202_Movement_Rival_2_Comes_To_You_1
	waitmovement 0
	msgbox Route_202_Text_I_Will_Show_You_Catching_Tutorial_Dawn
	closemessage
	applymovement 2, Movement_Rival_2_Goes_In_Grass
	applymovement OBJ_EVENT_ID_PLAYER, Player_Geos_In_Grass
	waitmovement 0
	goto Route_202_EventScript_Perform_Catching_Tutorial
	return


Route_202_EventScript_Rival_2_Catching_Tutorial_2_Dawn::
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Face_Left
	waitmovement 0
	playse SE_PIN
	applymovement 2, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement 2, Common_Movement_Delay48
	waitmovement 0
	applymovement 2, Route_202_Movement_Rival_2_Comes_To_You_2
	waitmovement 0
	msgbox Route_202_Text_I_Will_Show_You_Catching_Tutorial_Dawn
	closemessage
	applymovement 2, Movement_Rival_2_Goes_In_Grass
	applymovement OBJ_EVENT_ID_PLAYER, Player_Geos_In_Grass
	waitmovement 0
	goto Route_202_EventScript_Perform_Catching_Tutorial
	return


Route_202_EventScript_Rival_2_Catching_Tutorial_3_Dawn::
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Face_Left
	waitmovement 0
	playse SE_PIN
	applymovement 2, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement 2, Common_Movement_Delay48
	waitmovement 0
	applymovement 2, Route_202_Movement_Rival_2_Comes_To_You_3
	waitmovement 0
	msgbox Route_202_Text_I_Will_Show_You_Catching_Tutorial_Dawn
	closemessage
	applymovement 2, Movement_Rival_2_Goes_In_Grass
	applymovement OBJ_EVENT_ID_PLAYER, Player_Geos_In_Grass
	waitmovement 0
	goto Route_202_EventScript_Perform_Catching_Tutorial
	return


Route_202_EventScript_Rival_2_Catching_Tutorial_4_Dawn::
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Face_Left
	waitmovement 0
	playse SE_PIN
	applymovement 2, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement 2, Common_Movement_Delay48
	waitmovement 0
	applymovement 2, Route_202_Movement_Rival_2_Comes_To_You_4
	waitmovement 0
	msgbox Route_202_Text_I_Will_Show_You_Catching_Tutorial_Dawn
	closemessage
	applymovement 2, Movement_Rival_2_Goes_In_Grass
	applymovement OBJ_EVENT_ID_PLAYER, Player_Geos_In_Grass
	waitmovement 0
	goto Route_202_EventScript_Perform_Catching_Tutorial
	return


Route_202_EventScript_Rival_2_Catching_Tutorial_1_Lucas::
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Face_Left
	waitmovement 0
	playse SE_PIN
	applymovement 1, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement 1, Common_Movement_Delay48
	waitmovement 0
	applymovement 1, Route_202_Movement_Rival_2_Comes_To_You_1
	waitmovement 0
	msgbox Route_202_Text_I_Will_Show_You_Catching_Tutorial_Lucas
	closemessage
	applymovement 1, Movement_Rival_2_Goes_In_Grass
	applymovement OBJ_EVENT_ID_PLAYER, Player_Geos_In_Grass
	waitmovement 0
	goto Route_202_EventScript_Perform_Catching_Tutorial
	end


Route_202_EventScript_Rival_2_Catching_Tutorial_2_Lucas::
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Face_Left
	waitmovement 0
	playse SE_PIN
	applymovement 1, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement 1, Common_Movement_Delay48
	waitmovement 0
	applymovement 1, Route_202_Movement_Rival_2_Comes_To_You_2
	waitmovement 0
	msgbox Route_202_Text_I_Will_Show_You_Catching_Tutorial_Lucas
	closemessage
	applymovement 1, Movement_Rival_2_Goes_In_Grass
	applymovement OBJ_EVENT_ID_PLAYER, Player_Geos_In_Grass
	waitmovement 0
	goto Route_202_EventScript_Perform_Catching_Tutorial
	return


Route_202_EventScript_Rival_2_Catching_Tutorial_3_Lucas::
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Face_Left
	waitmovement 0
	playse SE_PIN
	applymovement 1, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement 1, Common_Movement_Delay48
	waitmovement 0
	applymovement 1, Route_202_Movement_Rival_2_Comes_To_You_3
	waitmovement 0
	msgbox Route_202_Text_I_Will_Show_You_Catching_Tutorial_Lucas
	closemessage
	applymovement 1, Movement_Rival_2_Goes_In_Grass
	applymovement OBJ_EVENT_ID_PLAYER, Player_Geos_In_Grass
	waitmovement 0
	goto Route_202_EventScript_Perform_Catching_Tutorial
	return


Route_202_EventScript_Rival_2_Catching_Tutorial_4_Lucas::
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Face_Left
	waitmovement 0
	playse SE_PIN
	applymovement 1, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement 1, Common_Movement_Delay48
	waitmovement 0
	applymovement 1, Route_202_Movement_Rival_2_Comes_To_You_4
	waitmovement 0
	msgbox Route_202_Text_I_Will_Show_You_Catching_Tutorial_Lucas
	closemessage
	applymovement 1, Movement_Rival_2_Goes_In_Grass
	applymovement OBJ_EVENT_ID_PLAYER, Player_Geos_In_Grass
	waitmovement 0
	goto Route_202_EventScript_Perform_Catching_Tutorial
	return


Route_202_EventScript_Perform_Catching_Tutorial::
	special SavePlayerParty
	special LoadWallyZigzagoon
	special StartWallyTutorialBattle
	waitstate
	special LoadPlayerParty
	checkplayergender
	goto_if_eq VAR_RESULT, MALE, Route_202_EventScript_Dawn_Gives_Pokeballs_And_Leaves
	goto_if_eq VAR_RESULT, FEMALE, Route_202_EventScript_Lucas_Gives_Pokeballs_And_Leaves
	return


Route_202_EventScript_Dawn_Gives_Pokeballs_And_Leaves::
	applymovement 2, Movement_Face_Right
	msgbox Route_202_EventScript_Dawn_Tells_To_Lower_Hp_More_And_Give_Pokeballs, MSGBOX_SIGN
	giveitem ITEM_POKE_BALL, 5
	msgbox Route_202_EventScript_Rival_2_Tells_Get_More_Pokeballs_And_Leaves, MSGBOX_SIGN
	applymovement 2, Movement_Rival_2_Leaves_For_Jubilife
	waitmovement 0
	removeobject 2
	setflag FLAG_HIDE_DAWN_ROUTE_202
	setvar VAR_MOM_TEXT, 8
	releaseall
	end


Route_202_EventScript_Lucas_Gives_Pokeballs_And_Leaves::
	applymovement 1, Movement_Face_Right
	msgbox Route_202_EventScript_Lucas_Tells_To_Lower_Hp_More_And_Give_Pokeballs, MSGBOX_SIGN
	giveitem ITEM_POKE_BALL, 5
	msgbox Route_202_EventScript_Rival_2_Tells_Get_More_Pokeballs_And_Leaves, MSGBOX_SIGN
	applymovement 1, Movement_Rival_2_Leaves_For_Jubilife
	waitmovement 0
	removeobject 1
	setflag FLAG_HIDE_LUCAS_ROUTE_202
	setvar VAR_MOM_TEXT, 8
	releaseall
	end


Route_202_EventScript_Youngster_Tristan::
	trainerbattle_single TRAINER_TRISTAN_1, Route_202_Text_Youngster_Tristan_Intro, Route_202_Text_Youngster_Tristan_Defeated
	msgbox Route_202_Text_Youngster_Tristan_PostBattle, MSGBOX_AUTOCLOSE
	return


Route_202_EventScript_Trainer_Tips::
	msgbox Route_202_EventScript_Trainer_Tips_Text, MSGBOX_SIGN
	return


Route_202_EventScript_Lass_Natalie::
	trainerbattle_single TRAINER_NATALIE, Route_202_Text_Youngster_Lass_Natalie_Intro, Route_202_Text_Lass_Natalie_Defeated
	msgbox Route_202_Text_Lass_Natalie_PostBattle, MSGBOX_AUTOCLOSE
	return


Route_202_EventScript_Youngster_Logan::
	trainerbattle_single TRAINER_LOGAN, Route_202_Text_Youngster_Logan_Intro, Route_202_Text_Youngster_Logan_Defeated
	msgbox Route_202_Text_Youngster_Logan_PostBattle, MSGBOX_AUTOCLOSE
	return


Route_202_EventScript_Location_Sign_1::
	msgbox Route_202_EventScript_Location_Sign_1_Text, MSGBOX_SIGN
	return


Route_202_EventScript_Youngster_Talking_About_Encounters::
	msgbox Route_202_EventScript_Youngster_Talking_About_Encounters_Text, MSGBOX_SIGN
	return


Route_202_Movement_Rival_2_Comes_To_You_1:
	walk_right
	walk_right
	walk_right
	walk_right
	walk_up
	walk_up
	walk_right
	step_end

Route_202_Movement_Rival_2_Comes_To_You_2:
	walk_right
	walk_right
	walk_right
	walk_right
	walk_up
	walk_right
	step_end

Route_202_Movement_Rival_2_Comes_To_You_3:
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

Route_202_Movement_Rival_2_Comes_To_You_4:
	walk_right
	walk_right
	walk_right
	walk_right
	walk_down
	walk_right
	step_end

Route_202_Movement_Rival_2_Walks_Right:
	walk_right
	step_end

Route_202_Movement_Player_Gets_Back:
	walk_right
	face_left
	step_end

Route_202_Movement_Rival_2_Goes_Back_1:
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_down
	walk_down
	face_right
	step_end

Route_202_Movement_Rival_2_Goes_Back_2:
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_down
	face_right
	step_end

Route_202_Movement_Rival_2_Goes_Back_3:
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	face_right
	step_end

Route_202_Movement_Rival_2_Goes_Back_4:
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_up
	face_right
	step_end

Movement_Rival_2_Goes_In_Grass:
	walk_left
	walk_left
	step_end

Player_Geos_In_Grass:
	walk_left
	walk_left
	step_end

Movement_Rival_2_Leaves_For_Jubilife:
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

Route_202_EventScript_Location_Sign_Text::
	.string "Rt. 202\n"
	.string "Sandgem Town$"

Route_202_Text_Dawn_Tells_To_Go_Home::
	.string "Dawn: {PLAYER}?!\p"
	.string "Did you tell your family that you're\n"
	.string "helping the professor?\p"
	.string "...You didn't, did you?\p"
	.string "I know that you're really eager to\n"
	.string "see all kinds of Pokemon.\p"
	.string "But you shouldn't make your mom\n"
	.string "worry that you've disappeared.$"

Route_202_Text_Lucas_Tells_To_Go_Home::
	.string "Dawn: {PLAYER}?!\p"
	.string "Did you tell your family that you're\n"
	.string "helping the professor?\p"
	.string "...You didn't, did you?\p"
	.string "I know that you're really eager to\n"
	.string "see all kinds of Pokemon.\p"
	.string "But you shouldn't make your mom\n"
	.string "worry that you've disappeared.$"

Route_202_EventScript_Trainer_Tips_Text::
	.string "Trainer Tips!\p"
	.string "All Pokemon that are involved in\n"
	.string "a battle earn Exp. points!\p"
	.string "The more your Pokemon battle,\n"
	.string "the stronger they will become.$"

Route_202_EventScript_Location_Sign_1_Text::
	.string "Rt. 202\n"
	.string "Jubilife City$"

Route_202_Text_I_Will_Show_You_Catching_Tutorial_Dawn::
	.string "Dawn: Oh, that's right!\p"
	.string "{PLAYER}, I haven't shown you\n"
	.string "how to catch a Pokemon.\p"
	.string "I'll demonstrate how to catch\n"
	.string "one, so just watch me, OK?$"

Route_202_Text_I_Will_Show_You_Catching_Tutorial_Lucas::
	.string "Lucas: Oh, that's right!\p"
	.string "{PLAYER}, I haven't shown you\n"
	.string "how to catch a Pokemon.\p"
	.string "I'll demonstrate how to catch\n"
	.string "one, so just watch me, OK?$"

Route_202_EventScript_Dawn_Tells_To_Lower_Hp_More_And_Give_Pokeballs::
	.string "Dawn: Giggle...\n"
	.string "See? Isn't it neat?\p"
	.string "Actually it's better to lower your\n"
	.string "target's HP more than I did.\p"
	.string "It's important to get the Pokemon's\n"
	.string "HP down as low as possible.\p"
	.string "This is because a healthy Pokemon\n"
	.string "is very difficult to catch.\p"
	.string "Oh, Pokemon also get easier to catch\n"
	.string "if you make them sleep or something\l"
	.string "by using a Pokemon's move.\p"
	.string "Ok, {PLAYER}, to get you\n"
	.string "started, I'll give you five\l"
	.string "Poke Balls!$"

Route_202_EventScript_Rival_2_Tells_Get_More_Pokeballs_And_Leaves::
	.string "If you have lots of Pokemon with you,\n"
	.string "it will be safer for longer trips\p"
	.string "Plus, it will be a lot more fun\n"
	.string "having your Pokemon friends along.\p"
	.string "Ok, I need to get going.\n"
	.string "Bye, now!$"

Route_202_EventScript_Lucas_Tells_To_Lower_Hp_More_And_Give_Pokeballs::
	.string "Lucas: Giggle...\n"
	.string "See? Isn't it neat?\p"
	.string "Actually it's better to lower your\n"
	.string "target's HP more than I did.\p"
	.string "It's important to get the Pokemon's\n"
	.string "HP down as low as possible.\p"
	.string "This is because a healthy Pokemon\n"
	.string "is very difficult to catch.\p"
	.string "Oh, Pokemon also get easier to catch\n"
	.string "if you make them sleep or something\l"
	.string "by using a Pokemon's move.\p"
	.string "Ok, {PLAYER}, to get you\n"
	.string "started, I'll give you five\l"
	.string "Poke Balls!$"

Route_202_Text_Youngster_Tristan_Intro::
	.string "You're a Pokemon Trainer, and so am I\n"
	.string "Our eyes met, so battle we must!$"

Route_202_Text_Youngster_Tristan_Defeated::
	.string "Too Strong!\n"
	.string "Too Strong!$"

Route_202_Text_Youngster_Tristan_PostBattle::
	.string "Don't be shy about talking to\n"
	.string "Trainers you's like to battle.\p"
	.string "Pokemon grow stronger and stronger\n"
	.string "from battling.$"

Route_202_Text_Youngster_Lass_Natalie_Intro::
	.string "I spy, with my little eye...\n"
	.string "A Trainer!\p"
	.string "A battle. please!$"

Route_202_Text_Lass_Natalie_Defeated::
	.string "Oh, boo!\n"
	.string "I can't win!$"

Route_202_Text_Lass_Natalie_PostBattle::
	.string "My Pokemon are all tuckered out!\n"
	.string "I need to go to a Pokemon Center!$"

Route_202_Text_Youngster_Logan_Intro::
	.string "Let's have a Pokemon battle!\n"
	.string "Humph! but I'm gonna win!$"

Route_202_Text_Youngster_Logan_Defeated::
	.string "You beat me?!\n"
	.string "You've gt talent!$"

Route_202_Text_Youngster_Logan_PostBattle::
	.string "It was fun battling!\n"
	.string "Yup! I'm going to battle everyone!$"

Route_202_EventScript_Youngster_Talking_About_Encounters_Text::
	.string "Some Pokemon only appear in the\n"
	.string "morning.\p"
	.string "Some only come out at night.\p"
	.string "I'll keep looking till I've seen them\n"
	.string "all!$"
