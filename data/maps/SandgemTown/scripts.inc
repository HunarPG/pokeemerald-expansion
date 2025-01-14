SandgemTown_MapScripts::
   map_script MAP_SCRIPT_ON_TRANSITION, Sandgem_Town_On_Transition
   map_script MAP_SCRIPT_ON_FRAME_TABLE, Sandgem_Town_On_Frame
	.byte 0

Sandgem_Town_On_Transition::
	call_if_unset FLAG_VISITED_SANDGEM_TOWN, Sandgem_Town_EventScript_Reached_First_Time
	end

Sandgem_Town_On_Frame:
	map_script_2 VAR_SANDGEM_TOWN_STATE, 1, Sandgem_Town_EventScript_Tutorial
	.2byte 0

Sandgem_Town_EventScript_Reached_First_Time::
	checkplayergender
	goto_if_eq VAR_RESULT, MALE, SandgemTown_EventScript_Hide_Lucas
	goto_if_eq VAR_RESULT, FEMALE, SandgemTown_EventScript_Hide_Dawn
   end

SandgemTown_EventScript_Hide_Lucas::
   setflag FLAG_HIDE_LUCAS_IN_SANDGEM
   end

SandgemTown_EventScript_Hide_Dawn::
   setflag FLAG_HIDE_DAWN_IN_SANDGEM
   end

SandgemTown_EventScript_We_Meet_Rival_1::
	checkplayergender
	goto_if_eq VAR_RESULT, MALE, SandgemTown_EventScript_Dawn_Takes_Us_To_Lab_1
	goto_if_eq VAR_RESULT, FEMALE, SandgemTown_EventScript_Lucas_Takes_Us_To_Lab_1
   end

SandgemTown_EventScript_We_Meet_Rival_2::
	checkplayergender
	goto_if_eq VAR_RESULT, MALE, SandgemTown_EventScript_Dawn_Takes_Us_To_Lab_2
	goto_if_eq VAR_RESULT, FEMALE, SandgemTown_EventScript_Lucas_Takes_Us_To_Lab_2
   end

SandgemTown_EventScript_We_Meet_Rival_3::
	checkplayergender
	goto_if_eq VAR_RESULT, MALE, SandgemTown_EventScript_Dawn_Takes_Us_To_Lab_3
	goto_if_eq VAR_RESULT, FEMALE, SandgemTown_EventScript_Lucas_Takes_Us_To_Lab_3
   end

SandgemTown_EventScript_Dawn_Takes_Us_To_Lab_1::
   playse SE_PIN
   applymovement 5, Common_Movement_ExclamationMark
   applymovement OBJ_EVENT_ID_PLAYER, Sandgem_Town_Movement_Player_Faces_Right
   waitmovement 0
	applymovement 5, Common_Movement_Delay48
	waitmovement 0
   applymovement 5, Sandgem_Town_Movement_Rival_2_Comes_To_Us_1
   waitmovement 0
   msgbox Sandgem_Town_Text_Professor_Is_Waiting_Dawn, MSGBOX_SIGN
   applymovement 5, Sandgem_Town_Movement_Rival_2_Goes_To_Lab_1
   applymovement OBJ_EVENT_ID_PLAYER, Sandgem_Town_Movement_Player_Goes_To_Lab_1
   waitmovement 0
   goto SandgemTown_EventScript_Enter_Lab_Common_Dawn
   end

SandgemTown_EventScript_Enter_Lab_Common_Dawn::
   msgbox Sandgem_Town_Text_This_Is_Lab, MSGBOX_SIGN
	playse SE_DOOR
   applymovement 6, Sandgem_Town_Movement_Barry_Exits_Lab
   waitmovement 0
   msgbox Sandgem_Town_Text_Thud, MSGBOX_SIGN
   playse SE_PIN
	fadenewbgm MUS_DP_RIVAL
   applymovement 6, Common_Movement_ExclamationMark
   waitmovement 0
	applymovement 6, Common_Movement_Delay48
	waitmovement 0
   msgbox Sandgem_Town_Text_Barry_Talks_After_Thud, MSGBOX_SIGN
   applymovement 6, Sandgem_Town_Movement_Barry_Leaves
   applymovement 5, Sandgem_Town_Movement_Rival_2_Faces_Right
   applymovement OBJ_EVENT_ID_PLAYER, Sandgem_Town_Movement_Player_Faces_Right
   waitmovement 0
	applymovement 6, Common_Movement_Delay48
	waitmovement 0
	fadenewbgm MUS_DP_SANDGEM_DAY
   msgbox Sandgem_Town_Text_Dawn_Your_Friend_Is_Impatient, MSGBOX_SIGN
   applymovement 5, Sandgem_Town_Movement_Rival_2_Enters_Lab
   applymovement OBJ_EVENT_ID_PLAYER, Sandgem_Town_Movement_Player_Faces_Up
   waitmovement 0
   applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_Delay48
   waitmovement 0
   applymovement OBJ_EVENT_ID_PLAYER, Sandgem_Town_Movement_Player_Enters_Lab
   waitmovement 0
   playse SE_DOOR
   warpsilent MAP_SANDGEM_TOWN_PROFESSOR_ROWANS_LAB, 7, 15
   end

