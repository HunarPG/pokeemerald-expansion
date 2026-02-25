Sandgem_Town_Proffesor_Rowans_Lab_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Sandgem_Town_Proffesor_Rowans_Lab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Sandgem_Town_Proffesor_Rowans_Lab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
	map_script_2 VAR_ROWANS_LAB_STATE, 0, Sandgem_Town_Proffesor_Rowans_Lab_EventScript_Reached_First_Time_Event
	.2byte 0


Sandgem_Town_Proffesor_Rowans_Lab_EventScript_Reached_First_Time_Event::
	delay 30
	applymovement LOCALID_RIVAL_ROWAN_LAB, Sandgem_Town_Proffesor_Rowans_Lab_EventScript_Reached_First_Time_Event_Movement_0
	applymovement OBJ_EVENT_ID_PLAYER, Sandgem_Town_Proffesor_Rowans_Lab_EventScript_Reached_First_Time_Event_Movement_1
	waitmovement 0
	switch VAR_STARTER_MON
	case 0, Sandgem_Town_Proffesor_Rowans_Lab_EventScript_Reached_First_Time_Event_2
	case 1, Sandgem_Town_Proffesor_Rowans_Lab_EventScript_Reached_First_Time_Event_3
	case 2, Sandgem_Town_Proffesor_Rowans_Lab_EventScript_Reached_First_Time_Event_4
	return

Sandgem_Town_Proffesor_Rowans_Lab_EventScript_Reached_First_Time_Event_2:
	goto Sandgem_Town_Proffesor_Rowans_Lab_EventScript_Turtwig
	return

Sandgem_Town_Proffesor_Rowans_Lab_EventScript_Reached_First_Time_Event_3:
	goto Sandgem_Town_Proffesor_Rowans_Lab_EventScript_Chimchar
	return

Sandgem_Town_Proffesor_Rowans_Lab_EventScript_Reached_First_Time_Event_4:
	goto Sandgem_Town_Proffesor_Rowans_Lab_EventScript_Piplup
	return


Sandgem_Town_Proffesor_Rowans_Lab_EventScript_Turtwig::
	msgbox Sandgem_Town_Proffesor_Rowans_Lab_EventScript_Turtwig_Text_0, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, Sandgem_Town_Proffesor_Rowans_Lab_EventScript_NicknameStarter
	goto_if_eq VAR_RESULT, NO, Sandgem_Town_Proffesor_Rowans_Lab_EventScript_Script_Continues
	return


Sandgem_Town_Proffesor_Rowans_Lab_EventScript_Chimchar::
	msgbox Sandgem_Town_Proffesor_Rowans_Lab_EventScript_Chimchar_Text_0, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, Sandgem_Town_Proffesor_Rowans_Lab_EventScript_NicknameStarter
	goto_if_eq VAR_RESULT, NO, Sandgem_Town_Proffesor_Rowans_Lab_EventScript_Script_Continues
	return


Sandgem_Town_Proffesor_Rowans_Lab_EventScript_Piplup::
	msgbox Sandgem_Town_Proffesor_Rowans_Lab_EventScript_Piplup_Text_0, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, Sandgem_Town_Proffesor_Rowans_Lab_EventScript_NicknameStarter
	goto_if_eq VAR_RESULT, NO, Sandgem_Town_Proffesor_Rowans_Lab_EventScript_Script_Continues
	return


Sandgem_Town_Proffesor_Rowans_Lab_EventScript_NicknameStarter::
	setvar VAR_0x8004, 0
	call Common_EventScript_NameReceivedPartyMon
	goto Sandgem_Town_Proffesor_Rowans_Lab_EventScript_Script_Continues
	return


Sandgem_Town_Proffesor_Rowans_Lab_EventScript_Script_Continues::
	switch VAR_STARTER_MON
	case 0, Sandgem_Town_Proffesor_Rowans_Lab_EventScript_Script_Continues_2
	case 1, Sandgem_Town_Proffesor_Rowans_Lab_EventScript_Script_Continues_3
	case 2, Sandgem_Town_Proffesor_Rowans_Lab_EventScript_Script_Continues_4
	return

Sandgem_Town_Proffesor_Rowans_Lab_EventScript_Script_Continues_2:
	goto Sandgem_Town_Proffesor_Rowans_Lab_EventScript_Script_Continues_Turtwig
	return

Sandgem_Town_Proffesor_Rowans_Lab_EventScript_Script_Continues_3:
	goto Sandgem_Town_Proffesor_Rowans_Lab_EventScript_Script_Continues_Chimchar
	return

