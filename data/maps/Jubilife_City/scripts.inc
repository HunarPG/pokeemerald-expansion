Jubilife_City_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Jubilife_City_OnTransition
	.byte 0


Jubilife_City_OnTransition::
	checkplayergender
	goto_if_eq VAR_RESULT, MALE, Jubilife_City_EventScript_Hide_Lucas
	goto_if_eq VAR_RESULT, FEMALE, Jubilife_City_EventScript_Hide_Dawn
	return


Jubilife_City_EventScript_Hide_Lucas::
	setflag FLAG_HIDE_LUCAS_JUBILIFE_CITY
	end


Jubilife_City_EventScript_Hide_Dawn::
	setflag FLAG_HIDE_DAWN_JUBILIFE_CITY
	end


Jubilife_City_EventScript_Rival_2_Tutorial_1::
	checkplayergender
	goto_if_eq VAR_RESULT, MALE, Jubilife_City_EventScript_Dawn_Tutorial_Take_Near_Looker_1
	goto_if_eq VAR_RESULT, FEMALE, Jubilife_City_EventScript_Lucas_Tutorial_Take_Near_Looker_1
	return


Jubilife_City_EventScript_Rival_2_Tutorial_2::
	checkplayergender
	goto_if_eq VAR_RESULT, MALE, Jubilife_City_EventScript_Dawn_Tutorial_Take_Near_Looker_2
	goto_if_eq VAR_RESULT, FEMALE, Jubilife_City_EventScript_Lucas_Tutorial_Take_Near_Looker_2
	return


Jubilife_City_EventScript_Rival_2_Tutorial_3::
	checkplayergender
	goto_if_eq VAR_RESULT, MALE, Jubilife_City_EventScript_Dawn_Tutorial_Take_Near_Looker_3
	goto_if_eq VAR_RESULT, FEMALE, Jubilife_City_EventScript_Lucas_Tutorial_Take_Near_Looker_3
	return


Jubilife_City_EventScript_Dawn_Tutorial_Take_Near_Looker_1::
	lockall
	applymovement 1, Movement_Jubiife_City_Rival_2_Comes_In_Sight_1
	waitmovement 0
	playse SE_PIN
	applymovement 1, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement 1, Common_Movement_Delay48
	waitmovement 0
	fadenewbgm MUS_DP_DAWN
	applymovement 1, Movement_Jubiife_City_Rival_2_Reaches_Player
	waitmovement 0
	msgbox Dawn_Talks_Before_Tutorial, MSGBOX_SIGN
	applymovement 1, Movement_Rival_2_Takes_Up_To_Looker_1
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Player_Goes_Up_To_Looker_1
	waitmovement 0
	goto Jubilife_City_EventScript_Dawn_Move_To_Looker_Cutscene
	return


Jubilife_City_EventScript_Lucas_Tutorial_Take_Near_Looker_1::
	lockall
	applymovement 2, Movement_Jubiife_City_Rival_2_Comes_In_Sight_1
	waitmovement 0
	playse SE_PIN
	applymovement 2, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement 2, Common_Movement_Delay48
	waitmovement 0
	fadenewbgm MUS_DP_LUCAS
	applymovement 2, Movement_Jubiife_City_Rival_2_Reaches_Player
	waitmovement 0
	msgbox Lucas_Talks_Before_Tutorial, MSGBOX_SIGN
	applymovement 2, Movement_Rival_2_Takes_Up_To_Looker_1
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Player_Goes_Up_To_Looker_1
	waitmovement 0
	goto Jubilife_City_EventScript_Lucas_Move_To_Looker_Cutscene
	return


Jubilife_City_EventScript_Dawn_Tutorial_Take_Near_Looker_2::
	lockall
	applymovement 1, Movement_Jubiife_City_Rival_2_Comes_In_Sight_2
	waitmovement 0
	playse SE_PIN
	applymovement 1, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement 1, Common_Movement_Delay48
	waitmovement 0
	fadenewbgm MUS_DP_DAWN
	applymovement 1, Movement_Jubiife_City_Rival_2_Reaches_Player
	waitmovement 0
	msgbox Dawn_Talks_Before_Tutorial, MSGBOX_SIGN
	applymovement 1, Movement_Rival_2_Takes_Up_To_Looker_2
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Player_Goes_Up_To_Looker_2
	waitmovement 0
	goto Jubilife_City_EventScript_Dawn_Move_To_Looker_Cutscene
	return


Jubilife_City_EventScript_Lucas_Tutorial_Take_Near_Looker_2::
	lockall
	applymovement 2, Movement_Jubiife_City_Rival_2_Comes_In_Sight_2
	waitmovement 0
	playse SE_PIN
	applymovement 2, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement 2, Common_Movement_Delay48
	waitmovement 0
	fadenewbgm MUS_DP_LUCAS
	applymovement 2, Movement_Jubiife_City_Rival_2_Reaches_Player
	waitmovement 0
	msgbox Lucas_Talks_Before_Tutorial, MSGBOX_SIGN
	applymovement 2, Movement_Rival_2_Takes_Up_To_Looker_2
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Player_Goes_Up_To_Looker_2
	waitmovement 0
	goto Jubilife_City_EventScript_Lucas_Move_To_Looker_Cutscene
	return


Jubilife_City_EventScript_Dawn_Tutorial_Take_Near_Looker_3::
	lockall
	applymovement 1, Movement_Jubiife_City_Rival_2_Comes_In_Sight_3
	waitmovement 0
	playse SE_PIN
	applymovement 1, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement 1, Common_Movement_Delay48
	waitmovement 0
	fadenewbgm MUS_DP_DAWN
	applymovement 1, Movement_Jubiife_City_Rival_2_Reaches_Player
	waitmovement 0
	msgbox Dawn_Talks_Before_Tutorial, MSGBOX_SIGN
	applymovement 1, Movement_Rival_2_Takes_Up_To_Looker_3
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Player_Goes_Up_To_Looker_3
	waitmovement 0
	goto Jubilife_City_EventScript_Dawn_Move_To_Looker_Cutscene
	return


