SandgemTown_MapScripts::
   map_script MAP_SCRIPT_ON_TRANSITION, Sandgem_Town_On_Transition
	.byte 0

Sandgem_Town_On_Transition::
	call_if_unset FLAG_VISITED_SANDGEM_TOWN, Sandgem_Town_EventScript_Reached_First_Time
	call_if_set FLAG_VISITED_SANDGEM_TOWN, Sandgem_Town_EventScript_Tutorial_Time
	end

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

Sandgem_Town_EventScript_Tutorial_Time::
   setflag FLAG_HIDE_LUCAS_IN_SANDGEM
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
   msgbox Sandgem_Town_Text_Dawn_Your_Friend_Is_Impatient, MSGBOX_SIGN
	fadenewbgm MUS_DP_SANDGEM_DAY
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
