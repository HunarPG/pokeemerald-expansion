Route_201_MapScripts::
	.byte 0


Route_201_EventScript_Starter_Cutscene::
	lockall
	applymovement LOCALID_BARRY_201, Route_201_EventScript_Starter_Cutscene_Movement_0
	waitmovement 0
	playse SE_PIN
	applymovement LOCALID_BARRY_201, Route_201_EventScript_Starter_Cutscene_Movement_1
	waitmovement 0
	delay 30
	msgbox Route_201_EventScript_Starter_Cutscene_Text_0, MSGBOX_SIGN
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	switch VAR_TEMP_0
	case 14, Route_201_EventScript_Starter_Cutscene_3
	case 15, Route_201_EventScript_Starter_Cutscene_4
	case 16, Route_201_EventScript_Starter_Cutscene_5
	case 17, Route_201_EventScript_Starter_Cutscene_6
Route_201_EventScript_Starter_Cutscene_1:
	waitmovement 0
	msgbox Route_201_EventScript_Starter_Cutscene_Text_1, MSGBOX_SIGN
	switch VAR_TEMP_0
	case 14, Route_201_EventScript_Starter_Cutscene_9
	case 15, Route_201_EventScript_Starter_Cutscene_10
	case 16, Route_201_EventScript_Starter_Cutscene_11
	case 17, Route_201_EventScript_Starter_Cutscene_12
Route_201_EventScript_Starter_Cutscene_7:
	waitmovement LOCALID_BARRY_201
	msgbox Route_201_EventScript_Starter_Cutscene_Text_2, MSGBOX_SIGN
	applymovement LOCALID_BARRY_201, Route_201_EventScript_Starter_Cutscene_Movement_14
	waitmovement 0
	applymovement LOCALID_BARRY_201, Route_201_EventScript_Starter_Cutscene_Movement_0
	applymovement OBJ_EVENT_ID_PLAYER, Route_201_EventScript_Starter_Cutscene_Movement_15
	waitmovement 0
	msgbox Route_201_EventScript_Starter_Cutscene_Text_3, MSGBOX_SIGN
	applymovement LOCALID_BARRY_201, Route_201_EventScript_Starter_Cutscene_Movement_16
	waitmovement 0
	msgbox Route_201_EventScript_Starter_Cutscene_Text_4, MSGBOX_SIGN
	applymovement LOCALID_BARRY_201, Route_201_EventScript_Starter_Cutscene_Movement_17
	waitmovement 0
	msgbox Route_201_EventScript_Starter_Cutscene_Text_5, MSGBOX_SIGN
	playse SE_PIN
	applymovement LOCALID_BARRY_201, Route_201_EventScript_Starter_Cutscene_Movement_1
	waitmovement 0
	delay 30
	playbgm MUS_DP_ROWAN, FALSE
	addobject LOCALID_ROWAN_201
	applymovement LOCALID_ROWAN_201, Route_201_EventScript_Starter_Cutscene_Movement_18
	applymovement LOCALID_BARRY_201, Route_201_EventScript_Starter_Cutscene_Movement_19
	applymovement OBJ_EVENT_ID_PLAYER, Route_201_EventScript_Starter_Cutscene_Movement_19
	waitmovement LOCALID_ROWAN_201
	waitmovement 0
	delay 30
	msgbox Route_201_EventScript_Starter_Cutscene_Text_6, MSGBOX_SIGN
	applymovement LOCALID_BARRY_201, Route_201_EventScript_Starter_Cutscene_Movement_0
	applymovement OBJ_EVENT_ID_PLAYER, Route_201_EventScript_Starter_Cutscene_Movement_15
	waitmovement 0
	msgbox Route_201_EventScript_Starter_Cutscene_Text_7, MSGBOX_SIGN
	applymovement LOCALID_ROWAN_201, Route_201_EventScript_Starter_Cutscene_Movement_20
	waitmovement 0
	msgbox Route_201_EventScript_Starter_Cutscene_Text_8, MSGBOX_SIGN
	applymovement LOCALID_ROWAN_201, Route_201_EventScript_Starter_Cutscene_Movement_17
	waitmovement 0
	applymovement LOCALID_BARRY_201, Route_201_EventScript_Starter_Cutscene_Movement_19
	waitmovement 0
	msgbox Route_201_EventScript_Starter_Cutscene_Text_9, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, TRUE, Route_201_EventScript_Discussion_Continues_On
	goto_if_eq VAR_RESULT, FALSE, Route_201_EventScript_Barry_Forces_Yes
	return

Route_201_EventScript_Starter_Cutscene_3:
	applymovement LOCALID_BARRY_201, Route_201_EventScript_Starter_Cutscene_Movement_2
	goto Route_201_EventScript_Starter_Cutscene_1

Route_201_EventScript_Starter_Cutscene_4:
	applymovement LOCALID_BARRY_201, Route_201_EventScript_Starter_Cutscene_Movement_3
	goto Route_201_EventScript_Starter_Cutscene_1

Route_201_EventScript_Starter_Cutscene_5:
	applymovement LOCALID_BARRY_201, Route_201_EventScript_Starter_Cutscene_Movement_4
	goto Route_201_EventScript_Starter_Cutscene_1

Route_201_EventScript_Starter_Cutscene_6:
	applymovement LOCALID_BARRY_201, Route_201_EventScript_Starter_Cutscene_Movement_5
	goto Route_201_EventScript_Starter_Cutscene_1

Route_201_EventScript_Starter_Cutscene_9:
	applymovement LOCALID_BARRY_201, Route_201_EventScript_Starter_Cutscene_Movement_6
	applymovement OBJ_EVENT_ID_PLAYER, Route_201_EventScript_Starter_Cutscene_Movement_7
	goto Route_201_EventScript_Starter_Cutscene_7

Route_201_EventScript_Starter_Cutscene_10:
	applymovement LOCALID_BARRY_201, Route_201_EventScript_Starter_Cutscene_Movement_8
	applymovement OBJ_EVENT_ID_PLAYER, Route_201_EventScript_Starter_Cutscene_Movement_9
	goto Route_201_EventScript_Starter_Cutscene_7

Route_201_EventScript_Starter_Cutscene_11:
	applymovement LOCALID_BARRY_201, Route_201_EventScript_Starter_Cutscene_Movement_10
	applymovement OBJ_EVENT_ID_PLAYER, Route_201_EventScript_Starter_Cutscene_Movement_11
	goto Route_201_EventScript_Starter_Cutscene_7

