Sandgem_Town_Proffesor_Rowans_Lab_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Sandgem_Town_Proffesor_Rowans_Lab_On_Transition
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Sandgem_Town_Proffesor_Rowans_Lab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Sandgem_Town_Proffesor_Rowans_Lab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
	map_script_2 VAR_ROWANS_LAB_STATE, 0, Sandgem_Town_Proffesor_Rowans_Lab_EventScript_Reached_First_Time_Event
	.2byte 0


Sandgem_Town_Proffesor_Rowans_Lab_On_Transition::
	call_if_unset FLAG_VISITED_SANDGEM_TOWN_ROWANS_LAB, Sandgem_Town_Proffesor_Rowans_Lab_EventScript_Reached_First_Time
	end


Sandgem_Town_Proffesor_Rowans_Lab_EventScript_Reached_First_Time::
	checkplayergender
	goto_if_eq VAR_RESULT, MALE, Sandgem_Town_Proffesor_Rowans_Lab_EventScript_Hide_Lucas
	goto_if_eq VAR_RESULT, FEMALE, Sandgem_Town_Proffesor_Rowans_Lab_EventScript_Hide_Dawn
	end


Sandgem_Town_Proffesor_Rowans_Lab_EventScript_Hide_Lucas::
	setflag FLAG_HIDE_LUCAS_IN_SANDGEM_LAB
	end


Sandgem_Town_Proffesor_Rowans_Lab_EventScript_Hide_Dawn::
	setflag FLAG_HIDE_DAWN_IN_SANDGEM_LAB
	end


Sandgem_Town_Proffesor_Rowans_Lab_EventScript_Reached_First_Time_Event::
	checkplayergender
	goto_if_eq VAR_RESULT, MALE, Sandgem_Town_Proffesor_Rowans_Lab_EventScript_Dawn_Do_Script
	goto_if_eq VAR_RESULT, FEMALE, Sandgem_Town_Proffesor_Rowans_Lab_EventScript_Lucas_Do_Script
	return


Sandgem_Town_Proffesor_Rowans_Lab_EventScript_Dawn_Do_Script::
	applymovement 2, Common_Movement_Delay32
	waitmovement 0
	applymovement 2, Sandgem_Town_Proffesor_Rowans_Lab_Movement_Rival_Goes_Near_Rowan
	applymovement OBJ_EVENT_ID_PLAYER, Sandgem_Town_Proffesor_Rowans_Lab_Movement_Player_Goes_Near_Rowan
	waitmovement 0
	switch VAR_STARTER_MON
	case 0, Sandgem_Town_Proffesor_Rowans_Lab_EventScript_Dawn_Do_Script_2
	case 1, Sandgem_Town_Proffesor_Rowans_Lab_EventScript_Dawn_Do_Script_3
	case 2, Sandgem_Town_Proffesor_Rowans_Lab_EventScript_Dawn_Do_Script_4
	return

Sandgem_Town_Proffesor_Rowans_Lab_EventScript_Dawn_Do_Script_2:
	goto Sandgem_Town_Proffesor_Rowans_Lab_EventScript_Turtwig
	return

Sandgem_Town_Proffesor_Rowans_Lab_EventScript_Dawn_Do_Script_3:
	goto Sandgem_Town_Proffesor_Rowans_Lab_EventScript_Chimchar
	return

Sandgem_Town_Proffesor_Rowans_Lab_EventScript_Dawn_Do_Script_4:
	goto Sandgem_Town_Proffesor_Rowans_Lab_EventScript_Piplup
	return


Sandgem_Town_Proffesor_Rowans_Lab_EventScript_Lucas_Do_Script::
	applymovement 1, Common_Movement_Delay32
	waitmovement 0
	applymovement 1, Sandgem_Town_Proffesor_Rowans_Lab_Movement_Rival_Goes_Near_Rowan
	applymovement OBJ_EVENT_ID_PLAYER, Sandgem_Town_Proffesor_Rowans_Lab_Movement_Player_Goes_Near_Rowan
	waitmovement 0
	switch VAR_STARTER_MON
	case 0, Sandgem_Town_Proffesor_Rowans_Lab_EventScript_Lucas_Do_Script_2
	case 1, Sandgem_Town_Proffesor_Rowans_Lab_EventScript_Lucas_Do_Script_3
	case 2, Sandgem_Town_Proffesor_Rowans_Lab_EventScript_Lucas_Do_Script_4
	return

Sandgem_Town_Proffesor_Rowans_Lab_EventScript_Lucas_Do_Script_2:
	goto Sandgem_Town_Proffesor_Rowans_Lab_EventScript_Turtwig
	return

