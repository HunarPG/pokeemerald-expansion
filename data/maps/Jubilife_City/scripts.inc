Jubilife_City_MapScripts::
	.byte 0


Jubilife_City_EventScript_Rival_2_Tutorial::
	lockall
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	switch VAR_TEMP_0
	case 45, Jubilife_City_EventScript_Rival_2_Tutorial_3
	case 46, Jubilife_City_EventScript_Rival_2_Tutorial_4
	case 47, Jubilife_City_EventScript_Rival_2_Tutorial_5
Jubilife_City_EventScript_Rival_2_Tutorial_1:
	waitmovement 0
	playse SE_PIN
	applymovement LOCALID_RIVAL_JUBILIFE, Jubilife_City_EventScript_Rival_2_Tutorial_Movement_3
	waitmovement 0
	delay 30
	checkplayergender
	switch VAR_RESULT
	case MALE, Jubilife_City_EventScript_Rival_2_Tutorial_8
	case FEMALE, Jubilife_City_EventScript_Rival_2_Tutorial_9
Jubilife_City_EventScript_Rival_2_Tutorial_6:
	applymovement LOCALID_RIVAL_JUBILIFE, Jubilife_City_EventScript_Rival_2_Tutorial_Movement_4
	waitmovement 0
	checkplayergender
	switch VAR_RESULT
	case MALE, Jubilife_City_EventScript_Rival_2_Tutorial_12
	case FEMALE, Jubilife_City_EventScript_Rival_2_Tutorial_13
Jubilife_City_EventScript_Rival_2_Tutorial_10:
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	switch VAR_TEMP_0
	case 45, Jubilife_City_EventScript_Rival_2_Tutorial_16
	case 46, Jubilife_City_EventScript_Rival_2_Tutorial_17
	case 47, Jubilife_City_EventScript_Rival_2_Tutorial_18
Jubilife_City_EventScript_Rival_2_Tutorial_14:
	waitmovement 0
	goto Jubilife_City_EventScript_Rival_Move_To_Looker_Cutscene
	return

Jubilife_City_EventScript_Rival_2_Tutorial_3:
	applymovement LOCALID_RIVAL_JUBILIFE, Jubilife_City_EventScript_Rival_2_Tutorial_Movement_0
	goto Jubilife_City_EventScript_Rival_2_Tutorial_1

Jubilife_City_EventScript_Rival_2_Tutorial_4:
	applymovement LOCALID_RIVAL_JUBILIFE, Jubilife_City_EventScript_Rival_2_Tutorial_Movement_1
	goto Jubilife_City_EventScript_Rival_2_Tutorial_1

Jubilife_City_EventScript_Rival_2_Tutorial_5:
	applymovement LOCALID_RIVAL_JUBILIFE, Jubilife_City_EventScript_Rival_2_Tutorial_Movement_2
	goto Jubilife_City_EventScript_Rival_2_Tutorial_1

Jubilife_City_EventScript_Rival_2_Tutorial_8:
	fadenewbgm MUS_DP_DAWN
	goto Jubilife_City_EventScript_Rival_2_Tutorial_6

Jubilife_City_EventScript_Rival_2_Tutorial_9:
	fadenewbgm MUS_DP_LUCAS
	goto Jubilife_City_EventScript_Rival_2_Tutorial_6

Jubilife_City_EventScript_Rival_2_Tutorial_12:
	msgbox Jubilife_City_EventScript_Rival_2_Tutorial_Text_0, MSGBOX_SIGN
	goto Jubilife_City_EventScript_Rival_2_Tutorial_10

Jubilife_City_EventScript_Rival_2_Tutorial_13:
	msgbox Jubilife_City_EventScript_Rival_2_Tutorial_Text_1, MSGBOX_SIGN
	goto Jubilife_City_EventScript_Rival_2_Tutorial_10

Jubilife_City_EventScript_Rival_2_Tutorial_16:
	applymovement LOCALID_RIVAL_JUBILIFE, Jubilife_City_EventScript_Rival_2_Tutorial_Movement_5
	applymovement OBJ_EVENT_ID_PLAYER, Jubilife_City_EventScript_Rival_2_Tutorial_Movement_6
	goto Jubilife_City_EventScript_Rival_2_Tutorial_14

Jubilife_City_EventScript_Rival_2_Tutorial_17:
	applymovement LOCALID_RIVAL_JUBILIFE, Jubilife_City_EventScript_Rival_2_Tutorial_Movement_7
	applymovement OBJ_EVENT_ID_PLAYER, Jubilife_City_EventScript_Rival_2_Tutorial_Movement_7
	goto Jubilife_City_EventScript_Rival_2_Tutorial_14

Jubilife_City_EventScript_Rival_2_Tutorial_18:
	applymovement LOCALID_RIVAL_JUBILIFE, Jubilife_City_EventScript_Rival_2_Tutorial_Movement_8
	applymovement OBJ_EVENT_ID_PLAYER, Jubilife_City_EventScript_Rival_2_Tutorial_Movement_9
	goto Jubilife_City_EventScript_Rival_2_Tutorial_14


Jubilife_City_EventScript_Rival_Move_To_Looker_Cutscene::
	checkplayergender
	switch VAR_RESULT
	case MALE, Jubilife_City_EventScript_Rival_Move_To_Looker_Cutscene_3
	case FEMALE, Jubilife_City_EventScript_Rival_Move_To_Looker_Cutscene_4
Jubilife_City_EventScript_Rival_Move_To_Looker_Cutscene_1:
	applymovement LOCALID_LOOKER_JUBILIFE_1, Jubilife_City_EventScript_Rival_Move_To_Looker_Cutscene_Movement_0
	waitmovement 0
	applymovement LOCALID_RIVAL_JUBILIFE, Jubilife_City_EventScript_Rival_Move_To_Looker_Cutscene_Movement_1
	applymovement OBJ_EVENT_ID_PLAYER, Jubilife_City_EventScript_Rival_Move_To_Looker_Cutscene_Movement_2
	applymovement LOCALID_LOOKER_JUBILIFE_1, Jubilife_City_EventScript_Rival_Move_To_Looker_Cutscene_Movement_3
	waitmovement 0
	checkplayergender
	switch VAR_RESULT
	case MALE, Jubilife_City_EventScript_Rival_Move_To_Looker_Cutscene_7
	case FEMALE, Jubilife_City_EventScript_Rival_Move_To_Looker_Cutscene_8