Route_201_EventScript_Starter_Cutscene_12:
	applymovement LOCALID_BARRY_201, Route_201_EventScript_Starter_Cutscene_Movement_12
	applymovement OBJ_EVENT_ID_PLAYER, Route_201_EventScript_Starter_Cutscene_Movement_13
	goto Route_201_EventScript_Starter_Cutscene_7


Route_201_EventScript_Barry_Forces_Yes::
	applymovement LOCALID_BARRY_201, Route_201_EventScript_Starter_Cutscene_Movement_0
	applymovement OBJ_EVENT_ID_PLAYER, Route_201_EventScript_Starter_Cutscene_Movement_15
	waitmovement 0
	msgbox Route_201_EventScript_Barry_Forces_Yes_Text_0, MSGBOX_SIGN
	applymovement LOCALID_BARRY_201, Route_201_EventScript_Starter_Cutscene_Movement_19
	waitmovement 0
	msgbox Route_201_EventScript_Barry_Forces_Yes_Text_1, MSGBOX_SIGN
	goto Route_201_EventScript_Yes_No_Copy
	return


Route_201_EventScript_Yes_No_Copy::
	applymovement OBJ_EVENT_ID_PLAYER, Route_201_EventScript_Starter_Cutscene_Movement_19
	waitmovement 0
	msgbox Route_201_EventScript_Starter_Cutscene_Text_9, MSGBOX_YESNO
	applymovement LOCALID_BARRY_201, Route_201_EventScript_Starter_Cutscene_Movement_19
	applymovement OBJ_EVENT_ID_PLAYER, Route_201_EventScript_Starter_Cutscene_Movement_19
	goto_if_eq VAR_RESULT, TRUE, Route_201_EventScript_Discussion_Continues_On
	goto_if_eq VAR_RESULT, FALSE, Route_201_EventScript_Barry_Forces_Yes
	return


Route_201_EventScript_Discussion_Continues_On::
	msgbox Route_201_EventScript_Discussion_Continues_On_Text_0, MSGBOX_SIGN
	msgbox Route_201_EventScript_Discussion_Continues_On_Text_1, MSGBOX_SIGN
	applymovement LOCALID_BARRY_201, Route_201_EventScript_Starter_Cutscene_Movement_0
	applymovement OBJ_EVENT_ID_PLAYER, Route_201_EventScript_Starter_Cutscene_Movement_15
	waitmovement 0
	msgbox Route_201_EventScript_Discussion_Continues_On_Text_2, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, TRUE, Route_201_EventScript_Discussion_Continues_On_Again
	goto_if_eq VAR_RESULT, FALSE, Route_201_EventScript_Barry_Forces_Yes_Again
	return


Route_201_EventScript_Barry_Forces_Yes_Again::
	msgbox Route_201_EventScript_Barry_Forces_Yes_Again_Text_0, MSGBOX_SIGN
	goto Route_201_EventScript_Yes_No_Copy_1
	return


Route_201_EventScript_Yes_No_Copy_1::
	applymovement LOCALID_BARRY_201, Route_201_EventScript_Starter_Cutscene_Movement_19
	applymovement OBJ_EVENT_ID_PLAYER, Route_201_EventScript_Starter_Cutscene_Movement_19
	waitmovement 0
	msgbox Route_201_EventScript_Discussion_Continues_On_Text_1, MSGBOX_SIGN
	applymovement LOCALID_BARRY_201, Route_201_EventScript_Starter_Cutscene_Movement_19
	waitmovement 0
	msgbox Route_201_EventScript_Discussion_Continues_On_Text_2, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, TRUE, Route_201_EventScript_Discussion_Continues_On_Again
	goto_if_eq VAR_RESULT, FALSE, Route_201_EventScript_Barry_Forces_Yes_Again
	return


Route_201_EventScript_Discussion_Continues_On_Again::
	msgbox Route_201_EventScript_Discussion_Continues_On_Again_Text_0, MSGBOX_SIGN
	applymovement LOCALID_BARRY_201, Route_201_EventScript_Starter_Cutscene_Movement_19
	applymovement OBJ_EVENT_ID_PLAYER, Route_201_EventScript_Starter_Cutscene_Movement_19
	waitmovement 0
	msgbox Route_201_EventScript_Discussion_Continues_On_Again_Text_1, MSGBOX_SIGN
	applymovement LOCALID_ROWAN_201, Route_201_EventScript_Starter_Cutscene_Movement_19
	waitmovement 0
	delay 30
	applymovement LOCALID_ROWAN_201, Route_201_EventScript_Discussion_Continues_On_Again_Movement_0
	waitmovement 0
	goto Route_201_EventScript_Rival_Comes_In
	return


Route_201_EventScript_Rival_Comes_In::
	removeobject LOCALID_RIVAL_201
	call Common_EventScript_SetupRivalGfxId
	addobject LOCALID_RIVAL_201
	checkplayergender
	compare VAR_RESULT, MALE
	goto_if_eq Route_201_EventScript_Rival_Comes_In_2
	compare VAR_RESULT, FEMALE
	goto_if_eq Route_201_EventScript_Rival_Comes_In_3
Route_201_EventScript_Rival_Comes_In_1:
	applymovement LOCALID_RIVAL_201, Route_201_EventScript_Rival_Comes_In_Movement_0
	waitmovement 0
	delay 30
	addobject LOCALID_ROWAN_BAG
	compare VAR_RESULT, MALE
	goto_if_eq Route_201_EventScript_Rival_Comes_In_7
	compare VAR_RESULT, FEMALE
	goto_if_eq Route_201_EventScript_Rival_Comes_In_8
Route_201_EventScript_Rival_Comes_In_6:
	applymovement LOCALID_ROWAN_201, Route_201_EventScript_Starter_Cutscene_Movement_19
	waitmovement 0
	compare VAR_RESULT, MALE
	goto_if_eq Route_201_EventScript_Rival_Comes_In_12
	compare VAR_RESULT, FEMALE
	goto_if_eq Route_201_EventScript_Rival_Comes_In_13