Sandgem_Town_Proffesor_Rowans_Lab_EventScript_Script_Continues_4:
	goto Sandgem_Town_Proffesor_Rowans_Lab_EventScript_Script_Continues_Piplup
	return


Sandgem_Town_Proffesor_Rowans_Lab_EventScript_Script_Continues_Turtwig::
	msgbox Sandgem_Town_Proffesor_Rowans_Lab_EventScript_Script_Continues_Turtwig_Text_0, MSGBOX_SIGN
	checkplayergender
	goto Sandgem_Town_Proffesor_Rowans_Lab_EventScript_TalK_With_Rival
	return


Sandgem_Town_Proffesor_Rowans_Lab_EventScript_Script_Continues_Chimchar::
	msgbox Sandgem_Town_Proffesor_Rowans_Lab_EventScript_Script_Continues_Chimchar_Text_0, MSGBOX_SIGN
	checkplayergender
	goto Sandgem_Town_Proffesor_Rowans_Lab_EventScript_TalK_With_Rival
	return


Sandgem_Town_Proffesor_Rowans_Lab_EventScript_Script_Continues_Piplup::
	msgbox Sandgem_Town_Proffesor_Rowans_Lab_EventScript_Script_Continues_Piplup_Text_0, MSGBOX_SIGN
	goto Sandgem_Town_Proffesor_Rowans_Lab_EventScript_TalK_With_Rival
	return


Sandgem_Town_Proffesor_Rowans_Lab_EventScript_TalK_With_Rival::
	applymovement LOCALID_RIVAL_ROWAN_LAB, Sandgem_Town_Proffesor_Rowans_Lab_EventScript_TalK_With_Rival_Movement_0
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Sandgem_Town_Proffesor_Rowans_Lab_EventScript_TalK_With_Rival_Movement_1
	waitmovement 0
	compare VAR_RESULT, MALE
	goto_if_eq Sandgem_Town_Proffesor_Rowans_Lab_EventScript_TalK_With_Rival_2
	compare VAR_RESULT, FEMALE
	goto_if_eq Sandgem_Town_Proffesor_Rowans_Lab_EventScript_TalK_With_Rival_3
Sandgem_Town_Proffesor_Rowans_Lab_EventScript_TalK_With_Rival_1:
	applymovement LOCALID_RIVAL_ROWAN_LAB, Sandgem_Town_Proffesor_Rowans_Lab_EventScript_TalK_With_Rival_Movement_0
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Sandgem_Town_Proffesor_Rowans_Lab_EventScript_TalK_With_Rival_Movement_2
	waitmovement 0
	goto Sandgem_Town_Proffesor_Rowans_Lab_EventScript_Rowans_Main_Topic
	return

Sandgem_Town_Proffesor_Rowans_Lab_EventScript_TalK_With_Rival_2:
	msgbox Sandgem_Town_Proffesor_Rowans_Lab_EventScript_TalK_With_Rival_Text_0, MSGBOX_SIGN
	goto Sandgem_Town_Proffesor_Rowans_Lab_EventScript_TalK_With_Rival_1

Sandgem_Town_Proffesor_Rowans_Lab_EventScript_TalK_With_Rival_3:
	msgbox Sandgem_Town_Proffesor_Rowans_Lab_EventScript_TalK_With_Rival_Text_1, MSGBOX_SIGN
	goto Sandgem_Town_Proffesor_Rowans_Lab_EventScript_TalK_With_Rival_1


Sandgem_Town_Proffesor_Rowans_Lab_EventScript_Rowans_Main_Topic::
	fadenewbgm MUS_DP_ROWAN
	msgbox Sandgem_Town_Proffesor_Rowans_Lab_EventScript_Rowans_Main_Topic_Text_0, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, Sandgem_Town_Proffesor_Rowans_Lab_EventScript_Rowans_Continues_On
	goto_if_eq VAR_RESULT, NO, Sandgem_Town_Proffesor_Rowans_Lab_EventScript_Rowans_Forces_Yes
	return


Sandgem_Town_Proffesor_Rowans_Lab_EventScript_Rowans_Forces_Yes::
	msgbox Sandgem_Town_Proffesor_Rowans_Lab_EventScript_Rowans_Forces_Yes_Text_0, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, Sandgem_Town_Proffesor_Rowans_Lab_EventScript_Rowans_Continues_On
	goto_if_eq VAR_RESULT, NO, Sandgem_Town_Proffesor_Rowans_Lab_EventScript_Rowans_Forces_Yes
	return


