.set LOCALID_ROWANS_BAG, 9

Route201_MapScripts::
	.byte 0

Route201_EventScript_Starter_Cutscene_1::
    lockall
	applymovement 5, Movement_Rival_Faces_Down
	waitmovement 0
    playse SE_PIN
    applymovement 5, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement 5, Common_Movement_Delay48
	waitmovement 0
    msgbox Route201_Text_TooSlow, MSGBOX_SIGN
	applymovement 5, Movement_Rival_Comes_To_You_1
	waitmovement 0
    msgbox Route201_Text_Rival_Mentions_Idea, MSGBOX_SIGN
	applymovement 5, Movement_Rival_Goes_Near_Grass_1
    applymovement OBJ_EVENT_ID_PLAYER, Movement_Player_Goes_Near_Grass_1
	waitmovement 0
    msgbox Route201_Text_Rival_Explains_Its_Fine, MSGBOX_SIGN
	applymovement 5, Movement_Rival_Comes_Closer
	waitmovement 0
	applymovement 5, Movement_Rival_Faces_Down
    applymovement OBJ_EVENT_ID_PLAYER, Movement_Player_Faces_Up
	waitmovement 0
    msgbox Route201_Text_Rival_Explains_More, MSGBOX_SIGN
	applymovement 5, Movement_Rival_Gets_Ready
	waitmovement 0
    msgbox Route201_Text_Rival_Talk_Before_Running, MSGBOX_SIGN
	applymovement 5, Movement_Rival_Almost_Walk_In_Grass
	waitmovement 0
    msgbox Route201_Text_Rowan_Says_Hold, MSGBOX_SIGN
    playse SE_PIN
    applymovement 5, Common_Movement_ExclamationMark
	waitmovement 0
    applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement 5, Common_Movement_Delay48
	waitmovement 0
    playbgm MUS_DP_ROWAN FALSE
    addobject 6
	applymovement 6, Movement_Rowan_Walks_In
	applymovement 5, Movement_Rival_Faces_Left
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Player_Faces_Left
	waitmovement 0
    msgbox Route201_Text_Rowan_Tells_We_Are_Fools, MSGBOX_SIGN
	applymovement 5, Movement_Rival_Faces_Down
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Player_Faces_Up
	waitmovement 0
    msgbox Route201_Text_Rival_Realize_Its_Rowan MSGBOX_SIGN
	applymovement 6, Movement_Rowan_Walks_Left
	waitmovement 0
    msgbox Route201_Text_Rowan_Thinks MSGBOX_SIGN
	applymovement 6, Movement_Rowan_Walks_Back
	waitmovement 0
	applymovement 5, Movement_Rival_Faces_Left
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Player_Faces_Left
	waitmovement 0
    msgbox Route201_Text_Rowan_Asks, MSGBOX_YESNO
	call_if_eq VAR_RESULT, YES, Route201_EventScript_Discussion_Continues_On
	call_if_eq VAR_RESULT, NO, Route201_EventScript_Barry_Forces_Yes
    end

Route201_EventScript_Starter_Cutscene_2::
    lock
	applymovement 5, Movement_Rival_Faces_Down
	waitmovement 0
    playse SE_PIN
    applymovement 5, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement 5, Common_Movement_Delay48
	waitmovement 0
    msgbox Route201_Text_TooSlow, MSGBOX_SIGN
	applymovement 5, Movement_Rival_Comes_To_You_2
	waitmovement 0
    msgbox Route201_Text_Rival_Mentions_Idea, MSGBOX_SIGN
	applymovement 5, Movement_Rival_Goes_Near_Grass_2
    applymovement OBJ_EVENT_ID_PLAYER, Movement_Player_Goes_Near_Grass_2
	waitmovement 0
    msgbox Route201_Text_Rival_Explains_Its_Fine, MSGBOX_SIGN
	applymovement 5, Movement_Rival_Comes_Closer
	waitmovement 0
	applymovement 5, Movement_Rival_Faces_Down
    applymovement OBJ_EVENT_ID_PLAYER, Movement_Player_Faces_Up
	waitmovement 0
    msgbox Route201_Text_Rival_Explains_More, MSGBOX_SIGN
	applymovement 5, Movement_Rival_Gets_Ready
	waitmovement 0
    msgbox Route201_Text_Rival_Talk_Before_Running, MSGBOX_SIGN
	applymovement 5, Movement_Rival_Almost_Walk_In_Grass
	waitmovement 0
    msgbox Route201_Text_Rowan_Says_Hold, MSGBOX_SIGN
    playse SE_PIN
    applymovement 5, Common_Movement_ExclamationMark
	waitmovement 0
    applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement 5, Common_Movement_Delay48
	waitmovement 0
    playbgm MUS_DP_ROWAN FALSE
    addobject 6
	applymovement 6, Movement_Rowan_Walks_In
	applymovement 5, Movement_Rival_Faces_Left
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Player_Faces_Left
	waitmovement 0
    msgbox Route201_Text_Rowan_Tells_We_Are_Fools, MSGBOX_SIGN
	applymovement 5, Movement_Rival_Faces_Down
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Player_Faces_Up
	waitmovement 0
    msgbox Route201_Text_Rival_Realize_Its_Rowan MSGBOX_SIGN
	applymovement 6, Movement_Rowan_Walks_Left
	waitmovement 0
    msgbox Route201_Text_Rowan_Thinks MSGBOX_SIGN
	applymovement 6, Movement_Rowan_Walks_Back
	waitmovement 0
	applymovement 5, Movement_Rival_Faces_Left
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Player_Faces_Left
	waitmovement 0
    msgbox Route201_Text_Rowan_Asks, MSGBOX_YESNO
	call_if_eq VAR_RESULT, YES, Route201_EventScript_Discussion_Continues_On
	call_if_eq VAR_RESULT, NO, Route201_EventScript_Barry_Forces_Yes
    end