Jubilife_City_EventScript_Rival_Move_To_Looker_Cutscene_5:
	applymovement LOCALID_LOOKER_JUBILIFE_1, Jubilife_City_EventScript_Rival_Move_To_Looker_Cutscene_Movement_4
	waitmovement 0
	playse SE_PIN
	applymovement LOCALID_LOOKER_JUBILIFE_1, Jubilife_City_EventScript_Rival_2_Tutorial_Movement_3
	waitmovement 0
	delay 30
	playbgm MUS_PL_LOOKER, FALSE
	msgbox Jubilife_City_EventScript_Rival_Move_To_Looker_Cutscene_Text_4, MSGBOX_SIGN
	applymovement LOCALID_RIVAL_JUBILIFE, Jubilife_City_EventScript_Rival_Move_To_Looker_Cutscene_Movement_5
	waitmovement 0
	checkplayergender
	switch VAR_RESULT
	case MALE, Jubilife_City_EventScript_Rival_Move_To_Looker_Cutscene_11
	case FEMALE, Jubilife_City_EventScript_Rival_Move_To_Looker_Cutscene_12
Jubilife_City_EventScript_Rival_Move_To_Looker_Cutscene_9:
	msgbox Jubilife_City_EventScript_Rival_Move_To_Looker_Cutscene_Text_7, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, Jubilife_City_EventScript_Looker_Still_Reference_The_Saying
	goto_if_eq VAR_RESULT, NO, Jubilife_City_EventScript_Looker_Explain_The_Saying
	return

Jubilife_City_EventScript_Rival_Move_To_Looker_Cutscene_3:
	msgbox Jubilife_City_EventScript_Rival_Move_To_Looker_Cutscene_Text_0, MSGBOX_SIGN
	goto Jubilife_City_EventScript_Rival_Move_To_Looker_Cutscene_1

Jubilife_City_EventScript_Rival_Move_To_Looker_Cutscene_4:
	msgbox Jubilife_City_EventScript_Rival_Move_To_Looker_Cutscene_Text_1, MSGBOX_SIGN
	goto Jubilife_City_EventScript_Rival_Move_To_Looker_Cutscene_1

Jubilife_City_EventScript_Rival_Move_To_Looker_Cutscene_7:
	msgbox Jubilife_City_EventScript_Rival_Move_To_Looker_Cutscene_Text_2, MSGBOX_SIGN
	goto Jubilife_City_EventScript_Rival_Move_To_Looker_Cutscene_5

Jubilife_City_EventScript_Rival_Move_To_Looker_Cutscene_8:
	msgbox Jubilife_City_EventScript_Rival_Move_To_Looker_Cutscene_Text_3, MSGBOX_SIGN
	goto Jubilife_City_EventScript_Rival_Move_To_Looker_Cutscene_5

Jubilife_City_EventScript_Rival_Move_To_Looker_Cutscene_11:
	msgbox Jubilife_City_EventScript_Rival_Move_To_Looker_Cutscene_Text_5, MSGBOX_SIGN
	goto Jubilife_City_EventScript_Rival_Move_To_Looker_Cutscene_9

Jubilife_City_EventScript_Rival_Move_To_Looker_Cutscene_12:
	msgbox Jubilife_City_EventScript_Rival_Move_To_Looker_Cutscene_Text_6, MSGBOX_SIGN
	goto Jubilife_City_EventScript_Rival_Move_To_Looker_Cutscene_9


Jubilife_City_EventScript_Looker_Explain_The_Saying::
	msgbox Jubilife_City_EventScript_Looker_Explain_The_Saying_Text_0, MSGBOX_SIGN
	goto Jubilife_City_EventScript_Looker_Continues
	return


Jubilife_City_EventScript_Looker_Still_Reference_The_Saying::
	msgbox Jubilife_City_EventScript_Looker_Still_Reference_The_Saying_Text_0, MSGBOX_SIGN
	goto Jubilife_City_EventScript_Looker_Continues
	return


Jubilife_City_EventScript_Looker_Continues::
	msgbox Jubilife_City_EventScript_Looker_Continues_Text_0, MSGBOX_SIGN
	giveitem ITEM_VS_RECORDER
	msgbox Jubilife_City_EventScript_Looker_Continues_Text_1, MSGBOX_SIGN
	applymovement LOCALID_LOOKER_JUBILIFE_1, Jubilife_City_EventScript_Looker_Continues_Movement_0
	waitmovement 0
	msgbox Jubilife_City_EventScript_Looker_Continues_Text_2, MSGBOX_SIGN
	goto Jubilife_City_EventScript_Looker_Leaves
	return


Jubilife_City_EventScript_Looker_Leaves::
	applymovement LOCALID_LOOKER_JUBILIFE_1, Jubilife_City_EventScript_Looker_Leaves_Movement_0
	applymovement LOCALID_RIVAL_JUBILIFE, Jubilife_City_EventScript_Looker_Leaves_Movement_1
	applymovement OBJ_EVENT_ID_PLAYER, Jubilife_City_EventScript_Looker_Leaves_Movement_1
	waitmovement LOCALID_LOOKER_JUBILIFE_1
	applymovement LOCALID_LOOKER_JUBILIFE_1, Jubilife_City_EventScript_Looker_Leaves_Movement_2
	applymovement LOCALID_RIVAL_JUBILIFE, Jubilife_City_EventScript_Looker_Leaves_Movement_3
	applymovement OBJ_EVENT_ID_PLAYER, Jubilife_City_EventScript_Looker_Leaves_Movement_3
	waitmovement LOCALID_LOOKER_JUBILIFE_1
	checkplayergender
	switch VAR_RESULT
	case MALE, Jubilife_City_EventScript_Looker_Leaves_3
	case FEMALE, Jubilife_City_EventScript_Looker_Leaves_4
Jubilife_City_EventScript_Looker_Leaves_1:
	fadedefaultbgm
	delay 30
	applymovement LOCALID_RIVAL_JUBILIFE, Jubilife_City_EventScript_Looker_Leaves_Movement_4
	applymovement OBJ_EVENT_ID_PLAYER, Jubilife_City_EventScript_Looker_Leaves_Movement_5
	waitmovement LOCALID_RIVAL_JUBILIFE
	checkplayergender
	switch VAR_RESULT
	case MALE, Jubilife_City_EventScript_Looker_Leaves_7
	case FEMALE, Jubilife_City_EventScript_Looker_Leaves_8
Jubilife_City_EventScript_Looker_Leaves_5:
	applymovement LOCALID_RIVAL_JUBILIFE, Jubilife_City_EventScript_Looker_Leaves_Movement_6
	waitmovement 0
	switch VAR_RESULT
	case MALE, Jubilife_City_EventScript_Looker_Leaves_11
	case FEMALE, Jubilife_City_EventScript_Looker_Leaves_12
Jubilife_City_EventScript_Looker_Leaves_9:
	applymovement LOCALID_RIVAL_JUBILIFE, Jubilife_City_EventScript_Looker_Leaves_Movement_7
	waitmovement 0
	removeobject LOCALID_RIVAL_JUBILIFE
	removeobject LOCALID_LOOKER_JUBILIFE_1
	setflag FLAG_HIDE_RIVAL_JUBILIFE_CITY
	setflag FLAG_HIDE_LOOKER_JUBILIFE_CITY
	setvar VAR_JUBILIFE_CITY_STATE, 1
	releaseall
	end