Route_201_EventScript_Rival_Comes_In_11:
	applymovement LOCALID_ROWAN_201, Route_201_EventScript_Discussion_Continues_On_Again_Movement_0
	waitmovement 0
	msgbox Route_201_EventScript_Rival_Comes_In_Text_4, MSGBOX_SIGN
	applymovement LOCALID_BARRY_201, Route_201_EventScript_Starter_Cutscene_Movement_0
	applymovement OBJ_EVENT_ID_PLAYER, Route_201_EventScript_Starter_Cutscene_Movement_15
	waitmovement 0
	msgbox Route_201_EventScript_Rival_Comes_In_Text_5, MSGBOX_SIGN
	applymovement LOCALID_BARRY_201, Route_201_EventScript_Starter_Cutscene_Movement_19
	waitmovement 0
	playbgm MUS_DP_ROUTE201_DAY, FALSE
	release
	end

Route_201_EventScript_Rival_Comes_In_2:
	playbgm MUS_DP_DAWN, FALSE
	goto Route_201_EventScript_Rival_Comes_In_1

Route_201_EventScript_Rival_Comes_In_3:
	playbgm MUS_DP_LUCAS, FALSE
	goto Route_201_EventScript_Rival_Comes_In_1

Route_201_EventScript_Rival_Comes_In_7:
	msgbox Route_201_EventScript_Rival_Comes_In_Text_0, MSGBOX_SIGN
	goto Route_201_EventScript_Rival_Comes_In_6

Route_201_EventScript_Rival_Comes_In_8:
	msgbox Route_201_EventScript_Rival_Comes_In_Text_1, MSGBOX_SIGN
	goto Route_201_EventScript_Rival_Comes_In_6

Route_201_EventScript_Rival_Comes_In_12:
	msgbox Route_201_EventScript_Rival_Comes_In_Text_2, MSGBOX_SIGN
	goto Route_201_EventScript_Rival_Comes_In_11

Route_201_EventScript_Rival_Comes_In_13:
	msgbox Route_201_EventScript_Rival_Comes_In_Text_3, MSGBOX_SIGN
	goto Route_201_EventScript_Rival_Comes_In_11


Route_201_EventScript_RowansBag::
	lock
	faceplayer
	setflag FLAG_SYS_POKEMON_GET
	setvar VAR_GOT_STARTER, 1
	fadescreen FADE_TO_BLACK
	removeobject LOCALID_ROWAN_BAG
	applymovement OBJ_EVENT_ID_PLAYER, Route_201_EventScript_RowansBag_Movement_0
	waitmovement 0
	special ChooseStarter
	waitstate
	setflag FLAG_HIDE_ROUTE_201_ROWANS_BAG
	goto Route_201_EventScript_After_Picking_Starter
	return


Route_201_EventScript_No_Leaving_Before_Picking_Pokemon_Down::
	lock
	applymovement LOCALID_BARRY_201, Route_201_EventScript_Starter_Cutscene_Movement_0
	waitmovement 0
	msgbox Route_201_EventScript_No_Leaving_Before_Picking_Pokemon_Down_Text_0, MSGBOX_SIGN
	applymovement OBJ_EVENT_ID_PLAYER, Route_201_EventScript_No_Leaving_Before_Picking_Pokemon_Down_Movement_0
	waitmovement 0
	release
	end


Route_201_EventScript_No_Leaving_Before_Picking_Pokemon_Right::
	lock
	applymovement LOCALID_BARRY_201, Route_201_EventScript_Starter_Cutscene_Movement_0
	waitmovement 0
	msgbox Route_201_EventScript_No_Leaving_Before_Picking_Pokemon_Down_Text_0, MSGBOX_SIGN
	applymovement OBJ_EVENT_ID_PLAYER, Route_201_EventScript_Starter_Cutscene_Movement_14
	waitmovement 0
	release
	end


Route_201_EventScript_Barry_Dialouge::
	msgbox Route_201_EventScript_Barry_Dialouge_Text_0, MSGBOX_NPC
	end


Route_201_EventScript_Rowan_Dialouge::
	msgbox Route_201_EventScript_Rowan_Dialouge_Text_0, MSGBOX_NPC
	end


Route_201_EventScript_After_Picking_Starter::
	applymovement LOCALID_ROWAN_201, Route_201_EventScript_Starter_Cutscene_Movement_0
	applymovement OBJ_EVENT_ID_PLAYER, Route_201_EventScript_Starter_Cutscene_Movement_15
	waitmovement 0
	switch VAR_STARTER_MON
	case 0, Route_201_EventScript_After_Picking_Starter_2
	case 1, Route_201_EventScript_After_Picking_Starter_3
	case 2, Route_201_EventScript_After_Picking_Starter_4
	return

Route_201_EventScript_After_Picking_Starter_2:
	goto Route_201_EventScript_You_Picked_Turtwig
	return

Route_201_EventScript_After_Picking_Starter_3:
	goto Route_201_EventScript_You_Picked_Chimchar
	return

Route_201_EventScript_After_Picking_Starter_4:
	goto Route_201_EventScript_You_Picked_Piplup
	return


Route_201_EventScript_You_Picked_Turtwig::
	msgbox Route_201_EventScript_You_Picked_Turtwig_Text_0, MSGBOX_SIGN
	goto Route_201_EventScript_Rowan_And_Rival_Leaves
	return


Route_201_EventScript_You_Picked_Chimchar::
	msgbox Route_201_EventScript_You_Picked_Chimchar_Text_0, MSGBOX_SIGN
	goto Route_201_EventScript_Rowan_And_Rival_Leaves
	return


Route_201_EventScript_You_Picked_Piplup::
	msgbox Route_201_EventScript_You_Picked_Piplup_Text_0, MSGBOX_SIGN
	goto Route_201_EventScript_Rowan_And_Rival_Leaves
	return


Route_201_EventScript_Rowan_And_Rival_Leaves::
	applymovement LOCALID_BARRY_201, Route_201_EventScript_Rowan_And_Rival_Leaves_Movement_0
	applymovement OBJ_EVENT_ID_PLAYER, Route_201_EventScript_Discussion_Continues_On_Again_Movement_0
	waitmovement 0
	applymovement LOCALID_ROWAN_201, Route_201_EventScript_Rowan_And_Rival_Leaves_Movement_1
	waitmovement 0
	removeobject LOCALID_ROWAN_201
	checkplayergender
	compare VAR_RESULT, MALE
	goto_if_eq Route_201_EventScript_Rowan_And_Rival_Leaves_2
	compare VAR_RESULT, FEMALE
	goto_if_eq Route_201_EventScript_Rowan_And_Rival_Leaves_3