Route201_EventScript_Starter_Cutscene_3::
    lock
	applymovement 5, Movement_Rival_Faces_Down
	waitmovement 0
    playse SE_PIN
    applymovement 5, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement 5, Common_Movement_Delay48
	waitmovement 0
    msgbox Route201_Text_TooSlow, MSGBOX_SIGN
	applymovement 5, Movement_Rival_Comes_To_You_3
	waitmovement 0
    msgbox Route201_Text_Rival_Mentions_Idea, MSGBOX_SIGN
	applymovement 5, Movement_Rival_Goes_Near_Grass_3
    applymovement OBJ_EVENT_ID_PLAYER, Movement_Player_Goes_Near_Grass_3
	waitmovement 0
    msgbox Route201_Text_Rival_Explains_Its_Fine, MSGBOX_SIGN
	applymovement 5, Movement_Rival_Comes_Closer
	waitmovement 0
	applymovement 5, Movement_Rival_Faces_Down
    applymovement OBJ_EVENT_ID_PLAYER, Movement_Player_Faces_Up
	waitmovement 0
    msgbox Route201_Text_Rival_Explains_More, MSGBOX_SIGN
	applymovement 5, Movement_Rival_Gets_Ready
	waitmovement 0
    msgbox Route201_Text_Rival_Talk_Before_Running, MSGBOX_SIGN
	applymovement 5, Movement_Rival_Almost_Walk_In_Grass
	waitmovement 0
    msgbox Route201_Text_Rowan_Says_Hold, MSGBOX_SIGN
    playse SE_PIN
    applymovement 5, Common_Movement_ExclamationMark
	waitmovement 0
    applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement 5, Common_Movement_Delay48
	waitmovement 0
    playbgm MUS_DP_ROWAN FALSE
    addobject 6
	applymovement 6, Movement_Rowan_Walks_In
	applymovement 5, Movement_Rival_Faces_Left
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Player_Faces_Left
	waitmovement 0
    msgbox Route201_Text_Rowan_Tells_We_Are_Fools, MSGBOX_SIGN
	applymovement 5, Movement_Rival_Faces_Down
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Player_Faces_Up
	waitmovement 0
    msgbox Route201_Text_Rival_Realize_Its_Rowan MSGBOX_SIGN
	applymovement 6, Movement_Rowan_Walks_Left
	waitmovement 0
    msgbox Route201_Text_Rowan_Thinks MSGBOX_SIGN
	applymovement 6, Movement_Rowan_Walks_Back
	waitmovement 0
	applymovement 5, Movement_Rival_Faces_Left
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Player_Faces_Left
	waitmovement 0
    msgbox Route201_Text_Rowan_Asks, MSGBOX_YESNO
	call_if_eq VAR_RESULT, YES, Route201_EventScript_Discussion_Continues_On
	call_if_eq VAR_RESULT, NO, Route201_EventScript_Barry_Forces_Yes
    end

Route201_EventScript_Starter_Cutscene_4::
    lock
	applymovement 5, Movement_Rival_Faces_Down
	waitmovement 0
    playse SE_PIN
    applymovement 5, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement 5, Common_Movement_Delay48
	waitmovement 0
    msgbox Route201_Text_TooSlow, MSGBOX_SIGN
	applymovement 5, Movement_Rival_Comes_To_You_4
	waitmovement 0
    msgbox Route201_Text_Rival_Mentions_Idea, MSGBOX_SIGN
	applymovement 5, Movement_Rival_Goes_Near_Grass_4
    applymovement OBJ_EVENT_ID_PLAYER, Movement_Player_Goes_Near_Grass_4
	waitmovement 0
    msgbox Route201_Text_Rival_Explains_Its_Fine, MSGBOX_SIGN
	applymovement 5, Movement_Rival_Comes_Closer
	waitmovement 0
	applymovement 5, Movement_Rival_Faces_Down
    applymovement OBJ_EVENT_ID_PLAYER, Movement_Player_Faces_Up
	waitmovement 0
    msgbox Route201_Text_Rival_Explains_More, MSGBOX_SIGN
	applymovement 5, Movement_Rival_Gets_Ready
	waitmovement 0
    msgbox Route201_Text_Rival_Talk_Before_Running, MSGBOX_SIGN
	applymovement 5, Movement_Rival_Almost_Walk_In_Grass
	waitmovement 0
    msgbox Route201_Text_Rowan_Says_Hold, MSGBOX_SIGN
    playse SE_PIN
    applymovement 5, Common_Movement_ExclamationMark
	waitmovement 0
    applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement 5, Common_Movement_Delay48
	waitmovement 0
    playbgm MUS_DP_ROWAN FALSE
    addobject 6
	applymovement 6, Movement_Rowan_Walks_In
	applymovement 5, Movement_Rival_Faces_Left
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Player_Faces_Left
	waitmovement 0
    msgbox Route201_Text_Rowan_Tells_We_Are_Fools, MSGBOX_SIGN
	applymovement 5, Movement_Rival_Faces_Down
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Player_Faces_Up
	waitmovement 0
    msgbox Route201_Text_Rival_Realize_Its_Rowan MSGBOX_SIGN
	applymovement 6, Movement_Rowan_Walks_Left
	waitmovement 0
    msgbox Route201_Text_Rowan_Thinks MSGBOX_SIGN
	applymovement 6, Movement_Rowan_Walks_Back
	waitmovement 0
	applymovement 5, Movement_Rival_Faces_Left
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Player_Faces_Left
	waitmovement 0
    msgbox Route201_Text_Rowan_Asks, MSGBOX_YESNO
	call_if_eq VAR_RESULT, YES, Route201_EventScript_Discussion_Continues_On
	call_if_eq VAR_RESULT, NO, Route201_EventScript_Barry_Forces_Yes
    end

Route201_EventScript_Barry_Forces_Yes::
	applymovement 5, Movement_Rival_Faces_Down
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Player_Faces_Up
	waitmovement 0
	msgbox Route201_Text_Barry_Tells_You_Arent_Making_Sense, MSGBOX_SIGN
	applymovement 5, Movement_Rival_Faces_Left
	waitmovement 0
	msgbox Route201_Text_Rowan_Says_He_Didnt_Listen, MSGBOX_SIGN
    goto Route201_EventScript_Yes_No_1_Copy
	end