Jubilife_City_EventScript_Looker_Leaves_3:
	msgbox Jubilife_City_EventScript_Looker_Leaves_Text_0, MSGBOX_SIGN
	goto Jubilife_City_EventScript_Looker_Leaves_1

Jubilife_City_EventScript_Looker_Leaves_4:
	msgbox Jubilife_City_EventScript_Looker_Leaves_Text_1, MSGBOX_SIGN
	goto Jubilife_City_EventScript_Looker_Leaves_1

Jubilife_City_EventScript_Looker_Leaves_7:
	msgbox Jubilife_City_EventScript_Looker_Leaves_Text_2, MSGBOX_SIGN
	goto Jubilife_City_EventScript_Looker_Leaves_5

Jubilife_City_EventScript_Looker_Leaves_8:
	msgbox Jubilife_City_EventScript_Looker_Leaves_Text_3, MSGBOX_SIGN
	goto Jubilife_City_EventScript_Looker_Leaves_5

Jubilife_City_EventScript_Looker_Leaves_11:
	msgbox Jubilife_City_EventScript_Looker_Leaves_Text_4, MSGBOX_SIGN
	goto Jubilife_City_EventScript_Looker_Leaves_9

Jubilife_City_EventScript_Looker_Leaves_12:
	msgbox Jubilife_City_EventScript_Looker_Leaves_Text_5, MSGBOX_SIGN
	goto Jubilife_City_EventScript_Looker_Leaves_9


Jubilife_City_EventScript_Location_Sign::
	msgbox Jubilife_City_EventScript_Location_Sign_Text_0, MSGBOX_SIGN
	end


Jubilife_City_EventScript_Trader_1::
	msgbox Jubilife_City_EventScript_Trader_1_Text_0, MSGBOX_NPC
	end


Jubilife_City_EventScript_Trader_2::
	msgbox Jubilife_City_EventScript_Trader_2_Text_0, MSGBOX_NPC
	end


Jubilife_City_EventScript_Old_Man_Near_Trainer_School::
	lockall
	faceplayer
	msgbox Jubilife_City_EventScript_Old_Man_Near_Trainer_School_Text_0, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, Jubilife_City_EventScript_Old_Man_Near_Trainer_School_You_Are_Knowledgeable
	goto_if_eq VAR_RESULT, NO, Jubilife_City_EventScript_Old_Man_Near_Trainer_School_You_Are_Not_Knowledgeable
	return


Jubilife_City_EventScript_Old_Man_Near_Trainer_School_You_Are_Knowledgeable::
	msgbox Jubilife_City_EventScript_Old_Man_Near_Trainer_School_You_Are_Knowledgeable_Text_0, MSGBOX_SIGN
	releaseall
	end


Jubilife_City_EventScript_Old_Man_Near_Trainer_School_You_Are_Not_Knowledgeable::
	msgbox Jubilife_City_EventScript_Old_Man_Near_Trainer_School_You_Are_Not_Knowledgeable_Text_0, MSGBOX_SIGN
	releaseall
	end


Jubilife_City_EventScript_Trainer_School_Sign::
	msgbox Jubilife_City_EventScript_Trainer_School_Sign_Text_0, MSGBOX_SIGN
	end


Jubilife_City_EventScript_Global_Terminal_Sign::
	msgbox Jubilife_City_EventScript_Global_Terminal_Sign_Text_0, MSGBOX_SIGN
	end


Jubilife_City_EventScript_Global_Terminal_NPC::
	msgbox Jubilife_City_EventScript_Global_Terminal_NPC_Text_0, MSGBOX_NPC
	end


Jubilife_City_EventScript_School_Kid_Near_Pokemon_Center::
	msgbox Jubilife_City_EventScript_School_Kid_Near_Pokemon_Center_Text_0, MSGBOX_NPC
	end


Jubilife_City_EventScript_Condominiums_Sign::
	msgbox Jubilife_City_EventScript_Condominiums_Sign_Text_0, MSGBOX_SIGN
	end


Jubilife_City_EventScript_Woman_Near_Condonium::
	msgbox Jubilife_City_EventScript_Woman_Near_Condonium_Text_0, MSGBOX_NPC
	end


Jubilife_City_EventScript_Jubilife_Tv_Sign::
	msgbox Jubilife_City_EventScript_Jubilife_Tv_Sign_Text_0, MSGBOX_SIGN
	end


Jubilife_City_EventScript_Woman_Near_Fountain::
	msgbox Jubilife_City_EventScript_Woman_Near_Fountain_Text_0, MSGBOX_NPC
	end


Jubilife_City_EventScript_Little_Girl_In_Front_Of_Jubilife_TV::
	msgbox Jubilife_City_EventScript_Little_Girl_In_Front_Of_Jubilife_TV_Text_0, MSGBOX_NPC
	end


Jubilife_City_EventScript_Lady_In_Front_Of_Poketch_Building::
	msgbox Jubilife_City_EventScript_Lady_In_Front_Of_Poketch_Building_Text_0, MSGBOX_NPC
	end


Jubilife_City_EventScript_Poketch_Company_Sign::
	msgbox Jubilife_City_EventScript_Poketch_Company_Sign_Text_0, MSGBOX_SIGN
	end


Jubilife_City_EventScript_Looker_Near_Exit::
	msgbox Jubilife_City_EventScript_Looker_Near_Exit_Text_0, MSGBOX_SIGN
	return


Jubilife_City_EventScript_Looker_Stop_You_From_Leaving::
	playse SE_PIN
	applymovement LOCALID_LOOKER_JUBILIFE_2, Jubilife_City_EventScript_Rival_2_Tutorial_Movement_3
	waitmovement 0
	delay 30
	applymovement OBJ_EVENT_ID_PLAYER, Jubilife_City_EventScript_Looker_Leaves_Movement_5
	waitmovement 0
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	switch VAR_TEMP_1
	case 22, Jubilife_City_EventScript_Looker_Stop_You_From_Leaving_3
	case 23, Jubilife_City_EventScript_Looker_Stop_You_From_Leaving_4
	case 24, Jubilife_City_EventScript_Looker_Stop_You_From_Leaving_5
Jubilife_City_EventScript_Looker_Stop_You_From_Leaving_1:
	waitmovement 0
	msgbox Jubilife_City_EventScript_Looker_Stop_You_From_Leaving_Text_0, MSGBOX_SIGN
	applymovement OBJ_EVENT_ID_PLAYER, Jubilife_City_EventScript_Looker_Stop_You_From_Leaving_Movement_3
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	switch VAR_TEMP_1
	case 22, Jubilife_City_EventScript_Looker_Stop_You_From_Leaving_8
	case 23, Jubilife_City_EventScript_Looker_Stop_You_From_Leaving_9
	case 24, Jubilife_City_EventScript_Looker_Stop_You_From_Leaving_10