Sandgem_Town_Proffesor_Rowans_Lab_EventScript_Lucas_Do_Script_3:
	goto Sandgem_Town_Proffesor_Rowans_Lab_EventScript_Chimchar
	return

Sandgem_Town_Proffesor_Rowans_Lab_EventScript_Lucas_Do_Script_4:
	goto Sandgem_Town_Proffesor_Rowans_Lab_EventScript_Piplup
	return


Sandgem_Town_Proffesor_Rowans_Lab_EventScript_Turtwig::
	msgbox Sandgem_Town_Proffesor_Rowans_Lab_Text_Give_Nickname_Turtwig, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, Sandgem_Town_Proffesor_Rowans_Lab_EventScript_NicknameStarter
	goto_if_eq VAR_RESULT, NO, Sandgem_Town_Proffesor_Rowans_Lab_EventScript_Script_Continues
	return


Sandgem_Town_Proffesor_Rowans_Lab_EventScript_Chimchar::
	msgbox Sandgem_Town_Proffesor_Rowans_Lab_Text_Give_Nickname_Chimchar, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, Sandgem_Town_Proffesor_Rowans_Lab_EventScript_NicknameStarter
	goto_if_eq VAR_RESULT, NO, Sandgem_Town_Proffesor_Rowans_Lab_EventScript_Script_Continues
	return


Sandgem_Town_Proffesor_Rowans_Lab_EventScript_Piplup::
	msgbox Sandgem_Town_Proffesor_Rowans_Lab_Text_Give_Nickname_Piplup, MSGBOX_YESNO
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
	msgbox Sandgem_Town_Proffesor_Rowans_Lab_Text_Rowan_Praises_Your_Turtwig, MSGBOX_SIGN
	checkplayergender
	goto_if_eq VAR_RESULT, MALE, Sandgem_Town_Proffesor_Rowans_Lab_EventScript_TalK_With_Dawn
	goto_if_eq VAR_RESULT, FEMALE, Sandgem_Town_Proffesor_Rowans_Lab_EventScript_TalK_With_Lucas
	return


Sandgem_Town_Proffesor_Rowans_Lab_EventScript_Script_Continues_Chimchar::
	msgbox Sandgem_Town_Proffesor_Rowans_Lab_Text_Rowan_Praises_Your_Chimchar, MSGBOX_SIGN
	checkplayergender
	goto_if_eq VAR_RESULT, MALE, Sandgem_Town_Proffesor_Rowans_Lab_EventScript_TalK_With_Dawn
	goto_if_eq VAR_RESULT, FEMALE, Sandgem_Town_Proffesor_Rowans_Lab_EventScript_TalK_With_Lucas
	return


Sandgem_Town_Proffesor_Rowans_Lab_EventScript_Script_Continues_Piplup::
	msgbox Sandgem_Town_Proffesor_Rowans_Lab_Text_Rowan_Praises_Your_Piplup, MSGBOX_SIGN
	checkplayergender
	goto_if_eq VAR_RESULT, MALE, Sandgem_Town_Proffesor_Rowans_Lab_EventScript_TalK_With_Dawn
	goto_if_eq VAR_RESULT, FEMALE, Sandgem_Town_Proffesor_Rowans_Lab_EventScript_TalK_With_Lucas
	return


Sandgem_Town_Proffesor_Rowans_Lab_EventScript_TalK_With_Dawn::
	applymovement 2, Sandgem_Town_Proffesor_Rowans_Lab_Movement_Rival_Walks_In_Place
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Face_Right
	waitmovement 0
	msgbox Sandgem_Town_Proffesor_Rowans_Lab_Text_Dawn_Talks, MSGBOX_SIGN
	applymovement 2, Sandgem_Town_Proffesor_Rowans_Lab_Movement_Rival_Walks_In_Place
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Face_Up
	goto Sandgem_Town_Proffesor_Rowans_Lab_EventScript_Rowans_Main_Topic
	return


Sandgem_Town_Proffesor_Rowans_Lab_EventScript_TalK_With_Lucas::
	applymovement 1, Sandgem_Town_Proffesor_Rowans_Lab_Movement_Rival_Walks_In_Place
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Face_Right
	waitmovement 0
	msgbox Sandgem_Town_Proffesor_Rowans_Lab_Text_Lucas_Talks, MSGBOX_SIGN
	applymovement 1, Sandgem_Town_Proffesor_Rowans_Lab_Movement_Rival_Walks_In_Place
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Face_Up
	goto Sandgem_Town_Proffesor_Rowans_Lab_EventScript_Rowans_Main_Topic
	return