Route_201_EventScript_Rowan_And_Rival_Leaves_1:
	applymovement LOCALID_RIVAL_201, Route_201_EventScript_Rowan_And_Rival_Leaves_Movement_2
	applymovement OBJ_EVENT_ID_PLAYER, Route_201_EventScript_Starter_Cutscene_Movement_15
	waitmovement 0
	compare VAR_RESULT, MALE
	goto_if_eq Route_201_EventScript_Rowan_And_Rival_Leaves_7
	compare VAR_RESULT, FEMALE
	goto_if_eq Route_201_EventScript_Rowan_And_Rival_Leaves_8
Route_201_EventScript_Rowan_And_Rival_Leaves_6:
	applymovement LOCALID_RIVAL_201, Route_201_EventScript_Rowan_And_Rival_Leaves_Movement_1
	applymovement OBJ_EVENT_ID_PLAYER, Route_201_EventScript_Discussion_Continues_On_Again_Movement_0
	waitmovement LOCALID_RIVAL_201
	removeobject LOCALID_RIVAL_201
	delay 30
	goto Route_201_EventScript_Barry_Talk_About_Battling
	return

Route_201_EventScript_Rowan_And_Rival_Leaves_2:
	msgbox Route_201_EventScript_Rowan_And_Rival_Leaves_Text_0, MSGBOX_SIGN
	goto Route_201_EventScript_Rowan_And_Rival_Leaves_1

Route_201_EventScript_Rowan_And_Rival_Leaves_3:
	msgbox Route_201_EventScript_Rowan_And_Rival_Leaves_Text_1, MSGBOX_SIGN
	goto Route_201_EventScript_Rowan_And_Rival_Leaves_1

Route_201_EventScript_Rowan_And_Rival_Leaves_7:
	msgbox Route_201_EventScript_Rowan_And_Rival_Leaves_Text_2, MSGBOX_SIGN
	goto Route_201_EventScript_Rowan_And_Rival_Leaves_6

Route_201_EventScript_Rowan_And_Rival_Leaves_8:
	msgbox Route_201_EventScript_Rowan_And_Rival_Leaves_Text_3, MSGBOX_SIGN
	goto Route_201_EventScript_Rowan_And_Rival_Leaves_6


Route_201_EventScript_Barry_Talk_About_Battling::
	msgbox Route_201_EventScript_Barry_Talk_About_Battling_Text_0, MSGBOX_SIGN
	delay 30
	applymovement LOCALID_BARRY_201, Route_201_EventScript_Starter_Cutscene_Movement_0
	applymovement OBJ_EVENT_ID_PLAYER, Route_201_EventScript_Starter_Cutscene_Movement_15
	waitmovement 0
	delay 30
	applymovement LOCALID_BARRY_201, Route_201_EventScript_Barry_Talk_About_Battling_Movement_0
	waitmovement 0
	applymovement LOCALID_BARRY_201, Route_201_EventScript_Barry_Talk_About_Battling_Movement_1
	waitmovement 0
	msgbox Route_201_EventScript_Barry_Talk_About_Battling_Text_1, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, TRUE, Route_201_EventScript_Barry_Battles
	goto_if_eq VAR_RESULT, FALSE, Route_201_EventScript_Barry_Forces_Yes_To_Battle
	return


Route_201_EventScript_Barry_Forces_Yes_To_Battle::
	msgbox Route_201_EventScript_Barry_Forces_Yes_To_Battle_Text_0, MSGBOX_SIGN
	msgbox Route_201_EventScript_Barry_Talk_About_Battling_Text_1, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, TRUE, Route_201_EventScript_Barry_Battles
	goto_if_eq VAR_RESULT, FALSE, Route_201_EventScript_Barry_Forces_Yes_To_Battle
	return


Route_201_EventScript_Barry_Battles::
	msgbox Route_201_EventScript_Barry_Battles_Text_0, MSGBOX_SIGN
	switch VAR_STARTER_MON
	case 0, Route_201_EventScript_Barry_Battles_2
	case 1, Route_201_EventScript_Barry_Battles_3
	case 2, Route_201_EventScript_Barry_Battles_4
	return

Route_201_EventScript_Barry_Battles_2:
	goto Route_201_EventScript_Start_Barry_Battle_Turtwig
	return

Route_201_EventScript_Barry_Battles_3:
	goto Route_201_EventScript_Start_Barry_Battle_Chimchar
	return

Route_201_EventScript_Barry_Battles_4:
	goto Route_201_EventScript_Start_Barry_Battle_Piplup
	return


Route_201_EventScript_Start_Barry_Battle_Turtwig::
	trainerbattle_no_intro TRAINER_BARRY_ROUTE_201_TURTWIG, Route_201_EventScript_Start_Barry_Battle_Turtwig_Text_0
	goto Route_201_EventScript_After_Barry_Battle
	return


Route_201_EventScript_Start_Barry_Battle_Chimchar::
	trainerbattle_no_intro TRAINER_BARRY_ROUTE_201_CHIMCHAR, Route_201_EventScript_Start_Barry_Battle_Turtwig_Text_0
	goto Route_201_EventScript_After_Barry_Battle
	return


Route_201_EventScript_Start_Barry_Battle_Piplup::
	trainerbattle_no_intro TRAINER_BARRY_ROUTE_201_PIPLUP, Route_201_EventScript_Start_Barry_Battle_Turtwig_Text_0
	goto Route_201_EventScript_After_Barry_Battle
	return


Route_201_EventScript_After_Barry_Battle::
	msgbox Route_201_EventScript_After_Barry_Battle_Text_0, MSGBOX_SIGN
	special HealPlayerParty
	clearflag FLAG_HIDE_MOM_FROM_CUTSCENE
	warpsilent MAP_PLAYERS_HOUSE_1F, 1, 4
	setflag FLAG_HIDE_MOM_SITTING
	setvar VAR_MOM_TEXT, 4
	return


Route_201_EventScript_Barry_Takes_You_To_Lake::
	lock
	playse SE_PIN
	applymovement LOCALID_BARRY_201, Route_201_EventScript_Starter_Cutscene_Movement_1
	waitmovement 0
	msgbox Route_201_EventScript_Barry_Takes_You_To_Lake_Text_0, MSGBOX_SIGN
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	switch VAR_TEMP_0
	case 14, Route_201_EventScript_Barry_Takes_You_To_Lake_3
	case 15, Route_201_EventScript_Barry_Takes_You_To_Lake_4
	case 16, Route_201_EventScript_Barry_Takes_You_To_Lake_5
	case 17, Route_201_EventScript_Barry_Takes_You_To_Lake_6