Sandgem_Town_Proffesor_Rowans_Lab_EventScript_Rowans_Continues_On::
	msgbox Sandgem_Town_Proffesor_Rowans_Lab_EventScript_Rowans_Continues_On_Text_0, MSGBOX_SIGN
	playfanfare MUS_DP_OBTAIN_KEY_ITEM
	setflag FLAG_SYS_POKEDEX_GET
	msgbox Sandgem_Town_Proffesor_Rowans_Lab_EventScript_Rowans_Continues_On_Text_1, MSGBOX_SIGN
	msgbox Sandgem_Town_Proffesor_Rowans_Lab_EventScript_Rowans_Continues_On_Text_2, MSGBOX_SIGN
	goto Sandgem_Town_Proffesor_Rowans_Lab_EventScript_Rival_Talks_About_Pokedex
	return


Sandgem_Town_Proffesor_Rowans_Lab_EventScript_Rival_Talks_About_Pokedex::
	applymovement LOCALID_RIVAL_ROWAN_LAB, Sandgem_Town_Proffesor_Rowans_Lab_EventScript_TalK_With_Rival_Movement_0
	waitmovement 0
	checkplayergender
	compare VAR_RESULT, MALE
	goto_if_eq Sandgem_Town_Proffesor_Rowans_Lab_EventScript_Rival_Talks_About_Pokedex_2
	compare VAR_RESULT, FEMALE
	goto_if_eq Sandgem_Town_Proffesor_Rowans_Lab_EventScript_Rival_Talks_About_Pokedex_3
Sandgem_Town_Proffesor_Rowans_Lab_EventScript_Rival_Talks_About_Pokedex_1:
	applymovement LOCALID_RIVAL_ROWAN_LAB, Sandgem_Town_Proffesor_Rowans_Lab_EventScript_TalK_With_Rival_Movement_0
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Sandgem_Town_Proffesor_Rowans_Lab_EventScript_TalK_With_Rival_Movement_1
	waitmovement 0
	checkplayergender
	compare VAR_RESULT, MALE
	goto_if_eq Sandgem_Town_Proffesor_Rowans_Lab_EventScript_Rival_Talks_About_Pokedex_6
	compare VAR_RESULT, FEMALE
	goto_if_eq Sandgem_Town_Proffesor_Rowans_Lab_EventScript_Rival_Talks_About_Pokedex_7
	return

Sandgem_Town_Proffesor_Rowans_Lab_EventScript_Rival_Talks_About_Pokedex_2:
	msgbox Sandgem_Town_Proffesor_Rowans_Lab_EventScript_Rival_Talks_About_Pokedex_Text_0, MSGBOX_SIGN
	goto Sandgem_Town_Proffesor_Rowans_Lab_EventScript_Rival_Talks_About_Pokedex_1

Sandgem_Town_Proffesor_Rowans_Lab_EventScript_Rival_Talks_About_Pokedex_3:
	msgbox Sandgem_Town_Proffesor_Rowans_Lab_EventScript_Rival_Talks_About_Pokedex_Text_1, MSGBOX_SIGN
	goto Sandgem_Town_Proffesor_Rowans_Lab_EventScript_Rival_Talks_About_Pokedex_1

Sandgem_Town_Proffesor_Rowans_Lab_EventScript_Rival_Talks_About_Pokedex_6:
	switch VAR_STARTER_MON
	case 0, Sandgem_Town_Proffesor_Rowans_Lab_EventScript_Rival_Talks_About_Pokedex_11
	case 1, Sandgem_Town_Proffesor_Rowans_Lab_EventScript_Rival_Talks_About_Pokedex_12
	case 2, Sandgem_Town_Proffesor_Rowans_Lab_EventScript_Rival_Talks_About_Pokedex_13
	return

Sandgem_Town_Proffesor_Rowans_Lab_EventScript_Rival_Talks_About_Pokedex_7:
	goto Sandgem_Town_Proffesor_Rowans_Lab_EventScript_Lucas_Talks_About_First_Mon
	return

Sandgem_Town_Proffesor_Rowans_Lab_EventScript_Rival_Talks_About_Pokedex_11:
	goto Sandgem_Town_Proffesor_Rowans_Lab_EventScript_Dawn_Talks_About_First_Mon_Piplup
	return

Sandgem_Town_Proffesor_Rowans_Lab_EventScript_Rival_Talks_About_Pokedex_12:
	goto Sandgem_Town_Proffesor_Rowans_Lab_EventScript_Dawn_Talks_About_First_Mon_Turtwig
	return

