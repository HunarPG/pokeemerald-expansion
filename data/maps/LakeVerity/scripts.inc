LakeVerity_MapScripts::
    map_script MAP_SCRIPT_ON_FRAME_TABLE, Lake_Verity_OnFrame
	.2byte 0

Lake_Verity_OnFrame::
	map_script_2 VAR_LAKE_EVENT, 0, LakeVerity_EventScript_Reached_Lake
	.2byte 0

LakeVerity_EventScript_Reached_Lake::
	checkfollower
	call_if_eq VAR_RESULT, TRUE, LakeVerity_EventScript_Lake_Event
	call_if_eq VAR_RESULT, FALSE, LakeVerity_EventScript_Lake_Event_Done
    end

LakeVerity_EventScript_Lake_Event::
    clearflag FLAG_HIDE_Cyrus_In_Lake
    setvar VAR_LAKE_EVENT, 1
    destroyfollower
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Player_Walks_Up
	applymovement 1, Movement_Rival_Walks_Up
	waitmovement 0
	msgbox Lake_Verity_Text_WhatsGoingOn, MSGBOX_SIGN
	special SpawnCameraObject
	applymovement OBJ_EVENT_ID_CAMERA, Lake_Verity_Movement_Camera_Pan_Towards_Cyrus
	waitmovement 0
	msgbox Lake_Verity_Text_Cyrus_Talks_To_Himself, MSGBOX_SIGN
	applymovement OBJ_EVENT_ID_CAMERA, Lake_Verity_Movement_Camera_Pan_Back
	applymovement 2, Lake_Verity_Movement_Cyrus_Comes_Close
	waitmovement 0
	special RemoveCameraObject
	msgbox Lake_Verity_Text_Cyrus_Wants_To_Pass, MSGBOX_SIGN
	applymovement OBJ_EVENT_ID_PLAYER, Lake_Verity_Movement_Player_Steps_Aside
	applymovement 1, Lake_Verity_Movement_Barry_Steps_Aside
	waitmovement 0
	applymovement 2, Lake_Verity_Movement_Cyrus_Leaves
	waitmovement 0
    playse SE_EXIT
	removeobject 2
	applymovement OBJ_EVENT_ID_PLAYER, Lake_Verity_Movement_Player_Looks_Towards_Exit
	applymovement 1, Lake_Verity_Movement_Barry_Looks_Towards_Exit
	waitmovement 0
	msgbox Lake_Verity_Text_Barry_Thinks_Cyrus_Is_A_Weird, MSGBOX_SIGN
	applymovement OBJ_EVENT_ID_PLAYER, Lake_Verity_Movement_Player_Looks_Towards_Barry
	applymovement 1, Lake_Verity_Movement_Barry_Looks_Towards_Player
	waitmovement 0
	setflag FLAG_HIDE_Cyrus_In_Lake
	end

LakeVerity_EventScript_Lake_Event_Done::
    end

Lake_Verity_Text_WhatsGoingOn:
    .string "{B_RIVAL_NAME}: What's going on...?$"

Lake_Verity_Text_Cyrus_Talks_To_Himself:
    .string "... The flowing time...\n"
    .string "... The expanding space...\p"
    .string "I will make it all mine one day...\n"
    .string "Cyrus is my name. Remember it...\p"
    .string "Until then, sleep while you can,\n"
    .string "legendary Pokemon of the lake bed...$"

Lake_Verity_Text_Cyrus_Wants_To_Pass:
    .string "Alow me to pass.\n"
    .string "Step aside.$"

Lake_Verity_Text_Barry_Thinks_Cyrus_Is_A_Weird:
    .string "{B_RIVAL_NAME}: What was that?\n"
    .string "Weird guy...$"

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

Lake_Verity_Movement_Player_Steps_Aside:
    face_right
	step_end

Lake_Verity_Movement_Barry_Steps_Aside:
    walk_right
	face_left
	step_end

Lake_Verity_Movement_Cyrus_Leaves:
    walk_down
    walk_down
    step_end

Lake_Verity_Movement_Player_Looks_Towards_Exit:
    face_down
	step_end

Lake_Verity_Movement_Barry_Looks_Towards_Exit:
    walk_left
	face_down
	step_end

Lake_Verity_Movement_Player_Looks_Towards_Barry:
    face_right
	step_end

Lake_Verity_Movement_Barry_Looks_Towards_Player:
    face_left
	step_end