Sandgem_Town_Proffesor_Rowans_Lab_EventScript_Rowans_Main_Topic::
	fadenewbgm MUS_DP_ROWAN
	msgbox Sandgem_Town_Proffesor_Rowans_Lab_Text_Pokedex, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, Sandgem_Town_Proffesor_Rowans_Lab_EventScript_Rowans_Continues_On
	goto_if_eq VAR_RESULT, NO, Sandgem_Town_Proffesor_Rowans_Lab_EventScript_Rowans_Forces_Yes
	return


Sandgem_Town_Proffesor_Rowans_Lab_EventScript_Rowans_Forces_Yes::
	fadenewbgm MUS_DP_ROWAN
	msgbox Sandgem_Town_Proffesor_Rowans_Lab_Text_Rowans_Forces_Yes, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, Sandgem_Town_Proffesor_Rowans_Lab_EventScript_Rowans_Continues_On
	goto_if_eq VAR_RESULT, NO, Sandgem_Town_Proffesor_Rowans_Lab_EventScript_Rowans_Forces_Yes
	return


Sandgem_Town_Proffesor_Rowans_Lab_EventScript_Rowans_Continues_On::
	msgbox Sandgem_Town_Proffesor_Rowans_Lab_Text_Good_Answer, MSGBOX_SIGN
	playfanfare MUS_DP_OBTAIN_KEY_ITEM
	setflag FLAG_SYS_POKEDEX_GET
	msgbox Sandgem_Town_Proffesor_Rowans_Lab_Text_Rowan_Gives_Pokedex, MSGBOX_AUTOCLOSE
	msgbox Sandgem_Town_Proffesor_Rowans_Lab_Text_Rowan_Talks_About_Pokedex, MSGBOX_SIGN
	checkplayergender
	goto_if_eq VAR_RESULT, MALE, Sandgem_Town_Proffesor_Rowans_Lab_EventScript_Dawn_Talks_About_Pokedex
	goto_if_eq VAR_RESULT, FEMALE, Sandgem_Town_Proffesor_Rowans_Lab_EventScript_Lucas_Talks_About_Pokedex
	return


Sandgem_Town_Proffesor_Rowans_Lab_EventScript_Dawn_Talks_About_Pokedex::
	applymovement 2, Sandgem_Town_Proffesor_Rowans_Lab_Movement_Rival_Walks_In_Place
	waitmovement 0
	msgbox Sandgem_Town_Proffesor_Rowans_Lab_Text_Dawn_Talks_About_Pokedex, MSGBOX_SIGN
	applymovement 2, Sandgem_Town_Proffesor_Rowans_Lab_Movement_Rival_Walks_In_Place
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Face_Right
	waitmovement 0
	switch VAR_STARTER_MON
	case 0, Sandgem_Town_Proffesor_Rowans_Lab_EventScript_Dawn_Talks_About_Pokedex_2
	case 1, Sandgem_Town_Proffesor_Rowans_Lab_EventScript_Dawn_Talks_About_Pokedex_3
	case 2, Sandgem_Town_Proffesor_Rowans_Lab_EventScript_Dawn_Talks_About_Pokedex_4
	return

Sandgem_Town_Proffesor_Rowans_Lab_EventScript_Dawn_Talks_About_Pokedex_2:
	goto Sandgem_Town_Proffesor_Rowans_Lab_EventScript_Dawn_Talks_About_First_Mon_Piplup
	return

Sandgem_Town_Proffesor_Rowans_Lab_EventScript_Dawn_Talks_About_Pokedex_3:
	goto Sandgem_Town_Proffesor_Rowans_Lab_EventScript_Dawn_Talks_About_First_Mon_Turtwig
	return

Sandgem_Town_Proffesor_Rowans_Lab_EventScript_Dawn_Talks_About_Pokedex_4:
	goto Sandgem_Town_Proffesor_Rowans_Lab_EventScript_Dawn_Talks_About_First_Mon_Chimchar
	return


Sandgem_Town_Proffesor_Rowans_Lab_EventScript_Lucas_Talks_About_Pokedex::
	applymovement 1, Sandgem_Town_Proffesor_Rowans_Lab_Movement_Rival_Walks_In_Place
	waitmovement 0
	msgbox Sandgem_Town_Proffesor_Rowans_Lab_Text_Lucas_Talks_About_Pokedex, MSGBOX_SIGN
	applymovement 1, Sandgem_Town_Proffesor_Rowans_Lab_Movement_Rival_Walks_In_Place
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Face_Right
	waitmovement 0
	switch VAR_STARTER_MON
	case 0, Sandgem_Town_Proffesor_Rowans_Lab_EventScript_Lucas_Talks_About_Pokedex_2
	case 1, Sandgem_Town_Proffesor_Rowans_Lab_EventScript_Lucas_Talks_About_Pokedex_3
	case 2, Sandgem_Town_Proffesor_Rowans_Lab_EventScript_Lucas_Talks_About_Pokedex_4
	return