Sandgem_Town_Proffesor_Rowans_Lab_EventScript_Rival_Talks_About_Pokedex_13:
	goto Sandgem_Town_Proffesor_Rowans_Lab_EventScript_Dawn_Talks_About_First_Mon_Chimchar
	return


Sandgem_Town_Proffesor_Rowans_Lab_EventScript_Dawn_Talks_About_First_Mon_Piplup::
	msgbox Sandgem_Town_Proffesor_Rowans_Lab_EventScript_Dawn_Talks_About_First_Mon_Piplup_Text_0, MSGBOX_SIGN
	goto Sandgem_Town_Proffesor_Rowans_Lab_EventScript_Rival_Leaves
	return


Sandgem_Town_Proffesor_Rowans_Lab_EventScript_Dawn_Talks_About_First_Mon_Turtwig::
	msgbox Sandgem_Town_Proffesor_Rowans_Lab_EventScript_Dawn_Talks_About_First_Mon_Turtwig_Text_0, MSGBOX_SIGN
	goto Sandgem_Town_Proffesor_Rowans_Lab_EventScript_Rival_Leaves
	return


Sandgem_Town_Proffesor_Rowans_Lab_EventScript_Dawn_Talks_About_First_Mon_Chimchar::
	msgbox Sandgem_Town_Proffesor_Rowans_Lab_EventScript_Dawn_Talks_About_First_Mon_Chimchar_Text_0, MSGBOX_SIGN
	goto Sandgem_Town_Proffesor_Rowans_Lab_EventScript_Rival_Leaves
	return


Sandgem_Town_Proffesor_Rowans_Lab_EventScript_Lucas_Talks_About_First_Mon::
	msgbox Sandgem_Town_Proffesor_Rowans_Lab_EventScript_Lucas_Talks_About_First_Mon_Text_0, MSGBOX_SIGN
	goto Sandgem_Town_Proffesor_Rowans_Lab_EventScript_Rival_Leaves
	return


Sandgem_Town_Proffesor_Rowans_Lab_EventScript_Rival_Leaves::
	applymovement OBJ_EVENT_ID_PLAYER, Sandgem_Town_Proffesor_Rowans_Lab_EventScript_Rival_Leaves_Movement_0
	applymovement LOCALID_RIVAL_ROWAN_LAB, Sandgem_Town_Proffesor_Rowans_Lab_EventScript_Rival_Leaves_Movement_1
	waitmovement 0
	setvar VAR_ROWANS_LAB_STATE, 1
	removeobject LOCALID_RIVAL_ROWAN_LAB
	setflag FLAG_HIDE_RIVAL_IN_SANDGEM_LAB
	setvar VAR_SANDGEM_TOWN_STATE, 1
	end


Sandgem_Town_Proffesor_Rowans_Lab_Rowan::
	switch VAR_SANDGEM_TOWN_STATE
	case 1, Sandgem_Town_Proffesor_Rowans_Lab_Rowan_2
	case 2, Sandgem_Town_Proffesor_Rowans_Lab_Rowan_3
	return

Sandgem_Town_Proffesor_Rowans_Lab_Rowan_2:
	goto Sandgem_Town_Proffesor_Rowans_Lab_Rowan_Grand_Adventure
	return

Sandgem_Town_Proffesor_Rowans_Lab_Rowan_3:
	goto Sandgem_Town_Proffesor_Rowans_Lab_Rowan_Check_Pokedex_Progress
	return


Sandgem_Town_Proffesor_Rowans_Lab_Rowan_Grand_Adventure::
	msgbox Sandgem_Town_Proffesor_Rowans_Lab_Rowan_Grand_Adventure_Text_0, MSGBOX_NPC
	end


Sandgem_Town_Proffesor_Rowans_Lab_Rowan_Check_Pokedex_Progress::
	lock
	faceplayer
	msgbox Sandgem_Town_Proffesor_Rowans_Lab_Rowan_Check_Pokedex_Progress_Text_0, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, Sandgem_Town_Proffesor_Rowans_Lab_Rowan_Check_Pokedex_Progress_No
	goto_if_eq VAR_RESULT, NO, Sandgem_Town_Proffesor_Rowans_Lab_Rowan_Check_Pokedex_Progress_Yes
	return


Sandgem_Town_Proffesor_Rowans_Lab_Rowan_Check_Pokedex_Progress_No::
	msgbox Sandgem_Town_Proffesor_Rowans_Lab_Rowan_Check_Pokedex_Progress_No_Text_0, MSGBOX_SIGN
	release
	end


