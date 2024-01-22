SandgemTown_Professor_Rowans_Lab_MapScripts::
   map_script MAP_SCRIPT_ON_TRANSITION, SandgemTown_Professor_Rowans_Lab_On_Transition
   map_script MAP_SCRIPT_ON_FRAME_TABLE, SandgemTown_Professor_Rowans_Lab_On_Frame
   .2byte 0

SandgemTown_Professor_Rowans_Lab_On_Transition::
	call_if_unset FLAG_VISITED_SANDGEM_TOWN_ROWANS_LAB, SandgemTown_Professor_Rowans_Lab_EventScript_Reached_First_Time
	end

SandgemTown_Professor_Rowans_Lab_On_Frame:
	map_script_2 VAR_ROWANS_LAB_STATE, 0, SandgemTown_Professor_Rowans_Lab_EventScript_Reached_First_Time_Event
	.2byte 0

SandgemTown_Professor_Rowans_Lab_EventScript_Reached_First_Time::
	checkplayergender
	goto_if_eq VAR_RESULT, MALE, SandgemTown_Professor_Rowans_Lab_EventScript_Hide_Lucas
	goto_if_eq VAR_RESULT, FEMALE, SandgemTown_Professor_Rowans_Lab_EventScript_Hide_Dawn
	end

SandgemTown_Professor_Rowans_Lab_EventScript_Reached_First_Time_Event::
	checkplayergender
	goto_if_eq VAR_RESULT, MALE, SandgemTown_Professor_Rowans_Lab_EventScript_Lucas_Do_Script
	goto_if_eq VAR_RESULT, FEMALE, SandgemTown_Professor_Rowans_Lab_EventScript_Dawn_Do_Script
	end

SandgemTown_Professor_Rowans_Lab_EventScript_Hide_Lucas::
   setflag FLAG_HIDE_LUCAS_IN_SANDGEM_LAB
   end

SandgemTown_Professor_Rowans_Lab_EventScript_Hide_Dawn::
   setflag FLAG_HIDE_DAWN_IN_SANDGEM_LAB
   end

SandgemTown_Professor_Rowans_Lab_EventScript_Lucas_Do_Script::
   applymovement 2, Common_Movement_Delay32
   waitmovement 0
   applymovement 2, SandgemTown_Professor_Rowans_Lab_Movement_Rival_Goes_Near_Rowan
   applymovement OBJ_EVENT_ID_PLAYER, SandgemTown_Professor_Rowans_Lab_Movement_Player_Goes_Near_Rowan
   waitmovement 0
	switch VAR_STARTER_MON
	case 0, SandgemTown_Professor_Rowans_Lab_EventScript_Turtwig
	case 1, SandgemTown_Professor_Rowans_Lab_EventScript_Chimchar
	case 2, SandgemTown_Professor_Rowans_Lab_EventScript_Piplup
   end

SandgemTown_Professor_Rowans_Lab_EventScript_Dawn_Do_Script::
   applymovement 1, Common_Movement_Delay32
   waitmovement 0
   applymovement 1, SandgemTown_Professor_Rowans_Lab_Movement_Rival_Goes_Near_Rowan
   applymovement OBJ_EVENT_ID_PLAYER, SandgemTown_Professor_Rowans_Lab_Movement_Player_Goes_Near_Rowan
   waitmovement 0
	switch VAR_STARTER_MON
	case 0, SandgemTown_Professor_Rowans_Lab_EventScript_Turtwig
	case 1, SandgemTown_Professor_Rowans_Lab_EventScript_Chimchar
	case 2, SandgemTown_Professor_Rowans_Lab_EventScript_Piplup
   end

SandgemTown_Professor_Rowans_Lab_EventScript_Turtwig::
   msgbox SandgemTown_Professor_Rowans_Lab_Text_Give_Nickname_Turtwig, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, SandgemTown_Professor_Rowans_Lab_EventScript_NicknameStarter
	goto_if_eq VAR_RESULT, NO, SandgemTown_Professor_Rowans_Lab_EventScript_Script_Continues
   end

SandgemTown_Professor_Rowans_Lab_EventScript_Chimchar::
   msgbox SandgemTown_Professor_Rowans_Lab_Text_Give_Nickname_Chimchar, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, SandgemTown_Professor_Rowans_Lab_EventScript_NicknameStarter
	goto_if_eq VAR_RESULT, NO, SandgemTown_Professor_Rowans_Lab_EventScript_Script_Continues
   end