Route201_EventScript_Yes_No_1_Copy::
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Player_Faces_Left
	waitmovement 0
    msgbox Route201_Text_Rowan_Asks, MSGBOX_YESNO
	applymovement 5, Movement_Rival_Faces_Left
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Player_Faces_Left
	call_if_eq VAR_RESULT, YES, Route201_EventScript_Discussion_Continues_On
	call_if_eq VAR_RESULT, NO, Route201_EventScript_Barry_Forces_Yes
    end

Route201_EventScript_Discussion_Continues_On::
	msgbox Route201_Text_Rival_Also_Says_Yes, MSGBOX_SIGN
    msgbox Route201_Text_Rival_Continues, MSGBOX_SIGN
    applymovement 5, Movement_Rival_Faces_Down
    applymovement OBJ_EVENT_ID_PLAYER, Movement_Player_Faces_Up
    waitmovement 0
    msgbox Route201_Text_Rival_Asks, MSGBOX_YESNO
	call_if_eq VAR_RESULT, YES, Route201_EventScript_Discussion_Continues_On_Again
	call_if_eq VAR_RESULT, NO, Route201_EventScript_Barry_Forces_Yes_Again
    end

Route201_EventScript_Barry_Forces_Yes_Again::
	msgbox Route201_Text_Joke_Is_Getting_Old, MSGBOX_SIGN
    goto Route201_EventScript_Yes_No_2_Copy
    end

Route201_EventScript_Yes_No_2_Copy::
    applymovement 5, Movement_Rival_Faces_Left
    applymovement OBJ_EVENT_ID_PLAYER, Movement_Player_Faces_Left
    waitmovement 0
    msgbox Route201_Text_Rival_Continues, MSGBOX_SIGN
    applymovement 5, Movement_Rival_Faces_Left
    waitmovement 0
    msgbox Route201_Text_Rival_Asks, MSGBOX_YESNO
	call_if_eq VAR_RESULT, YES, Route201_EventScript_Discussion_Continues_On_Again
	call_if_eq VAR_RESULT, NO, Route201_EventScript_Barry_Forces_Yes_Again
    end

Route201_EventScript_Discussion_Continues_On_Again::
    msgbox Route201_Text_Rowan_Is_Worried, MSGBOX_SIGN
	applymovement 5, Movement_Rival_Faces_Left
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Player_Faces_Left
	waitmovement 0
	msgbox Route201_Text_Rowan_Agress_To_Give_Pokemon MSGBOX_SIGN
	applymovement 6, Movement_Rowan_Faces_Left
	waitmovement 0
    applymovement 6, Common_Movement_Delay48
    waitmovement 0
	applymovement 6, Movement_Rowan_Faces_Right
	waitmovement 0
	checkplayergender
	call_if_eq VAR_RESULT, MALE, SandgemTown_EventScript_Dawn_Comes_In
	call_if_eq VAR_RESULT, FEMALE, SandgemTown_EventScript_Lucas_Comes_In
    end

SandgemTown_EventScript_Dawn_Comes_In::
    playbgm MUS_DP_DAWN FALSE
    addobject 8
    applymovement 8, Movement_Rival_2_Walks_In
    waitmovement 0
	addobject 9
	msgbox Route201_Text_Dawn_Comes_And_Talks MSGBOX_SIGN
    applymovement 6, Movement_Rowan_Faces_Left
    waitmovement 0
    msgbox Route201_Text_Rowan_Talks_To_Dawn MSGBOX_SIGN
    applymovement 6, Movement_Rowan_Faces_Right
    waitmovement 0
    msgbox Route201_Text_Rowan_Gives_Permission MSGBOX_SIGN
    applymovement 5, Movement_Rival_Faces_Down
    applymovement OBJ_EVENT_ID_PLAYER, Movement_Player_Faces_Up
    waitmovement 0
    msgbox Route201_Text_Rival_Says_You_To_Pick_First MSGBOX_SIGN
    applymovement 5, Movement_Rival_Faces_Left
    waitmovement 0
    playbgm MUS_DP_ROUTE201_DAY FALSE
    end

SandgemTown_EventScript_Lucas_Comes_In::
    playbgm MUS_DP_LUCAS FALSE
    addobject 7
    applymovement 7, Movement_Rival_2_Walks_In
    waitmovement 0
    addobject 9 
	msgbox Route201_Text_Lucas_Comes_And_Talks MSGBOX_SIGN
    applymovement 6, Movement_Rowan_Faces_Left
    waitmovement 0
	msgbox Route201_Text_Rowan_Talks_To_Lucas MSGBOX_SIGN
    applymovement 6, Movement_Rowan_Faces_Right
    waitmovement 0
    msgbox Route201_Text_Rowan_Gives_Permission MSGBOX_SIGN
    applymovement 5, Movement_Rival_Faces_Down
    applymovement OBJ_EVENT_ID_PLAYER, Movement_Player_Faces_Up
    waitmovement 0
    msgbox Route201_Text_Rival_Says_You_To_Pick_First MSGBOX_SIGN
    applymovement 5, Movement_Rival_Faces_Left
    waitmovement 0
    playbgm MUS_DP_ROUTE201_DAY FALSE
    end

Route201_EventScript_RowansBag::
	lock
	faceplayer
	setflag FLAG_SYS_POKEMON_GET
    setvar VAR_GOT_STARTER 1
	fadescreen FADE_TO_BLACK
	removeobject LOCALID_ROWANS_BAG
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
	waitmovement 0
	special ChooseStarter
	waitstate
	setflag FLAG_HIDE_ROUTE_201_ROWANS_BAG
    goto Route201_EventScript_After_Picking_Starter
    end

Route201_EventScript_After_Picking_Starter::
    applymovement 6, Movement_Rowan_Faces_Down
    applymovement OBJ_EVENT_ID_PLAYER, Movement_Player_Faces_Up
    waitmovement 0
	switch VAR_STARTER_MON
	case 0, Route201_EventScript_You_Picked_Turtwig
	case 1, Route201_EventScript_You_Picked_Chimchar
	case 2, Route201_EventScript_You_Picked_Piplup
    end