Sandgem_Town_Proffesor_Rowans_Lab_EventScript_Lucas_Talks_About_Pokedex_2:
	goto Sandgem_Town_Proffesor_Rowans_Lab_EventScript_Lucas_Talks_About_First_Mon_Piplup
	return

Sandgem_Town_Proffesor_Rowans_Lab_EventScript_Lucas_Talks_About_Pokedex_3:
	goto Sandgem_Town_Proffesor_Rowans_Lab_EventScript_Lucas_Talks_About_First_Mon_Turtwig
	return

Sandgem_Town_Proffesor_Rowans_Lab_EventScript_Lucas_Talks_About_Pokedex_4:
	goto Sandgem_Town_Proffesor_Rowans_Lab_EventScript_Lucas_Talks_About_First_Mon_Chimchar
	return


Sandgem_Town_Proffesor_Rowans_Lab_EventScript_Dawn_Talks_About_First_Mon_Piplup::
	msgbox Sandgem_Town_Proffesor_Rowans_Lab_EventScript_Dawn_Talks_About_First_Mon_Piplup_Text, MSGBOX_SIGN
	goto Sandgem_Town_Proffesor_Rowans_Lab_EventScript_Dawn_Leaves
	return


Sandgem_Town_Proffesor_Rowans_Lab_EventScript_Dawn_Talks_About_First_Mon_Turtwig::
	msgbox Sandgem_Town_Proffesor_Rowans_Lab_EventScript_Dawn_Talks_About_First_Mon_Turtwig_Text, MSGBOX_SIGN
	goto Sandgem_Town_Proffesor_Rowans_Lab_EventScript_Dawn_Leaves
	return


Sandgem_Town_Proffesor_Rowans_Lab_EventScript_Dawn_Talks_About_First_Mon_Chimchar::
	msgbox Sandgem_Town_Proffesor_Rowans_Lab_EventScript_Dawn_Talks_About_First_Mon_Chimchar_Text, MSGBOX_SIGN
	goto Sandgem_Town_Proffesor_Rowans_Lab_EventScript_Dawn_Leaves
	return


Sandgem_Town_Proffesor_Rowans_Lab_EventScript_Lucas_Talks_About_First_Mon_Piplup::
	msgbox Sandgem_Town_Proffesor_Rowans_Lab_EventScript_Lucas_Talks_About_First_Mon_Piplup_Text, MSGBOX_SIGN
	goto Sandgem_Town_Proffesor_Rowans_Lab_EventScript_Lucas_Leaves
	return


Sandgem_Town_Proffesor_Rowans_Lab_EventScript_Lucas_Talks_About_First_Mon_Turtwig::
	msgbox Sandgem_Town_Proffesor_Rowans_Lab_EventScript_Lucas_Talks_About_First_Mon_Turtwig_Text, MSGBOX_SIGN
	goto Sandgem_Town_Proffesor_Rowans_Lab_EventScript_Lucas_Leaves
	return


Sandgem_Town_Proffesor_Rowans_Lab_EventScript_Lucas_Talks_About_First_Mon_Chimchar::
	msgbox Sandgem_Town_Proffesor_Rowans_Lab_EventScript_Lucas_Talks_About_First_Mon_Chimchar_Text, MSGBOX_SIGN
	goto Sandgem_Town_Proffesor_Rowans_Lab_EventScript_Lucas_Leaves
	return


Sandgem_Town_Proffesor_Rowans_Lab_EventScript_Dawn_Leaves::
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Face_Down
	applymovement 2, Sandgem_Town_Proffesor_Rowans_Lab_Movement_Rival_Leaves
	waitmovement 0
	setvar VAR_ROWANS_LAB_STATE, 1
	removeobject 2
	setflag FLAG_HIDE_DAWN_IN_SANDGEM_LAB
	setvar VAR_SANDGEM_TOWN_STATE, 1
	end


Sandgem_Town_Proffesor_Rowans_Lab_EventScript_Lucas_Leaves::
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Face_Down
	applymovement 1, Sandgem_Town_Proffesor_Rowans_Lab_Movement_Rival_Leaves
	waitmovement 0
	setvar VAR_ROWANS_LAB_STATE, 1
	removeobject 1
	setflag FLAG_HIDE_LUCAS_IN_SANDGEM_LAB
	setvar VAR_SANDGEM_TOWN_STATE, 1
	end


Sandgem_Town_Proffesor_Rowans_Lab_Rowan::
	msgbox Sandgem_Town_Proffesor_Rowans_Lab_Rowan_Text, MSGBOX_NPC
	return