SandgemTown_Professor_Rowans_Lab_EventScript_Piplup::
   msgbox SandgemTown_Professor_Rowans_Lab_Text_Give_Nickname_Piplup, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, SandgemTown_Professor_Rowans_Lab_EventScript_NicknameStarter
	goto_if_eq VAR_RESULT, NO, SandgemTown_Professor_Rowans_Lab_EventScript_Script_Continues
   end

SandgemTown_Professor_Rowans_Lab_EventScript_NicknameStarter::
	setvar VAR_0x8004, 0
	call Common_EventScript_NameReceivedPartyMon
	goto SandgemTown_Professor_Rowans_Lab_EventScript_Script_Continues
   end

SandgemTown_Professor_Rowans_Lab_EventScript_Script_Continues::
	switch VAR_STARTER_MON
	case 0, SandgemTown_Professor_Rowans_Lab_EventScript_Script_Continues_Turtwig
	case 1, SandgemTown_Professor_Rowans_Lab_EventScript_Script_Continues_Chimchar
	case 2, SandgemTown_Professor_Rowans_Lab_EventScript_Script_Continues_Piplup
   end

SandgemTown_Professor_Rowans_Lab_EventScript_Script_Continues_Turtwig::
   msgbox SandgemTown_Professor_Rowans_Lab_Text_Rowan_Praises_You_Turtwig, MSGBOX_SIGN
	checkplayergender
	goto_if_eq VAR_RESULT, MALE, SandgemTown_Professor_Rowans_Lab_EventScript_TalK_With_Dawn
	goto_if_eq VAR_RESULT, FEMALE, SandgemTown_Professor_Rowans_Lab_EventScript_TalK_With_Lucas
   end

SandgemTown_Professor_Rowans_Lab_EventScript_Script_Continues_Chimchar::
   msgbox SandgemTown_Professor_Rowans_Lab_Text_Rowan_Praises_You_Chimchar, MSGBOX_SIGN
	checkplayergender
	goto_if_eq VAR_RESULT, MALE, SandgemTown_Professor_Rowans_Lab_EventScript_TalK_With_Dawn
	goto_if_eq VAR_RESULT, FEMALE, SandgemTown_Professor_Rowans_Lab_EventScript_TalK_With_Lucas
   end

SandgemTown_Professor_Rowans_Lab_EventScript_Script_Continues_Piplup::
   msgbox SandgemTown_Professor_Rowans_Lab_Text_Rowan_Praises_You_Piplup, MSGBOX_SIGN
	checkplayergender
	goto_if_eq VAR_RESULT, MALE, SandgemTown_Professor_Rowans_Lab_EventScript_TalK_With_Dawn
	goto_if_eq VAR_RESULT, FEMALE, SandgemTown_Professor_Rowans_Lab_EventScript_TalK_With_Lucas
   end

SandgemTown_Professor_Rowans_Lab_EventScript_TalK_With_Lucas::
   applymovement 1, SandgemTown_Professor_Rowans_Lab_Movement_Rival_Walks_In_Place
   waitmovement 0
   applymovement OBJ_EVENT_ID_PLAYER, SandgemTown_Professor_Rowans_Lab_Movement_Player_Face_Right
   waitmovement 0
   msgbox SandgemTown_Professor_Rowans_Lab_Text_Lucas_Talks, MSGBOX_SIGN
   applymovement 1, SandgemTown_Professor_Rowans_Lab_Movement_Rival_Walks_In_Place
   waitmovement 0
   applymovement OBJ_EVENT_ID_PLAYER, SandgemTown_Professor_Rowans_Lab_Movement_Player_Face_Up
   waitmovement 0
   goto SandgemTown_Professor_Rowans_Lab_EventScript_Rowans_Main_Topic
   end