Route201_EventScript_You_Picked_Turtwig::
    msgbox Route201_Text_Rival_Tells_He_Picked_Chimchar MSGBOX_SIGN
    goto Route201_EventScript_Rowan_Leaves
    end

Route201_EventScript_You_Picked_Chimchar::
    msgbox Route201_Text_Rival_Tells_He_Picked_Piplup MSGBOX_SIGN
    goto Route201_EventScript_Rowan_Leaves
    end

Route201_EventScript_You_Picked_Piplup::
    msgbox Route201_Text_Rival_Tells_He_Picked_Turtwig MSGBOX_SIGN
    goto Route201_EventScript_Rowan_Leaves
    end

Route201_EventScript_Rowan_Leaves::
    applymovement 5, Movement_Rival_Moves_To_Side
    applymovement OBJ_EVENT_ID_PLAYER, Movement_Player_Faces_Right
    waitmovement 0
    applymovement 6, Movement_Rowan_Leaves
    waitmovement 0
    removeobject 6
	checkplayergender
	call_if_eq VAR_RESULT, MALE, SandgemTown_EventScript_Dawn_Leaves
	call_if_eq VAR_RESULT, FEMALE, SandgemTown_EventScript_Lucas_Leaves
    end

Route201_EventScript_Rowan_Dialouge::
	msgbox Route201_Text_Rowan_Dialouge, MSGBOX_NPC
	end

Route201_EventScript_Barry_Dialouge::
	msgbox Route201_Text_Barry_Dialouge, MSGBOX_NPC
	end

SandgemTown_EventScript_Dawn_Leaves::
    msgbox Route201_Text_Dawn_Says_Wait_For_Me, MSGBOX_SIGN
    applymovement 8, Movement_Rival_2_Walks_Right
    applymovement OBJ_EVENT_ID_PLAYER, Movement_Player_Faces_Up
    waitmovement 0
    msgbox Route201_Rival2_Apolozises, MSGBOX_SIGN
    applymovement 8, Movement_Rival2_Leaves
    applymovement OBJ_EVENT_ID_PLAYER, Movement_Player_Faces_Right
    waitmovement 8
    removeobject 8
    applymovement 5, Common_Movement_Delay48
    waitmovement 0
    goto SandgemTown_EventScript_Barry_Battles
    end

SandgemTown_EventScript_Lucas_Leaves::
    msgbox Route201_Text_Lucas_Says_Wait_For_Me, MSGBOX_SIGN
    applymovement 7, Movement_Rival_2_Walks_Right
    applymovement OBJ_EVENT_ID_PLAYER, Movement_Player_Faces_Up
    waitmovement 0
    msgbox Route201_Rival2_Apolozises, MSGBOX_SIGN
    applymovement 7, Movement_Rival2_Leaves
    applymovement OBJ_EVENT_ID_PLAYER, Movement_Player_Faces_Right
    waitmovement 7
    removeobject 7
    applymovement 5, Common_Movement_Delay48
    waitmovement 0
    goto SandgemTown_EventScript_Barry_Battles
    end

SandgemTown_EventScript_Barry_Battles::
    msgbox Route201_Text_Barry_Talks_How_Nice_Rowan_Is, MSGBOX_SIGN
    applymovement 5, Common_Movement_Delay48
    waitmovement 0
    applymovement 5, Movement_Rival_Faces_Down
    applymovement OBJ_EVENT_ID_PLAYER, Movement_Player_Faces_Up
    waitmovement 0
    applymovement 5, Common_Movement_Delay48
    waitmovement 0
    applymovement 5, Movement_Barry_Comes_Closer_For_Battle
    waitmovement 0
    msgbox Route201_Text_Barry_Talks_About_Battling, MSGBOX_YESNO
	call_if_eq VAR_RESULT, YES, Route201_EventScript_Barry_Battles
	call_if_eq VAR_RESULT, NO, Route201_EventScript_Barry_Forces_Yes_To_Battle
    end

Route201_EventScript_Barry_Forces_Yes_To_Battle::
    msgbox Route201_Text_Barry_Talks_Whats_That_Attitude, MSGBOX_SIGN
    msgbox Route201_Text_Barry_Talks_About_Battling, MSGBOX_YESNO
	call_if_eq VAR_RESULT, YES, Route201_EventScript_Barry_Battles
	call_if_eq VAR_RESULT, NO, Route201_EventScript_Barry_Forces_Yes_To_Battle
    end

Route201_EventScript_Barry_Battles::
    msgbox Route201_Text_Barry_Talks_Before_Battle, MSGBOX_SIGN
    switch VAR_STARTER_MON
	case 0, Route201_EventScript_Start_Barry_Battle_Turtwig
	case 1, Route201_EventScript_Start_Barry_Battle_Chimchar
	case 2, Route201_EventScript_Start_Barry_Battle_Piplup
    end

Route201_EventScript_Start_Barry_Battle_Turtwig::
	trainerbattle_no_intro_no_whiteout TRAINER_BARRY_ROUTE_201_TURTWIG, Route103_Text_Barry_Defeated
	goto Route201_EventScript_After_Barry_Battle
	end

Route201_EventScript_Start_Barry_Battle_Chimchar::
	trainerbattle_no_intro_no_whiteout TRAINER_BARRY_ROUTE_201_CHIMCHAR, Route103_Text_Barry_Defeated
	goto Route201_EventScript_After_Barry_Battle
	end

Route201_EventScript_Start_Barry_Battle_Piplup::
	trainerbattle_no_intro_no_whiteout TRAINER_BARRY_ROUTE_201_PIPLUP, Route103_Text_Barry_Defeated
	goto Route201_EventScript_After_Barry_Battle
	end

Route201_EventScript_After_Barry_Battle::
    msgbox Route201_Text_Barry_Says_Lets_Go_Home, MSGBOX_SIGN
    special HealPlayerParty
    warpsilent MAP_PLAYERS_HOUSE1F, 1, 4
    setflag FLAG_HIDE_MOM_SITTING
    addobject 2, MAP_PLAYERS_HOUSE1F
    setvar VAR_MOM_TEXT 4
    end