Jubilife_City_EventScript_Looker_Stop_You_From_Leaving_6:
	waitmovement 0
	end

Jubilife_City_EventScript_Looker_Stop_You_From_Leaving_3:
	applymovement LOCALID_LOOKER_JUBILIFE_2, Jubilife_City_EventScript_Looker_Stop_You_From_Leaving_Movement_0
	goto Jubilife_City_EventScript_Looker_Stop_You_From_Leaving_1

Jubilife_City_EventScript_Looker_Stop_You_From_Leaving_4:
	applymovement LOCALID_LOOKER_JUBILIFE_2, Jubilife_City_EventScript_Looker_Stop_You_From_Leaving_Movement_1
	goto Jubilife_City_EventScript_Looker_Stop_You_From_Leaving_1

Jubilife_City_EventScript_Looker_Stop_You_From_Leaving_5:
	applymovement LOCALID_LOOKER_JUBILIFE_2, Jubilife_City_EventScript_Looker_Stop_You_From_Leaving_Movement_2
	goto Jubilife_City_EventScript_Looker_Stop_You_From_Leaving_1

Jubilife_City_EventScript_Looker_Stop_You_From_Leaving_8:
	applymovement LOCALID_LOOKER_JUBILIFE_2, Jubilife_City_EventScript_Looker_Stop_You_From_Leaving_Movement_4
	goto Jubilife_City_EventScript_Looker_Stop_You_From_Leaving_6

Jubilife_City_EventScript_Looker_Stop_You_From_Leaving_9:
	applymovement LOCALID_LOOKER_JUBILIFE_2, Jubilife_City_EventScript_Looker_Stop_You_From_Leaving_Movement_5
	goto Jubilife_City_EventScript_Looker_Stop_You_From_Leaving_6

Jubilife_City_EventScript_Looker_Stop_You_From_Leaving_10:
	applymovement LOCALID_LOOKER_JUBILIFE_2, Jubilife_City_EventScript_Looker_Stop_You_From_Leaving_Movement_6
	goto Jubilife_City_EventScript_Looker_Stop_You_From_Leaving_6


Jubilife_City_EventScript_Global_Terminal_NPC_Trigger::
	lockall
	playse SE_PIN
	applymovement LOCALID_TERMINAL_NPC_JUBILIFE, Jubilife_City_EventScript_Rival_2_Tutorial_Movement_3
	waitmovement 0
	delay 30
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	switch VAR_TEMP_1
	case 42, Jubilife_City_EventScript_Global_Terminal_NPC_Trigger_3
	case 43, Jubilife_City_EventScript_Global_Terminal_NPC_Trigger_4
Jubilife_City_EventScript_Global_Terminal_NPC_Trigger_1:
	waitmovement 0
	msgbox Jubilife_City_EventScript_Global_Terminal_NPC_Trigger_Text_0, MSGBOX_SIGN
	applymovement LOCALID_TERMINAL_NPC_JUBILIFE, Jubilife_City_EventScript_Global_Terminal_NPC_Trigger_Movement_2
	applymovement OBJ_EVENT_ID_PLAYER, Jubilife_City_EventScript_Global_Terminal_NPC_Trigger_Movement_3
	waitmovement 0
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	switch VAR_TEMP_1
	case 42, Jubilife_City_EventScript_Global_Terminal_NPC_Trigger_7
	case 43, Jubilife_City_EventScript_Global_Terminal_NPC_Trigger_8
Jubilife_City_EventScript_Global_Terminal_NPC_Trigger_5:
	waitmovement 0
	releaseall
	end

Jubilife_City_EventScript_Global_Terminal_NPC_Trigger_3:
	applymovement LOCALID_TERMINAL_NPC_JUBILIFE, Jubilife_City_EventScript_Global_Terminal_NPC_Trigger_Movement_0
	goto Jubilife_City_EventScript_Global_Terminal_NPC_Trigger_1

Jubilife_City_EventScript_Global_Terminal_NPC_Trigger_4:
	applymovement LOCALID_TERMINAL_NPC_JUBILIFE, Jubilife_City_EventScript_Global_Terminal_NPC_Trigger_Movement_1
	goto Jubilife_City_EventScript_Global_Terminal_NPC_Trigger_1

Jubilife_City_EventScript_Global_Terminal_NPC_Trigger_7:
	applymovement LOCALID_TERMINAL_NPC_JUBILIFE, Jubilife_City_EventScript_Looker_Stop_You_From_Leaving_Movement_4
	goto Jubilife_City_EventScript_Global_Terminal_NPC_Trigger_5

Jubilife_City_EventScript_Global_Terminal_NPC_Trigger_8:
	applymovement LOCALID_TERMINAL_NPC_JUBILIFE, Jubilife_City_EventScript_Looker_Stop_You_From_Leaving_Movement_5
	goto Jubilife_City_EventScript_Global_Terminal_NPC_Trigger_5


Jubilife_City_EventScript_Joker_1::
	goto_if_set FLAG_GOT_COUPON_1, Jubilife_City_EventScript_Joker_1_1
	goto Jubilife_City_EventScript_Joker_1_Ask_Question
	return

Jubilife_City_EventScript_Joker_1_1:
	msgbox Jubilife_City_EventScript_Joker_1_Text_0, MSGBOX_NPC
	end


Jubilife_City_EventScript_Joker_1_Ask_Question::
	lock
	faceplayer
	msgbox Jubilife_City_EventScript_Joker_1_Ask_Question_Text_0, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, Jubilife_City_EventScript_Joker_1_Question_Correct
	goto_if_eq VAR_RESULT, NO, Jubilife_City_EventScript_Joker_Question_Wrong
	return


Jubilife_City_EventScript_Joker_1_Question_Correct::
	playse SE_DING_DONG
	msgbox Jubilife_City_EventScript_Joker_1_Question_Correct_Text_0, MSGBOX_SIGN
	giveitem ITEM_COUPON_1
	setflag FLAG_GOT_COUPON_1
	release
	end


Jubilife_City_EventScript_Joker_2::
	goto_if_set FLAG_GOT_COUPON_2, Jubilife_City_EventScript_Joker_2_1
	goto Jubilife_City_EventScript_Joker_2_Ask_Question
	return

Jubilife_City_EventScript_Joker_2_1:
	msgbox Jubilife_City_EventScript_Joker_2_Text_0, MSGBOX_NPC
	end


Jubilife_City_EventScript_Joker_2_Ask_Question::
	lock
	faceplayer
	msgbox Jubilife_City_EventScript_Joker_2_Ask_Question_Text_0, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, Jubilife_City_EventScript_Joker_2_Question_Correct
	goto_if_eq VAR_RESULT, NO, Jubilife_City_EventScript_Joker_Question_Wrong
	return


Jubilife_City_EventScript_Joker_2_Question_Correct::
	playse SE_DING_DONG
	msgbox Jubilife_City_EventScript_Joker_2_Question_Correct_Text_0, MSGBOX_SIGN
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
	msgbox Jubilife_City_EventScript_Joker_3_Text_0, MSGBOX_SIGN
	return