Jubilife_City_EventScript_Lucas_Tutorial_Take_Near_Looker_3::
	lockall
	applymovement 2, Movement_Jubiife_City_Rival_2_Comes_In_Sight_3
	waitmovement 0
	playse SE_PIN
	applymovement 2, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement 2, Common_Movement_Delay48
	waitmovement 0
	fadenewbgm MUS_DP_LUCAS
	applymovement 2, Movement_Jubiife_City_Rival_2_Reaches_Player
	waitmovement 0
	msgbox Lucas_Talks_Before_Tutorial, MSGBOX_SIGN
	applymovement 2, Movement_Rival_2_Takes_Up_To_Looker_3
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Player_Goes_Up_To_Looker_3
	waitmovement 0
	goto Jubilife_City_EventScript_Lucas_Move_To_Looker_Cutscene
	return


Jubilife_City_EventScript_Dawn_Move_To_Looker_Cutscene::
	msgbox Dawn_Notice_looker, MSGBOX_SIGN
	applymovement 3, Movement_Looker_Moves_Near_Pokecenter
	waitmovement 0
	applymovement 1, Movement_Rival_2_Move_To_Contrfront_Looker
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Player_Move_To_Contrfront_Looker
	applymovement 3, Movement_Looker_Gets_Caught
	waitmovement 0
	msgbox Dawn_Confronts_Looker, MSGBOX_AUTOCLOSE
	applymovement 3, Movement_Looker_Delays_Then_Face_Down
	waitmovement 0
	playse SE_PIN
	applymovement 3, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement 1, Common_Movement_Delay48
	waitmovement 0
	playbgm MUS_PL_LOOKER, FALSE
	msgbox Looker_Says_You_Unmasked_Me, MSGBOX_SIGN
	applymovement 1, Movement_Rival_Walk_In_Place_Up
	msgbox Dawn_Begs_Pardon_To_Looker, MSGBOX_SIGN
	msgbox Looker_Introduces_Himself, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, Jubilife_City_EventScript_Looker_Continues
	goto_if_eq VAR_RESULT, NO, Jubilife_City_EventScript_Looker_Explain_The_Saying
	end


Jubilife_City_EventScript_Lucas_Move_To_Looker_Cutscene::
	msgbox Lucas_Notice_looker, MSGBOX_SIGN
	applymovement 3, Movement_Looker_Moves_Near_Pokecenter
	waitmovement 0
	applymovement 2, Movement_Rival_2_Move_To_Contrfront_Looker
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Player_Move_To_Contrfront_Looker
	applymovement 3, Movement_Looker_Gets_Caught
	waitmovement 0
	msgbox Lucas_Confronts_Looker, MSGBOX_AUTOCLOSE
	applymovement 3, Movement_Looker_Delays_Then_Face_Down
	waitmovement 0
	playse SE_PIN
	applymovement 3, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement 1, Common_Movement_Delay48
	waitmovement 0
	playbgm MUS_PL_LOOKER, FALSE
	msgbox Looker_Says_You_Unmasked_Me, MSGBOX_SIGN
	applymovement 2, Movement_Rival_Walk_In_Place_Up
	msgbox Lucas_Begs_Pardon_To_Looker, MSGBOX_SIGN
	msgbox Looker_Introduces_Himself, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, Jubilife_City_EventScript_Looker_Still_Reference_The_Saying
	goto_if_eq VAR_RESULT, NO, Jubilife_City_EventScript_Looker_Explain_The_Saying
	end


Jubilife_City_EventScript_Looker_Explain_The_Saying::
	msgbox Jubilife_City_EventScript_Looker_Explain_The_Saying_Text, MSGBOX_SIGN
	goto Jubilife_City_EventScript_Looker_Continues
	return


Jubilife_City_EventScript_Looker_Still_Reference_The_Saying::
	msgbox Jubilife_City_EventScript_Looker_Still_Reference_The_Saying_Text, MSGBOX_SIGN
	goto Jubilife_City_EventScript_Looker_Continues
	return


Jubilife_City_EventScript_Looker_Continues::
	msgbox Jubilife_City_EventScript_Looker_Gives_Vs_Recorder, MSGBOX_SIGN
	giveitem ITEM_VS_RECORDER
	msgbox Jubilife_City_EventScript_Looker_Explains_Vs_Recorder, MSGBOX_SIGN
	applymovement 3, Movement_Looker_Looks_Around
	waitmovement 0
	msgbox Jubilife_City_EventScript_Looker_Requests, MSGBOX_SIGN
	checkplayergender
	goto_if_eq VAR_RESULT, MALE, Jubilife_City_EventScript_Looker_Leaves_Dawn
	goto_if_eq VAR_RESULT, FEMALE, Jubilife_City_EventScript_Looker_Leaves_Lucas
	return


Jubilife_City_EventScript_Looker_Leaves_Dawn::
	applymovement 3, Movement_Looker_Goes_Near_Pokemon_Center
	applymovement 1, Movement_Face_Right
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Face_Right
	waitmovement 3
	applymovement 3, Movement_Looker_Leaves_To_North
	applymovement 1, Movement_Face_Up
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Face_Up
	waitmovement 3
	msgbox Dawn_Tells_Working_For_Police_Is_Hard, MSGBOX_SIGN
	fadedefaultbgm
	applymovement 1, Common_Movement_Delay48
	waitmovement 0
	applymovement 1, Movement_Rival_2_Goes_Near_School
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Face_Left
	waitmovement 1
	msgbox Dawn_Tells_About_Trainer_School, MSGBOX_SIGN
	applymovement 1, Rival_2_Comes_Near_You_Before_Leaving
	waitmovement 0
	msgbox Dawn_Tells_She_Saw_Barry_Going_In, MSGBOX_SIGN
	applymovement 1, Movement_Rival_2_Leaves_South
	waitmovement 0
	removeobject 1
	removeobject 3
	setflag FLAG_HIDE_DAWN_JUBILIFE_CITY
	setflag FLAG_HIDE_LOOKER_JUBILIFE_CITY
	setvar VAR_JUBILIFE_CITY_STATE, 1
	releaseall
	end


Jubilife_City_EventScript_Looker_Leaves_Lucas::
	applymovement 3, Movement_Looker_Goes_Near_Pokemon_Center
	applymovement 2, Movement_Face_Right
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Face_Right
	waitmovement 3
	applymovement 3, Movement_Looker_Leaves_To_North
	applymovement 2, Movement_Face_Up
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Face_Up
	waitmovement 3
	msgbox Lucas_Tells_Working_For_Police_Is_Hard, MSGBOX_SIGN
	fadedefaultbgm
	applymovement 2, Movement_Rival_2_Goes_Near_School
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Face_Left
	waitmovement 2
	msgbox Lucas_Tells_About_Trainer_School, MSGBOX_SIGN
	applymovement 2, Rival_2_Comes_Near_You_Before_Leaving
	waitmovement 0
	msgbox Lucas_Tells_He_Saw_Barry_Going_In, MSGBOX_SIGN
	applymovement 2, Movement_Rival_2_Leaves_South
	waitmovement 0
	setflag FLAG_HIDE_LUCAS_JUBILIFE_CITY
	setflag FLAG_HIDE_LOOKER_JUBILIFE_CITY
	removeobject 2
	removeobject 3
	setvar VAR_JUBILIFE_CITY_STATE, 1
	releaseall
	end