SandgemTown_EventScript_Lucas_Takes_Us_To_Lab_1::
   playse SE_PIN
   applymovement 4, Common_Movement_ExclamationMark
   applymovement OBJ_EVENT_ID_PLAYER, Sandgem_Town_Movement_Player_Faces_Right
   waitmovement 0
	applymovement 4, Common_Movement_Delay48
	waitmovement 0
   applymovement 4, Sandgem_Town_Movement_Rival_2_Comes_To_Us_1
   waitmovement 0
   msgbox Sandgem_Town_Text_Professor_Is_Waiting_Lucas, MSGBOX_SIGN
   applymovement 4, Sandgem_Town_Movement_Rival_2_Goes_To_Lab_1
   applymovement OBJ_EVENT_ID_PLAYER, Sandgem_Town_Movement_Player_Goes_To_Lab_1
   waitmovement 0
   goto SandgemTown_EventScript_Enter_Lab_Common_Lucas
   end

SandgemTown_EventScript_Enter_Lab_Common_Lucas::
   msgbox Sandgem_Town_Text_This_Is_Lab, MSGBOX_SIGN
	playse SE_DOOR
   applymovement 6, Sandgem_Town_Movement_Barry_Exits_Lab
   waitmovement 0
   msgbox Sandgem_Town_Text_Thud, MSGBOX_SIGN
   playse SE_PIN
	fadenewbgm MUS_DP_RIVAL
   applymovement 6, Common_Movement_ExclamationMark
   waitmovement 0
	applymovement 6, Common_Movement_Delay48
	waitmovement 0
   msgbox Sandgem_Town_Text_Barry_Talks_After_Thud, MSGBOX_SIGN
   applymovement 6, Sandgem_Town_Movement_Barry_Leaves
   applymovement 4, Sandgem_Town_Movement_Rival_2_Faces_Right
   applymovement OBJ_EVENT_ID_PLAYER, Sandgem_Town_Movement_Player_Faces_Right
   waitmovement 0
	applymovement 6, Common_Movement_Delay48
	waitmovement 0
	fadenewbgm MUS_DP_SANDGEM_DAY
   msgbox Sandgem_Town_Text_Lucas_Your_Friend_Is_Impatient, MSGBOX_SIGN
   applymovement 4, Sandgem_Town_Movement_Rival_2_Enters_Lab
   applymovement OBJ_EVENT_ID_PLAYER, Sandgem_Town_Movement_Player_Faces_Up
   waitmovement 0
   applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_Delay48
   waitmovement 0
   applymovement OBJ_EVENT_ID_PLAYER, Sandgem_Town_Movement_Player_Enters_Lab
   waitmovement 0
   playse SE_DOOR
   warpsilent MAP_SANDGEM_TOWN_PROFESSOR_ROWANS_LAB, 7, 15
   end

SandgemTown_EventScript_Dawn_Takes_Us_To_Lab_2::
   playse SE_PIN
   applymovement 5, Common_Movement_ExclamationMark
   applymovement OBJ_EVENT_ID_PLAYER, Sandgem_Town_Movement_Player_Faces_Right
   waitmovement 0
	applymovement 5, Common_Movement_Delay48
	waitmovement 0
   applymovement 5, Sandgem_Town_Movement_Rival_2_Comes_To_Us_2
   waitmovement 0
   msgbox Sandgem_Town_Text_Professor_Is_Waiting_Dawn, MSGBOX_SIGN
   applymovement 5, Sandgem_Town_Movement_Rival_2_Goes_To_Lab_2
   applymovement OBJ_EVENT_ID_PLAYER, Sandgem_Town_Movement_Player_Goes_To_Lab_2
   waitmovement 0
   goto SandgemTown_EventScript_Enter_Lab_Common_Dawn
   end

