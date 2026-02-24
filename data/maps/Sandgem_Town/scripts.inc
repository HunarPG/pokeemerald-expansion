Sandgem_Town_MapScripts::
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, Sandgem_Town_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Sandgem_Town_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Sandgem_Town_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
	map_script_2 VAR_SANDGEM_TOWN_STATE, 1, Sandgem_Town_On_Warp
	.2byte 0

Sandgem_Town_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
	map_script_2 VAR_SANDGEM_TOWN_STATE, 1, Sandgem_Town_EventScript_Tutorial
	.2byte 0


Sandgem_Town_On_Warp::
	addobject LOCALID_RIVAL_SANDGEM
	applymovement LOCALID_RIVAL_SANDGEM, Sandgem_Town_On_Warp_Movement_0
	end


Sandgem_Town_EventScript_We_Meet_Rival::
	playse SE_PIN
	applymovement LOCALID_RIVAL_SANDGEM, Sandgem_Town_EventScript_We_Meet_Rival_Movement_0
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Sandgem_Town_EventScript_We_Meet_Rival_Movement_1
	waitmovement 0
	delay 30
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	switch VAR_TEMP_1
	case 13, Sandgem_Town_EventScript_We_Meet_Rival_3
	case 14, Sandgem_Town_EventScript_We_Meet_Rival_4
	case 15, Sandgem_Town_EventScript_We_Meet_Rival_5
Sandgem_Town_EventScript_We_Meet_Rival_1:
	waitmovement 0
	compare VAR_RESULT, MALE
	goto_if_eq Sandgem_Town_EventScript_We_Meet_Rival_7
	compare VAR_RESULT, FEMALE
	goto_if_eq Sandgem_Town_EventScript_We_Meet_Rival_8
Sandgem_Town_EventScript_We_Meet_Rival_6:
	switch VAR_TEMP_1
	case 13, Sandgem_Town_EventScript_We_Meet_Rival_13
	case 14, Sandgem_Town_EventScript_We_Meet_Rival_14
	case 15, Sandgem_Town_EventScript_We_Meet_Rival_15
Sandgem_Town_EventScript_We_Meet_Rival_11:
	waitmovement 0
	goto Sandgem_Town_EventScript_Enter_Lab_Rival
	return

Sandgem_Town_EventScript_We_Meet_Rival_3:
	applymovement LOCALID_RIVAL_SANDGEM, Sandgem_Town_EventScript_We_Meet_Rival_Movement_2
	goto Sandgem_Town_EventScript_We_Meet_Rival_1

Sandgem_Town_EventScript_We_Meet_Rival_4:
	applymovement LOCALID_RIVAL_SANDGEM, Sandgem_Town_EventScript_We_Meet_Rival_Movement_3
	goto Sandgem_Town_EventScript_We_Meet_Rival_1

Sandgem_Town_EventScript_We_Meet_Rival_5:
	applymovement LOCALID_RIVAL_SANDGEM, Sandgem_Town_EventScript_We_Meet_Rival_Movement_4
	goto Sandgem_Town_EventScript_We_Meet_Rival_1

Sandgem_Town_EventScript_We_Meet_Rival_7:
	msgbox Sandgem_Town_EventScript_We_Meet_Rival_Text_0, MSGBOX_SIGN
	goto Sandgem_Town_EventScript_We_Meet_Rival_6

Sandgem_Town_EventScript_We_Meet_Rival_8:
	msgbox Sandgem_Town_EventScript_We_Meet_Rival_Text_1, MSGBOX_SIGN
	goto Sandgem_Town_EventScript_We_Meet_Rival_6

Sandgem_Town_EventScript_We_Meet_Rival_13:
	applymovement LOCALID_RIVAL_SANDGEM, Sandgem_Town_EventScript_We_Meet_Rival_Movement_5
	applymovement OBJ_EVENT_ID_PLAYER, Sandgem_Town_EventScript_We_Meet_Rival_Movement_5
	goto Sandgem_Town_EventScript_We_Meet_Rival_11