Jubilife_City_EventScript_Joker_3_Before_Rival::
	msgbox Jubilife_City_EventScript_Joker_3_Before_Rival_Text_0, MSGBOX_NPC
	end


Jubilife_City_EventScript_Joker_3_Ask_Question::
	lock
	faceplayer
	msgbox Jubilife_City_EventScript_Joker_3_Ask_Question_Text_0, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, Jubilife_City_EventScript_Joker_3_Question_Correct
	goto_if_eq VAR_RESULT, NO, Jubilife_City_EventScript_Joker_Question_Wrong
	return


Jubilife_City_EventScript_Joker_3_Question_Correct::
	playse SE_DING_DONG
	msgbox Jubilife_City_EventScript_Joker_3_Question_Correct_Text_0, MSGBOX_SIGN
	giveitem ITEM_COUPON_3
	setflag FLAG_GOT_COUPON_3
	release
	end


Jubilife_City_EventScript_Joker_Question_Wrong::
	playse SE_FAILURE
	delay 10
	playse SE_FAILURE
	msgbox Jubilife_City_EventScript_Joker_Question_Wrong_Text_0
	release
	end


Jubilife_City_EventScript_Joker_3_Already_Got_Coupon::
	msgbox Jubilife_City_EventScript_Joker_3_Text_0, MSGBOX_NPC
	end


Jubilife_City_EventScript_Poketch_Employee::
	lock
	applymovement OBJ_EVENT_ID_PLAYER, Jubilife_City_EventScript_Looker_Leaves_Movement_3
	applymovement LOCALID_POKETCH_GUY_JUBILIFE, Jubilife_City_EventScript_Poketch_Employee_Movement_0
	waitmovement 0
	playse SE_PIN
	applymovement LOCALID_POKETCH_GUY_JUBILIFE, Jubilife_City_EventScript_Rival_2_Tutorial_Movement_3
	waitmovement 0
	delay 30
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	switch VAR_TEMP_0
	case 44, Jubilife_City_EventScript_Poketch_Employee_3
	case 45, Jubilife_City_EventScript_Poketch_Employee_4
	case 46, Jubilife_City_EventScript_Poketch_Employee_5
	case 47, Jubilife_City_EventScript_Poketch_Employee_6
	case 48, Jubilife_City_EventScript_Poketch_Employee_7
Jubilife_City_EventScript_Poketch_Employee_1:
	waitmovement 0
	goto Jubilife_City_EventScript_Poketch_Employee_Tell_About_Event
	return

Jubilife_City_EventScript_Poketch_Employee_3:
	applymovement LOCALID_POKETCH_GUY_JUBILIFE, Jubilife_City_EventScript_Poketch_Employee_Movement_1
	goto Jubilife_City_EventScript_Poketch_Employee_1

Jubilife_City_EventScript_Poketch_Employee_4:
	applymovement LOCALID_POKETCH_GUY_JUBILIFE, Jubilife_City_EventScript_Poketch_Employee_Movement_2
	goto Jubilife_City_EventScript_Poketch_Employee_1

Jubilife_City_EventScript_Poketch_Employee_5:
	applymovement LOCALID_POKETCH_GUY_JUBILIFE, Jubilife_City_EventScript_Rival_2_Tutorial_Movement_1
	goto Jubilife_City_EventScript_Poketch_Employee_1

Jubilife_City_EventScript_Poketch_Employee_6:
	applymovement LOCALID_POKETCH_GUY_JUBILIFE, Jubilife_City_EventScript_Poketch_Employee_Movement_3
	goto Jubilife_City_EventScript_Poketch_Employee_1

Jubilife_City_EventScript_Poketch_Employee_7:
	applymovement LOCALID_POKETCH_GUY_JUBILIFE, Jubilife_City_EventScript_Poketch_Employee_Movement_4
	goto Jubilife_City_EventScript_Poketch_Employee_1


Jubilife_City_EventScript_Poketch_Employee_Tell_About_Event::
	msgbox Jubilife_City_EventScript_Poketch_Employee_Tell_About_Event_Text_0, MSGBOX_SIGN
	setvar VAR_JUBILIFE_CITY_STATE, 3
	release
	end


Jubilife_City_EventScript_Poketch_Employe_Interact::
	goto_if_set FLAG_GOT_COUPON_1, Jubilife_City_EventScript_Poketch_Employe_Interact_4
Jubilife_City_EventScript_Poketch_Employe_Interact_2:
	msgbox Jubilife_City_EventScript_Poketch_Employe_Interact_Text_0, MSGBOX_NPC
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
	msgbox Jubilife_City_EventScript_Poketch_Employe_Gives_Poketch_And_Leaves_Text_0, MSGBOX_SIGN
	msgbox Jubilife_City_EventScript_Poketch_Employe_Gives_Poketch_And_Leaves_Text_1, MSGBOX_SIGN
	specialvar VAR_RESULT, GetPlayerFacingDirection
	switch VAR_RESULT
	case DIR_SOUTH, Jubilife_City_EventScript_Poketch_Employe_Gives_Poketch_And_Leaves_3
	case DIR_EAST, Jubilife_City_EventScript_Poketch_Employe_Gives_Poketch_And_Leaves_4
	case DIR_WEST, Jubilife_City_EventScript_Poketch_Employe_Gives_Poketch_And_Leaves_4
	case DIR_NORTH, Jubilife_City_EventScript_Poketch_Employe_Gives_Poketch_And_Leaves_5
Jubilife_City_EventScript_Poketch_Employe_Gives_Poketch_And_Leaves_1:
	setflag FLAG_HIDE_POKETCH_EMPLOYEE
	setflag FLAG_HIDE_LOOKER_2
	removeobject LOCALID_POKETCH_GUY_JUBILIFE
	removeobject LOCALID_LOOKER_JUBILIFE_2
	setvar VAR_JUBILIFE_CITY_STATE, 4
	release
	end

Jubilife_City_EventScript_Poketch_Employe_Gives_Poketch_And_Leaves_3:
	applymovement LOCALID_POKETCH_GUY_JUBILIFE, Jubilife_City_EventScript_Poketch_Employe_Gives_Poketch_And_Leaves_Movement_0
	waitmovement 0
	applymovement LOCALID_POKETCH_GUY_JUBILIFE, Jubilife_City_EventScript_Poketch_Employe_Gives_Poketch_And_Leaves_Movement_1
	applymovement LOCALID_POKETCH_GUY_JUBILIFE, Jubilife_City_EventScript_Poketch_Employe_Gives_Poketch_And_Leaves_Movement_2
	waitmovement LOCALID_POKETCH_GUY_JUBILIFE
	goto Jubilife_City_EventScript_Poketch_Employe_Gives_Poketch_And_Leaves_1