Route_201_EventScript_Barry_Takes_You_To_Lake_1:
	waitmovement 0
	msgbox Route_201_EventScript_Barry_Takes_You_To_Lake_Text_1, MSGBOX_SIGN
	setvar VAR_GOT_STARTER, 2
	release
	end

Route_201_EventScript_Barry_Takes_You_To_Lake_3:
	applymovement LOCALID_BARRY_201, Route_201_EventScript_Barry_Takes_You_To_Lake_Movement_0
	goto Route_201_EventScript_Barry_Takes_You_To_Lake_1

Route_201_EventScript_Barry_Takes_You_To_Lake_4:
	applymovement LOCALID_BARRY_201, Route_201_EventScript_Barry_Takes_You_To_Lake_Movement_1
	goto Route_201_EventScript_Barry_Takes_You_To_Lake_1

Route_201_EventScript_Barry_Takes_You_To_Lake_5:
	applymovement LOCALID_BARRY_201, Route_201_EventScript_Starter_Cutscene_Movement_0
	goto Route_201_EventScript_Barry_Takes_You_To_Lake_1

Route_201_EventScript_Barry_Takes_You_To_Lake_6:
	applymovement LOCALID_BARRY_201, Route_201_EventScript_Barry_Takes_You_To_Lake_Movement_2
	goto Route_201_EventScript_Barry_Takes_You_To_Lake_1


Route201_EventScript_Barry_Talking_While_Following::
	msgbox Route201_EventScript_Barry_Talking_While_Following_Text_0, MSGBOX_NPC
	end


Route_201_EventScript_Barry_Forces_You_To_Lake_Down::
	lock
	applymovement OBJ_EVENT_ID_PLAYER, Route_201_EventScript_Starter_Cutscene_Movement_15
	waitmovement 0
	msgbox Route_201_EventScript_Barry_Forces_You_To_Lake_Down_Text_0, MSGBOX_SIGN
	applymovement OBJ_EVENT_ID_PLAYER, Route_201_EventScript_No_Leaving_Before_Picking_Pokemon_Down_Movement_0
	applymovement LOCALID_BARRY_201, Route_201_EventScript_No_Leaving_Before_Picking_Pokemon_Down_Movement_0
	waitmovement 0
	end


Route_201_EventScript_Barry_Forces_You_To_Lake_Right::
	lock
	applymovement OBJ_EVENT_ID_PLAYER, Route_201_EventScript_Starter_Cutscene_Movement_19
	waitmovement 0
	msgbox Route_201_EventScript_Barry_Forces_You_To_Lake_Down_Text_0, MSGBOX_SIGN
	applymovement OBJ_EVENT_ID_PLAYER, Route_201_EventScript_Starter_Cutscene_Movement_14
	applymovement LOCALID_BARRY_201, Route_201_EventScript_Starter_Cutscene_Movement_14
	waitmovement 0
	end


Route_201_EventScript_Location_Sign_Near_Twin_Leaf::
	msgbox Route_201_EventScript_Location_Sign_Near_Twin_Leaf_Text_0, MSGBOX_SIGN
	end


Route_201_EventScript_Boy::
	msgbox Route_201_EventScript_Boy_Text_0, MSGBOX_NPC
	end


Route_201_EventScript_Trainer_Tips::
	msgbox Route_201_EventScript_Trainer_Tips_Text_0, MSGBOX_SIGN
	end


Route_201_EventScript_Girl::
	msgbox Route_201_EventScript_Girl_Text_0, MSGBOX_NPC
	end


Route_201_EventScript_Mart_Guy::
	goto_if_unset FLAG_RECEIVED_POTION_ROUTE_201, Route_201_EventScript_Mart_Guy_1
	goto Route_201_EventScript_Mart_Guy_Already_Gave_Potion
	return

Route_201_EventScript_Mart_Guy_1:
	goto Route_201_EventScript_Mart_Guy_Give_Potion
	return


Route_201_EventScript_Mart_Guy_Give_Potion::
	msgbox Route_201_EventScript_Mart_Guy_Give_Potion_Text_0, MSGBOX_NPC
	giveitem ITEM_POTION
	goto_if_eq VAR_RESULT, FALSE, Route_201_EventScript_Bag_Is_Full
	setflag FLAG_RECEIVED_POTION_ROUTE_201
	closemessage
	end


Route_201_EventScript_Mart_Guy_Already_Gave_Potion::
	msgbox Route_201_EventScript_Mart_Guy_Already_Gave_Potion_Text_0, MSGBOX_NPC
	end


Route_201_EventScript_Bag_Is_Full::
	msgbox gText_TooBadBagIsFull, MSGBOX_NPC
	end


Route_201_EventScript_School_Kid::
	msgbox Route_201_EventScript_School_Kid_Text_0, MSGBOX_NPC
	end


Route_201_EventScript_Location_Sign_Near_Sandgem::
	msgbox Route_201_EventScript_Location_Sign_Near_Sandgem_Text_0, MSGBOX_SIGN
	end


Route_201_EventScript_Starter_Cutscene_Movement_0:
	face_down
	step_end

Route_201_EventScript_Starter_Cutscene_Movement_1:
	emote_exclamation_mark
	step_end

Route_201_EventScript_Starter_Cutscene_Movement_2:
	walk_fast_down
	walk_fast_left
	walk_fast_left
	face_down
	step_end

Route_201_EventScript_Starter_Cutscene_Movement_3:
	walk_fast_down
	walk_fast_left
	face_down
	step_end

Route_201_EventScript_Starter_Cutscene_Movement_4:
	walk_fast_down
	step_end

Route_201_EventScript_Starter_Cutscene_Movement_5:
	walk_fast_down
	walk_fast_right
	face_down
	step_end

Route_201_EventScript_Starter_Cutscene_Movement_6:
	walk_up
	walk_right
	walk_right
	walk_right
	walk_right
	walk_up
	walk_up
	walk_right
	step_end

Route_201_EventScript_Starter_Cutscene_Movement_7:
	walk_up
	walk_up
	walk_right
	walk_right
	walk_right
	walk_up
	walk_right
	step_end