Route201_EventScript_Barry_Takes_You_To_Lake_1::
    lockall
    playse SE_PIN
    applymovement 5, Common_Movement_ExclamationMark
    waitmovement 0
    msgbox Route201_Text_Barry_Is_Done_Waiting, MSGBOX_NPC
    applymovement 5, Movement_Barry_Comes_To_You_1
    waitmovement 0
    msgbox Route201_Text_Barry_Tells_We_Are_Together, MSGBOX_NPC
    setvar VAR_STARTER_MON, 2
    loadword 0 Route201_EventScript_Barry_Talking_While_Following
    setfollower 5 0x100
    end

Route201_EventScript_Barry_Takes_You_To_Lake_2::
    lockall
    playse SE_PIN
    applymovement 5, Common_Movement_ExclamationMark
    waitmovement 0
    msgbox Route201_Text_Barry_Is_Done_Waiting, MSGBOX_NPC
    applymovement 5, Movement_Barry_Comes_To_You_2
    waitmovement 0
    msgbox Route201_Text_Barry_Tells_We_Are_Together, MSGBOX_NPC
    setvar VAR_STARTER_MON, 2
    loadword 0 Route201_EventScript_Barry_Talking_While_Following
    setfollower 5 0x100
    end

Route201_EventScript_Barry_Takes_You_To_Lake_3::
    lockall
    playse SE_PIN
    applymovement 5, Common_Movement_ExclamationMark
    waitmovement 0
    msgbox Route201_Text_Barry_Is_Done_Waiting, MSGBOX_NPC
    applymovement 5, Movement_Barry_Comes_To_You_3
    waitmovement 0
    msgbox Route201_Text_Barry_Tells_We_Are_Together, MSGBOX_NPC
    setvar VAR_STARTER_MON, 2
    loadword 0 Route201_EventScript_Barry_Talking_While_Following
    setfollower 5 0x100
    end

Route201_EventScript_Barry_Takes_You_To_Lake_4::
    lockall
    playse SE_PIN
    applymovement 5, Common_Movement_ExclamationMark
    waitmovement 0
    msgbox Route201_Text_Barry_Is_Done_Waiting, MSGBOX_NPC
    applymovement 5, Movement_Barry_Comes_To_You_4
    waitmovement 0
    msgbox Route201_Text_Barry_Tells_We_Are_Together, MSGBOX_NPC
    setvar VAR_STARTER_MON, 2
    loadword 0 Route201_EventScript_Barry_Talking_While_Following
    setfollower 5 0x100
    end

Route201_EventScript_Barry_Talking_While_Following::
    msgbox Route201_Text_Barry_Tells_Enough_Talking, MSGBOX_NPC
    end

Route201_EventScript_Location_Sign::
	msgbox Route201_Text_Location_Sign, MSGBOX_SIGN
	end

Route201_EventScript_Trianer_Tips::
	msgbox Route201_Text_Trianer_Tips, MSGBOX_SIGN
	end

Route201_EventScript_Location_Sign_1::
	msgbox Route201_Text_Location_Sign_1, MSGBOX_SIGN
	end

Route201_EventScript_Boy::
	msgbox Route201_Text_Boy, MSGBOX_NPC
	end

Route201_EventScript_Girl::
	msgbox Route201_Text_Girl, MSGBOX_NPC
	end

Route201_EventScript_School_Kid::
	msgbox Route201_Text_School_Kid, MSGBOX_NPC
	end

Route201_EventScript_Mart_Guy::
	call_if_unset FLAG_RECEIVED_POTION_Route_201, Route201_EventScript_Mart_Guy_Give_Potion
    call_if_set FLAG_RECEIVED_POTION_Route_201, Route201_EventScript_Mart_Guy_Already_Gave_Potion
	end

Route201_EventScript_Mart_Guy_Give_Potion:
	msgbox Route201_Text_Mart_Guy_Give_Potion, MSGBOX_NPC
	giveitem ITEM_POTION
    playfanfare MUS_OBTAIN_ITEM
    waitfanfare
	goto_if_eq VAR_RESULT, FALSE, Route_201_EventScript_BagIsFull
    setflag FLAG_RECEIVED_POTION_Route_201
    release
    end

Route201_EventScript_Mart_Guy_Already_Gave_Potion:
	msgbox Route201_Text_Mart_Already_Gave_Potion, MSGBOX_NPC
    release
    end

Route_201_EventScript_BagIsFull::
	msgbox gText_TooBadBagIsFull, MSGBOX_DEFAULT
	release
	end

Route201_EventScript_No_Leaving_Before_Picking_Pokemon_1::
    lock
    applymovement 5, Movement_Rival_Faces_Down
    waitmovement 0
	msgbox Route201_Text_Pick_A_Pokemon, MSGBOX_DEFAULT
    applymovement OBJ_EVENT_ID_PLAYER, Movement_Player_Walks_Up
    waitmovement 0
    release
    end

Route201_EventScript_No_Leaving_Before_Picking_Pokemon_2::
    lock
    applymovement 5, Movement_Rival_Faces_Down
    waitmovement 0
	msgbox Route201_Text_Pick_A_Pokemon, MSGBOX_DEFAULT
    applymovement OBJ_EVENT_ID_PLAYER, Movement_Player_Walks_Left
    waitmovement 0
    release
    end

Route201_Text_Location_Sign:
    .string "Rt. 201\n"
    .string "Sandgem Town$"

Route201_Text_Trianer_Tips:
    .string "Trainer Tips\p"
    .string "Don't be shy! Talk to anyone and\n"
    .string "everyone you happen to see.\p"
    .string "By talking to people, you will get\n"
    .string "invalueable information and advice.$"

Route201_Text_Location_Sign_1:
    .string "Rt. 201\n"
    .string "Twinleaf Town$"

Route201_Text_Boy:
    .string "Wild Pokemon lurk in tall grass. They\n"
    .string "can come bursting out at any time.\p"
    .string "So, if you're wanting to battle wild\n"
    .string "Pokemon, just walk in tall grass.\p"
    .string "If you want to avoid wild Pokemon\n"
    .string "then stay out of tall grass.$"