SandgemTown_Professor_Rowans_Lab_EventScript_TalK_With_Dawn::
   applymovement 2, SandgemTown_Professor_Rowans_Lab_Movement_Rival_Walks_In_Place
   waitmovement 0
   applymovement OBJ_EVENT_ID_PLAYER, SandgemTown_Professor_Rowans_Lab_Movement_Player_Face_Right
   waitmovement 0
   msgbox SandgemTown_Professor_Rowans_Lab_Text_Dawn_Talks, MSGBOX_SIGN
   applymovement 2, SandgemTown_Professor_Rowans_Lab_Movement_Rival_Walks_In_Place
   waitmovement 0
   applymovement OBJ_EVENT_ID_PLAYER, SandgemTown_Professor_Rowans_Lab_Movement_Player_Face_Up
   waitmovement 0
   goto SandgemTown_Professor_Rowans_Lab_EventScript_Rowans_Main_Topic
   end

SandgemTown_Professor_Rowans_Lab_EventScript_Rowans_Main_Topic::
   fadenewbgm MUS_DP_ROWAN
   msgbox SandgemTown_Professor_Rowans_Lab_Text_Pokedex, MSGBOX_YESNO
	call_if_eq VAR_RESULT, YES, SandgemTown_Professor_Rowans_Lab_EventScript_Rowans_Continues_On
	call_if_eq VAR_RESULT, NO, SandgemTown_Professor_Rowans_Lab_EventScript_Rowans_Forces_Yes
   end

SandgemTown_Professor_Rowans_Lab_EventScript_Rowans_Forces_Yes::
   msgbox SandgemTown_Professor_Rowans_Lab_Text_Rowans_Forces_Yes, MSGBOX_YESNO
	call_if_eq VAR_RESULT, YES, SandgemTown_Professor_Rowans_Lab_EventScript_Rowans_Continues_On
	call_if_eq VAR_RESULT, NO, SandgemTown_Professor_Rowans_Lab_EventScript_Rowans_Forces_Yes
   end

SandgemTown_Professor_Rowans_Lab_EventScript_Rowans_Continues_On::
   msgbox SandgemTown_Professor_Rowans_Lab_Text_Good_Answer, MSGBOX_SIGN
	playfanfare MUS_DP_OBTAIN_KEY_ITEM
   setflag FLAG_SYS_POKEDEX_GET
   msgbox SandgemTown_Professor_Rowans_Lab_Text_Rowan_Gives_Pokedex, MSGBOX_AUTOCLOSE
   msgbox SandgemTown_Professor_Rowans_Lab_Text_Rowan_Talks_About_Pokedex, MSGBOX_SIGN
	checkplayergender
	goto_if_eq VAR_RESULT, MALE, SandgemTown_Professor_Rowans_Lab_EventScript_Dawn_Talks_About_Pokedex
	goto_if_eq VAR_RESULT, FEMALE, SandgemTown_Professor_Rowans_Lab_EventScript_Lucas_Talks_About_Pokedex
   end

SandgemTown_Professor_Rowans_Lab_EventScript_Lucas_Talks_About_Pokedex:
   applymovement 1, SandgemTown_Professor_Rowans_Lab_Movement_Rival_Walks_In_Place
   waitmovement 0
   msgbox SandgemTown_Professor_Rowans_Lab_Text_Lucas_Talks_About_Pokedex, MSGBOX_SIGN
   applymovement 1, SandgemTown_Professor_Rowans_Lab_Movement_Rival_Walks_In_Place
   waitmovement 0
   applymovement OBJ_EVENT_ID_PLAYER, SandgemTown_Professor_Rowans_Lab_Movement_Player_Face_Right
   waitmovement 0
   switch VAR_STARTER_MON
	case 0, SandgemTown_Professor_Rowans_Lab_EventScript_Lucas_Talks_About_First_Mon_Piplup
	case 1, SandgemTown_Professor_Rowans_Lab_EventScript_Lucas_Talks_About_First_Mon_Turtwig
	case 2, SandgemTown_Professor_Rowans_Lab_EventScript_Lucas_Talks_About_First_Mon_Chimchar
   end