Jubilife_City_EventScript_Location_Sign::
	msgbox Jubilife_City_EventScript_Location_Sign_Text, MSGBOX_SIGN
	end


Jubilife_City_EventScript_Trader_1::
	msgbox Jubilife_City_EventScript_Trader_1_Text, MSGBOX_NPC
	end


Jubilife_City_EventScript_Trader_2::
	msgbox Jubilife_City_EventScript_Trader_2_Text, MSGBOX_NPC
	end


Jubilife_City_EventScript_Old_Man_Near_Trainer_School::
	lockall
	faceplayer
	msgbox Jubilife_City_EventScript_Old_Man_Near_Trainer_School_Text, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, Jubilife_City_EventScript_Old_Man_Near_Trainer_School_You_Are_Knowledgeable
	goto_if_eq VAR_RESULT, NO, Jubilife_City_EventScript_Old_Man_Near_Trainer_School_You_Are_Not_Knowledgeable
	return


Jubilife_City_EventScript_Old_Man_Near_Trainer_School_You_Are_Knowledgeable::
	msgbox Jubilife_City_EventScript_Old_Man_Near_Trainer_School_You_Are_Knowledgeable_Text, MSGBOX_SIGN
	releaseall
	end


Jubilife_City_EventScript_Old_Man_Near_Trainer_School_You_Are_Not_Knowledgeable::
	msgbox Jubilife_City_EventScript_Old_Man_Near_Trainer_School_You_Are_Not_Knowledgeable_Text, MSGBOX_SIGN
	releaseall
	end


Jubilife_City_EventScript_Trainer_School_Sign::
	msgbox Jubilife_City_EventScript_Trainer_School_Sign_Text, MSGBOX_SIGN
	end


Jubilife_City_EventScript_Global_Terminal_Sign::
	msgbox Jubilife_City_EventScript_Global_Terminal_Sign_Text, MSGBOX_SIGN
	end


Jubilife_City_EventScript_Global_Terminal_NPC::
	msgbox Jubilife_City_EventScript_Global_Terminal_NPC_Text, MSGBOX_NPC
	end


Jubilife_City_EventScript_School_Kid_Near_Pokemon_Center::
	msgbox Jubilife_City_EventScript_School_Kid_Near_Pokemon_Center_Text, MSGBOX_NPC
	end


Jubilife_City_EventScript_Condominiums_Sign::
	msgbox Jubilife_City_EventScript_Condominiums_Sign_Text, MSGBOX_SIGN
	end


Jubilife_City_EventScript_Woman_Near_Condonium::
	msgbox Jubilife_City_EventScript_Woman_Near_Condonium_Text, MSGBOX_SIGN
	end


Jubilife_City_EventScript_Jubilife_Tv_Sign::
	msgbox Jubilife_City_EventScript_Jubilife_Tv_Sign_Text, MSGBOX_SIGN
	end


Jubilife_City_EventScript_Woman_Near_Fountain::
	msgbox Jubilife_City_EventScript_Woman_Near_Fountain_Text, MSGBOX_NPC
	end


Jubilife_City_EventScript_Little_Girl_In_Front_Of_Jubilife_TV::
	msgbox Jubilife_City_EventScript_Little_Girl_In_Front_Of_Jubilife_TV_Text, MSGBOX_NPC
	end


Jubilife_City_EventScript_Lady_In_Front_Of_Poketch_Building::
	msgbox Jubilife_City_EventScript_Lady_In_Front_Of_Poketch_Building_Text, MSGBOX_NPC
	end


Jubilife_City_EventScript_Poketch_Company_Sign::
	msgbox Jubilife_City_EventScript_Poketch_Company_Sign_Text, MSGBOX_SIGN
	end


Jubilife_City_EventScript_Looker_Near_Exit::
	msgbox Jubilife_City_EventScript_Looker_Near_Exit_Text, MSGBOX_SIGN
	return


Jubilife_City_EventScript_Looker_Stop_You_From_Leaving_1::
	playse SE_PIN
	applymovement 13, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement 13, Common_Movement_Delay48
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Face_Left
	waitmovement 0
	applymovement 13, Movement_Looker_Comes_To_You_1
	waitmovement 0
	msgbox Lucas_Tells_To_Go_To_Trainer_School, MSGBOX_SIGN
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Player_Walks_Back
	applymovement 13, Movement_Looker_Goes_Back_1
	waitmovement 0
	end


Jubilife_City_EventScript_Looker_Stop_You_From_Leaving_2::
	playse SE_PIN
	applymovement 13, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement 13, Common_Movement_Delay48
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Face_Left
	waitmovement 0
	applymovement 13, Movement_Looker_Comes_To_You_2
	waitmovement 0
	msgbox Lucas_Tells_To_Go_To_Trainer_School, MSGBOX_SIGN
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Player_Walks_Back
	applymovement 13, Movement_Looker_Goes_Back_2
	waitmovement 0
	end


Jubilife_City_EventScript_Looker_Stop_You_From_Leaving_3::
	playse SE_PIN
	applymovement 13, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement 13, Common_Movement_Delay48
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Face_Left
	waitmovement 0
	applymovement 13, Movement_Looker_Comes_To_You_3
	waitmovement 0
	msgbox Lucas_Tells_To_Go_To_Trainer_School, MSGBOX_SIGN
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Player_Walks_Back
	applymovement 13, Movement_Looker_Goes_Back_3
	waitmovement 0
	end


Jubilife_City_EventScript_Global_Terminal_NPC_Trigger_1::
	lockall
	playse SE_PIN
	applymovement 8, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement 8, Common_Movement_Delay48
	waitmovement 0
	applymovement 8, Movement_Jubilife_City_Terminal_Npc_Walk_To_Player_1
	waitmovement 0
	msgbox Jubilife_City_EventScript_Global_Terminal_NPC_Trigger_Texxt, MSGBOX_SIGN
	applymovement 8, Movement_Jubilife_City_Terminal_Npc_Push_Player
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Jubilife_City_Player_Step_Back
	waitmovement 0
	applymovement 8, Movement_Jubilife_City_Terminal_Npc_Walk_Back_1
	waitmovement 0
	releaseall
	end