SandgemTown_EventScript_Lucas_Takes_Us_To_Lab_2::
   playse SE_PIN
   applymovement 4, Common_Movement_ExclamationMark
   applymovement OBJ_EVENT_ID_PLAYER, Sandgem_Town_Movement_Player_Faces_Right
   waitmovement 0
   applymovement 4, Common_Movement_Delay48
   waitmovement 0
   applymovement 4, Sandgem_Town_Movement_Rival_2_Comes_To_Us_2
   waitmovement 0
   msgbox Sandgem_Town_Text_Professor_Is_Waiting_Lucas, MSGBOX_SIGN
   applymovement 4, Sandgem_Town_Movement_Rival_2_Goes_To_Lab_2
   applymovement OBJ_EVENT_ID_PLAYER, Sandgem_Town_Movement_Player_Goes_To_Lab_2
   waitmovement 0
   goto SandgemTown_EventScript_Enter_Lab_Common_Lucas
   end

SandgemTown_EventScript_Dawn_Takes_Us_To_Lab_3::
   playse SE_PIN
   applymovement 5, Common_Movement_ExclamationMark
   applymovement OBJ_EVENT_ID_PLAYER, Sandgem_Town_Movement_Player_Faces_Right
   waitmovement 0
	applymovement 5, Common_Movement_Delay48
	waitmovement 0
   applymovement 5, Sandgem_Town_Movement_Rival_2_Comes_To_Us_3
   waitmovement 0
   msgbox Sandgem_Town_Text_Professor_Is_Waiting_Dawn, MSGBOX_SIGN
   applymovement 5, Sandgem_Town_Movement_Rival_2_Goes_To_Lab_3
   applymovement OBJ_EVENT_ID_PLAYER, Sandgem_Town_Movement_Player_Goes_To_Lab_3
   waitmovement 0
   goto SandgemTown_EventScript_Enter_Lab_Common_Dawn
   end

SandgemTown_EventScript_Lucas_Takes_Us_To_Lab_3::
   playse SE_PIN
   applymovement 4, Common_Movement_ExclamationMark
   applymovement OBJ_EVENT_ID_PLAYER, Sandgem_Town_Movement_Player_Faces_Right
   waitmovement 0
   applymovement 4, Common_Movement_Delay48
   waitmovement 0
   applymovement 4, Sandgem_Town_Movement_Rival_2_Comes_To_Us_3
   waitmovement 0
   msgbox Sandgem_Town_Text_Professor_Is_Waiting_Lucas, MSGBOX_SIGN
   applymovement 4, Sandgem_Town_Movement_Rival_2_Goes_To_Lab_3
   applymovement OBJ_EVENT_ID_PLAYER, Sandgem_Town_Movement_Player_Goes_To_Lab_3
   waitmovement 0
   goto SandgemTown_EventScript_Enter_Lab_Common_Lucas
   end

Sandgem_Town_EventScript_Tutorial::
	checkplayergender
	call_if_eq VAR_RESULT, MALE, Sandgem_Town_EventScript_Tutorial_Dawn
	call_if_eq VAR_RESULT, FEMALE, Sandgem_Town_EventScript_Tutorial_Lucas
   end