Sandgem_Town_EventScript_We_Meet_Rival_14:
	applymovement LOCALID_RIVAL_SANDGEM, Sandgem_Town_EventScript_We_Meet_Rival_Movement_6
	applymovement OBJ_EVENT_ID_PLAYER, Sandgem_Town_EventScript_We_Meet_Rival_Movement_7
	goto Sandgem_Town_EventScript_We_Meet_Rival_11

Sandgem_Town_EventScript_We_Meet_Rival_15:
	applymovement LOCALID_RIVAL_SANDGEM, Sandgem_Town_EventScript_We_Meet_Rival_Movement_8
	applymovement OBJ_EVENT_ID_PLAYER, Sandgem_Town_EventScript_We_Meet_Rival_Movement_9
	goto Sandgem_Town_EventScript_We_Meet_Rival_11


Sandgem_Town_EventScript_Enter_Lab_Rival::
	msgbox Sandgem_Town_EventScript_Enter_Lab_Rival_Text_0, MSGBOX_SIGN
	playse SE_DOOR
	applymovement LOCALID_BARRY_SANDGEM, Sandgem_Town_EventScript_Enter_Lab_Rival_Movement_0
	waitmovement 0
	msgbox Sandgem_Town_EventScript_Enter_Lab_Rival_Text_1, MSGBOX_SIGN
	playse SE_PIN
	fadenewbgm MUS_DP_RIVAL
	applymovement LOCALID_BARRY_SANDGEM, Sandgem_Town_EventScript_We_Meet_Rival_Movement_0
	waitmovement 0
	delay 30
	msgbox Sandgem_Town_EventScript_Enter_Lab_Rival_Text_2, MSGBOX_SIGN
	applymovement LOCALID_BARRY_SANDGEM, Sandgem_Town_EventScript_Enter_Lab_Rival_Movement_1
	applymovement OBJ_EVENT_ID_PLAYER, Sandgem_Town_EventScript_We_Meet_Rival_Movement_1
	applymovement LOCALID_RIVAL_SANDGEM, Sandgem_Town_EventScript_We_Meet_Rival_Movement_1
	waitmovement LOCALID_BARRY_SANDGEM
	delay 30
	fadedefaultbgm
	compare VAR_RESULT, MALE
	goto_if_eq Sandgem_Town_EventScript_Enter_Lab_Rival_2
	compare VAR_RESULT, FEMALE
	goto_if_eq Sandgem_Town_EventScript_Enter_Lab_Rival_3
Sandgem_Town_EventScript_Enter_Lab_Rival_1:
	applymovement OBJ_EVENT_ID_PLAYER, Sandgem_Town_On_Warp_Movement_0
	applymovement LOCALID_RIVAL_SANDGEM, Sandgem_Town_EventScript_Enter_Lab_Rival_Movement_2
	waitmovement 0
	removeobject LOCALID_RIVAL_SANDGEM
	playse SE_DOOR
	applymovement OBJ_EVENT_ID_PLAYER, Sandgem_Town_EventScript_Enter_Lab_Rival_Movement_3
	waitmovement 0
	playse SE_DOOR
	warpsilent MAP_SANDGEM_TOWN_PROFFESOR_ROWANS_LAB, 7, 15
	end

Sandgem_Town_EventScript_Enter_Lab_Rival_2:
	msgbox Sandgem_Town_EventScript_Enter_Lab_Rival_Text_3, MSGBOX_SIGN
	goto Sandgem_Town_EventScript_Enter_Lab_Rival_1

Sandgem_Town_EventScript_Enter_Lab_Rival_3:
	msgbox Sandgem_Town_EventScript_Enter_Lab_Rival_Text_4, MSGBOX_SIGN
	goto Sandgem_Town_EventScript_Enter_Lab_Rival_1


