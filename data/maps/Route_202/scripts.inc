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


Route_202_EventScript_Trainer_Tips::
	msgbox Route_202_EventScript_Trainer_Tips_Text, MSGBOX_SIGN
	return


Route_202_EventScript_Location_Sign_1::
	msgbox Route_202_EventScript_Location_Sign_1_Text, MSGBOX_SIGN
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