SandgemTown_Professor_Rowans_Lab_EventScript_Dawn_Talks_About_Pokedex:
   applymovement 2, SandgemTown_Professor_Rowans_Lab_Movement_Rival_Walks_In_Place
   waitmovement 0
   msgbox SandgemTown_Professor_Rowans_Lab_Text_Dawn_Talks_About_Pokedex, MSGBOX_SIGN
   applymovement 2, SandgemTown_Professor_Rowans_Lab_Movement_Rival_Walks_In_Place
   waitmovement 0
   applymovement OBJ_EVENT_ID_PLAYER, SandgemTown_Professor_Rowans_Lab_Movement_Player_Face_Right
   waitmovement 0
   switch VAR_STARTER_MON
	case 0, SandgemTown_Professor_Rowans_Lab_EventScript_Dawn_Talks_About_First_Mon_Piplup
	case 1, SandgemTown_Professor_Rowans_Lab_EventScript_Dawn_Talks_About_First_Mon_Turtwig
	case 2, SandgemTown_Professor_Rowans_Lab_EventScript_Dawn_Talks_About_First_Mon_Chimchar
   end

SandgemTown_Professor_Rowans_Lab_EventScript_Lucas_Talks_About_First_Mon_Turtwig:
   msgbox SandgemTown_Professor_Rowans_Lab_Text_Lucas_Talk_About_Turtwig, MSGBOX_SIGN
   goto SandgemTown_Professor_Rowans_Lab_EventScript_Lucas_Leaves
   end

SandgemTown_Professor_Rowans_Lab_EventScript_Lucas_Talks_About_First_Mon_Chimchar:
   msgbox SandgemTown_Professor_Rowans_Lab_Text_Lucas_Talk_About_Chimchar, MSGBOX_SIGN
   goto SandgemTown_Professor_Rowans_Lab_EventScript_Lucas_Leaves
   end

SandgemTown_Professor_Rowans_Lab_EventScript_Lucas_Talks_About_First_Mon_Piplup:
   msgbox SandgemTown_Professor_Rowans_Lab_Text_Lucas_Talk_About_Piplup, MSGBOX_SIGN
   goto SandgemTown_Professor_Rowans_Lab_EventScript_Lucas_Leaves
   end

SandgemTown_Professor_Rowans_Lab_EventScript_Dawn_Talks_About_First_Mon_Turtwig:
   msgbox SandgemTown_Professor_Rowans_Lab_Text_Dawn_Talk_About_Turtwig, MSGBOX_SIGN
   goto SandgemTown_Professor_Rowans_Lab_EventScript_Dawn_Leaves
   end

SandgemTown_Professor_Rowans_Lab_EventScript_Dawn_Talks_About_First_Mon_Chimchar:
   msgbox SandgemTown_Professor_Rowans_Lab_Text_Dawn_Talk_About_Chimchar, MSGBOX_SIGN
   goto SandgemTown_Professor_Rowans_Lab_EventScript_Dawn_Leaves
   end

SandgemTown_Professor_Rowans_Lab_EventScript_Dawn_Talks_About_First_Mon_Piplup:
   msgbox SandgemTown_Professor_Rowans_Lab_Text_Dawn_Talk_About_Piplup, MSGBOX_SIGN
   goto SandgemTown_Professor_Rowans_Lab_EventScript_Dawn_Leaves
   end

SandgemTown_Professor_Rowans_Lab_EventScript_Lucas_Leaves:
   applymovement OBJ_EVENT_ID_PLAYER, SandgemTown_Professor_Rowans_Lab_Movement_Player_Face_Down
   applymovement 1, SandgemTown_Professor_Rowans_Lab_Movement_Rival_Leaves
   waitmovement 0
   setvar VAR_ROWANS_LAB_STATE, 1
   removeobject 1
   setflag FLAG_HIDE_DAWN_IN_SANDGEM_LAB
   setvar VAR_SANDGEM_TOWN_STATE, 1
   end

SandgemTown_Professor_Rowans_Lab_EventScript_Dawn_Leaves:
   applymovement OBJ_EVENT_ID_PLAYER, SandgemTown_Professor_Rowans_Lab_Movement_Player_Face_Down
   applymovement 2, SandgemTown_Professor_Rowans_Lab_Movement_Rival_Leaves
   waitmovement 0
   setvar VAR_ROWANS_LAB_STATE, 1
   removeobject 2
   setflag FLAG_HIDE_LUCAS_IN_SANDGEM_LAB
   setvar VAR_SANDGEM_TOWN_STATE, 1
   end

SandgemTown_Professor_Rowans_Lab_Text_Give_Nickname_Turtwig:
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