Sandgem_Town_EventScript_Tutorial::
	delay 30
	playse SE_DOOR
	applymovement LOCALID_ROWAN_SANDGEM, Sandgem_Town_EventScript_Tutorial_Movement_0
	waitmovement 0
	msgbox Sandgem_Town_EventScript_Tutorial_Text_0, MSGBOX_SIGN
	playse SE_PIN
	applymovement OBJ_EVENT_ID_PLAYER, Sandgem_Town_EventScript_We_Meet_Rival_Movement_0
	applymovement LOCALID_RIVAL_SANDGEM, Sandgem_Town_EventScript_We_Meet_Rival_Movement_0
	waitmovement 0
	delay 30
	applymovement OBJ_EVENT_ID_PLAYER, Sandgem_Town_On_Warp_Movement_0
	waitmovement 0
	delay 30
	msgbox Sandgem_Town_EventScript_Tutorial_Text_1, MSGBOX_SIGN
	giveitem ITEM_TM_RETURN
	msgbox Sandgem_Town_EventScript_Tutorial_Text_2, MSGBOX_SIGN
	playse SE_DOOR
	applymovement LOCALID_ROWAN_SANDGEM, Sandgem_Town_EventScript_Tutorial_Movement_1
	waitmovement 0
	compare VAR_RESULT, MALE
	goto_if_eq Sandgem_Town_EventScript_Tutorial_2
	compare VAR_RESULT, FEMALE
	goto_if_eq Sandgem_Town_EventScript_Tutorial_3
Sandgem_Town_EventScript_Tutorial_1:
	applymovement OBJ_EVENT_ID_PLAYER, Sandgem_Town_EventScript_Tutorial_Movement_2
	waitmovement 0
	msgbox Sandgem_Town_EventScript_Tutorial_Text_5, MSGBOX_SIGN
	compare VAR_RESULT, MALE
	goto_if_eq Sandgem_Town_EventScript_Tutorial_7
	compare VAR_RESULT, FEMALE
	goto_if_eq Sandgem_Town_EventScript_Tutorial_8
Sandgem_Town_EventScript_Tutorial_6:
	applymovement LOCALID_RIVAL_SANDGEM, Sandgem_Town_EventScript_Tutorial_Movement_3
	applymovement OBJ_EVENT_ID_PLAYER, Sandgem_Town_EventScript_Tutorial_Movement_4
	waitmovement 0
	msgbox Sandgem_Town_EventScript_Tutorial_Text_6, MSGBOX_SIGN
	applymovement LOCALID_RIVAL_SANDGEM, Sandgem_Town_EventScript_Tutorial_Movement_3
	applymovement OBJ_EVENT_ID_PLAYER, Sandgem_Town_EventScript_Tutorial_Movement_3
	waitmovement 0
	msgbox Sandgem_Town_EventScript_Tutorial_Text_7, MSGBOX_SIGN
	applymovement LOCALID_RIVAL_SANDGEM, Sandgem_Town_EventScript_Tutorial_Movement_5
	applymovement OBJ_EVENT_ID_PLAYER, Sandgem_Town_EventScript_We_Meet_Rival_Movement_1
	waitmovement 0
	playse SE_PIN
	applymovement LOCALID_RIVAL_SANDGEM, Sandgem_Town_EventScript_We_Meet_Rival_Movement_0
	waitmovement 0
	delay 30
	msgbox Sandgem_Town_EventScript_Tutorial_Text_8, MSGBOX_SIGN
	setvar VAR_MOM_TEXT, 6
	applymovement LOCALID_RIVAL_SANDGEM, Sandgem_Town_EventScript_Tutorial_Movement_6
	waitmovement 0
	fadedefaultbgm
	applymovement OBJ_EVENT_ID_PLAYER, Sandgem_Town_EventScript_Tutorial_Movement_5
	applymovement LOCALID_RIVAL_SANDGEM, Sandgem_Town_EventScript_Tutorial_Movement_7
	waitmovement LOCALID_RIVAL_SANDGEM
	setvar VAR_SANDGEM_TOWN_STATE, 2
	setflag FLAG_HIDE_RIVAL_IN_SANDGEM
	removeobject LOCALID_RIVAL_SANDGEM
	end

