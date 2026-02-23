Lake_Verity_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Lake_Verity_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Lake_Verity_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
	map_script_2 VAR_LAKE_EVENT, 0, Lake_Verity_EventScript_Lake_Cyrus
	.2byte 0


Lake_Verity_EventScript_Lake_Cyrus::
	destroyfollowernpc
	applymovement OBJ_EVENT_ID_PLAYER, Lake_Verity_EventScript_Lake_Cyrus_Movement_0
	waitmovement 0
	applymovement LOCALID_BARRY_VERITY, Lake_Verity_EventScript_Lake_Cyrus_Movement_0
	waitmovement 0
	msgbox Lake_Verity_EventScript_Lake_Cyrus_Text_0, MSGBOX_SIGN
	special SpawnCameraObject
	applymovement OBJ_EVENT_ID_CAMERA, Lake_Verity_EventScript_Lake_Cyrus_Movement_1
	waitmovement 0
	msgbox Lake_Verity_EventScript_Lake_Cyrus_Text_1, MSGBOX_SIGN
	applymovement LOCALID_CYRUS_VERITY, Lake_Verity_EventScript_Lake_Cyrus_Movement_2
	applymovement OBJ_EVENT_ID_CAMERA, Lake_Verity_EventScript_Lake_Cyrus_Movement_3
	waitmovement 0
	special RemoveCameraObject
	msgbox Lake_Verity_EventScript_Lake_Cyrus_Text_2, MSGBOX_SIGN
	applymovement OBJ_EVENT_ID_PLAYER, Lake_Verity_EventScript_Lake_Cyrus_Movement_4
	applymovement LOCALID_BARRY_VERITY, Lake_Verity_EventScript_Lake_Cyrus_Movement_5
	waitmovement 0
	applymovement LOCALID_CYRUS_VERITY, Lake_Verity_EventScript_Lake_Cyrus_Movement_6
	waitmovement 0
	playse SE_EXIT
	removeobject LOCALID_CYRUS_VERITY
	applymovement OBJ_EVENT_ID_PLAYER, Lake_Verity_EventScript_Lake_Cyrus_Movement_7
	applymovement LOCALID_BARRY_VERITY, Lake_Verity_EventScript_Lake_Cyrus_Movement_8
	waitmovement 0
	msgbox Lake_Verity_EventScript_Lake_Cyrus_Text_3, MSGBOX_SIGN
	applymovement OBJ_EVENT_ID_PLAYER, Lake_Verity_EventScript_Lake_Cyrus_Movement_4
	applymovement LOCALID_BARRY_VERITY, Lake_Verity_EventScript_Lake_Cyrus_Movement_9
	waitmovement 0
	setflag FLAG_HIDE_Cyrus_In_Lake
	msgbox Lake_Verity_EventScript_Lake_Cyrus_Text_4, MSGBOX_SIGN
	playmoncry SPECIES_MESPRIT, CRY_MODE_NORMAL
	msgbox Lake_Verity_EventScript_Lake_Cyrus_Text_5, MSGBOX_SIGN
	playse SE_PIN
	applymovement LOCALID_BARRY_VERITY, Lake_Verity_EventScript_Lake_Cyrus_Movement_10
	waitmovement 0
	delay 30
	applymovement OBJ_EVENT_ID_PLAYER, Lake_Verity_EventScript_Lake_Cyrus_Movement_11
	waitmovement 0
	applymovement LOCALID_BARRY_VERITY, Lake_Verity_EventScript_Lake_Cyrus_Movement_12
	waitmovement 0
	delay 30
	applymovement LOCALID_BARRY_VERITY, Lake_Verity_EventScript_Lake_Cyrus_Movement_9
	waitmovement 0
	delay 30
	applymovement LOCALID_BARRY_VERITY, Lake_Verity_EventScript_Lake_Cyrus_Movement_11
	waitmovement 0
	delay 30
	applymovement LOCALID_BARRY_VERITY, Lake_Verity_EventScript_Lake_Cyrus_Movement_13
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Lake_Verity_EventScript_Lake_Cyrus_Movement_4
	waitmovement 0
	msgbox Lake_Verity_EventScript_Lake_Cyrus_Text_6, MSGBOX_SIGN
	playse SE_PIN
	applymovement LOCALID_BARRY_VERITY, Lake_Verity_EventScript_Lake_Cyrus_Movement_10
	waitmovement 0
	delay 30
	msgbox Lake_Verity_EventScript_Lake_Cyrus_Text_7, MSGBOX_SIGN
	applymovement OBJ_EVENT_ID_PLAYER, Lake_Verity_EventScript_Lake_Cyrus_Movement_7
	applymovement LOCALID_BARRY_VERITY, Lake_Verity_EventScript_Lake_Cyrus_Movement_14
	waitmovement 0
	removeobject LOCALID_BARRY_VERITY
	playse SE_EXIT
	setflag FLAG_HIDE_Barry_In_Lake
	setvar VAR_LAKE_EVENT, 1
	end