SandgemTown_Professor_Rowans_Lab_Text_Give_Nickname_Chimchar:
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

SandgemTown_Professor_Rowans_Lab_Text_Give_Nickname_Piplup:
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

SandgemTown_Professor_Rowans_Lab_Text_Rowan_Praises_You_Turtwig:
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

SandgemTown_Professor_Rowans_Lab_Text_Rowan_Praises_You_Chimchar:
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

SandgemTown_Professor_Rowans_Lab_Text_Rowan_Praises_You_Piplup:
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

SandgemTown_Professor_Rowans_Lab_Text_Dawn_Talks:
   .string "Dawn: I'm so glad that you're kind\n"
   .string "toward Pokemon!\p"
   .string "If you weren't, I'd have to...\n"
   .string "Oh, I just can't say it...$"

SandgemTown_Professor_Rowans_Lab_Text_Lucas_Talks:
   .string "Lucas: I'm so glad that you're kind\n"
   .string "toward Pokemon!\p"
   .string "If you weren't, I'd have to...\n"
   .string "Oh, I just can't say it...$"

SandgemTown_Professor_Rowans_Lab_Text_Pokedex:
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

SandgemTown_Professor_Rowans_Lab_Text_Rowans_Forces_Yes:
   .string "Rowan:...\p"
   .string "...\p"
   .string "...\p"
   .string "I can stand here without speaking for\n"
   .string "hours. I'm a very patient man.\p"
   .string "I want to entrust you with this\n"
   .string "Pokedex.\p"
   .string "Will you use it to record data on all\n"
   .string "the Pokemon in Sinnoh for me?$"

SandgemTown_Professor_Rowans_Lab_Text_Good_Answer:
   .string "Rowan: Hm!\p"
   .string "Good Answer!$"

SandgemTown_Professor_Rowans_Lab_Text_Rowan_Gives_Pokedex:
   .string "{PLAYER} obtained\n"
   .string "the Pokedex!$"

SandgemTown_Professor_Rowans_Lab_Text_Rowan_Talks_About_Pokedex:
   .string "Rowan: That Pokedex is a very\n"
   .string "high-tech device.\p"
   .string "It will automatically record data on\n"
   .string "every kind of Pokemon you encounter.\p"
   .string "{PLAYER}, I ask that you go\n"
   .string "everywhere and meet every kind of\l"
   .string "Pokemon in this region!$"

SandgemTown_Professor_Rowans_Lab_Text_Dawn_Talks_About_Pokedex:
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

SandgemTown_Professor_Rowans_Lab_Text_Lucas_Talks_About_Pokedex:
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

SandgemTown_Professor_Rowans_Lab_Text_Dawn_Talks_More:
   .string "Dawn: The Pokemon that I met for\n"
   .string "\p"

SandgemTown_Professor_Rowans_Lab_Text_Lucas_Talk_About_Turtwig:
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

SandgemTown_Professor_Rowans_Lab_Text_Lucas_Talk_About_Chimchar:
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

SandgemTown_Professor_Rowans_Lab_Text_Lucas_Talk_About_Piplup:
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

SandgemTown_Professor_Rowans_Lab_Text_Dawn_Talk_About_Turtwig:
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

SandgemTown_Professor_Rowans_Lab_Text_Dawn_Talk_About_Chimchar:
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

SandgemTown_Professor_Rowans_Lab_Text_Dawn_Talk_About_Piplup:
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

SandgemTown_Professor_Rowans_Lab_Movement_Rival_Goes_Near_Rowan:
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

SandgemTown_Professor_Rowans_Lab_Movement_Player_Goes_Near_Rowan:
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

SandgemTown_Professor_Rowans_Lab_Movement_Rival_Walks_In_Place:
   walK_in_place_left
   step_end

SandgemTown_Professor_Rowans_Lab_Movement_Player_Face_Right:
   face_right
   step_end

SandgemTown_Professor_Rowans_Lab_Movement_Player_Face_Up:
   face_up
   step_end

SandgemTown_Professor_Rowans_Lab_Movement_Rival_Leaves:
   walk_down
   walk_down
   walk_down
   walk_down
   walk_down
   walk_down
   walk_down
   step_end

SandgemTown_Professor_Rowans_Lab_Movement_Player_Face_Down:
   face_down
   step_end