Sandgem_Town_Proffesor_Rowans_Lab_Book_Shelf_Trainer_Tip_1::
	msgbox Sandgem_Town_Proffesor_Rowans_Lab_Book_Shelf_Trainer_Tip_1_Text, MSGBOX_SIGN
	return


Sandgem_Town_Proffesor_Rowans_Lab_Book_Shelf_Trainer_Tip_2::
	msgbox Sandgem_Town_Proffesor_Rowans_Lab_Book_Shelf_Trainer_Tip_2_Text, MSGBOX_SIGN
	return


Sandgem_Town_Proffesor_Rowans_Lab_Book_Shelf_Pokemon_Information::
	msgbox Sandgem_Town_Proffesor_Rowans_Lab_Book_Shelf_Pokemon_Information_Text, MSGBOX_SIGN
	return


Sandgem_Town_Proffesor_Rowans_Lab_Book_Shelf_Reference_Material::
	msgbox Sandgem_Town_Proffesor_Rowans_Lab_Book_Shelf_Reference_Material_Text, MSGBOX_SIGN
	return


Sandgem_Town_Proffesor_Rowans_Lab_Pc::
	msgbox Sandgem_Town_Proffesor_Rowans_Lab_Pc_Text, MSGBOX_SIGN
	return


Sandgem_Town_Proffesor_Rowans_Lab_Refrigerator::
	msgbox Sandgem_Town_Proffesor_Rowans_Lab_Refrigerator_Text, MSGBOX_SIGN
	return


Sandgem_Town_Proffesor_Rowans_Lab_Female_Scientist::
	msgbox Sandgem_Town_Proffesor_Rowans_Lab_Female_Scientist_Text, MSGBOX_NPC
	return


Sandgem_Town_Proffesor_Rowans_Lab_Male_Scientist::
	checkplayergender
	goto_if_eq VAR_RESULT, MALE, Sandgem_Town_Proffesor_Rowans_Lab_Male_Scientist_Dawn_Father
	goto_if_eq VAR_RESULT, FEMALE, Sandgem_Town_Proffesor_Rowans_Lab_Male_Scientist_Lucas_Father
	return


Sandgem_Town_Proffesor_Rowans_Lab_Male_Scientist_Dawn_Father::
	msgbox Sandgem_Town_Proffesor_Rowans_Lab_Male_Scientist_Dawn_Father_Text, MSGBOX_NPC
	return


Sandgem_Town_Proffesor_Rowans_Lab_Male_Scientist_Lucas_Father::
	msgbox Sandgem_Town_Proffesor_Rowans_Lab_Male_Scientist_Lucas_Father_Text, MSGBOX_NPC
	return


Sandgem_Town_Proffesor_Rowans_Lab_Movement_Rival_Goes_Near_Rowan:
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

Sandgem_Town_Proffesor_Rowans_Lab_Movement_Player_Goes_Near_Rowan:
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

Sandgem_Town_Proffesor_Rowans_Lab_Movement_Rival_Walks_In_Place:
	walK_in_place_left
	step_end

Sandgem_Town_Proffesor_Rowans_Lab_Movement_Rival_Leaves:
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

Sandgem_Town_Proffesor_Rowans_Lab_Text_Give_Nickname_Turtwig::
	.string "Professor: Well, well, look who's here.\p"
	.string "{PLAYER}, was it?\n"
	.string "Let's have a look at your Pokemon.\p"
	.string "...\p"
	.string "Hm...\n"
	.string "I see...\p"
	.string "This Pokemon seems to be rather\n"
	.string "happy.\p"
	.string "Hm!\p"
	.string "Entrusting you with that Turtwig\n"
	.string "was no mistake it seems!\p"
	.string "Professor: Well, would you like to give\n"
	.string "it a nickname?$"

Sandgem_Town_Proffesor_Rowans_Lab_Text_Give_Nickname_Chimchar::
	.string "Professor: Well, well, look who's here.\p"
	.string "{PLAYER}, was it?\n"
	.string "Let's have a look at your Pokemon.\p"
	.string "...\p"
	.string "Hm...\n"
	.string "I see...\p"
	.string "This Pokemon seems to be rather\n"
	.string "happy.\p"
	.string "Hm!\p"
	.string "Entrusting you with that Chimchar\n"
	.string "was no mistake it seems!\p"
	.string "Professor: Well, would you like to give\n"
	.string "it a nickname?$"