Sandgem_Town_EventScript_Tutorial_Dawn::
   applymovement 5, Sandgem_Town_Movement_Rival_2_Faces_Up
   waitmovement 0
   applymovement 7, Common_Movement_Delay48
   waitmovement 0
   playse SE_DOOR
   applymovement 7, Sandgem_Town_Movement_Rowan_Comes_Out
   waitmovement 0
   msgbox Sandgem_Town_Text_Professor_Says_Players_Name, MSGBOX_SIGN
   playse SE_PIN
   applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
   waitmovement 0
   applymovement 5, Common_Movement_ExclamationMark
   waitmovement 0
   applymovement OBJ_EVENT_ID_PLAYER, Sandgem_Town_Movement_Player_Faces_Up
   waitmovement 0
   msgbox Sandgem_Town_Text_Professor_Talks_About_Something_Good, MSGBOX_SIGN
   giveitem ITEM_TM_RETURN
   msgbox Sandgem_Town_Text_Player_Put_It_In, MSGBOX_SIGN
   playse SE_DOOR
   applymovement 7, Sandgem_Town_Movement_Rowan_Leaves
   waitmovement 0
   msgbox Sandgem_Town_Text_Dawn_Is_Surprised, MSGBOX_SIGN
   applymovement OBJ_EVENT_ID_PLAYER, Sandgem_Town_Movement_Player_Faces_Down
   waitmovement 0
   msgbox Sandgem_Town_Text_Rival_2_Is_Your_Mentor, MSGBOX_SIGN
   playbgm MUS_DP_DAWN FALSE
   applymovement 5, Sandgem_Town_Movement_Rival_2_Takes_Us_To_Pokemon_Center
   applymovement OBJ_EVENT_ID_PLAYER, Sandgem_Town_Movement_Player_Goes_To_Pokemon_Center
   waitmovement 0
   msgbox Sandgem_Town_Text_Rival_2_Explain_Pokemon_Center, MSGBOX_SIGN
   applymovement 5, Sandgem_Town_Movement_Rival_2_Takes_Us_To_Mart
   applymovement OBJ_EVENT_ID_PLAYER, Sandgem_Town_Movement_Player_Goes_To_Mart
   waitmovement 0
   msgbox Sandgem_Town_Text_Rival_2_Explain_Mart, MSGBOX_SIGN
   applymovement 5, Sandgem_Town_Movement_Rival_2_Faces_Left
   applymovement OBJ_EVENT_ID_PLAYER, Sandgem_Town_Movement_Player_Faces_Right
   waitmovement 0
   playse SE_PIN
   applymovement 5, Common_Movement_ExclamationMark
   waitmovement 0
   msgbox Sandgem_Town_Text_Tell_Your_Family, MSGBOX_SIGN
   setvar VAR_MOM_TEXT, 6
   applymovement 5, Sandgem_Town_Movement_Rival_2_Leaves_1
   waitmovement 0
   fadenewbgm MUS_DP_SANDGEM_DAY
   applymovement OBJ_EVENT_ID_PLAYER, Sandgem_Town_Movement_Player_Faces_Left
   applymovement 5, Sandgem_Town_Movement_Rival_2_Leaves_2
   waitmovement 0
   setvar VAR_SANDGEM_TOWN_STATE, 2
   setflag FLAG_HIDE_DAWN_IN_SANDGEM
   removeobject 5
   end

Sandgem_Town_EventScript_Tutorial_Lucas::
   applymovement 4, Sandgem_Town_Movement_Rival_2_Faces_Up
   waitmovement 0
   applymovement 7, Common_Movement_Delay48
   waitmovement 0
   playse SE_DOOR
   applymovement 7, Sandgem_Town_Movement_Rowan_Comes_Out
   waitmovement 0
   msgbox Sandgem_Town_Text_Professor_Says_Players_Name, MSGBOX_SIGN
   playse SE_PIN
   applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
   waitmovement 0
   applymovement 4, Common_Movement_ExclamationMark
   waitmovement 0
   applymovement OBJ_EVENT_ID_PLAYER, Sandgem_Town_Movement_Player_Faces_Up
   waitmovement 0
   msgbox Sandgem_Town_Text_Professor_Talks_About_Something_Good, MSGBOX_SIGN
   giveitem ITEM_TM_RETURN
   msgbox Sandgem_Town_Text_Player_Put_It_In, MSGBOX_SIGN
   playse SE_DOOR
   applymovement 7, Sandgem_Town_Movement_Rowan_Leaves
   waitmovement 0
   msgbox Sandgem_Town_Text_Lucas_Is_Surprised, MSGBOX_SIGN
   applymovement OBJ_EVENT_ID_PLAYER, Sandgem_Town_Movement_Player_Faces_Down
   waitmovement 0
   msgbox Sandgem_Town_Text_Rival_2_Is_Your_Mentor, MSGBOX_SIGN
   playbgm MUS_DP_LUCAS FALSE
   applymovement 4, Sandgem_Town_Movement_Rival_2_Takes_Us_To_Pokemon_Center
   applymovement OBJ_EVENT_ID_PLAYER, Sandgem_Town_Movement_Player_Goes_To_Pokemon_Center
   waitmovement 0
   msgbox Sandgem_Town_Text_Rival_2_Explain_Pokemon_Center, MSGBOX_SIGN
   applymovement 4, Sandgem_Town_Movement_Rival_2_Takes_Us_To_Mart
   applymovement OBJ_EVENT_ID_PLAYER, Sandgem_Town_Movement_Player_Goes_To_Mart
   waitmovement 0
   msgbox Sandgem_Town_Text_Rival_2_Explain_Mart, MSGBOX_SIGN
   applymovement 4, Sandgem_Town_Movement_Rival_2_Faces_Left
   applymovement OBJ_EVENT_ID_PLAYER, Sandgem_Town_Movement_Player_Faces_Right
   waitmovement 0
   playse SE_PIN
   applymovement 4, Common_Movement_ExclamationMark
   waitmovement 0
   msgbox Sandgem_Town_Text_Tell_Your_Family, MSGBOX_SIGN
   setvar VAR_MOM_TEXT, 6
   applymovement 4, Sandgem_Town_Movement_Rival_2_Leaves_1
   waitmovement 0
   fadenewbgm MUS_DP_SANDGEM_DAY
   applymovement OBJ_EVENT_ID_PLAYER, Sandgem_Town_Movement_Player_Faces_Left
   applymovement 4, Sandgem_Town_Movement_Rival_2_Leaves_2
   waitmovement 0
   setvar VAR_SANDGEM_TOWN_STATE, 2
   setflag FLAG_HIDE_LUCAS_IN_SANDGEM
   removeobject 4
   end