Sandgem_Town_Proffesor_Rowans_Lab_Rowan_Check_Pokedex_Progress_Yes::
	release
	end


Sandgem_Town_Proffesor_Rowans_Lab_Book_Shelf_Trainer_Tip_1::
	msgbox Sandgem_Town_Proffesor_Rowans_Lab_Book_Shelf_Trainer_Tip_1_Text_0, MSGBOX_SIGN
	return


Sandgem_Town_Proffesor_Rowans_Lab_Book_Shelf_Trainer_Tip_2::
	msgbox Sandgem_Town_Proffesor_Rowans_Lab_Book_Shelf_Trainer_Tip_2_Text_0, MSGBOX_SIGN
	return


Sandgem_Town_Proffesor_Rowans_Lab_Book_Shelf_Pokemon_Information::
	msgbox Sandgem_Town_Proffesor_Rowans_Lab_Book_Shelf_Pokemon_Information_Text_0, MSGBOX_SIGN
	return


Sandgem_Town_Proffesor_Rowans_Lab_Book_Shelf_Reference_Material::
	msgbox Sandgem_Town_Proffesor_Rowans_Lab_Book_Shelf_Reference_Material_Text_0, MSGBOX_SIGN
	return


Sandgem_Town_Proffesor_Rowans_Lab_Pc::
	msgbox Sandgem_Town_Proffesor_Rowans_Lab_Pc_Text_0, MSGBOX_SIGN
	return


Sandgem_Town_Proffesor_Rowans_Lab_Refrigerator::
	msgbox Sandgem_Town_Proffesor_Rowans_Lab_Refrigerator_Text_0, MSGBOX_SIGN
	return


Sandgem_Town_Proffesor_Rowans_Lab_Female_Scientist::
	msgbox Sandgem_Town_Proffesor_Rowans_Lab_Female_Scientist_Text_0, MSGBOX_NPC
	return


Sandgem_Town_Proffesor_Rowans_Lab_Male_Scientist::
	compare VAR_RESULT, MALE
	goto_if_eq Sandgem_Town_Proffesor_Rowans_Lab_Male_Scientist_1
	compare VAR_RESULT, FEMALE
	goto_if_eq Sandgem_Town_Proffesor_Rowans_Lab_Male_Scientist_2
	return

Sandgem_Town_Proffesor_Rowans_Lab_Male_Scientist_1:
	msgbox Sandgem_Town_Proffesor_Rowans_Lab_Male_Scientist_Text_0, MSGBOX_NPC
	return

Sandgem_Town_Proffesor_Rowans_Lab_Male_Scientist_2:
	msgbox Sandgem_Town_Proffesor_Rowans_Lab_Male_Scientist_Text_1, MSGBOX_NPC
	return


Sandgem_Town_Proffesor_Rowans_Lab_EventScript_Reached_First_Time_Event_Movement_0:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_right
	face_left
	step_end

Sandgem_Town_Proffesor_Rowans_Lab_EventScript_Reached_First_Time_Event_Movement_1:
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

Sandgem_Town_Proffesor_Rowans_Lab_EventScript_TalK_With_Rival_Movement_0:
	walk_in_place_left
	step_end

Sandgem_Town_Proffesor_Rowans_Lab_EventScript_TalK_With_Rival_Movement_1:
	face_right
	step_end

Sandgem_Town_Proffesor_Rowans_Lab_EventScript_TalK_With_Rival_Movement_2:
	face_up
	step_end

Sandgem_Town_Proffesor_Rowans_Lab_EventScript_Rival_Leaves_Movement_0:
	face_down
	step_end

Sandgem_Town_Proffesor_Rowans_Lab_EventScript_Rival_Leaves_Movement_1:
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

Sandgem_Town_Proffesor_Rowans_Lab_EventScript_Turtwig_Text_0:
	.string "Professor: Well, well, look who's here.\p"
	.string "{PLAYER}, was it?\n"
	.string "Let's have a look at your Pokémon.\p"
	.string "...\p"
	.string "Hm...\n"
	.string "I see...\p"
	.string "This Pokémon seems to be rather\n"
	.string "happy.\p"
	.string "Hm!\p"
	.string "Entrusting you with that Turtwig\n"
	.string "was no mistake it seems!\p"
	.string "Professor: Well, would you like to give\n"
	.string "it a nickname?$"

