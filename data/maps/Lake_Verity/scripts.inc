Lake_Verity_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Lake_Verity_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Lake_Verity_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
	map_script_2 VAR_LAKE_EVENT, 0, Lake_Verity_EventScript_Lake_Cyrus
	.2byte 0


Lake_Verity_EventScript_Lake_Cyrus::
	destroyfollower
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Player_Walks_Up
	waitmovement 0
	applymovement 1, Lake_Verity_Movement_Barry_Walks_Up
	waitmovement 0
	msgbox Lake_Verity_Text_Whats_Going_On, MSGBOX_SIGN
	special SpawnCameraObject
	applymovement OBJ_EVENT_ID_CAMERA, Lake_Verity_Movement_Camera_Pan_Towards_Cyrus
	waitmovement 0
	msgbox Lake_Verity_Text_Cyrus_Talks_To_Himself, MSGBOX_SIGN
	applymovement 2, Lake_Verity_Movement_Cyrus_Comes_Close
	applymovement OBJ_EVENT_ID_CAMERA, Lake_Verity_Movement_Camera_Pan_Back
	waitmovement 0
	special RemoveCameraObject
	msgbox Lake_Verity_Text_Cyrus_Wants_To_Pass, MSGBOX_SIGN
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Face_Right
	applymovement 1, Lake_Verity_Movement_Barry_Steps_Aside
	waitmovement 0
	applymovement 2, Lake_Verity_Movement_Cyrus_Leaves
	waitmovement 0
	playse SE_EXIT
	removeobject 2
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Face_Down
	applymovement 1, Lake_Verity_Movement_Barry_Looks_Towards_Exit
	waitmovement 0
	msgbox Lake_Verity_Text_Barry_Thinks_Cyrus_Is_A_Weird, MSGBOX_SIGN
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Face_Right
	applymovement 1, Movement_Face_Left
	waitmovement 0
	setflag FLAG_HIDE_Cyrus_In_Lake
	msgbox Lake_Verity_Text_Lets_Catch_Legendary, MSGBOX_SIGN
	playmoncry SPECIES_MESPRIT, CRY_MODE_NORMAL
	msgbox Lake_Verity_Text_Mesprit_Cry, MSGBOX_SIGN
	playse SE_PIN
	applymovement 1, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement 1, Common_Movement_Delay48
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Face_Up
	waitmovement 0
	applymovement 1, Lake_Verity_Movement_Barry_Goes_Up
	waitmovement 0
	applymovement 1, Common_Movement_Delay48
	waitmovement 0
	applymovement 1, Movement_Face_Left
	waitmovement 0
	applymovement 1, Common_Movement_Delay32
	waitmovement 0
	applymovement 1, Movement_Face_Up
	waitmovement 0
	applymovement 1, Common_Movement_Delay48
	waitmovement 0
	applymovement 1, Lake_Verity_Movement_Barry_Comes_Down
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Face_Right
	waitmovement 0
	msgbox Lake_Verity_Text_Barry_Believes_Its_Legendary_Pokemon, MSGBOX_SIGN
	playse SE_PIN
	applymovement 1, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement 1, Common_Movement_Delay48
	waitmovement 0
	msgbox Lake_Verity_Text_Barry_Realizes_We_Dont_Have_Pokeballs, MSGBOX_SIGN
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Face_Down
	applymovement 1, Lake_Verity_Movement_Barry_Leaves
	waitmovement 0
	removeobject 1
	playse SE_EXIT
	setflag FLAG_HIDE_Barry_In_Lake
	setvar VAR_LAKE_EVENT, 1
	end


Lake_Verity_Movement_Barry_Walks_Up:
	walk_up
	step_end

Lake_Verity_Movement_Camera_Pan_Towards_Cyrus:
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
	step_end

Lake_Verity_Movement_Camera_Pan_Back:
	walk_left
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

Lake_Verity_Movement_Cyrus_Comes_Close:
	walk_down
	walk_left
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

Lake_Verity_Movement_Barry_Steps_Aside:
	walk_right
	face_left
	step_end

Lake_Verity_Movement_Cyrus_Leaves:
	walk_down
	walk_down
	step_end

Lake_Verity_Movement_Barry_Looks_Towards_Exit:
	walk_left
	face_down
	step_end

Lake_Verity_Movement_Barry_Goes_Up:
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	step_end

Lake_Verity_Movement_Barry_Comes_Down:
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	face_left
	step_end

Lake_Verity_Movement_Barry_Leaves:
	walk_fast_down
	walk_fast_down
	step_end

Lake_Verity_Text_Whats_Going_On::
	.string "{B_RIVAL_NAME}: What's going on...?$"

Lake_Verity_Text_Cyrus_Talks_To_Himself::
	.string "... The flowing time...\n"
	.string "... The expanding space...\p"
	.string "I will make it all mine one day...\n"
	.string "Cyrus is my name. Remember it...\p"
	.string "Until then, sleep while you can,\n"
	.string "legendary Pokemon of the lake bed...$"

Lake_Verity_Text_Cyrus_Wants_To_Pass::
	.string "Alow me to pass.\n"
	.string "Step aside.$"

Lake_Verity_Text_Barry_Thinks_Cyrus_Is_A_Weird::
	.string "{B_RIVAL_NAME}: What was that?\n"
	.string "Weird guy...$"

Lake_Verity_Text_Lets_Catch_Legendary::
	.string "Ok, {PLAYER}!\n"
	.string "Let's catch that legendary Pokemon!$"

Lake_Verity_Text_Mesprit_Cry::
	.string "Kyauuun!$"

Lake_Verity_Text_Barry_Believes_Its_Legendary_Pokemon::
	.string "{B_RIVAL_NAME}: !\n"
	.string "Did you hear that, {PLAYER}?!\p"
	.string "That was the legendary Pokemon crying!\n"
	.string "That had to be it!\p"
	.string "Ok! This is out chance!\n"
	.string "Let's catch it!$"

Lake_Verity_Text_Barry_Realizes_We_Dont_Have_Pokeballs::
	.string "...Wait!\n"
	.string "What...?!\p"
	.string "We don't have anything on us!\p"
	.string "You know Poke Balls!\n"
	.string "P-O-K-accent-E Balls!\p"
	.string "If we don't have those, we can't catch\n"
	.string "Pokemon or take them around with us!\p"
	.string "...Do you think Prof. Rowan'd give use\n"
	.string "some if we asked him?\p"
	.string "You know, you remember what he said,\n"
	.string "don't you?\p"
	.string "He said to visit him at his lab if we\n"
	.string "needed anything.\p"
	.string "Ok, {PLAYER}!\n"
	.string "I'll race you!\p"
	.string "First one to the professor's lab in\n"
	.string "Sandgem Town rules!$"