SandgemTown_EventScript_Sign::
	msgbox SandgemTown_Text_Sign, MSGBOX_SIGN
	end

SandgemTown_EventScript_Pokemon_Mart_Sign::
	msgbox SandgemTown_Text_Pokemon_Mart_Sign, MSGBOX_SIGN
	end

SandgemTown_EventScript_Pokemon_Center_Sign::
	msgbox SandgemTown_Text_Pokemon_Center_Sign, MSGBOX_SIGN
	end

SandgemTown_EventScript_Rival2_House_Sign::
	checkplayergender
	call_if_eq VAR_RESULT, MALE, SandgemTown_EventScript_Dawn_House_Sign
	call_if_eq VAR_RESULT, FEMALE, SandgemTown_EventScript_Lucas_House_Sign
	end

SandgemTown_EventScript_Dawn_House_Sign::
	msgbox SandgemTown_Text_Dawn_House_Sign, MSGBOX_SIGN
	end

SandgemTown_EventScript_Lucas_House_Sign::
	msgbox SandgemTown_Text_Lucas_House_Sign, MSGBOX_SIGN
	end

SandgemTown_EventScript_Boy::
	msgbox SandgemTown_Text_Boy, MSGBOX_NPC
	end

SandgemTown_EventScript_Youngster::
	msgbox SandgemTown_Text_Youngster, MSGBOX_NPC
	end

SandgemTown_EventScript_Girl::
	msgbox SandgemTown_Text_Girl, MSGBOX_NPC
	end

SandgemTown_Text_Sign:
    .string "Sandgem Town\n"
    .string "Town of Sand!$"

SandgemTown_Text_Pokemon_Mart_Sign:
    .string "All Your Item Needs Fulfilled!\n"
    .string "Pokemon Mart$"

SandgemTown_Text_Pokemon_Center_Sign:
    .string "Heal Your Pokemon!\n"
    .string "Pokemon Center$"

SandgemTown_Text_Dawn_House_Sign:
   .string "Dawn's House$"

SandgemTown_Text_Lucas_House_Sign:
   .string "Lucas's House$"

SandgemTown_Text_Boy:
   .string "That thing you have!\p"
   .string "It's a Pokedex, isn't it?!\p"
   .string "You are off to see all kinds of\n"
   .string "Pokemon now! Lucky you!$"

SandgemTown_Text_Youngster:
   .string "Oh, wow!\n"
   .string "Pokemon are so cool!\p"
   .string "You can make yours battle and make\n"
   .string "them stronger!\p"
   .string "I wish I had some!\n"
   .string "It's so cool!$"

SandgemTown_Text_Girl:
   .string "So I don't forget what's happened,\n"
   .string "till now, I'd better save this...\p"
   .string "There!\n"
   .string "Now I can take a break.$"

Sandgem_Town_Text_Professor_Is_Waiting_Dawn:
   .string "Dawn: Oh! There you are!\n"
   .string "Please, come with me!\l"
   .string "The Professor is waiting!$"

Sandgem_Town_Text_Professor_Is_Waiting_Lucas:
   .string "Lucas: Oh! There you are!\n"
   .string "Please, come with me!\l"
   .string "The Professor is waiting!$"