Route201_Text_Girl:
    .string "If your Pokemon's health--that's its\n"
    .string "HP--is getting low, you should go\l"
    .string "home and get some rest.$"

Route201_Text_School_Kid:
    .string "That ledge is one way. Jump down\n"
    .string "for a shortcut to Twinleaf Town!$"

Route201_Text_Mart_Guy_Give_Potion:
    .string "Hi!\n"
    .string "I work at a Pokemon Mart.\p"
    .string "Did you know that a Pokemon's health\n"
    .string "is measured by Hit Points (HP)?\p"
    .string "If a Pokemon Runs out of HP, it\n"
    .string "faints and can't battle anymore.\p"
    .string "If a Pokemon's HP gets low, you\n"
    .string "should heal it with a Potion.\p"
    .string "Here, let me give you a Potion as\n"
    .string "a free sample. First one's free!\p"
    .string "It will automatically go in the\n"
    .string "Medicine Pocket of your Bag.$"

Route201_Text_Mart_Already_Gave_Potion:
    .string "You can find a Pokemon mart in cities\n"
    .string "and most major towns.$"

Route201_Text_TooSlow:
    .string "Too slow!$"

Route201_Text_Rival_Mentions_Idea:
    .string "{B_RIVAL_NAME}: All right!\n"
    .string "Let's get moving to Prof. Rowan's lab.$"

Route201_Text_Rival_Explains_Its_Fine:
    .string "{B_RIVAL_NAME}: ...\n"
    .string "...\p"
    .string "What?\n"
    .string "Don't go into grass, right?\l"
    .string "No worries! No problem!\p"
    .string "It doesn't matter that we don't have\n"
    .string "any Pokemon.\p"
    .string "Trust me on this one.\n"
    .string "I've got an idea!\p"
    .string "Now listen. You know how wild Pokemon\n"
    .string "jump out when you go into tall grass?$"

Route201_Text_Rival_Explains_More:
    .string "So, what you do is, you scoot over to\n"
    .string "the next patch of grass before any\l"
    .string "wild Pokemon can appear!\p"
    .string "If we just keep dashing, we can get to\n"
    .string "Sandgem Town without running into\l"
    .string "wild Pokemon!\p"
    .string "Ok, stick with me!$"

Route201_Text_Rival_Talk_Before_Running:
    .string "Ok, here goes!\p"
    .string "On your marks...$"

Route201_Text_Rowan_Says_Hold:
    .string "Hold it!$"

Route201_Text_Rowan_Tells_We_Are_Fools:
    .string "Professor: You two don't seem to have\n"
    .string "any Pokemon between you?\p"
    .string "Then, what is the meaning of going into\n"
    .string "the tall grass?!\p"
    .string "{PLAYER}: ...\n"
    .string "...\p"
    .string "Professor: ...\n"
    .string "...\p"
    .string "...\n"
    .string "...$"

Route201_Text_Rival_Realize_Its_Rowan:
    .string "{B_RIVAL_NAME}: Hey, {PLAYER}.\n"
    .string "This old guy...\p"
    .string "It's Prof. Rowan isn't it?\n"
    .string "What's he doing here...?$"

Route201_Text_Rowan_Thinks:
    .string "Professor: ...\n"
    .string "...\p"
    .string "They tried to go into the tall grass\n"
    .string "because they wanted Pokemon...\p"
    .string "Hmm...\n"
    .string "What to do...?\p"
    .string "Their world would surely change if\n"
    .string "they were to meet Pokemon...\p"
    .string "Is it right for me to put them on that\n"
    .string "path...?\p"
    .string "...\n"
    .string "...$"

Route201_Text_Rowan_Says_He_Didnt_Listen:
    .string "Professor: Er-hem!\p"
    .string "I didn't quite catch that, so I will\n"
    .string "ask you again.$"

Route201_Text_Rowan_Asks:
    .string "You two.\n"
    .string "You truly love Pokemon, do you?$"

Route201_Text_Barry_Tells_You_Arent_Making_Sense:
    .string "{B_RIVAL_NAME}: Whoa, hold\n"
    .string "You truly love Pokemon, do you?$"

Route201_Text_Rival_Also_Says_Yes:
    .string "{B_RIVAL_NAME}: Me too!\n"
    .string "I love Pokemon, too!?\p"
    .string "Professor: I will ask you once again.\p"
    .string "You two.\n"
    .string "You truly love Pokemon, do you?$"

Route201_Text_Rival_Continues:
    .string "{B_RIVAL_NAME}: What?!\n"
    .string "You can ask a hundred times!\l"
    .string "The answer will never cange!\p"
    .string "We'll both answer a hundred times,\n"
    .string "we love Pokemon!$"

Route201_Text_Rival_Asks:
    .string "Right, {PLAYER}?$"

Route201_Text_Joke_Is_Getting_Old:
    .string "{B_RIVAL_NAME}: ...\n"
    .string "That joke's getting old!$"

Route201_Text_Rowan_Is_Worried:
    .string "Professor: ...A Pair of reckless kids\n"
    .string "who foolishly try to enter tall grass\l"
    .string "without Pokemon of their own...?\p"
    .string "It worries me what people like that\n"
    .string "would do with Pokemon.$"

Route201_Text_Rowan_Agress_To_Give_Pokemon:
    .string "{B_RIVAL_NAME}: ...Uh...\n"
    .string "Well, I, uh...\p"
    .string "...\n"
    .string "...\p"
    .string "Well, then forget about me, but give\n"
    .string "a Pokemon to my friend here!\p"
    .string "I mean, it was me who tried to go into\n"
    .string "the tall grass and all...\p"
    .string "Professor: !\p"
    .string "How big of you...\p"
    .string "Very, well, then!\n"
    .string "I will entrust you two with Pokemon!\p"
    .string "I apologize for putting you through\n"
    .string "that exercise.\p"
    .string "However!\p"
    .string "You must promise me that you will never\n"
    .string "recklessly endanger yourself again.\p"
    .string "Now, then...\p"
    .string "Hm?\n"
    .string "Now, where...?$"