Sandgem_Town_Proffesor_Rowans_Lab_EventScript_Chimchar_Text_0:
	.string "Professor: Well, well, look who's here.\p"
	.string "{PLAYER}, was it?\n"
	.string "Let's have a look at your Pokémon.\p"
	.string "...\p"
	.string "Hm...\n"
	.string "I see...\p"
	.string "This Pokémon seems to be rather\n"
	.string "happy.\p"
	.string "Hm!\p"
	.string "Entrusting you with that Chimchar\n"
	.string "was no mistake it seems!\p"
	.string "Professor: Well, would you like to give\n"
	.string "it a nickname?$"

Sandgem_Town_Proffesor_Rowans_Lab_EventScript_Piplup_Text_0:
	.string "Professor: Well, well, look who's here.\p"
	.string "{PLAYER}, was it?\n"
	.string "Let's have a look at your Pokémon.\p"
	.string "...\p"
	.string "Hm...\n"
	.string "I see...\p"
	.string "This Pokémon seems to be rather\n"
	.string "happy.\p"
	.string "Hm!\p"
	.string "Entrusting you with that Piplup\n"
	.string "was no mistake it seems!\p"
	.string "Professor: Well, would you like to give\n"
	.string "it a nickname?$"

Sandgem_Town_Proffesor_Rowans_Lab_EventScript_Script_Continues_Turtwig_Text_0:
	.string "Professor: When I first saw you two\n"
	.string "about to step into the tall grass\l"
	.string "without Pokémon, I was shocked.\p"
	.string "I was astounded by these foolhardy\n"
	.string "children.\p"
	.string "But now, you've astounded me in an\n"
	.string "entirely different way.\p"
	.string "Already, there is a bond growing\n"
	.string "between you and that Pokémon.\p"
	.string "I feel priviliged to have met you.\p"
	.string "I'm sure Turtwig feels the same\n"
	.string "way about you.\p"
	.string "That's why I'll ask you to cherish that\n"
	.string "Turtwig of yours.$"

Sandgem_Town_Proffesor_Rowans_Lab_EventScript_Script_Continues_Chimchar_Text_0:
	.string "Professor: When I first saw you two\n"
	.string "about to step into the tall grass\l"
	.string "without Pokémon, I was shocked.\p"
	.string "I was astounded by these foolhardy\n"
	.string "children.\p"
	.string "But now, you've astounded me in an\n"
	.string "entirely different way.\p"
	.string "Already, there is a bond growing\n"
	.string "between you and that Pokémon.\p"
	.string "I feel priviliged to have met you.\p"
	.string "I'm sure Chimchar feels the same\n"
	.string "way about you.\p"
	.string "That's why I'll ask you to cherish that\n"
	.string "Chimchar of yours.$"

Sandgem_Town_Proffesor_Rowans_Lab_EventScript_Script_Continues_Piplup_Text_0:
	.string "Professor: When I first saw you two\n"
	.string "about to step into the tall grass\l"
	.string "without Pokémon, I was shocked.\p"
	.string "I was astounded by these foolhardy\n"
	.string "children.\p"
	.string "But now, you've astounded me in an\n"
	.string "entirely different way.\p"
	.string "Already, there is a bond growing\n"
	.string "between you and that Pokémon.\p"
	.string "I feel priviliged to have met you.\p"
	.string "I'm sure Piplup feels the same\n"
	.string "way about you.\p"
	.string "That's why I'll ask you to cherish that\n"
	.string "Piplup of yours.$"

Sandgem_Town_Proffesor_Rowans_Lab_EventScript_TalK_With_Rival_Text_0:
	.string "Dawn: I'm so glad that you're kind\n"
	.string "toward Pokémon!\p"
	.string "If you weren't, I'd have to...\n"
	.string "Oh, I just can't say it...$"

Sandgem_Town_Proffesor_Rowans_Lab_EventScript_TalK_With_Rival_Text_1:
	.string "Lucas: Boy, am I glad you're kind\n"
	.string "toward Pokémon.\p"
	.string "If you weren't, well...\n"
	.string "I don't even want to think about it.$"

Sandgem_Town_Proffesor_Rowans_Lab_EventScript_Rowans_Main_Topic_Text_0:
	.string "Professor: Er-hem!\n"
	.string "Let's move on to the main topic.\p"
	.string "There is something I want you to do\n"
	.string "for me.\p"
	.string "Allow me to properly introduce myself\n"
	.string "first.\p"
	.string "My name, as you know, is Rowan.\n"
	.string "I study Pokémon.\p"
	.string "First of all, I want to know exactly\n"
	.string "what kinds of Pokémon live in the\l"
	.string "Sinnoh region.\p"
	.string "To do so, it is necessary to collect\n"
	.string "data using Pokedex.\p"
	.string "That is what I wish to ask you.\p"
	.string "I want to entrust you with this\n"
	.string "Pokedex.\p"
	.string "Will you use it to record data on all\n"
	.string "the Pokémon in Sinnoh for me?$"