Jubilife_City_EventScript_Global_Terminal_NPC_Trigger_2::
	lockall
	playse SE_PIN
	applymovement 8, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement 8, Common_Movement_Delay48
	waitmovement 0
	applymovement 8, Movement_Jubilife_City_Terminal_Npc_Walk_To_Player_2
	waitmovement 0
	msgbox Jubilife_City_EventScript_Global_Terminal_NPC_Trigger_Texxt, MSGBOX_SIGN
	applymovement 8, Movement_Jubilife_City_Terminal_Npc_Push_Player
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Jubilife_City_Player_Step_Back
	waitmovement 0
	applymovement 8, Movement_Jubilife_City_Terminal_Npc_Walk_Back_2
	waitmovement 0
	releaseall
	end


Jubilife_City_EventScript_Joker_1::
	goto_if_set FLAG_GOT_COUPON_1, Jubilife_City_EventScript_Joker_1_1
	goto Jubilife_City_EventScript_Joker_1_Ask_Question
	return

Jubilife_City_EventScript_Joker_1_1:
	msgbox Jubilife_City_EventScript_Joker_1_Already_Got_Coupon_Text, MSGBOX_NPC
	return


Jubilife_City_EventScript_Joker_1_Ask_Question::
	lock
	faceplayer
	msgbox Jubilife_City_EventScript_Joker_1_Ask_Question_Text, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, Jubilife_City_EventScript_Joker_1_Question_Correct
	goto_if_eq VAR_RESULT, NO, Jubilife_City_EventScript_Joker_Question_Wrong
	return


Jubilife_City_EventScript_Joker_1_Question_Correct::
	playse SE_DING_DONG
	msgbox Jubilife_City_EventScript_Joker_1_Give_Coupon, MSGBOX_SIGN
	giveitem ITEM_COUPON_1
	setflag FLAG_GOT_COUPON_1
	release
	end


Jubilife_City_EventScript_Joker_2::
	goto_if_set FLAG_GOT_COUPON_2, Jubilife_City_EventScript_Joker_2_1
	goto Jubilife_City_EventScript_Joker_2_Ask_Question
	return

Jubilife_City_EventScript_Joker_2_1:
	msgbox Jubilife_City_EventScript_Joker_2_Already_Got_Coupon_Text, MSGBOX_NPC
	return


Jubilife_City_EventScript_Joker_2_Ask_Question::
	lock
	faceplayer
	msgbox Jubilife_City_EventScript_Joker_2_Ask_Question_Text, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, Jubilife_City_EventScript_Joker_2_Question_Correct
	goto_if_eq VAR_RESULT, NO, Jubilife_City_EventScript_Joker_Question_Wrong
	return


Jubilife_City_EventScript_Joker_2_Question_Correct::
	playse SE_DING_DONG
	msgbox Jubilife_City_EventScript_Joker_2_Give_Coupon, MSGBOX_SIGN
	giveitem ITEM_COUPON_2
	setflag FLAG_GOT_COUPON_2
	release
	end


Jubilife_City_EventScript_Joker_3::
	goto_if_set FLAG_HIDE_BARRY_IN_SCHOOL, Jubilife_City_EventScript_Joker_3_1
	goto Jubilife_City_EventScript_Joker_3_Before_Rival
	return

Jubilife_City_EventScript_Joker_3_1:
	goto_if_set FLAG_GOT_COUPON_3, Jubilife_City_EventScript_Joker_3_4
	goto Jubilife_City_EventScript_Joker_3_Ask_Question
	return

Jubilife_City_EventScript_Joker_3_4:
	goto Jubilife_City_EventScript_Joker_3_Already_Got_Coupon_Text
	return


Jubilife_City_EventScript_Joker_3_Before_Rival::
	msgbox Jubilife_City_EventScript_Joker_3_Before_Rival_Text, MSGBOX_NPC
	end


Jubilife_City_EventScript_Joker_3_Ask_Question::
	lock
	faceplayer
	msgbox Jubilife_City_EventScript_Joker_3_Text_Ask_Question, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, Jubilife_City_EventScript_Joker_3_Question_Correct
	goto_if_eq VAR_RESULT, NO, Jubilife_City_EventScript_Joker_Question_Wrong
	return


Jubilife_City_EventScript_Joker_3_Question_Correct::
	playse SE_DING_DONG
	msgbox Jubilife_City_EventScript_Joker_3_Give_Coupon, MSGBOX_SIGN
	giveitem ITEM_COUPON_3
	setflag FLAG_GOT_COUPON_3
	release
	end


Jubilife_City_EventScript_Joker_Question_Wrong::
	playse SE_FAILURE
	delay 10
	playse SE_FAILURE
	msgbox Jubilife_City_EventScript_Joker_Wrong_Answer MSGBOX_SIGN
	release
	end


Jubilife_City_EventScript_Joker_3_Already_Got_Coupon::
	msgbox Jubilife_City_EventScript_Joker_3_Already_Got_Coupon_Text, MSGBOX_NPC
	end


Jubilife_City_EventScript_Poketch_Employee_1::
	lock
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Face_Up
	applymovement 18, Movement_Face_Down
	waitmovement 0
	playse SE_PIN
	applymovement 18, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement 18, Common_Movement_Delay48
	waitmovement 0
	applymovement 18, Movement_Employee_Come_To_Player_1
	waitmovement 0
	goto Jubilife_City_EventScript_Poketch_Employee_Tell_About_Event
	return


Jubilife_City_EventScript_Poketch_Employee_2::
	lock
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Face_Up
	applymovement 18, Movement_Face_Down
	waitmovement 0
	playse SE_PIN
	waitmovement 0
	applymovement 18, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement 18, Common_Movement_Delay48
	waitmovement 0
	applymovement 18, Movement_Employee_Come_To_Player_2
	waitmovement 0
	goto Jubilife_City_EventScript_Poketch_Employee_Tell_About_Event
	return


Jubilife_City_EventScript_Poketch_Employee_3::
	lock
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Face_Up
	applymovement 18, Movement_Face_Down
	waitmovement 0
	playse SE_PIN
	applymovement 18, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement 18, Common_Movement_Delay48
	waitmovement 0
	applymovement 18, Movement_Employee_Come_To_Player_3
	waitmovement 0
	goto Jubilife_City_EventScript_Poketch_Employee_Tell_About_Event
	return