Sandgem_Town_Proffesor_Rowans_Lab_Text_Give_Nickname_Piplup::
	.string "Professor: Well, well, look who's here.\p"
	.string "{PLAYER}, was it?\n"
	.string "Let's have a look at your Pokemon.\p"
	.string "...\p"
	.string "Hm...\n"
	.string "I see...\p"
	.string "This Pokemon seems to be rather\n"
	.string "happy.\p"
	.string "Hm!\p"
	.string "Entrusting you with that Piplup\n"
	.string "was no mistake it seems!\p"
	.string "Professor: Well, would you like to give\n"
	.string "it a nickname?$"

Sandgem_Town_Proffesor_Rowans_Lab_Text_Rowan_Praises_Your_Turtwig::
	.string "Professor: When I first saw you two\n"
	.string "about to step into the tall grass\l"
	.string "without Pokemon, I was shocked.\p"
	.string "I was astounded by these foolhardy\n"
	.string "children.\p"
	.string "But now, you've astounded me in an\n"
	.string "entirely different way.\p"
	.string "Already, there is a bond growing\n"
	.string "between you and that Pokemon.\p"
	.string "I feel priviliged to have met you.\p"
	.string "I'm sure Turtwig feels the same\n"
	.string "way about you.\p"
	.string "That's why I'll ask you to cherish that\n"
	.string "Turtwig of yours.$"

Sandgem_Town_Proffesor_Rowans_Lab_Text_Rowan_Praises_Your_Chimchar::
	.string "Professor: When I first saw you two\n"
	.string "about to step into the tall grass\l"
	.string "without Pokemon, I was shocked.\p"
	.string "I was astounded by these foolhardy\n"
	.string "children.\p"
	.string "But now, you've astounded me in an\n"
	.string "entirely different way.\p"
	.string "Already, there is a bond growing\n"
	.string "between you and that Pokemon.\p"
	.string "I feel priviliged to have met you.\p"
	.string "I'm sure Chimchar feels the same\n"
	.string "way about you.\p"
	.string "That's why I'll ask you to cherish that\n"
	.string "Chimchar of yours.$"

Sandgem_Town_Proffesor_Rowans_Lab_Text_Rowan_Praises_Your_Piplup::
	.string "Professor: When I first saw you two\n"
	.string "about to step into the tall grass\l"
	.string "without Pokemon, I was shocked.\p"
	.string "I was astounded by these foolhardy\n"
	.string "children.\p"
	.string "But now, you've astounded me in an\n"
	.string "entirely different way.\p"
	.string "Already, there is a bond growing\n"
	.string "between you and that Pokemon.\p"
	.string "I feel priviliged to have met you.\p"
	.string "I'm sure Piplup feels the same\n"
	.string "way about you.\p"
	.string "That's why I'll ask you to cherish that\n"
	.string "Piplup of yours.$"

Sandgem_Town_Proffesor_Rowans_Lab_Text_Dawn_Talks::
	.string "Dawn: I'm so glad that you're kind\n"
	.string "toward Pokemon!\p"
	.string "If you weren't, I'd have to...\n"
	.string "Oh, I just can't say it...$"

Sandgem_Town_Proffesor_Rowans_Lab_Text_Lucas_Talks::
	.string "Lucas: I'm so glad that you're kind\n"
	.string "toward Pokemon!\p"
	.string "If you weren't, I'd have to...\n"
	.string "Oh, I just can't say it...$"

Sandgem_Town_Proffesor_Rowans_Lab_Text_Pokedex::
	.string "Professor: Er-hem!\n"
	.string "Let's move on to the main topic.\p"
	.string "There is something I want you to do\n"
	.string "for me.\p"
	.string "Allow me to properly introduce myself\n"
	.string "first.\p"
	.string "My name, as you know, is Rowan.\n"
	.string "I study Pokemon.\p"
	.string "First of all, I want to know exactly\n"
	.string "what kinds of Pokemon live in the\l"
	.string "Sinnoh region.\p"
	.string "To do so, it is necessary to collect\n"
	.string "data using Pokedex.\p"
	.string "That is what I wish to ask you.\p"
	.string "I want to entrust you with this\n"
	.string "Pokedex.\p"
	.string "Will you use it to record data on all\n"
	.string "the Pokemon in Sinnoh for me?$"

Sandgem_Town_Proffesor_Rowans_Lab_Text_Rowans_Forces_Yes::
	.string "Rowan:...\p"
	.string "...\p"
	.string "...\p"
	.string "I can stand here without speaking for\n"
	.string "hours. I'm a very patient man.\p"
	.string "I want to entrust you with this\n"
	.string "Pokedex.\p"
	.string "Will you use it to record data on all\n"
	.string "the Pokemon in Sinnoh for me?$"

Sandgem_Town_Proffesor_Rowans_Lab_Text_Good_Answer::
	.string "Rowan: Hm!\p"
	.string "Good Answer!$"