Sandgem_Town_Text_This_Is_Lab:
   .string "This is it!\n"
   .string "Our Pokemon Research Lab!\p"
   .string "Let's go...$"

Sandgem_Town_Text_Barry_Talks_After_Thud:
   .string "{B_RIVAL_NAME}: What the...\p"
   .string "Oh, it's you, {PLAYER}!\p"
   .string "That old guy... He's not scary so\n"
   .string "much as he is totally out there!\p"
   .string "Aww, it doesn't matter, A.\n"
   .string "I'm out of here. See you later!$"

Sandgem_Town_Text_Dawn_Your_Friend_Is_Impatient:
   .string "Dawn: Wow, what was that?\p"
   .string "Your friend sure seems to be really\n"
   .string "impatient\p"
   .string "Well, anyways...\n"
   .string "Let's go inside.$"

Sandgem_Town_Text_Lucas_Your_Friend_Is_Impatient:
   .string "Dawn: Wow, what was that?\p"
   .string "Your friend sure seems to be really\n"
   .string "impatient\p"
   .string "Well, anyways...\n"
   .string "Let's go inside.$"

Sandgem_Town_Text_Professor_Says_Players_Name:
   .string "{PLAYER}!$"

Sandgem_Town_Text_Professor_Talks_About_Something_Good:
   .string "Rowan: I have seomething good here.\n"
   .string "You should take this as well.$"

Sandgem_Town_Text_Professor_Gives_TM_For_Return:
   .string "Obtained the TM27!$"

Sandgem_Town_Text_Player_Put_It_In:
   .string "Rowan: That is a Technical Machine.\n"
   .string "That one contains the move Return.\p"
   .string "Using a Technical Machine, or TM for\n"
   .string "short, teached a move instantly to\l"
   .string "a Pokemon.\p"
   .string "Bear in mind, however, that a TM is\n"
   .string "single-use only\p"
   .string "The move Return gains power the more\n"
   .string "friendly your Pokemon is with you.\p"
   .string "It's up to you, of course, if you want\n"
   .string "to use that TM or not.\p"
   .string "I'll send you off with the wish that\n"
   .string "your journey will be fun.$"

Sandgem_Town_Text_Dawn_Is_Surprised:
   .string "Dawn: Oh, wow.\n"
   .string "I didn't know the professor had TMs.\p"
   .string "Was he a Trainer when he was\n"
   .string "young...?$"

Sandgem_Town_Text_Lucas_Is_Surprised:
   .string "Lucas: Oh, wow.\n"
   .string "I didn't know the professor had TMs.\p"
   .string "Was he a Trainer when he was\n"
   .string "young...?$"

Sandgem_Town_Text_Rival_2_Is_Your_Mentor:
   .string "Ok, {PLAYER}, I'll act as\n"
   .string "your mentor.\p"
   .string "I've got a bit more experience than\n"
   .string "you as a Trainer and as the professor's\l"
   .string "assistant.\p"
   .string "Ok, follow me!$"

Sandgem_Town_Text_Rival_2_Explain_Pokemon_Center:
   .string "This building with the Red roof is\n"
   .string "the Pokemon Center\p"
   .string "It's the place that heals Pokemon\n"
   .string "that have been hurt in battle.\p"
   .string "You can find a Pokemon Center in\n"
   .string "most towns.$"

Sandgem_Town_Text_Rival_2_Explain_Mart:
   .string "The building with the blue roof over\n"
   .string "here is the Poke Mart.\p"
   .string "It's a shop where you can buy and\n"
   .string "sell items and medicine.\p"
   .string "{PLAYER}, since you're a novice\n"
   .string "Trainer, you won't be able to buy\l"
   .string "many kinds of mechandise.\p"
   .string "Don't let it bother you!$"

Sandgem_Town_Text_Tell_Your_Family:
   .string "Oh, that's right!\n"
   .string "{PLAYER}...\p"
   .string "Don't you need to let your family\n"
   .string "know what you're going to helping\l"
   .string "Prof. Rowan with the Pokedex?\p"
   .string "You may need to do go far away, so I\n"
   .string "think you should let someone know.\p"
   .string "Oh, but before you go, heal up your\n"
   .string "Pokemon at the Pokemon Center.\p"
   .string "It will be a lot less scary that way.\n"
   .string "Ok, bye now!$"

Sandgem_Town_Text_Thud:
   .string "Thud!!$"