Jubilife_City_EventScript_Poketch_Employee_4::
	lock
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Face_Up
	applymovement 18, Movement_Face_Down
	waitmovement 0
	playse SE_PIN
	waitmovement 0
	applymovement 18, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement 18, Common_Movement_Delay48
	waitmovement 0
	applymovement 18, Movement_Employee_Come_To_Player_4
	waitmovement 0
	goto Jubilife_City_EventScript_Poketch_Employee_Tell_About_Event
	return


Jubilife_City_EventScript_Poketch_Employee_5::
	lock
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Face_Up
	applymovement 18, Movement_Face_Down
	waitmovement 0
	playse SE_PIN
	waitmovement 0
	applymovement 18, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement 18, Common_Movement_Delay48
	waitmovement 0
	applymovement 18, Movement_Employee_Come_To_Player_5
	waitmovement 0
	goto Jubilife_City_EventScript_Poketch_Employee_Tell_About_Event
	return


Jubilife_City_EventScript_Poketch_Employee_Tell_About_Event::
	msgbox Jubilife_City_EventScript_Poketch_Employee_Tell_About_Event_Text, MSGBOX_SIGN
	setvar VAR_JUBILIFE_CITY_STATE, 3
	release
	end


Jubilife_City_EventScript_Poketch_Employe_Interact::
	goto_if_set FLAG_GOT_COUPON_1, Jubilife_City_EventScript_Poketch_Employe_Interact_4
Jubilife_City_EventScript_Poketch_Employe_Interact_2:
	msgbox Jubilife_City_EventScript_Poketch_Employe_Tell_About_Clowns, MSGBOX_NPC
	end

Jubilife_City_EventScript_Poketch_Employe_Interact_1:
	goto Jubilife_City_EventScript_Poketch_Employe_Gives_Poketch_And_Leaves
	return

Jubilife_City_EventScript_Poketch_Employe_Interact_3:
	goto_if_set FLAG_GOT_COUPON_3, Jubilife_City_EventScript_Poketch_Employe_Interact_1
	goto Jubilife_City_EventScript_Poketch_Employe_Interact_2

Jubilife_City_EventScript_Poketch_Employe_Interact_4:
	goto_if_set FLAG_GOT_COUPON_2, Jubilife_City_EventScript_Poketch_Employe_Interact_3
	goto Jubilife_City_EventScript_Poketch_Employe_Interact_2


Jubilife_City_EventScript_Poketch_Employe_Gives_Poketch_And_Leaves::
	faceplayer
	lock
	msgbox Jubilife_City_EventScript_Poketch_Employe_Gives_Poketch_Text, MSGBOX_SIGN
	msgbox Jubilife_City_EventScript_Poketch_Employe_Explains_Poketch_Text, MSGBOX_SIGN
	specialvar VAR_RESULT, GetPlayerFacingDirection
	goto_if_eq VAR_RESULT, DIR_SOUTH, Jubilife_City_EventScript_Poketch_Employee_Leaves_Player_Face_Down
	goto_if_eq VAR_RESULT, DIR_EAST, Jubilife_City_EventScript_Poketch_Employee_Leaves_Player_Face_Right_Or_Left
	goto_if_eq VAR_RESULT, DIR_WEST, Jubilife_City_EventScript_Poketch_Employee_Leaves_Player_Face_Right_Or_Left
	goto_if_eq VAR_RESULT, DIR_NORTH, Jubilife_City_EventScript_Poketch_Employee_Leaves_Player_Face_Up
	return


Jubilife_City_EventScript_Poketch_Employee_Leaves_Player_Face_Down::
	applymovement 18, Movement_Poketch_Emplyee_Halfway_Player_Face_Down
	waitmovement 0
	applymovement 18, Movement_Poketch_Employee_Leaves
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Player_Faces_Left_And_Up
	waitmovement 18
	setflag FLAG_HIDE_POKETCH_EMPLOYEE
	setflag FLAG_HIDE_LOOKER_2
	removeobject 18
	removeobject 13
	setvar VAR_JUBILIFE_CITY_STATE, 4
	release
	end


Jubilife_City_EventScript_Poketch_Employee_Leaves_Player_Face_Right_Or_Left::
	applymovement 18, Movement_Poketch_Employee_Leaves
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Face_Up
	waitmovement 18
	setflag FLAG_HIDE_POKETCH_EMPLOYEE
	setflag FLAG_HIDE_LOOKER_2
	removeobject 18
	removeobject 13
	setvar VAR_JUBILIFE_CITY_STATE, 4
	release
	end


Jubilife_City_EventScript_Poketch_Employee_Leaves_Player_Face_Up::
	applymovement 18, Movement_Poketch_Employee_Leaves
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Jubilife_City_Player_Walk_In_Place_Up
	waitmovement 18
	setflag FLAG_HIDE_POKETCH_EMPLOYEE
	setflag FLAG_HIDE_LOOKER_2
	removeobject 18
	removeobject 13
	setvar VAR_JUBILIFE_CITY_STATE, 4
	release
	end


Movement_Jubiife_City_Rival_2_Comes_In_Sight_1:
	walk_left
	walk_down
	walk_down
	walk_down
	step_end

Movement_Jubiife_City_Rival_2_Comes_In_Sight_2:
	walk_down
	walk_down
	walk_down
	step_end

Movement_Jubiife_City_Rival_2_Comes_In_Sight_3:
	walk_right
	walk_down
	walk_down
	walk_down
	step_end

Movement_Jubiife_City_Rival_2_Reaches_Player:
	walk_down
	walk_down
	step_end

Movement_Rival_2_Takes_Up_To_Looker_1:
	walk_right
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

Movement_Rival_2_Takes_Up_To_Looker_2:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

Movement_Rival_2_Takes_Up_To_Looker_3:
	walk_left
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

Movement_Player_Goes_Up_To_Looker_1:
	walk_up
	walk_right
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

Movement_Player_Goes_Up_To_Looker_2:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

Movement_Player_Goes_Up_To_Looker_3:
	walk_up
	walk_left
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

Movement_Looker_Moves_Near_Pokecenter:
	face_left
	delay_16
	delay_16
	face_down
	delay_16
	delay_16
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	face_right
	delay_16
	delay_16
	face_up
	delay_16
	delay_16
	step_end

Movement_Rival_2_Move_To_Contrfront_Looker:
	walk_up
	walk_up
	step_end