Lake_Verity_EventScript_Lake_Cyrus_Movement_0:
	walk_up
	step_end

Lake_Verity_EventScript_Lake_Cyrus_Movement_1:
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

Lake_Verity_EventScript_Lake_Cyrus_Movement_2:
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

Lake_Verity_EventScript_Lake_Cyrus_Movement_3:
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

Lake_Verity_EventScript_Lake_Cyrus_Movement_4:
	face_right
	step_end

Lake_Verity_EventScript_Lake_Cyrus_Movement_5:
	walk_right
	face_left
	step_end

Lake_Verity_EventScript_Lake_Cyrus_Movement_6:
	walk_down
	walk_down
	step_end

Lake_Verity_EventScript_Lake_Cyrus_Movement_7:
	face_down
	step_end

Lake_Verity_EventScript_Lake_Cyrus_Movement_8:
	walk_left
	face_down
	step_end

Lake_Verity_EventScript_Lake_Cyrus_Movement_9:
	face_left
	step_end

Lake_Verity_EventScript_Lake_Cyrus_Movement_10:
	emote_exclamation_mark
	step_end

Lake_Verity_EventScript_Lake_Cyrus_Movement_11:
	face_up
	step_end

Lake_Verity_EventScript_Lake_Cyrus_Movement_12:
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	step_end

Lake_Verity_EventScript_Lake_Cyrus_Movement_13:
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	face_left
	step_end

Lake_Verity_EventScript_Lake_Cyrus_Movement_14:
	walk_fast_down
	walk_fast_down
	step_end

Lake_Verity_EventScript_Lake_Cyrus_Text_0:
	.string "{RIVAL}: What's going on...?$"

Lake_Verity_EventScript_Lake_Cyrus_Text_1:
	.string "... The flowing time...\n"
	.string "... The expanding space...\p"
	.string "I will make it all mine one day...\n"
	.string "Cyrus is my name. Remember it...\p"
	.string "Until then, sleep while you can,\n"
	.string "legendary Pokemon of the lake bed...$"

Lake_Verity_EventScript_Lake_Cyrus_Text_2:
	.string "Alow me to pass.\n"
	.string "Step aside.$"

Lake_Verity_EventScript_Lake_Cyrus_Text_3:
	.string "{RIVAL}: What was that?\n"
	.string "Weird guy...$"

Lake_Verity_EventScript_Lake_Cyrus_Text_4:
	.string "Ok, {PLAYER}!\n"
	.string "Let's catch that legendary Pokemon!$"

Lake_Verity_EventScript_Lake_Cyrus_Text_5:
	.string "Kyauuun!$"

Lake_Verity_EventScript_Lake_Cyrus_Text_6:
	.string "{RIVAL}: !\n"
	.string "Did you hear that, {PLAYER}?!\p"
	.string "That was the legendary Pokemon crying!\n"
	.string "That had to be it!\p"
	.string "Ok! This is out chance!\n"
	.string "Let's catch it!$"

Lake_Verity_EventScript_Lake_Cyrus_Text_7:
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