Route_201_EventScript_Starter_Cutscene_Movement_8:
	walk_up
	walk_right
	walk_right
	walk_right
	walk_up
	walk_up
	walk_right
	step_end

Route_201_EventScript_Starter_Cutscene_Movement_9:
	walk_up
	walk_up
	walk_right
	walk_right
	walk_up
	walk_right
	step_end

Route_201_EventScript_Starter_Cutscene_Movement_10:
	walk_up
	walk_right
	walk_right
	walk_up
	walk_up
	walk_right
	step_end

Route_201_EventScript_Starter_Cutscene_Movement_11:
	walk_up
	walk_up
	walk_right
	walk_up
	walk_right
	step_end

Route_201_EventScript_Starter_Cutscene_Movement_12:
	walk_up
	walk_right
	walk_up
	walk_up
	walk_right
	step_end

Route_201_EventScript_Starter_Cutscene_Movement_13:
	walk_up
	walk_up
	walk_up
	walk_right
	step_end

Route_201_EventScript_Starter_Cutscene_Movement_14:
	walk_left
	step_end

Route_201_EventScript_Starter_Cutscene_Movement_15:
	face_up
	step_end

Route_201_EventScript_Starter_Cutscene_Movement_16:
	walk_left
	walk_left
	walk_left
	face_right
	step_end

Route_201_EventScript_Starter_Cutscene_Movement_17:
	walk_fast_right
	walk_fast_right
	walk_fast_right
	step_end

Route_201_EventScript_Starter_Cutscene_Movement_18:
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	step_end

Route_201_EventScript_Starter_Cutscene_Movement_19:
	face_left
	step_end

Route_201_EventScript_Starter_Cutscene_Movement_20:
	walk_left
	walk_left
	walk_left
	step_end

Route_201_EventScript_Discussion_Continues_On_Again_Movement_0:
	face_right
	step_end

Route_201_EventScript_Rival_Comes_In_Movement_0:
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	step_end

Route_201_EventScript_RowansBag_Movement_0:
	walk_in_place_faster_left
	step_end

Route_201_EventScript_No_Leaving_Before_Picking_Pokemon_Down_Movement_0:
	walk_up
	step_end

Route_201_EventScript_Rowan_And_Rival_Leaves_Movement_0:
	walk_up
	face_down
	step_end

Route_201_EventScript_Rowan_And_Rival_Leaves_Movement_1:
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

Route_201_EventScript_Rowan_And_Rival_Leaves_Movement_2:
	walk_right
	step_end

Route_201_EventScript_Barry_Talk_About_Battling_Movement_0:
	walk_in_place_fast_down
	walk_in_place_fast_down
	walk_in_place_fast_down
	walk_in_place_fast_down
	walk_in_place_fast_down
	step_end

Route_201_EventScript_Barry_Talk_About_Battling_Movement_1:
	walk_fast_left
	walk_fast_down
	step_end

Route_201_EventScript_Barry_Takes_You_To_Lake_Movement_0:
	walk_fast_left
	walk_fast_left
	face_down
	step_end

Route_201_EventScript_Barry_Takes_You_To_Lake_Movement_1:
	walk_fast_left
	face_down
	step_end

Route_201_EventScript_Barry_Takes_You_To_Lake_Movement_2:
	walk_fast_right
	face_down
	step_end

Route_201_EventScript_Starter_Cutscene_Text_0:
	.string "Too slow!$"

Route_201_EventScript_Starter_Cutscene_Text_1:
	.string "{RIVAL}: All right!\n"
	.string "Let's get moving to Prof. Rowan's lab.$"

Route_201_EventScript_Starter_Cutscene_Text_2:
	.string "{RIVAL}: ...\n"
	.string "...\p"
	.string "What?\n"
	.string "Don't go into grass, right?\l"
	.string "No worries! No problem!\p"
	.string "It doesn't matter that we don't have\n"
	.string "any Pokémon.\p"
	.string "Trust me on this one.\n"
	.string "I've got an idea!\p"
	.string "Now listen. You know how wild Pokémon\n"
	.string "jump out when you go into tall grass?$"

Route_201_EventScript_Starter_Cutscene_Text_3:
	.string "So, what you do is, you scoot over to\n"
	.string "the next patch of grass before any\l"
	.string "wild Pokémon can appear!\p"
	.string "If we just keep dashing, we can get to\n"
	.string "Sandgem Town without running into\l"
	.string "wild Pokémon!\p"
	.string "Ok, stick with me!$"

Route_201_EventScript_Starter_Cutscene_Text_4:
	.string "Ok, here goes!\p"
	.string "On your marks...$"

Route_201_EventScript_Starter_Cutscene_Text_5:
	.string "Hold it!$"

Route_201_EventScript_Starter_Cutscene_Text_6:
	.string "Professor: You two don't seem to have\n"
	.string "any Pokémon between you?\p"
	.string "Then, what is the meaning of going into\n"
	.string "the tall grass?!\p"
	.string "{PLAYER}: ...\n"
	.string "...\p"
	.string "Professor: ...\n"
	.string "...\p"
	.string "...\n"
	.string "...$"

Route_201_EventScript_Starter_Cutscene_Text_7:
	.string "{RIVAL}: Hey, {PLAYER}.\n"
	.string "This old guy...\p"
	.string "It's Prof. Rowan isn't it?\n"
	.string "What's he doing here...?$"

Route_201_EventScript_Starter_Cutscene_Text_8:
	.string "Professor: ...\n"
	.string "...\p"
	.string "They tried to go into the tall grass\n"
	.string "because they wanted Pokémon...\p"
	.string "Hmm...\n"
	.string "What to do...?\p"
	.string "Their world would surely change if\n"
	.string "they were to meet Pokémon...\p"
	.string "Is it right for me to put them on that\n"
	.string "path...?\p"
	.string "...\n"
	.string "...$"

Route_201_EventScript_Starter_Cutscene_Text_9:
	.string "You two.\n"
	.string "You truly love Pokémon, do you?$"

Route_201_EventScript_Barry_Forces_Yes_Text_0:
	.string "{RIVAL}: Whoa, hold\n"
	.string "You truly love Pokémon, do you?$"

Route_201_EventScript_Barry_Forces_Yes_Text_1:
	.string "Professor: Er-hem!\p"
	.string "I didn't quite catch that, so I will\n"
	.string "ask you again.$"