Movement_Player_Move_To_Contrfront_Looker:
	walk_up
	walk_up
	walk_right
	walk_up
	step_end

Movement_Looker_Gets_Caught:
	walk_right
	walk_right
	walk_right
	step_end

Movement_Looker_Delays_Then_Face_Down:
	delay_16
	face_down
	step_end

Movement_Rival_Walk_In_Place_Up:
	walk_in_place_up
	step_end

Movement_Looker_Looks_Around:
	delay_16
	delay_16
	face_left
	delay_16
	delay_16
	face_right
	delay_16
	delay_16
	face_down
	step_end

Movement_Looker_Goes_Near_Pokemon_Center:
	walk_right
	walk_right
	walk_right
	face_left
	delay_16
	delay_16
	step_end

Movement_Looker_Leaves_To_North:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	delay_16
	delay_16
	step_end

Movement_Rival_2_Goes_Near_School:
	walk_down
	walk_left
	walk_left
	step_end

Rival_2_Comes_Near_You_Before_Leaving:
	walk_up
	walk_right
	walk_right
	step_end

Movement_Rival_2_Leaves_South:
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

Movement_Looker_Comes_To_You_1:
	walk_down
	walk_right
	step_end

Movement_Looker_Comes_To_You_2:
	walk_down
	walk_down
	walk_right
	step_end

Movement_Looker_Comes_To_You_3:
	walk_down
	walk_down
	walk_down
	walk_right
	step_end

Movement_Player_Walks_Back:
	walk_left
	step_end

Movement_Looker_Goes_Back_1:
	walk_left
	walk_up
	face_down
	step_end

Movement_Looker_Goes_Back_2:
	walk_left
	walk_up
	walk_up
	face_down
	step_end

Movement_Looker_Goes_Back_3:
	walk_left
	walk_up
	walk_up
	walk_up
	face_down
	step_end

Movement_Jubilife_City_Terminal_Npc_Push_Player:
	walk_right
	step_end

Movement_Jubilife_City_Player_Step_Back:
	walk_right
	face_left
	step_end

Movement_Jubilife_City_Terminal_Npc_Walk_To_Player_1:
	walk_down
	face_right
	step_end

Movement_Jubilife_City_Terminal_Npc_Walk_To_Player_2:
	walk_down
	walk_down
	face_right
	step_end

Movement_Jubilife_City_Terminal_Npc_Walk_Back_1:
	walk_left
	walk_up
	face_down
	step_end

Movement_Jubilife_City_Terminal_Npc_Walk_Back_2:
	walk_left
	walk_up
	walk_up
	face_down
	step_end

Movement_Employee_Come_To_Player_1:
	walk_down
	walk_left
	walk_left
	walk_down
	walk_down
	step_end

Movement_Employee_Come_To_Player_2:
	walk_down
	walk_left
	walk_down
	walk_down
	step_end

Movement_Employee_Come_To_Player_3:
	walk_down
	walk_down
	walk_down
	step_end

Movement_Employee_Come_To_Player_4:
	walk_down
	walk_right
	walk_down
	walk_down
	step_end

Movement_Employee_Come_To_Player_5:
	walk_down
	walk_right
	walk_right
	walk_down
	walk_down
	step_end

Movement_Poketch_Emplyee_Halfway_Player_Face_Down:
	walk_left
	walk_up
	step_end

Movement_Player_Faces_Left_And_Up:
	face_left
	delay_16
	face_up
	step_end

Movement_Poketch_Employee_Leaves:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

Movement_Jubilife_City_Player_Walk_In_Place_Up:
	walk_in_place_up
	step_end

Dawn_Talks_Before_Tutorial::
	.string "Dawn: Hi, {PLAYER}!\n"
	.string "Are you catching Pokémon?\p"
	.string "...Um...\p"
	.string "I think you'd feel a lot safer if you\n"
	.string "were to catch some more.\n"
	.string "You know, like when you need to travel\n"
	.string "to faraway places.\p"
	.string "Oh, I know! Don't you think it's\n"
	.string "better to know more about Pokémon?\p"
	.string "Sure it is!\n"
	.string "I know just the place.\p"
	.string "Come on!\n"
	.string "Don't be shy. Follow me!$"

Lucas_Talks_Before_Tutorial::
	.string "Lucas: Hey, {PLAYER}!\n"
	.string "How many Pokémon have you caught?\p"
	.string "Huh?\n"
	.string "I think you should catch some more.\p"
	.string "It might be more of a challenge\n"
	.string "raising a lot of Pokémon...\p"
	.string "But it's worth it. The more Pokémon\n"
	.string "you have, the happier you'll be.\p"
	.string "Hey, that's right! Don't you think it's\n"
	.string "better to know more about Pokémon?\p"
	.string "Sure it is!\n"
	.string "There's this great place for that.\p"
	.string "Come on! It's all right.\n"
	.string "Follow me.$"

Dawn_Notice_looker::
	.string "Dawn: That man...\n"
	.string "What is he doing?$"

Lucas_Notice_looker::
	.string "Lucas: That guy...\n"
	.string "What's he doing?$"

Dawn_Confronts_Looker::
	.string "Dawn: Um...$"

Lucas_Confronts_Looker::
	.string "Lucas: Uh, excuse...$"

Looker_Says_You_Unmasked_Me::
	.string "WHAAAT?!\p"
	.string "Mysterious man: ...How did you know?\p"
	.string "How did you unmask me as a member of\n"
	.string "the International Police?!$"

Dawn_Begs_Pardon_To_Looker::
	.string "Dawn: Huh? What? I beg your pardon?\n"
	.string "I was just making conversation...$"

Lucas_Begs_Pardon_To_Looker::
	.string "Lucas: Huh? What? Are you kidding?\n"
	.string "I was just making small talk...$"

Looker_Introduces_Himself::
	.string "Shady man: ...Heh. You claim you were\n"
	.string "only making conversation, do you?\p"
	.string "But, I know better not to believe that.\n"
	.string "No, no, no.\p"
	.string "You recognized right away that I was\n"
	.string "someone extraordinary.\p"
	.string "That is why you spoke to me, is it not?\n"
	.string "Your power of observation is fearsome!\p"
	.string "Quite admirable, you are!\p"
	.string "Now that my cover has been blown, let\n"
	.string "me introduce myself.\p"
	.string "I am a globe-trotting elite of the\n"
	.string "International Police.\p"
	.string "My name... Ah, no, I shall inform you\n"
	.string "only of my code name.\p"
	.string "My code name, it is Looker.\n"
	.string "It is what they all call me.\p"
	.string "Incidentally, is the saying, “Don't be\n"
	.string "a thief!” familiar to you?$"