Jubilife_City_EventScript_Poketch_Employe_Gives_Poketch_And_Leaves_4:
	applymovement LOCALID_POKETCH_GUY_JUBILIFE, Jubilife_City_EventScript_Poketch_Employe_Gives_Poketch_And_Leaves_Movement_1
	applymovement OBJ_EVENT_ID_PLAYER, Jubilife_City_EventScript_Looker_Leaves_Movement_3
	waitmovement LOCALID_POKETCH_GUY_JUBILIFE
	goto Jubilife_City_EventScript_Poketch_Employe_Gives_Poketch_And_Leaves_1

Jubilife_City_EventScript_Poketch_Employe_Gives_Poketch_And_Leaves_5:
	applymovement LOCALID_POKETCH_GUY_JUBILIFE, Jubilife_City_EventScript_Poketch_Employe_Gives_Poketch_And_Leaves_Movement_1
	applymovement OBJ_EVENT_ID_PLAYER, Jubilife_City_EventScript_Rival_Move_To_Looker_Cutscene_Movement_5
	waitmovement LOCALID_POKETCH_GUY_JUBILIFE
	goto Jubilife_City_EventScript_Poketch_Employe_Gives_Poketch_And_Leaves_1


Jubilife_City_EventScript_Rival_2_Tutorial_Movement_0:
	walk_left
	walk_down
	walk_down
	walk_down
	step_end

Jubilife_City_EventScript_Rival_2_Tutorial_Movement_1:
	walk_down
	walk_down
	walk_down
	step_end

Jubilife_City_EventScript_Rival_2_Tutorial_Movement_2:
	walk_right
	walk_down
	walk_down
	walk_down
	step_end

Jubilife_City_EventScript_Rival_2_Tutorial_Movement_3:
	emote_exclamation_mark
	step_end

Jubilife_City_EventScript_Rival_2_Tutorial_Movement_4:
	walk_down
	walk_down
	step_end

Jubilife_City_EventScript_Rival_2_Tutorial_Movement_5:
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

Jubilife_City_EventScript_Rival_2_Tutorial_Movement_6:
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

Jubilife_City_EventScript_Rival_2_Tutorial_Movement_7:
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

Jubilife_City_EventScript_Rival_2_Tutorial_Movement_8:
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

Jubilife_City_EventScript_Rival_2_Tutorial_Movement_9:
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

Jubilife_City_EventScript_Rival_Move_To_Looker_Cutscene_Movement_0:
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

Jubilife_City_EventScript_Rival_Move_To_Looker_Cutscene_Movement_1:
	walk_up
	walk_up
	step_end

Jubilife_City_EventScript_Rival_Move_To_Looker_Cutscene_Movement_2:
	walk_up
	walk_up
	walk_right
	walk_up
	step_end

Jubilife_City_EventScript_Rival_Move_To_Looker_Cutscene_Movement_3:
	walk_right
	walk_right
	walk_right
	step_end

Jubilife_City_EventScript_Rival_Move_To_Looker_Cutscene_Movement_4:
	delay_16
	face_down
	step_end

Jubilife_City_EventScript_Rival_Move_To_Looker_Cutscene_Movement_5:
	walk_in_place_up
	step_end

Jubilife_City_EventScript_Looker_Continues_Movement_0:
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

Jubilife_City_EventScript_Looker_Leaves_Movement_0:
	walk_right
	walk_right
	walk_right
	face_left
	delay_16
	delay_16
	step_end

Jubilife_City_EventScript_Looker_Leaves_Movement_1:
	face_right
	step_end

Jubilife_City_EventScript_Looker_Leaves_Movement_2:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	delay_16
	delay_16
	step_end

Jubilife_City_EventScript_Looker_Leaves_Movement_3:
	face_up
	step_end

Jubilife_City_EventScript_Looker_Leaves_Movement_4:
	walk_down
	walk_left
	walk_left
	step_end

Jubilife_City_EventScript_Looker_Leaves_Movement_5:
	face_left
	step_end

Jubilife_City_EventScript_Looker_Leaves_Movement_6:
	walk_up
	walk_right
	walk_right
	step_end

Jubilife_City_EventScript_Looker_Leaves_Movement_7:
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

Jubilife_City_EventScript_Looker_Stop_You_From_Leaving_Movement_0:
	walk_down
	walk_right
	step_end

Jubilife_City_EventScript_Looker_Stop_You_From_Leaving_Movement_1:
	walk_down
	walk_down
	walk_right
	step_end

Jubilife_City_EventScript_Looker_Stop_You_From_Leaving_Movement_2:
	walk_down
	walk_down
	walk_down
	walk_right
	step_end

Jubilife_City_EventScript_Looker_Stop_You_From_Leaving_Movement_3:
	walk_left
	step_end

Jubilife_City_EventScript_Looker_Stop_You_From_Leaving_Movement_4:
	walk_left
	walk_up
	face_down
	step_end

Jubilife_City_EventScript_Looker_Stop_You_From_Leaving_Movement_5:
	walk_left
	walk_up
	walk_up
	face_down
	step_end

Jubilife_City_EventScript_Looker_Stop_You_From_Leaving_Movement_6:
	walk_left
	walk_up
	walk_up
	walk_up
	face_down
	step_end

Jubilife_City_EventScript_Global_Terminal_NPC_Trigger_Movement_0:
	walk_down
	face_right
	step_end

Jubilife_City_EventScript_Global_Terminal_NPC_Trigger_Movement_1:
	walk_down
	walk_down
	face_right
	step_end

Jubilife_City_EventScript_Global_Terminal_NPC_Trigger_Movement_2:
	walk_right
	step_end

Jubilife_City_EventScript_Global_Terminal_NPC_Trigger_Movement_3:
	walk_right
	face_left
	step_end

Jubilife_City_EventScript_Poketch_Employee_Movement_0:
	face_down
	step_end

Jubilife_City_EventScript_Poketch_Employee_Movement_1:
	walk_down
	walk_left
	walk_left
	walk_down
	walk_down
	step_end

Jubilife_City_EventScript_Poketch_Employee_Movement_2:
	walk_down
	walk_left
	walk_down
	walk_down
	step_end

Jubilife_City_EventScript_Poketch_Employee_Movement_3:
	walk_down
	walk_right
	walk_down
	walk_down
	step_end

Jubilife_City_EventScript_Poketch_Employee_Movement_4:
	walk_down
	walk_right
	walk_right
	walk_down
	walk_down
	step_end

Jubilife_City_EventScript_Poketch_Employe_Gives_Poketch_And_Leaves_Movement_0:
	walk_left
	walk_up
	step_end

Jubilife_City_EventScript_Poketch_Employe_Gives_Poketch_And_Leaves_Movement_1:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

Jubilife_City_EventScript_Poketch_Employe_Gives_Poketch_And_Leaves_Movement_2:
	face_left
	delay_16
	face_up
	step_end