Route_201_EventScript_Discussion_Continues_On_Text_0:
	.string "{RIVAL}: Me too!\n"
	.string "I love Pokémon, too!?\p"
	.string "Professor: I will ask you once again.\p"
	.string "You two.\n"
	.string "You truly love Pokémon, do you?$"

Route_201_EventScript_Discussion_Continues_On_Text_1:
	.string "{RIVAL}: What?!\n"
	.string "You can ask a hundred times!\l"
	.string "The answer will never cange!\p"
	.string "We'll both answer a hundred times,\n"
	.string "we love Pokémon!$"

Route_201_EventScript_Discussion_Continues_On_Text_2:
	.string "Right, {PLAYER}?$"

Route_201_EventScript_Barry_Forces_Yes_Again_Text_0:
	.string "{RIVAL}: ...\n"
	.string "That joke's getting old!$"

Route_201_EventScript_Discussion_Continues_On_Again_Text_0:
	.string "Professor: ...A Pair of reckless kids\n"
	.string "who foolishly try to enter tall grass\l"
	.string "without Pokémon of their own...?\p"
	.string "It worries me what people like that\n"
	.string "would do with Pokémon.$"

Route_201_EventScript_Discussion_Continues_On_Again_Text_1:
	.string "{RIVAL}: ...Uh...\n"
	.string "Well, I, uh...\p"
	.string "...\n"
	.string "...\p"
	.string "Well, then forget about me, but give\n"
	.string "a Pokémon to my friend here!\p"
	.string "I mean, it was me who tried to go into\n"
	.string "the tall grass and all...\p"
	.string "Professor: !\p"
	.string "How big of you...\p"
	.string "Very, well, then!\n"
	.string "I will entrust you two with Pokémon!\p"
	.string "I apologize for putting you through\n"
	.string "that exercise.\p"
	.string "However!\p"
	.string "You must promise me that you will never\n"
	.string "recklessly endanger yourself again.\p"
	.string "Now, then...\p"
	.string "Hm?\n"
	.string "Now, where...?$"

Route_201_EventScript_Rival_Comes_In_Text_0:
	.string "Dawn: Professor Rowan!\p"
	.string "You left your briefcase at the lake!\p$"

Route_201_EventScript_Rival_Comes_In_Text_1:
	.string "Lucas: Professor Rowan!\p"
	.string "You left your briefcase behind at\n"
	.string "the lake.$"

Route_201_EventScript_Rival_Comes_In_Text_2:
	.string "Is something wrong here?\p"
	.string "Rowan: Ah! There it is!\n"
	.string "Dawn, nice work.\p"
	.string "What I was about to do was to entrust\n"
	.string "these two with their own Pokémon.\p"
	.string "Dawn: Pardon?!\p"
	.string "Those Pokémon are hard to replace.\n"
	.string "Are you sure about giving them away?\p"
	.string "Rowan: Hm!\p"
	.string "We exist side by side with Pokémon.\p"
	.string "There comes a time when people should\n"
	.string "meet Pokémon.\p"
	.string "There is a world that should be\n"
	.string "explored together.\p"
	.string "For them, today is the time.\n"
	.string "The place, right here.$"

Route_201_EventScript_Rival_Comes_In_Text_3:
	.string "Is something wrong here?\p"
	.string "Rowan: Ah! There it is!\n"
	.string "Lucas, nice work.\p"
	.string "What I was about to do was to entrust\n"
	.string "these two with their own Pokémon.\p"
	.string "Lucas: Wha...?!\p"
	.string "Those Pokémon are crucial.\n"
	.string "You're giving them away?\p"
	.string "Rowan: Hm!\p"
	.string "We exist side by side with Pokémon.\p"
	.string "There comes a time when people should\n"
	.string "meet Pokémon.\p"
	.string "There is a world that should be\n"
	.string "explored together.\p"
	.string "For them, today is the time.\n"
	.string "The place, right here.$"

Route_201_EventScript_Rival_Comes_In_Text_4:
	.string "Go on! Open the briefcase and choose\n"
	.string "a Pokémon!\p"
	.string "{RIVAL}: Really?!\n"
	.string "Prof. Rowan!\p"
	.string "I can't believe it! I'm so happy now\n"
	.string "that I can't keep a straight face!$"

Route_201_EventScript_Rival_Comes_In_Text_5:
	.string "Hey, {PLAYER}!\n"
	.string "You can choose first.\p"
	.string "Hey, I'm practically a grown-up.\n"
	.string "I have to show some class here.$"

Route_201_EventScript_No_Leaving_Before_Picking_Pokemon_Down_Text_0:
	.string "{RIVAL}: What's up with you?\n"
	.string "Open the briefcase and pick a Pokémon!$"

Route_201_EventScript_Barry_Dialouge_Text_0:
	.string "Hey, {PLAYER}.\n"
	.string "You can choose first. Go ahead.\p"
	.string "You know, like, I'm gonna be a man\n"
	.string "about it. Yeah, I'm slick.$"

Route_201_EventScript_Rowan_Dialouge_Text_0:
	.string "Rowan: Go on! Open the briefcase and\n"
	.string "choose a Pokémon!$"

Route_201_EventScript_You_Picked_Turtwig_Text_0:
	.string "{RIVAL}: Then, I choose you!\n"
	.string "I'm picking this Chimchar!\p"
	.string "Rowan: Very well! Both of you have\n"
	.string "choosen a good Pokémon, it seems.\p"
	.string "Now listen well!\p"
	.string "The Pokémon you have been entrusted\n"
	.string "with are unfimiliar with the world.\p"
	.string "In that regard they're much\n"
	.string "like you.\p"
	.string "As fellow newcomers to the world,\n"
	.string "I hope you'll do well together.\p"
	.string "If you have any trouble, come see me\n"
	.string "at my lab in Sandgem Town.\p"
	.string "And now, we'll be on out way.$"

Route_201_EventScript_You_Picked_Chimchar_Text_0:
	.string "{RIVAL}: Then, I choose you!\n"
	.string "I'm picking this Piplup!\p"
	.string "Rowan: Very well! Both of you have\n"
	.string "choosen a good Pokémon, it seems.\p"
	.string "Now listen well!\p"
	.string "The Pokémon you have been entrusted\n"
	.string "with are unfimiliar with the world.\p"
	.string "In that regard they're much\n"
	.string "like you.\p"
	.string "As fellow newcomers to the world,\n"
	.string "I hope you'll do well together.\p"
	.string "If you have any trouble, come see me\n"
	.string "at my lab in Sandgem Town.\p"
	.string "And now, we'll be on our way.$"