Jubilife_City_EventScript_Looker_Explain_The_Saying_Text::
	.string "Looker: No? You claim to not know it?\n"
	.string "How could that be?\p"
	.string "rPerhaps your mama has said it, but you\n"
	.string "have forgotten it, like usual?\p"
	.string "Now listen, my friends. It is wrong to\n"
	.string "take what belongs to others.$"

Jubilife_City_EventScript_Looker_Still_Reference_The_Saying_Text::
	.string "Looker: Yes, that is correct.\n"
	.string "Taking what belongs to others is wrong.$"

Jubilife_City_EventScript_Looker_Gives_Vs_Recorder::
	.string "Unfortunately, there are apparently\n"
	.string "those who do not heed those words.\p"
	.string "In Sinnoh, in fact, there are criminals\n"
	.string "stealing the Pokémon of others.\p"
	.string "I have, therefore, been on the lookout\n"
	.string "for characters arousing my suspicion.\p"
	.string "Incidentally, you are Trainers, yes?\n"
	.string "Perhaps you can make use of this?$"

Jubilife_City_EventScript_Looker_Explains_Vs_Recorder::
	.string "That Vs. Recorder, it is a nifty device\n"
	.string "for recording a match.\p"
	.string "I obtained it because it is quite popular\n"
	.string "these days.\p"
	.string "But myself, I do not do Pokémon\n"
	.string "battling very often.\p"
	.string "It will be in better hands with you.$"

Jubilife_City_EventScript_Looker_Requests::
	.string "Looker: Also, I have a request.\p"
	.string "If you were to see me again, I ask that\n"
	.string "you not talk to me, for I am on duty.\p"
	.string "...Actually, yes, yes, you may speak to\n"
	.string "me. You must.\p"
	.string "Not because I am lonely, no, no!\n"
	.string "You must inform me of bad guys!\l"
	.string "You must inform me of any happenings!$"

Dawn_Tells_Working_For_Police_Is_Hard::
	.string "Dawn: ...Working for the International\n"
	.string "Police must be hard.$"

Lucas_Tells_Working_For_Police_Is_Hard::
	.string "Lucas: ...Working for the International\n"
	.string "Police sounds hard.$"

Dawn_Tells_About_Trainer_School::
	.string "{PLAYER}, here it is.\n"
	.string "It's the Trainers' School.\l"
	.string "The name says it all!$"

Lucas_Tells_About_Trainer_School::
	.string "{PLAYER}, here we are.\n"
	.string "This is the Trainers' School.\l"
	.string "The name says it all!$"

Dawn_Tells_She_Saw_Barry_Going_In::
	.string "I saw your friend {B_RIVAL_NAME} go in\n"
	.string "earlier.\p"
	.string "He could still be in there studying.\n"
	.string "OK, bye now!$"

Lucas_Tells_He_Saw_Barry_Going_In::
	.string "Your pal {B_RIVAL_NAME} went in earlier.\n"
	.string "He might still be studying in there.\p"
	.string "OK, see you around!$"

Jubilife_City_EventScript_Location_Sign_Text::
	.string "Jubilife City\n"
	.string "City of Joy$"

Jubilife_City_EventScript_Trader_1_Text::
	.string "I'm trading Pokémon with my buddy!$"

Jubilife_City_EventScript_Trader_2_Text::
	.string "I made my Pokémon hold an item before\n"
	.string "trading it.\p"
	.string "That will make the other Trainer\n"
	.string "ouble happy!$"

Jubilife_City_EventScript_Old_Man_Near_Trainer_School_Text::
	.string "Hello, Trainer!\n"
	.string "Do you know much about Pokémon?$"

Jubilife_City_EventScript_Old_Man_Near_Trainer_School_You_Are_Knowledgeable_Text::
	.string "Ah, I see!\n"
	.string "You are knowledgeable!\p"
	.string "I imagine you wouldn't see the need\n"
	.string "to visit the Trainers' School, then.\p"
	.string "But do visit if you have the time.\n"
	.string "You may discover something new!$"

Jubilife_City_EventScript_Old_Man_Near_Trainer_School_You_Are_Not_Knowledgeable_Text::
	.string "Oh, you're not knowledgeable...\n"
	.string "But not to worry!\l"
	.string "There's the Trainers' School.\p"
	.string "The school will teach you the\n"
	.string "basics of Pokémon.$"

Jubilife_City_EventScript_Trainer_School_Sign_Text::
	.string "Trainers' School\n"
	.string "The First Step for Trainers!$"

Jubilife_City_EventScript_Global_Terminal_NPC_Text::
	.string "Past here is the Global Terminal.\n"
	.string "It lets you trade with the whole world!\p"
	.string "Trading Pokémon means connecting\n"
	.string "with friends, both old and new.\p"
	.string "That's awesome!$"

Jubilife_City_EventScript_Global_Terminal_Sign_Text::
	.string "The Global Terminal\n"
	.string "Your Gateway to the Whole World!\p$"

Jubilife_City_EventScript_School_Kid_Near_Pokemon_Center_Text::
	.string "OK, set six Poké Balls in my\n"
	.string "belt...\p"
	.string "Yeah, that'll do it. At most, you\n"
	.string "can have six Pokémon with you.$"

Jubilife_City_EventScript_Condominiums_Sign_Text::
	.string "Jubilife Condominiums\n"
	.string "Tenants Wanted!$"

Jubilife_City_EventScript_Woman_Near_Condonium_Text::
	.string "Hiya, where'd you come from?\n"
	.string "...\p"
	.string "Twinleaf Town, huh...\n"
	.string "It's a nice place. Quiet and all.\p"
	.string "Jubilife City is a big place, so it\n"
	.string "might be a bit of a shock to you.$"

Jubilife_City_EventScript_Jubilife_Tv_Sign_Text::
	.string "Jubilife TV\n"
	.string "The Fun-and-Games TV Station!$"

Jubilife_City_EventScript_Woman_Near_Fountain_Text::
	.string "I am NPC that allows you to\n"
	.string "join various groups\l"
	.string "Implement me later$"

Jubilife_City_EventScript_Little_Girl_In_Front_Of_Jubilife_TV_Text::
	.string "Did you see me on TV?\n"
	.string "I was in an interview!$"