Jubilife_City_EventScript_Rival_2_Tutorial_Text_0:
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

Jubilife_City_EventScript_Rival_2_Tutorial_Text_1:
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

Jubilife_City_EventScript_Rival_Move_To_Looker_Cutscene_Text_0:
	.string "Dawn: That man...\n"
	.string "What is he doing?$"

Jubilife_City_EventScript_Rival_Move_To_Looker_Cutscene_Text_1:
	.string "Lucas: That guy...\n"
	.string "What's he doing?$"

Jubilife_City_EventScript_Rival_Move_To_Looker_Cutscene_Text_2:
	.string "Dawn: Um...$"

Jubilife_City_EventScript_Rival_Move_To_Looker_Cutscene_Text_3:
	.string "Lucas: Uh, excuse...$"

Jubilife_City_EventScript_Rival_Move_To_Looker_Cutscene_Text_4:
	.string "WHAAAT?!\p"
	.string "Mysterious man: ...How did you know?\p"
	.string "How did you unmask me as a member of\n"
	.string "the International Police?!$"

Jubilife_City_EventScript_Rival_Move_To_Looker_Cutscene_Text_5:
	.string "Dawn: Huh? What? I beg your pardon?\n"
	.string "I was just making conversation...$"

Jubilife_City_EventScript_Rival_Move_To_Looker_Cutscene_Text_6:
	.string "Lucas: Huh? What? Are you kidding?\n"
	.string "I was just making small talk...$"

Jubilife_City_EventScript_Rival_Move_To_Looker_Cutscene_Text_7:
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

Jubilife_City_EventScript_Looker_Explain_The_Saying_Text_0:
	.string "Looker: No? You claim to not know it?\n"
	.string "How could that be?\p"
	.string "rPerhaps your mama has said it, but you\n"
	.string "have forgotten it, like usual?\p"
	.string "Now listen, my friends. It is wrong to\n"
	.string "take what belongs to others.$"

Jubilife_City_EventScript_Looker_Still_Reference_The_Saying_Text_0:
	.string "Looker: Yes, that is correct.\n"
	.string "Taking what belongs to others is wrong.$"

Jubilife_City_EventScript_Looker_Continues_Text_0:
	.string "Unfortunately, there are apparently\n"
	.string "those who do not heed those words.\p"
	.string "In Sinnoh, in fact, there are criminals\n"
	.string "stealing the Pokémon of others.\p"
	.string "I have, therefore, been on the lookout\n"
	.string "for characters arousing my suspicion.\p"
	.string "Incidentally, you are Trainers, yes?\n"
	.string "Perhaps you can make use of this?$"

Jubilife_City_EventScript_Looker_Continues_Text_1:
	.string "That Vs. Recorder, it is a nifty device\n"
	.string "for recording a match.\p"
	.string "I obtained it because it is quite popular\n"
	.string "these days.\p"
	.string "But myself, I do not do Pokémon\n"
	.string "battling very often.\p"
	.string "It will be in better hands with you.$"

Jubilife_City_EventScript_Looker_Continues_Text_2:
	.string "Looker: Also, I have a request.\p"
	.string "If you were to see me again, I ask that\n"
	.string "you not talk to me, for I am on duty.\p"
	.string "...Actually, yes, yes, you may speak to\n"
	.string "me. You must.\p"
	.string "Not because I am lonely, no, no!\n"
	.string "You must inform me of bad guys!\l"
	.string "You must inform me of any happenings!$"

Jubilife_City_EventScript_Looker_Leaves_Text_0:
	.string "Dawn: ...Working for the International\n"
	.string "Police must be hard.$"

Jubilife_City_EventScript_Looker_Leaves_Text_1:
	.string "Lucas: ...Working for the International\n"
	.string "Police sounds hard.$"

Jubilife_City_EventScript_Looker_Leaves_Text_2:
	.string "{PLAYER}, here it is.\n"
	.string "It's the Trainers' School.\l"
	.string "The name says it all!$"

Jubilife_City_EventScript_Looker_Leaves_Text_3:
	.string "{PLAYER}, here we are.\n"
	.string "This is the Trainers' School.\l"
	.string "The name says it all!$"

Jubilife_City_EventScript_Looker_Leaves_Text_4:
	.string "I saw your friend {RIVAL} go in\n"
	.string "earlier.\p"
	.string "He could still be in there studying.\n"
	.string "OK, bye now!$"

Jubilife_City_EventScript_Looker_Leaves_Text_5:
	.string "Your pal {RIVAL} went in earlier.\n"
	.string "He might still be studying in there.\p"
	.string "OK, see you around!$"

Jubilife_City_EventScript_Location_Sign_Text_0:
	.string "Jubilife City\n"
	.string "City of Joy$"

Jubilife_City_EventScript_Trader_1_Text_0:
	.string "I'm trading Pokémon with my buddy!$"

Jubilife_City_EventScript_Trader_2_Text_0:
	.string "I made my Pokémon hold an item before\n"
	.string "trading it.\p"
	.string "That will make the other Trainer\n"
	.string "ouble happy!$"

Jubilife_City_EventScript_Old_Man_Near_Trainer_School_Text_0:
	.string "Hello, Trainer!\n"
	.string "Do you know much about Pokémon?$"

Jubilife_City_EventScript_Old_Man_Near_Trainer_School_You_Are_Knowledgeable_Text_0:
	.string "Ah, I see!\n"
	.string "You are knowledgeable!\p"
	.string "I imagine you wouldn't see the need\n"
	.string "to visit the Trainers' School, then.\p"
	.string "But do visit if you have the time.\n"
	.string "You may discover something new!$"

Jubilife_City_EventScript_Old_Man_Near_Trainer_School_You_Are_Not_Knowledgeable_Text_0:
	.string "Oh, you're not knowledgeable...\n"
	.string "But not to worry!\l"
	.string "There's the Trainers' School.\p"
	.string "The school will teach you the\n"
	.string "basics of Pokémon.$"

Jubilife_City_EventScript_Trainer_School_Sign_Text_0:
	.string "Trainers' School\n"
	.string "The First Step for Trainers!$"

Jubilife_City_EventScript_Global_Terminal_Sign_Text_0:
	.string "The Global Terminal\n"
	.string "Your Gateway to the Whole World!\p$"

Jubilife_City_EventScript_Global_Terminal_NPC_Text_0:
	.string "Past here is the Global Terminal.\n"
	.string "It lets you trade with the whole world!\p"
	.string "Trading Pokémon means connecting\n"
	.string "with friends, both old and new.\p"
	.string "That's awesome!$"

Jubilife_City_EventScript_School_Kid_Near_Pokemon_Center_Text_0:
	.string "OK, set six Poké Balls in my\n"
	.string "belt...\p"
	.string "Yeah, that'll do it. At most, you\n"
	.string "can have six Pokémon with you.$"

Jubilife_City_EventScript_Condominiums_Sign_Text_0:
	.string "Jubilife Condominiums\n"
	.string "Tenants Wanted!$"