Sandgem_Town_Movement_Player_Faces_Right:
   face_right
   step_end

Sandgem_Town_Movement_Rival_2_Comes_To_Us_1:
   walk_left
   walk_left
   walk_left
   step_end

Sandgem_Town_Movement_Rival_2_Comes_To_Us_2:
   walk_left
   walk_left
   walk_left
   walk_down
   face_left
   step_end

Sandgem_Town_Movement_Rival_2_Comes_To_Us_3:
   walk_left
   walk_left
   walk_left
   walk_down
   walk_down
   face_left
   step_end

Sandgem_Town_Movement_Rival_2_Goes_To_Lab_1:
   walk_right
   walk_right
   walk_right
   walk_right
   face_up
   step_end

Sandgem_Town_Movement_Rival_2_Goes_To_Lab_2:
   walk_up
   walk_right
   walk_right
   walk_right
   walk_right
   face_up
   step_end

Sandgem_Town_Movement_Rival_2_Goes_To_Lab_3:
   walk_up
   walk_up
   walk_right
   walk_right
   walk_right
   walk_right
   face_up
   step_end

Sandgem_Town_Movement_Player_Goes_To_Lab_1:
   walk_right
   walk_right
   walk_right
   walk_right
   face_up
   step_end

Sandgem_Town_Movement_Player_Goes_To_Lab_2:
   walk_right
   walk_up
   walk_right
   walk_right
   walk_right
   face_up
   step_end

Sandgem_Town_Movement_Player_Goes_To_Lab_3:
   walk_right
   walk_up
   walk_up
   walk_right
   walk_right
   walk_right
   face_up
   step_end

Sandgem_Town_Movement_Barry_Exits_Lab:
   walk_fast_down
   walk_fast_down
   step_end

Sandgem_Town_Movement_Barry_Leaves:
   walk_fast_right
   walk_fast_right
   walk_fast_down
   walk_fast_right
   walk_fast_right
   walk_fast_right
   walk_fast_right
   walk_fast_right
   walk_fast_right
   step_end

Sandgem_Town_Movement_Rival_2_Faces_Right:
   face_right
   step_end

Sandgem_Town_Movement_Rival_2_Enters_Lab:
   walk_up
   walk_left
   walk_up
   walk_up
   step_end

Sandgem_Town_Movement_Player_Faces_Up:
   face_up
   step_end

Sandgem_Town_Movement_Player_Enters_Lab:
   walk_up
   walk_up
   step_end

Sandgem_Town_Movement_Rival_2_Faces_Up:
   face_up
   step_end

Sandgem_Town_Movement_Rowan_Comes_Out:
   walk_down
   step_end

Sandgem_Town_Movement_Rowan_Leaves:
   walk_up
   step_end

Sandgem_Town_Movement_Player_Faces_Down:
   face_down
   step_end

Sandgem_Town_Movement_Rival_2_Takes_Us_To_Pokemon_Center:
   walk_right
   walk_right
   walk_right
   walk_right
   walk_right
   walk_right
   walk_right
   walk_right
   walk_right
   walk_right
   face_up
   step_end

Sandgem_Town_Movement_Player_Goes_To_Pokemon_Center:
   walk_down
   walk_right
   walk_right
   walk_right
   walk_right
   walk_right
   walk_right
   walk_right
   walk_right
   walk_right
   face_up
   step_end

Sandgem_Town_Movement_Rival_2_Takes_Us_To_Mart:
   walk_right
   walk_right
   walk_right
   walk_right
   walk_right
   walk_right
   walk_right
   walk_right
   walk_right
   walk_right
   face_up
   step_end

Sandgem_Town_Movement_Player_Goes_To_Mart:
   walk_right
   walk_right
   walk_right
   walk_right
   walk_right
   walk_right
   walk_right
   walk_right
   walk_right
   walk_right
   face_up
   step_end

Sandgem_Town_Movement_Rival_2_Faces_Left:
   face_left
   step_end

Sandgem_Town_Movement_Rival_2_Leaves_1:
   walk_down
   walk_left
   step_end

Sandgem_Town_Movement_Rival_2_Leaves_2:
   walk_left
   walk_left
   walk_left
   walk_left
   walk_up
   walk_up
   walk_up
   walk_up
   walk_up
   walk_up
   walk_up
   walk_up
   step_end

Sandgem_Town_Movement_Player_Faces_Left:
   face_left
   step_end