Sandgem_Town_EventScript_Tutorial_2:
	msgbox Sandgem_Town_EventScript_Tutorial_Text_3, MSGBOX_SIGN
	goto Sandgem_Town_EventScript_Tutorial_1

Sandgem_Town_EventScript_Tutorial_3:
	msgbox Sandgem_Town_EventScript_Tutorial_Text_4, MSGBOX_SIGN
	goto Sandgem_Town_EventScript_Tutorial_1

Sandgem_Town_EventScript_Tutorial_7:
	playbgm MUS_DP_DAWN, FALSE
	goto Sandgem_Town_EventScript_Tutorial_6

Sandgem_Town_EventScript_Tutorial_8:
	playbgm MUS_DP_LUCAS, FALSE
	goto Sandgem_Town_EventScript_Tutorial_6


Sandgem_Town_EventScript_Rowans_Lab_Sign::
	msgbox Sandgem_Town_EventScript_Rowans_Lab_Sign_Text_0, MSGBOX_SIGN
	return


Sandgem_Town_EventScript_Rival_2_House_Sign::
	checkplayergender
	compare VAR_RESULT, MALE
	goto_if_eq Sandgem_Town_EventScript_Rival_2_House_Sign_1
	compare VAR_RESULT, FEMALE
	goto_if_eq Sandgem_Town_EventScript_Rival_2_House_Sign_2
	return

Sandgem_Town_EventScript_Rival_2_House_Sign_1:
	msgbox Sandgem_Town_EventScript_Rival_2_House_Sign_Text_0, MSGBOX_SIGN
	return

Sandgem_Town_EventScript_Rival_2_House_Sign_2:
	msgbox Sandgem_Town_EventScript_Rival_2_House_Sign_Text_1, MSGBOX_SIGN
	return


Sandgem_Town_EventScript_Pokemon_Center_Sign::
	msgbox Sandgem_Town_EventScript_Pokemon_Center_Sign_Text_0, MSGBOX_SIGN
	return


Sandgem_Town_EventScript_Pokemon_Mart_Sign::
	msgbox Sandgem_Town_EventScript_Pokemon_Mart_Sign_Text_0, MSGBOX_SIGN
	return


Sandgem_Town_EventScript_Sign::
	msgbox Sandgem_Town_EventScript_Sign_Text_0, MSGBOX_SIGN
	return


Sandgem_Town_EventScript_Boy::
	msgbox Sandgem_Town_EventScript_Boy_Text_0, MSGBOX_SIGN
	return


Sandgem_Town_EventScript_Girl::
	msgbox Sandgem_Town_EventScript_Girl_Text_0, MSGBOX_SIGN
	return


Sandgem_Town_EventScript_Youngster::
	msgbox Sandgem_Town_EventScript_Youngster_Text_0, MSGBOX_SIGN
	return


Sandgem_Town_On_Warp_Movement_0:
	face_up
	step_end

Sandgem_Town_EventScript_We_Meet_Rival_Movement_0:
	emote_exclamation_mark
	step_end

Sandgem_Town_EventScript_We_Meet_Rival_Movement_1:
	face_right
	step_end

Sandgem_Town_EventScript_We_Meet_Rival_Movement_2:
	walk_left
	walk_left
	walk_left
	step_end

Sandgem_Town_EventScript_We_Meet_Rival_Movement_3:
	walk_left
	walk_left
	walk_left
	walk_down
	face_left
	step_end

Sandgem_Town_EventScript_We_Meet_Rival_Movement_4:
	walk_left
	walk_left
	walk_left
	walk_down
	walk_down
	face_left
	step_end

Sandgem_Town_EventScript_We_Meet_Rival_Movement_5:
	walk_right
	walk_right
	walk_right
	walk_right
	face_up
	step_end

Sandgem_Town_EventScript_We_Meet_Rival_Movement_6:
	walk_up
	walk_right
	walk_right
	walk_right
	walk_right
	face_up
	step_end

Sandgem_Town_EventScript_We_Meet_Rival_Movement_7:
	walk_right
	walk_up
	walk_right
	walk_right
	walk_right
	face_up
	step_end