Jubilife_City_EventScript_Lady_In_Front_Of_Poketch_Building_Text::
	.string "When you walk with your Pokémon,\n"
	.string "they gradually grow friendlier.$"

Jubilife_City_EventScript_Poketch_Company_Sign_Text::
	.string "The Pokétch Company\n"
	.string "Pokémon Watches for the World!$"

Jubilife_City_EventScript_Looker_Near_Exit_Text::
	.string "Ah, it is you! Have no fear.\n"
	.string "There are no shady characters about.\p"
	.string "Incidentally, have you visited the\n"
	.string "Trainers' School?\p"
	.string "Did your friend not guide you there\n"
	.string "earlier?$"

Lucas_Tells_To_Go_To_Trainer_School::
	.string "Looker: Hello, my friend.\n"
	.string "Have you visited the Trainers' School?\p"
	.string "Did your friend not guide you there\n"
	.string "earlier?$"

Jubilife_City_EventScript_Global_Terminal_NPC_Trigger_Texxt::
	.string "Past here is the Global Terminal, your\n"
	.string "gateway to the world!\p"
	.string "Oh, I’m sorry, you don’t have\n"
	.string "any Gym Badges.\p"
	.string "The Global Terminal is off-limits if you\n"
	.string "don’t have a Gym Badge. Sorry!$"

Jubilife_City_EventScript_Joker_1_Ask_Question_Text::
	.string "Hi! I’m a Pokétch campaign clown!\n"
	.string "Let’s roll out my question!\p"
	.string "Does a Pokémon grow by defeating\n"
	.string "others and gaining Exp. Points?$"

Jubilife_City_EventScript_Joker_1_Give_Coupon::
	.string "Ding-ding!\n"
	.string "You’re absolutely correct!\p"
	.string "Pokémon grow stronger by defeating\n"
	.string "other Pokémon in battle.\p"
	.string "Some Pokémon even grow into an\n"
	.string "entirely different form in a process\l"
	.string "known as evolution.\p"
	.string "Here you go!\n"
	.string "Your Pokétch Coupon!$"

Jubilife_City_EventScript_Joker_1_Already_Got_Coupon_Text::
	.string "Pokémon grow stronger through\n"
	.string "battling.\p"
	.string "Some Pokémon even grow into an\n"
	.string "entirely different form in a process\l"
	.string "known as evolution.$"

Jubilife_City_EventScript_Joker_2_Ask_Question_Text::
	.string "Hi! I’m a Pokétch campaign clown!\n"
	.string "Let’s roll out my question!\p"
	.string "Just like Pokémon types, the moves\n"
	.string "of Pokémon also have types?$"

Jubilife_City_EventScript_Joker_2_Give_Coupon::
	.string "Ding-ding!\n"
	.string "You’re absolutely correct!\p"
	.string "If the Pokémon’s type matches its\n"
	.string "move’s type, that move is made much\l"
	.string "more powerful!\p"
	.string "Here you go!\n"
	.string "Your Pokétch Coupon!$"

Jubilife_City_EventScript_Joker_2_Already_Got_Coupon_Text::
	.string "If the Pokémon’s type matches its\n"
	.string "move’s type, that move is made much\l"
	.string "more powerful!$"

Jubilife_City_EventScript_Joker_3_Before_Rival_Text::
	.string "Hi, there. You should stick around.\n"
	.string "We’re doing a Pokétch campaign soon.\p"
	.string "Before it starts, I think you should\n"
	.string "brush up at the Trainers’ School.$"

Jubilife_City_EventScript_Joker_3_Text_Ask_Question::
	.string "Hi! I’m a Pokétch campaign clown!\n"
	.string "Let’s roll out my question!\p"
	.string "Can a Pokémon hold an item?$"

Jubilife_City_EventScript_Joker_3_Give_Coupon::
	.string "Ding-ding!\n"
	.string "You’re absolutely correct!\p"
	.string "A Pokémon may hold a single item.\p"
	.string "Some items become effective as soon\n"
	.string "as they are held by a Pokémon.\p"
	.string "Berries are eaten by Pokémon as\n"
	.string "necessary during battle.\p"
	.string "Here you go!\n"
	.string "Your Pokétch Coupon!$"

Jubilife_City_EventScript_Joker_Wrong_Answer::
	.string "Bzzzzt!\n"
	.string "That’s the wrong answer...$"

Jubilife_City_EventScript_Joker_3_Already_Got_Coupon_Text::
	.string "A Pokémon may hold a single item.\p"
	.string "Some items become effective as soon\n"
	.string "as they are held by Pokémon.\p"
	.string "Berries are eaten by Pokémon as\n"
	.string "necessary during battle.$"

Jubilife_City_EventScript_Poketch_Employee_Tell_About_Event_Text::
	.string "Oh, oh, oh?\p"
	.string "You call yourself a Pokémon Trainer?\n"
	.string "And yet you have no Pokétch?\p"
	.string "That is, Pokémon Watch, or Pokétch\n"
	.string "for short!\p"
	.string "Oh my, you are a rare case\n"
	.string "indeed!\p"
	.string "You see, I invented, and now\n"
	.string "manufacture, Pokétches.\p"
	.string "Not only that, I’m now conducting\n"
	.string "the Pokétch promotional campaign!\p"
	.string "All you have to do is find three\n"
	.string "clowns in Jubilife City.\p"
	.string "If you can find them...\n"
	.string "I will gift you with a Pokétch!$"

Jubilife_City_EventScript_Poketch_Employe_Tell_About_Clowns::
	.string "The three clowns will each ask you\n"
	.string "a skill-testing question.\p"
	.string "The questions will all have to do\n"
	.string "with Pokémon.\p"
	.string "After all, a Pokétch is a tool for\n"
	.string "Pokémon Trainers.\p"
	.string "Collect a Coupon from each clown,\n"
	.string "then come see me, OK?$"

Jubilife_City_EventScript_Poketch_Employe_Gives_Poketch_Text::
	.string "OK, let me count your Coupons!\n"
	.string "I’ll use the Pokétch here...\p"
	.string "One, two, three!\n"
	.string "Bravo! I say, bravo!\p"
	.string "In return for these Coupons,\n"
	.string "I present you this Pokémon Watch,\l"
	.string "or Pokétch for short!$"

Jubilife_City_EventScript_Poketch_Employe_Explains_Poketch_Text::
	.string "You can add apps to your Pokétch\n"
	.string "to make it even more versatile!\p"
	.string "Touch the Pokétch screen and find the\n"
	.string "apps that are right for you!$"