Sandgem_Town_Proffesor_Rowans_Lab_EventScript_Rowans_Forces_Yes_Text_0:
	.string "Rowan:...\p"
	.string "...\p"
	.string "...\p"
	.string "I can stand here without speaking for\n"
	.string "hours. I'm a very patient man.\p"
	.string "I want to entrust you with this\n"
	.string "Pokedex.\p"
	.string "Will you use it to record data on all\n"
	.string "the Pokémon in Sinnoh for me?$"

Sandgem_Town_Proffesor_Rowans_Lab_EventScript_Rowans_Continues_On_Text_0:
	.string "Rowan: Hm!\p"
	.string "Good Answer!$"

Sandgem_Town_Proffesor_Rowans_Lab_EventScript_Rowans_Continues_On_Text_1:
	.string "{PLAYER} obtained\n"
	.string "the Pokedex!$"

Sandgem_Town_Proffesor_Rowans_Lab_EventScript_Rowans_Continues_On_Text_2:
	.string "Rowan: That Pokedex is a very\n"
	.string "high-tech device.\p"
	.string "It will automatically record data on\n"
	.string "every kind of Pokémon you encounter.\p"
	.string "{PLAYER}, I ask that you go\n"
	.string "everywhere and meet every kind of\l"
	.string "Pokémon in this region!$"

Sandgem_Town_Proffesor_Rowans_Lab_EventScript_Rival_Talks_About_Pokedex_Text_0:
	.string "Dawn: I've got one, too!\p"
	.string "Rowan: When you walked up Route 201\n"
	.string "with your Pokémon, what did you feel?\p"
	.string "I've lived for 60 long years.\n"
	.string "Even now, I get a thrill when\p"
	.string "I'm with a Pokémon.\p"
	.string "Now, you should know that there are\n"
	.string "countless Pokémon in this world.\p"
	.string "That means there are just as many\n"
	.string "thrills waiting for you out here!\p"
	.string "Now go!\p"
	.string "{PLAYER}, your grand adventure\n"
	.string "begins right now!$"

Sandgem_Town_Proffesor_Rowans_Lab_EventScript_Rival_Talks_About_Pokedex_Text_1:
	.string "Lucas: I've got the same kind of\n"
	.string "Pokédex as you.\p"
	.string "Rowan: When you walked up Route 201\n"
	.string "with your Pokémon, what did you feel?\p"
	.string "I've lived for 60 long years.\n"
	.string "Even now, I get a thrill when\p"
	.string "I'm with a Pokémon.\p"
	.string "Now, you should know that there are\n"
	.string "countless Pokémon in this world.\p"
	.string "That means there are just as many\n"
	.string "thrills waiting for you out here!\p"
	.string "Now go!\p"
	.string "{PLAYER}, your grand adventure\n"
	.string "begins right now!$"

Sandgem_Town_Proffesor_Rowans_Lab_EventScript_Dawn_Talks_About_First_Mon_Piplup_Text_0:
	.string "Dawn: The Pokémon that I met for\n"
	.string "the first time was a Piplup!\p"
	.string "If you would have choosen a Piplup\n"
	.string "on Route 201, we'd have the same\l"
	.string "Pokémon now!\l"
	.string "Not that it matters, but...\l"
	.string "Anyway, I'm Dawn.\p"
	.string "I also help the professor add pages\n"
	.string "to the Pokedex.\l"
	.string "So, in a sense, I'm just like you.\p"
	.string "I just got a little head start on you,\n"
	.string "that's all.\p"
	.string "I'll be happy to teach you things.\n"
	.string "Glad to meet you, {PLAYER}$"

Sandgem_Town_Proffesor_Rowans_Lab_EventScript_Dawn_Talks_About_First_Mon_Turtwig_Text_0:
	.string "Dawn: The Pokémon that I met for\n"
	.string "the first time was a Turtwig!\p"
	.string "If you would have choosen a Turtwig\n"
	.string "on Route 201, we'd have the same\l"
	.string "Pokémon now!\l"
	.string "Not that it matters, but...\l"
	.string "Anyway, I'm Dawn.\p"
	.string "I also help the professor add pages\n"
	.string "to the Pokedex.\l"
	.string "So, in a sense, I'm just like you.\p"
	.string "I just got a little head start on you,\n"
	.string "that's all.\p"
	.string "I'll be happy to teach you things.\n"
	.string "Glad to meet you, {PLAYER}$"