Sandgem_Town_EventScript_We_Meet_Rival_Movement_8:
	walk_up
	walk_up
	walk_right
	walk_right
	walk_right
	walk_right
	face_up
	step_end

Sandgem_Town_EventScript_We_Meet_Rival_Movement_9:
	walk_right
	walk_up
	walk_up
	walk_right
	walk_right
	walk_right
	face_up
	step_end

Sandgem_Town_EventScript_Enter_Lab_Rival_Movement_0:
	walk_fast_down
	walk_fast_down
	step_end

Sandgem_Town_EventScript_Enter_Lab_Rival_Movement_1:
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

Sandgem_Town_EventScript_Enter_Lab_Rival_Movement_2:
	walk_up
	walk_left
	walk_up
	step_end

Sandgem_Town_EventScript_Enter_Lab_Rival_Movement_3:
	walk_up
	walk_up
	step_end

Sandgem_Town_EventScript_Tutorial_Movement_0:
	walk_down
	step_end

Sandgem_Town_EventScript_Tutorial_Movement_1:
	walk_up
	step_end

Sandgem_Town_EventScript_Tutorial_Movement_2:
	face_down
	step_end

Sandgem_Town_EventScript_Tutorial_Movement_3:
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

Sandgem_Town_EventScript_Tutorial_Movement_4:
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

Sandgem_Town_EventScript_Tutorial_Movement_5:
	face_left
	step_end

Sandgem_Town_EventScript_Tutorial_Movement_6:
	walk_down
	walk_left
	step_end

Sandgem_Town_EventScript_Tutorial_Movement_7:
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

Sandgem_Town_EventScript_We_Meet_Rival_Text_0:
	.string "Dawn: Oh! There you are!\n"
	.string "Please, come with me!\l"
	.string "The Professor is waiting!$"

Sandgem_Town_EventScript_We_Meet_Rival_Text_1:
	.string "Lucas: Hi! I've been waiting for you!\n"
	.string "Please, come with me.\l"
	.string "The prof's waiting to see you.$"

Sandgem_Town_EventScript_Enter_Lab_Rival_Text_0:
	.string "This is it!\n"
	.string "Our Pokémon Research Lab!\p"
	.string "Let's go...$"

Sandgem_Town_EventScript_Enter_Lab_Rival_Text_1:
	.string "Thud!!$"

Sandgem_Town_EventScript_Enter_Lab_Rival_Text_2:
	.string "{RIVAL}: What the...\p"
	.string "Oh, it's you, {PLAYER}!\p"
	.string "That old guy... He's not scary so\n"
	.string "much as he is totally out there!\p"
	.string "Aww, it doesn't matter, {PLAYER}.\n"
	.string "I'm out of here. See you later!$"

Sandgem_Town_EventScript_Enter_Lab_Rival_Text_3:
	.string "Dawn: Wow, what was that?\p"
	.string "Your friend sure seems to be really\n"
	.string "impatient\p"
	.string "Well, anyways...\n"
	.string "Let's go inside.$"

Sandgem_Town_EventScript_Enter_Lab_Rival_Text_4:
	.string "Lucas: What was that?!\p"
	.string "Your friend always seems to be\n"
	.string "in such a rush.\p"
	.string "Anyway...\n"
	.string "Let's go in.$"

Sandgem_Town_EventScript_Tutorial_Text_0:
	.string "{PLAYER}!$"

Sandgem_Town_EventScript_Tutorial_Text_1:
	.string "Rowan: I have seomething good here.\n"
	.string "You should take this as well.$"

Sandgem_Town_EventScript_Tutorial_Text_2:
	.string "Rowan: That is a Technical Machine.\n"
	.string "That one contains the move Return.\p"
	.string "Using a Technical Machine, or TM for\n"
	.string "short, teached a move instantly to\l"
	.string "a Pokémon.\p"
	.string "Bear in mind, however, that a TM is\n"
	.string "single-use only\p"
	.string "The move Return gains power the more\n"
	.string "friendly your Pokémon is with you.\p"
	.string "It's up to you, of course, if you want\n"
	.string "to use that TM or not.\p"
	.string "I'll send you off with the wish that\n"
	.string "your journey will be fun.$"