Sandgem_Town_Proffesor_Rowans_Lab_Text_Rowan_Gives_Pokedex::
	.string "{PLAYER} obtained\n"
	.string "the Pokedex!$"

Sandgem_Town_Proffesor_Rowans_Lab_Text_Rowan_Talks_About_Pokedex::
	.string "Rowan: That Pokedex is a very\n"
	.string "high-tech device.\p"
	.string "It will automatically record data on\n"
	.string "every kind of Pokemon you encounter.\p"
	.string "{PLAYER}, I ask that you go\n"
	.string "everywhere and meet every kind of\l"
	.string "Pokemon in this region!$"

Sandgem_Town_Proffesor_Rowans_Lab_Text_Dawn_Talks_About_Pokedex::
	.string "Dawn: I've got one, too!\p"
	.string "Rowan: When you walked up Route 201\n"
	.string "with your Pokemon, what did you feel?\p"
	.string "I've lived for 60 long years.\n"
	.string "Even now, I get a thrill when\p"
	.string "I'm with a Pokemon.\p"
	.string "Now, you should know that there are\n"
	.string "countless Pokemon in this world.\p"
	.string "That means there are just as many\n"
	.string "thrills waiting for you out here!\p"
	.string "Now go!\p"
	.string "{PLAYER}, your grand adventure\n"
	.string "begins right now!$"

Sandgem_Town_Proffesor_Rowans_Lab_Text_Lucas_Talks_About_Pokedex::
	.string "Lucas: I've got one, too!\p"
	.string "Rowan: When you walked up Route 201\n"
	.string "with your Pokemon, what did you feel?\p"
	.string "I've lived for 60 long years.\n"
	.string "Even now, I get a thrill when\p"
	.string "I'm with a Pokemon.\p"
	.string "Now, you should know that there are\n"
	.string "countless Pokemon in this world.\p"
	.string "That means there are just as many\n"
	.string "thrills waiting for you out here!\p"
	.string "Now go!\p"
	.string "{PLAYER}, your grand adventure\n"
	.string "begins right now!$"

Sandgem_Town_Proffesor_Rowans_Lab_EventScript_Dawn_Talks_About_First_Mon_Piplup_Text::
	.string "Dawn: The Pokemon that I met for\n"
	.string "the first time was a Piplup!\p"
	.string "If you would have choosen a Piplup\n"
	.string "on Route 201, we'd have the same\l"
	.string "Pokemon now!\l"
	.string "Not that it matters, but...\l"
	.string "Anyway, I'm Dawn.\p"
	.string "I also help the professor add pages\n"
	.string "to the Pokedex.\l"
	.string "So, in a sense, I'm just like you.\p"
	.string "I just got a little head start on you,\n"
	.string "that's all.\p"
	.string "I'll be happy to teach you things.\n"
	.string "Glad to meet you, {PLAYER}$"

Sandgem_Town_Proffesor_Rowans_Lab_EventScript_Dawn_Talks_About_First_Mon_Turtwig_Text::
	.string "Dawn: The Pokemon that I met for\n"
	.string "the first time was a Turtwig!\p"
	.string "If you would have choosen a Turtwig\n"
	.string "on Route 201, we'd have the same\l"
	.string "Pokemon now!\l"
	.string "Not that it matters, but...\l"
	.string "Anyway, I'm Dawn.\p"
	.string "I also help the professor add pages\n"
	.string "to the Pokedex.\l"
	.string "So, in a sense, I'm just like you.\p"
	.string "I just got a little head start on you,\n"
	.string "that's all.\p"
	.string "I'll be happy to teach you things.\n"
	.string "Glad to meet you, {PLAYER}$"

Sandgem_Town_Proffesor_Rowans_Lab_EventScript_Dawn_Talks_About_First_Mon_Chimchar_Text::
	.string "Dawn: The Pokemon that I met for\n"
	.string "the first time was a Chimchar!\p"
	.string "If you would have choosen a Chimchar\n"
	.string "on Route 201, we'd have the same\l"
	.string "Pokemon now!\l"
	.string "Not that it matters, but...\l"
	.string "Anyway, I'm Dawn.\p"
	.string "I also help the professor add pages\n"
	.string "to the Pokedex.\l"
	.string "So, in a sense, I'm just like you.\p"
	.string "I just got a little head start on you,\n"
	.string "that's all.\p"
	.string "I'll be happy to teach you things.\n"
	.string "Glad to meet you, {PLAYER}$"