Sandgem_Town_Proffesor_Rowans_Lab_EventScript_Dawn_Talks_About_First_Mon_Chimchar_Text_0:
	.string "Dawn: The Pokémon that I met for\n"
	.string "the first time was a Chimchar!\p"
	.string "If you would have choosen a Chimchar\n"
	.string "on Route 201, we'd have the same\l"
	.string "Pokémon now!\l"
	.string "Not that it matters, but...\l"
	.string "Anyway, I'm Dawn.\p"
	.string "I also help the professor add pages\n"
	.string "to the Pokedex.\l"
	.string "So, in a sense, I'm just like you.\p"
	.string "I just got a little head start on you,\n"
	.string "that's all.\p"
	.string "I'll be happy to teach you things.\n"
	.string "Glad to meet you, {PLAYER}$"

Sandgem_Town_Proffesor_Rowans_Lab_EventScript_Lucas_Talks_About_First_Mon_Text_0:
	.string "Lucas: The professor asked me to help,\n"
	.string "so I'm filling the Pokédex pages, too.\p"
	.string "That makes us comrades working toward\n"
	.string "the same goal.\p"
	.string "I'll teach you stuff later, OK?$"

Sandgem_Town_Proffesor_Rowans_Lab_Rowan_Grand_Adventure_Text_0:
	.string "Rowan: Go on!\p"
	.string "{PLAYER}, your grand adventure\n"
	.string "awaits you!$"

Sandgem_Town_Proffesor_Rowans_Lab_Rowan_Check_Pokedex_Progress_Text_0:
	.string "Rowan: Ah, {PLAYER}\p"
	.string "You've come to show me the progress\n"
	.string "you've made on your Pokedex$"

Sandgem_Town_Proffesor_Rowans_Lab_Rowan_Check_Pokedex_Progress_No_Text_0:
	.string "What's wrong?\p"
	.string "You're not suggesting you've seen so\n"
	.string "few that you're afraid to show me?$"

Sandgem_Town_Proffesor_Rowans_Lab_Book_Shelf_Trainer_Tip_1_Text_0:
	.string "Adventure Rule No. 1\n"
	.string "The X Button opens the menu.$"

Sandgem_Town_Proffesor_Rowans_Lab_Book_Shelf_Trainer_Tip_2_Text_0:
	.string "Adventure Rule No. 2\n"
	.string "Record your progress with Save.$"

Sandgem_Town_Proffesor_Rowans_Lab_Book_Shelf_Pokemon_Information_Text_0:
	.string "It's crammed full of books with all\n"
	.string "sorts of Pokémon information$"

Sandgem_Town_Proffesor_Rowans_Lab_Book_Shelf_Reference_Material_Text_0:
	.string "There's a lot of research material\n"
	.string "and research reports on Pokémon.$"

Sandgem_Town_Proffesor_Rowans_Lab_Pc_Text_0:
	.string "{PLAYER} checked the PC.\p"
	.string "The screen is filled with special terms\n"
	.string "and academic writing that is impossible\l"
	.string "to figure out.$"

Sandgem_Town_Proffesor_Rowans_Lab_Refrigerator_Text_0:
	.string "The refrigerator is filled with\n"
	.string "tasty sweets! Mmm...$"

Sandgem_Town_Proffesor_Rowans_Lab_Female_Scientist_Text_0:
	.string "Professor Rowan invented a new\n"
	.string "Pokedex while working alongside a\l"
	.string "proffesor from the Kanto region.\p"
	.string "Oh, my name is Roseanne.\p"
	.string "It's an honor to be an assistant to\n"
	.string "our professor!$"

Sandgem_Town_Proffesor_Rowans_Lab_Male_Scientist_Text_0:
	.string "I'm Dawn's father.\p"
	.string "I'll be happy to assist you on your\n"
	.string "quest for the professor\p"
	.string "Hahaha. Eh...\n"
	.string "I'm sure we can count on you!$"

Sandgem_Town_Proffesor_Rowans_Lab_Male_Scientist_Text_1:
	.string "I'm Lucas's father.\p"
	.string "I'll be happy to assist you on your\l"
	.string "quest for the professor\p"
	.string "Hahaha. Eh...\n"
	.string "I'm sure we can count on you!$"