Sandgem_Town_EventScript_Tutorial_Text_3:
	.string "Dawn: Oh, wow.\n"
	.string "I didn't know the professor had TMs.\p"
	.string "Was he a Trainer when he was\n"
	.string "young...?$"

Sandgem_Town_EventScript_Tutorial_Text_4:
	.string "Lucas: Well, I'll be...\n"
	.string "The professor had TMs...?\p"
	.string "Next thing, he'll tell me he battled\n"
	.string "when he was young.?$"

Sandgem_Town_EventScript_Tutorial_Text_5:
	.string "Ok, {PLAYER}, I'll act as\n"
	.string "your mentor.\p"
	.string "I've got a bit more experience than\n"
	.string "you as a Trainer and as the professor's\l"
	.string "assistant.\p"
	.string "Ok, follow me!$"

Sandgem_Town_EventScript_Tutorial_Text_6:
	.string "This building with the Red roof is\n"
	.string "the Pokémon Center\p"
	.string "It's the place that heals Pokémon\n"
	.string "that have been hurt in battle.\p"
	.string "You can find a Pokémon Center in\n"
	.string "most towns.$"

Sandgem_Town_EventScript_Tutorial_Text_7:
	.string "The building with the blue roof over\n"
	.string "here is the Poke Mart.\p"
	.string "It's a shop where you can buy and\n"
	.string "sell items and medicine.\p"
	.string "{PLAYER}, since you're a novice\n"
	.string "Trainer, you won't be able to buy\l"
	.string "many kinds of mechandise.\p"
	.string "Don't let it bother you!$"

Sandgem_Town_EventScript_Tutorial_Text_8:
	.string "Oh, that's right!\n"
	.string "{PLAYER}...\p"
	.string "Don't you need to let your family\n"
	.string "know what you're going to helping\l"
	.string "Prof. Rowan with the Pokedex?\p"
	.string "You may need to do go far away, so I\n"
	.string "think you should let someone know.\p"
	.string "Oh, but before you go, heal up your\n"
	.string "Pokémon at the Pokémon Center.\p"
	.string "It will be a lot less scary that way.\n"
	.string "Ok, bye now!$"

Sandgem_Town_EventScript_Rowans_Lab_Sign_Text_0:
	.string "Pokémon Research Lab$"

Sandgem_Town_EventScript_Rival_2_House_Sign_Text_0:
	.string "Dawn's House$"

Sandgem_Town_EventScript_Rival_2_House_Sign_Text_1:
	.string "Lucas's House$"

Sandgem_Town_EventScript_Pokemon_Center_Sign_Text_0:
	.string "Heal Your Pokémon!\n"
	.string "Pokémon Center$"

Sandgem_Town_EventScript_Pokemon_Mart_Sign_Text_0:
	.string "All Your Item Needs Fulfilled!\n"
	.string "Pokémon Mart$"

Sandgem_Town_EventScript_Sign_Text_0:
	.string "Sandgem Town\n"
	.string "Town of Sand!$"

Sandgem_Town_EventScript_Boy_Text_0:
	.string "That thing you have!\p"
	.string "It's a Pokedex, isn't it?!\p"
	.string "You are off to see all kinds of\n"
	.string "Pokémon now! Lucky you!$"

Sandgem_Town_EventScript_Girl_Text_0:
	.string "So I don't forget what's happened,\n"
	.string "till now, I'd better save this...\p"
	.string "There!\n"
	.string "Now I can take a break.$"

Sandgem_Town_EventScript_Youngster_Text_0:
	.string "Oh, wow!\n"
	.string "Pokémon are so cool!\p"
	.string "You can make yours battle and make\n"
	.string "them stronger!\p"
	.string "I wish I had some!\n"
	.string "It's so cool!$"