Jubilife_City_EventScript_Woman_Near_Condonium_Text_0:
	.string "Hiya, where'd you come from?\n"
	.string "...\p"
	.string "Twinleaf Town, huh...\n"
	.string "It's a nice place. Quiet and all.\p"
	.string "Jubilife City is a big place, so it\n"
	.string "might be a bit of a shock to you.$"

Jubilife_City_EventScript_Jubilife_Tv_Sign_Text_0:
	.string "Jubilife TV\n"
	.string "The Fun-and-Games TV Station!$"

Jubilife_City_EventScript_Woman_Near_Fountain_Text_0:
	.string "I am NPC that allows you to\n"
	.string "join various groups\l"
	.string "Implement me later$"

Jubilife_City_EventScript_Little_Girl_In_Front_Of_Jubilife_TV_Text_0:
	.string "Did you see me on TV?\n"
	.string "I was in an interview!$"

Jubilife_City_EventScript_Lady_In_Front_Of_Poketch_Building_Text_0:
	.string "When you walk with your Pokémon,\n"
	.string "they gradually grow friendlier.$"

Jubilife_City_EventScript_Poketch_Company_Sign_Text_0:
	.string "The Pokétch Company\n"
	.string "Pokémon Watches for the World!$"

Jubilife_City_EventScript_Looker_Near_Exit_Text_0:
	.string "Ah, it is you! Have no fear.\n"
	.string "There are no shady characters about.\p"
	.string "Incidentally, have you visited the\n"
	.string "Trainers' School?\p"
	.string "Did your friend not guide you there\n"
	.string "earlier?$"

Jubilife_City_EventScript_Looker_Stop_You_From_Leaving_Text_0:
	.string "Looker: Hello, my friend.\n"
	.string "Have you visited the Trainers' School?\p"
	.string "Did your friend not guide you there\n"
	.string "earlier?$"

Jubilife_City_EventScript_Global_Terminal_NPC_Trigger_Text_0:
	.string "Past here is the Global Terminal, your\n"
	.string "gateway to the world!\p"
	.string "Oh, I’m sorry, you don’t have\n"
	.string "any Gym Badges.\p"
	.string "The Global Terminal is off-limits if you\n"
	.string "don’t have a Gym Badge. Sorry!$"

Jubilife_City_EventScript_Joker_1_Text_0:
	.string "Pokémon grow stronger through\n"
	.string "battling.\p"
	.string "Some Pokémon even grow into an\n"
	.string "entirely different form in a process\l"
	.string "known as evolution.$"

Jubilife_City_EventScript_Joker_1_Ask_Question_Text_0:
	.string "Hi! I’m a Pokétch campaign clown!\n"
	.string "Let’s roll out my question!\p"
	.string "Does a Pokémon grow by defeating\n"
	.string "others and gaining Exp. Points?$"

Jubilife_City_EventScript_Joker_1_Question_Correct_Text_0:
	.string "Ding-ding!\n"
	.string "You’re absolutely correct!\p"
	.string "Pokémon grow stronger by defeating\n"
	.string "other Pokémon in battle.\p"
	.string "Some Pokémon even grow into an\n"
	.string "entirely different form in a process\l"
	.string "known as evolution.\p"
	.string "Here you go!\n"
	.string "Your Pokétch Coupon!$"

Jubilife_City_EventScript_Joker_2_Text_0:
	.string "If the Pokémon’s type matches its\n"
	.string "move’s type, that move is made much\l"
	.string "more powerful!$"

Jubilife_City_EventScript_Joker_2_Ask_Question_Text_0:
	.string "Hi! I’m a Pokétch campaign clown!\n"
	.string "Let’s roll out my question!\p"
	.string "Just like Pokémon types, the moves\n"
	.string "of Pokémon also have types?$"

Jubilife_City_EventScript_Joker_2_Question_Correct_Text_0:
	.string "Ding-ding!\n"
	.string "You’re absolutely correct!\p"
	.string "If the Pokémon’s type matches its\n"
	.string "move’s type, that move is made much\l"
	.string "more powerful!\p"
	.string "Here you go!\n"
	.string "Your Pokétch Coupon!$"

Jubilife_City_EventScript_Joker_3_Text_0:
	.string "A Pokémon may hold a single item.\p"
	.string "Some items become effective as soon\n"
	.string "as they are held by Pokémon.\p"
	.string "Berries are eaten by Pokémon as\n"
	.string "necessary during battle.$"

Jubilife_City_EventScript_Joker_3_Before_Rival_Text_0:
	.string "Hi, there. You should stick around.\n"
	.string "We’re doing a Pokétch campaign soon.\p"
	.string "Before it starts, I think you should\n"
	.string "brush up at the Trainers’ School.$"

Jubilife_City_EventScript_Joker_3_Ask_Question_Text_0:
	.string "Hi! I’m a Pokétch campaign clown!\n"
	.string "Let’s roll out my question!\p"
	.string "Can a Pokémon hold an item?$"

Jubilife_City_EventScript_Joker_3_Question_Correct_Text_0:
	.string "Ding-ding!\n"
	.string "You’re absolutely correct!\p"
	.string "A Pokémon may hold a single item.\p"
	.string "Some items become effective as soon\n"
	.string "as they are held by a Pokémon.\p"
	.string "Berries are eaten by Pokémon as\n"
	.string "necessary during battle.\p"
	.string "Here you go!\n"
	.string "Your Pokétch Coupon!$"

Jubilife_City_EventScript_Joker_Question_Wrong_Text_0:
	.string "Bzzzzt!\n"
	.string "That’s the wrong answer...$"

Jubilife_City_EventScript_Poketch_Employee_Tell_About_Event_Text_0:
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

Jubilife_City_EventScript_Poketch_Employe_Interact_Text_0:
	.string "The three clowns will each ask you\n"
	.string "a skill-testing question.\p"
	.string "The questions will all have to do\n"
	.string "with Pokémon.\p"
	.string "After all, a Pokétch is a tool for\n"
	.string "Pokémon Trainers.\p"
	.string "Collect a Coupon from each clown,\n"
	.string "then come see me, OK?$"

Jubilife_City_EventScript_Poketch_Employe_Gives_Poketch_And_Leaves_Text_0:
	.string "OK, let me count your Coupons!\n"
	.string "I’ll use the Pokétch here...\p"
	.string "One, two, three!\n"
	.string "Bravo! I say, bravo!\p"
	.string "In return for these Coupons,\n"
	.string "I present you this Pokémon Watch,\l"
	.string "or Pokétch for short!$"

Jubilife_City_EventScript_Poketch_Employe_Gives_Poketch_And_Leaves_Text_1:
	.string "You can add apps to your Pokétch\n"
	.string "to make it even more versatile!\p"
	.string "Touch the Pokétch screen and find the\n"
	.string "apps that are right for you!$"