Sandgem_Town_Proffesor_Rowans_Lab_EventScript_Lucas_Talks_About_First_Mon_Piplup_Text::
	.string "Lucas: The Pokemon that I met for\n"
	.string "the first time was a Piplup!\p"
	.string "If you would have choosen a Piplup\n"
	.string "on Route 201, we'd have the same\l"
	.string "Pokemon now!\l"
	.string "Not that it matters, but...\l"
	.string "Anyway, I'm Lucas.\p"
	.string "I also help the professor add pages\n"
	.string "to the Pokedex.\l"
	.string "So, in a sense, I'm just like you.\p"
	.string "I just got a little head start on you,\n"
	.string "that's all.\p"
	.string "I'll be happy to teach you things.\n"
	.string "Glad to meet you, {PLAYER}$"

Sandgem_Town_Proffesor_Rowans_Lab_EventScript_Lucas_Talks_About_First_Mon_Turtwig_Text::
	.string "Lucas: The Pokemon that I met for\n"
	.string "the first time was a Turtwig!\p"
	.string "If you would have choosen a Turtwig\n"
	.string "on Route 201, we'd have the same\l"
	.string "Pokemon now!\l"
	.string "Not that it matters, but...\l"
	.string "Anyway, I'm Lucas.\p"
	.string "I also help the professor add pages\n"
	.string "to the Pokedex.\l"
	.string "So, in a sense, I'm just like you.\p"
	.string "I just got a little head start on you,\n"
	.string "that's all.\p"
	.string "I'll be happy to teach you things.\n"
	.string "Glad to meet you, {PLAYER}$"

Sandgem_Town_Proffesor_Rowans_Lab_EventScript_Lucas_Talks_About_First_Mon_Chimchar_Text::
	.string "Lucas: The Pokemon that I met for\n"
	.string "the first time was a Chimchar!\p"
	.string "If you would have choosen a Chimchar\n"
	.string "on Route 201, we'd have the same\l"
	.string "Pokemon now!\l"
	.string "Not that it matters, but...\l"
	.string "Anyway, I'm Lucas.\p"
	.string "I also help the professor add pages\n"
	.string "to the Pokedex.\l"
	.string "So, in a sense, I'm just like you.\p"
	.string "I just got a little head start on you,\n"
	.string "that's all.\p"
	.string "I'll be happy to teach you things.\n"
	.string "Glad to meet you, {PLAYER}$"

Sandgem_Town_Proffesor_Rowans_Lab_Rowan_Text::
	.string "Rowan: Go on!\p"
	.string "{PLAYER}, your grand adventure\n"
	.string "awaits you!$"

Sandgem_Town_Proffesor_Rowans_Lab_Book_Shelf_Trainer_Tip_1_Text::
	.string "Adventure Rule No. 1\n"
	.string "The X Button opens the menu.$"

Sandgem_Town_Proffesor_Rowans_Lab_Book_Shelf_Trainer_Tip_2_Text::
	.string "Adventure Rule No. 2\n"
	.string "Record your progress with Save.$"

Sandgem_Town_Proffesor_Rowans_Lab_Book_Shelf_Pokemon_Information_Text::
	.string "It's crammed full of books with all\n"
	.string "sorts of Pokemon information$"

Sandgem_Town_Proffesor_Rowans_Lab_Book_Shelf_Reference_Material_Text::
	.string "There's a lot of research material\n"
	.string "and research reports on Pokemon.$"

Sandgem_Town_Proffesor_Rowans_Lab_Pc_Text::
	.string "{PLAYER} checked the PC.\p"
	.string "The screen is filled with special terms\n"
	.string "and academic writing that is impossible\l"
	.string "to figure out.$"

Sandgem_Town_Proffesor_Rowans_Lab_Refrigerator_Text::
	.string "The refrigerator is filled with\n"
	.string "tasty sweets! Mmm...$"

Sandgem_Town_Proffesor_Rowans_Lab_Female_Scientist_Text::
	.string "Professor Rowan invented a new\n"
	.string "Pokedex while working alongside a\l"
	.string "proffesor from the Kanto region.\p"
	.string "Oh, my name is Roseanne.\p"
	.string "It's an honor to be an assistant to\n"
	.string "our professor!$"

Sandgem_Town_Proffesor_Rowans_Lab_Male_Scientist_Dawn_Father_Text::
	.string "I'm Dawn's father.\p"
	.string "I'll be happy to assist you on your\n"
	.string "quest for the professor\p"
	.string "Hahaha. Eh...\n"
	.string "I'm sure we can count on you!$"

Sandgem_Town_Proffesor_Rowans_Lab_Male_Scientist_Lucas_Father_Text::
	.string "I'm Lucas's father.\p"
	.string "I'll be happy to assist you on your\l"
	.string "quest for the professor\p"
	.string "Hahaha. Eh...\n"
	.string "I'm sure we can count on you!$"