Route_201_EventScript_You_Picked_Piplup_Text_0:
	.string "{RIVAL}: Then, I choose you!\n"
	.string "I'm picking this Turtwig!\p"
	.string "Rowan: Very well! Both of you have\n"
	.string "choosen a good Pokémon, it seems.\p"
	.string "Now listen well!\p"
	.string "The Pokémon you have been entrusted\n"
	.string "with are unfimiliar with the world.\p"
	.string "In that regard they're much\n"
	.string "like you.\p"
	.string "As fellow newcomers to the world,\n"
	.string "I hope you'll do well together.\p"
	.string "If you have any trouble, come see me\n"
	.string "at my lab in Sandgem Town.\p"
	.string "And now, we'll be on our way.$"

Route_201_EventScript_Rowan_And_Rival_Leaves_Text_0:
	.string "Dawn: Professor!\n"
	.string "Wait for me, please!$"

Route_201_EventScript_Rowan_And_Rival_Leaves_Text_1:
	.string "Lucas: Professor!\n"
	.string "Wait for me!$"

Route_201_EventScript_Rowan_And_Rival_Leaves_Text_2:
	.string "I'm sorry...\n"
	.string "Please let me pass.$"

Route_201_EventScript_Rowan_And_Rival_Leaves_Text_3:
	.string "Uh, sorry, folks.$"

Route_201_EventScript_Barry_Talk_About_Battling_Text_0:
	.string "{RIVAL}: How do you like that?\n"
	.string "Prof. Rowan's really nice.\p"
	.string "On TV, he seems so stern and scary.$"

Route_201_EventScript_Barry_Talk_About_Battling_Text_1:
	.string "Heheh, {PLAYER}!\n"
	.string "We've both got Pokémon now.\p"
	.string "There's only one thing to do, right?\n"
	.string "Are you up for this?$"

Route_201_EventScript_Barry_Forces_Yes_To_Battle_Text_0:
	.string "{RIVAL}: What's up with that attitude?\n"
	.string "Don't be that way!$"

Route_201_EventScript_Barry_Battles_Text_0:
	.string "I've always wanted to\n"
	.string "say this...\p"
	.string "The time has finally come!\p"
	.string "{PLAYER}!\n"
	.string "I challenge you to a battle!$"

Route_201_EventScript_Start_Barry_Battle_Turtwig_Text_0:
	.string "What are you saying?!\n"
	.string "We ended up losing?!$"

Route_201_EventScript_After_Barry_Battle_Text_0:
	.string "{RIVAL}: Whew!\n"
	.string "Let's go home.\p"
	.string "I am beat after that battle.\n"
	.string "My Pokémon needs rest too.\p"
	.string "See ya, {PLAYER}!$"

Route_201_EventScript_Barry_Takes_You_To_Lake_Text_0:
	.string "{RIVAL}: Too slow!\n"
	.string "{PLAYER}, I'm sick of waiting!\p"
	.string "I'm going to go see Prof. Rowan, so I\n"
	.string "can thank him properly.\p"
	.string "So, I had this neat idea.\n"
	.string "Listen up, OK?\p"
	.string "You know that lake we always\n"
	.string "play at?\p"
	.string "You know how they say a legendary\n"
	.string "Pokémon lives there?\p"
	.string "You guessed it!\n"
	.string "Let's catch that Pokémon.\p"
	.string "That'll make Prof. Rowan happy.\n"
	.string "I'm sure of that.$"

Route_201_EventScript_Barry_Takes_You_To_Lake_Text_1:
	.string "Me and you together,\n"
	.string "we've got nothing to fear!$"

Route201_EventScript_Barry_Talking_While_Following_Text_0:
	.string "{RIVAL}: Hey, that's enough\n"
	.string "talking already.\p"
	.string "I'm itching to get to the lake.\n"
	.string "Come on, come on!$"

Route_201_EventScript_Barry_Forces_You_To_Lake_Down_Text_0:
	.string "{RIVAL}: Heheh, {PLAYER}.\n"
	.string "The lake's not that way!$"

Route_201_EventScript_Location_Sign_Near_Twin_Leaf_Text_0:
	.string "Rt. 201\n"
	.string "Twinleaf Town$"

Route_201_EventScript_Boy_Text_0:
	.string "Wild Pokémon lurk in tall grass. They\n"
	.string "can come bursting out at any time.\p"
	.string "So, if you're wanting to battle wild\n"
	.string "Pokémon, just walk in tall grass.\p"
	.string "If you want to avoid wild Pokémon\n"
	.string "then stay out of tall grass.$"

Route_201_EventScript_Trainer_Tips_Text_0:
	.string "Trainer Tips\p"
	.string "Don't be shy! Talk to anyone and\n"
	.string "everyone you happen to see.\p"
	.string "By talking to people, you will get\n"
	.string "invalueable information and advice.$"

Route_201_EventScript_Girl_Text_0:
	.string "If your Pokémon's health--that's its\n"
	.string "HP--is getting low, you should go\l"
	.string "home and get some rest.$"

Route_201_EventScript_Mart_Guy_Give_Potion_Text_0:
	.string "Hi!\n"
	.string "I work at a Pokémon Mart.\p"
	.string "Did you know that a Pokémon's health\n"
	.string "is measured by Hit Points (HP)?\p"
	.string "If a Pokémon Runs out of HP, it\n"
	.string "faints and can't battle anymore.\p"
	.string "If a Pokémon's HP gets low, you\n"
	.string "should heal it with a Potion.\p"
	.string "Here, let me give you a Potion as\n"
	.string "a free sample. First one's free!\p"
	.string "It will automatically go in the\n"
	.string "Medicine Pocket of your Bag.$"

Route_201_EventScript_Mart_Guy_Already_Gave_Potion_Text_0:
	.string "You can find a Pokémon mart in cities\n"
	.string "and most major towns.$"

Route_201_EventScript_School_Kid_Text_0:
	.string "That ledge is one way. Jump down\n"
	.string "for a shortcut to Twinleaf Town!$"

Route_201_EventScript_Location_Sign_Near_Sandgem_Text_0:
	.string "Rt. 201\n"
	.string "Sandgem Town$"