Route201_Text_Lucas_Comes_And_Talks:
    .string "Lucas: Professor Rowan!\p"
    .string "You left your briefcase behind at\n"
    .string "the lake.$"

Route201_Text_Dawn_Comes_And_Talks:
    .string "Dawn: Professor Rowan!\p"
    .string "You left your briefcase behind at\n"
    .string "the lake.$"

Route201_Text_Rowan_Talks_To_Lucas:
    .string "Is something wrong here?\p"
    .string "Rowan: Ah! There it is!\n"
    .string "Lucas, nice work.\p"
    .string "What I was about to do was to entrust\n"
    .string "these two with their own Pokemon.\p"
    .string "Lucas: Wha...?!\p"
    .string "Those pokemon are crucial.\n"
    .string "You're giving them away?\p"
    .string "Rowan: Hm!\p"
    .string "We exist side by side with Pokemon.\p"
    .string "There comes a time when people should\n"
    .string "meet Pokemon.\p"
    .string "There is a world that should be\n"
    .string "explored together.\p"
    .string "For them, today is the time.\n"
    .string "The place, right here.$"

Route201_Text_Rowan_Talks_To_Dawn:
    .string "Is something wrong here?\p"
    .string "Rowan: Ah! There it is!\n"
    .string "Dawn, nice work.\p"
    .string "What I was about to do was to entrust\n"
    .string "these two with their own Pokemon.\p"
    .string "Dawn: Wha...?!\p"
    .string "Those pokemon are crucial.\n"
    .string "You're giving them away?\p"
    .string "Rowan: Hm!\p"
    .string "We exist side by side with Pokemon.\p"
    .string "There comes a time when people should\n"
    .string "meet Pokemon.\p"
    .string "There is a world that should be\n"
    .string "explored together.\p"
    .string "For them, today is the time.\n"
    .string "The place, right here.$"

Route201_Text_Rowan_Gives_Permission:
    .string "Go on! Open the briefcase and choose\n"
    .string "a Pokemon!\p"
    .string "{B_RIVAL_NAME}: Really?!\n"
    .string "Prof. Rowan!\p"
    .string "I can't believe it! I'm so happy now\n"
    .string "that I can't keep a straight face!$"

Route201_Text_Rival_Says_You_To_Pick_First:
    .string "Hey, {PLAYER}!\n"
    .string "You can choose first.\p"
    .string "Hey, I'm practically a grown-up.\n"
    .string "I have to show some class here.$"

Route201_Text_Pick_A_Pokemon:
    .string "{B_RIVAL_NAME}: What's up with you?\n"
    .string "Open the briefcase and pick a Pokemon!$"

Route201_Text_Rowan_Dialouge:
    .string "Rowan: Go on! Open the briefcase and\n"
    .string "choose a Pokemon!$"

Route201_Text_Barry_Dialouge:
    .string "Hey, {PLAYER}.\n"
    .string "You can choose first. Go ahead.\p"
    .string "You know, like, I'm gonna be a man\n"
    .string "about it. Yeah, I'm slick.$"

Route201_Text_Rival_Tells_He_Picked_Chimchar:
    .string "{B_RIVAL_NAME}: Then, I choose you!\n"
    .string "I'm picking this Chimchar!\p"
    .string "Rowan: Very well! Both of you have\n"
    .string "choosen a good Pokemon, it seems.\p"
    .string "Now listen well!\p"
    .string "The Pokemon you have been entrusted\n"
    .string "with are unfimiliar with the world.\p"
    .string "In that regard they're much\n"
    .string "like you.\p"
    .string "As fellow newcomers to the world,\n"
    .string "I hope you'll do well together.\p"
    .string "If you have any trouble, come see me\n"
    .string "at my lab in Sandgem Town.\p"
    .string "And now, we'll be on out way.$"

Route201_Text_Rival_Tells_He_Picked_Piplup:
    .string "{B_RIVAL_NAME}: Then, I choose you!\n"
    .string "I'm picking this Piplup!\p"
    .string "Rowan: Very well! Both of you have\n"
    .string "choosen a good Pokemon, it seems.\p"
    .string "Now listen well!\p"
    .string "The Pokemon you have been entrusted\n"
    .string "with are unfimiliar with the world.\p"
    .string "In that regard they're much\n"
    .string "like you.\p"
    .string "As fellow newcomers to the world,\n"
    .string "I hope you'll do well together.\p"
    .string "If you have any trouble, come see me\n"
    .string "at my lab in Sandgem Town.\p"
    .string "And now, we'll be on our way.$"

Route201_Text_Rival_Tells_He_Picked_Turtwig:
    .string "{B_RIVAL_NAME}: Then, I choose you!\n"
    .string "I'm picking this Turtwig!\p"
    .string "Rowan: Very well! Both of you have\n"
    .string "choosen a good Pokemon, it seems.\p"
    .string "Now listen well!\p"
    .string "The Pokemon you have been entrusted\n"
    .string "with are unfimiliar with the world.\p"
    .string "In that regard they're much\n"
    .string "like you.\p"
    .string "As fellow newcomers to the world,\n"
    .string "I hope you'll do well together.\p"
    .string "If you have any trouble, come see me\n"
    .string "at my lab in Sandgem Town.\p"
    .string "And now, we'll be on our way.$"

Route201_Text_Dawn_Says_Wait_For_Me:
    .string "Dawn: Professor!\n"
    .string "Wait for me, please!$"

Route201_Text_Lucas_Says_Wait_For_Me:
    .string "Lucas: Professor!\n"
    .string "Wait for me, please!$"

Route201_Rival2_Apolozises:
    .string "I'm Sorry...\n"
    .string "Please let me pass.$"

Route201_Text_Barry_Talks_How_Nice_Rowan_Is:
    .string "{B_RIVAL_NAME} How do you like that?\n"
    .string "Prof. Rowan's really nice.\p"
    .string "On TV, he seems so stern and scary.$"

Route201_Text_Barry_Talks_About_Battling:
    .string "Heheh, {PLAYER}!\n"
    .string "We've both got Pokemon now.\p"
    .string "There's only one thing to do, right?\n"
    .string "Are you up for this?$"

Route201_Text_Barry_Talks_Whats_That_Attitude:
    .string "{B_RIVAL_NAME}: What's up with that attitude?\n"
    .string "Don't be that way!$"

Route201_Text_Barry_Talks_Before_Battle:
    .string "I've always wanted to\n"
    .string "say this...\p"
    .string "The time has finally come!\p"
    .string "{PLAYER}!\n"
    .string "I challenge you to a battle!$"

Route103_Text_Barry_Defeated:
    .string "What are you saying?!\n"
    .string "We ended uo losing?!$"

Route201_Text_Barry_Says_Lets_Go_Home:
    .string "{B_RIVAL_NAME}: Whew!\n"
    .string "Let's go home.\p"
    .string "I am beat after that battle.\n"
    .string "My pokemon needs rest too.\p"
    .string "See ya, {PLAYER}!$"

Route201_Text_Barry_Is_Done_Waiting:
    .string "{B_RIVAL_NAME}: Too slow!\n"
    .string "{PLAYER}, I'm sick of waiting!\p"
    .string "I'm going to go see Prof. Rowan, so I\n"
    .string "can thank him properly.\p"
    .string "So, I had this reat idea.\n"
    .string "Listen up, OK?\p"
    .string "You know that lake we always\n"
    .string "play at?\p"
    .string "You know how they say a legendary\n"
    .string "Pokemon lives there?\p"
    .string "You guessed it!\n"
    .string "Let's catch that Pokemon.\p"
    .string "That'll make Prof. Rowan happy.\n"
    .string "I'm sure of that.$"

Route201_Text_Barry_Tells_We_Are_Together:
    .string "Me and you together,\n"
    .string "we've got nothing to fear!$"

Route201_Text_Barry_Tells_Enough_Talking:
    .string "{B_RIVAL_NAME}: Hey, that's enough\n"
    .string "talking already.\p"
    .string "I'm itching to get to the lake.\n"
    .string "Come on, come on!$"

Movement_Rival_Faces_Down:
	face_down
	step_end

Movement_Rival_Comes_To_You_1:
	walk_fast_down
	walk_fast_left
	walk_fast_left
    face_down
	step_end

Movement_Rival_Comes_To_You_2:
	walk_fast_down
	walk_fast_left
    face_down
	step_end

Movement_Rival_Comes_To_You_3:
	walk_fast_down
	step_end

Movement_Rival_Comes_To_You_4:
	walk_fast_down
    walk_fast_right
    face_down
	step_end

Movement_Rival_Goes_Near_Grass_1:
    walk_up
    walk_right
    walk_right
    walk_right
    walk_right
    walk_up
    walk_up
    walk_right
	step_end

Movement_Player_Goes_Near_Grass_1:
    walk_up
    walk_up
    walk_right
    walk_right
    walk_right
    walk_up
    walk_right
	step_end

Movement_Rival_Goes_Near_Grass_2:
    walk_up
    walk_right
    walk_right
    walk_right
    walk_up
    walk_up
    walk_right
	step_end

Movement_Player_Goes_Near_Grass_2:
    walk_up
    walk_up
    walk_right
    walk_right
    walk_up
    walk_right
	step_end

Movement_Rival_Goes_Near_Grass_3:
    walk_up
    walk_right
    walk_right
    walk_up
    walk_up
    walk_right
	step_end

Movement_Player_Goes_Near_Grass_3:
    walk_up
    walk_up
    walk_right
    walk_up
    walk_right
	step_end

Movement_Rival_Goes_Near_Grass_4:
    walk_up
    walk_right
    walk_up
    walk_up
    walk_right
	step_end

Movement_Player_Goes_Near_Grass_4:
    walk_up
    walk_up
    walk_up
    walk_right
	step_end

Movement_Rival_Comes_Closer:
    walk_left
    step_end

Movement_Player_Faces_Up:
    face_up
    step_end

Movement_Rival_Gets_Ready:
    walk_left
    walk_left
    walk_left
    face_right
    step_end

Movement_Rival_Almost_Walk_In_Grass:
    walk_fast_right
    walk_fast_right
    walk_fast_right
    step_end

Movement_Rowan_Walks_In:
    walk_fast_right
    walk_fast_right
    walk_fast_right
    walk_fast_right
    walk_fast_right
    walk_fast_right
    step_end

Movement_Rowan_Walks_Left:
    walk_left
    walk_left
    walk_left
    step_end

Movement_Rowan_Walks_Back:
    walk_fast_right
    walk_fast_right
    walk_fast_right
    step_end

Movement_Rival_Faces_Left:
    face_left
    step_end

Movement_Rival_2_Walks_In:
    walk_right
    walk_right
    walk_right
    walk_right
    walk_right
    step_end

Movement_Rowan_Faces_Left:
    face_left
    step_end

Movement_Rowan_Faces_Right:
    face_right
    step_end

Movement_Player_Walks_Up:
    walk_up
    step_end

Movement_Player_Walks_Left:
    walk_left
    step_end

Movement_Player_Faces_Left:
    face_left
    step_end

Movement_Rowan_Faces_Down:
    face_down
    step_end

Movement_Rival_Moves_To_Side:
    walk_up
    face_down
    step_end

Movement_Player_Faces_Right:
    face_right
    step_end

Movement_Rowan_Leaves:
    walk_right
    walk_right
    walk_right
    walk_right
    walk_right
    walk_right
    walk_right
    step_end

Movement_Rival_2_Walks_Right:
    walk_right
    step_end

Movement_Rival2_Leaves:
    walk_right
    walk_right
    walk_right
    walk_right
    walk_right
    walk_right
    walk_right
    step_end
    
Movement_Barry_Comes_Closer_For_Battle:
    walk_fast_left
    walk_fast_down
    step_end

Movement_Barry_Comes_To_You_1:
    walk_fast_left
    walk_fast_left
    face_down
    step_end

Movement_Barry_Comes_To_You_2:
    walk_fast_left
    face_down
    step_end

Movement_Barry_Comes_To_You_3:
    walk_fast_left
    face_down
    step_end

Movement_Barry_Comes_To_You_4:
    walk_fast_right
    face_down
    step_end
