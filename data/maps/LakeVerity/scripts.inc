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
    destroyfollower
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Player_Walks_Up
	applymovement 1, Movement_Rival_Walks_Up
	waitmovement 0
	msgbox Route201_Text_WhatsGoingOn, MSGBOX_SIGN
	special SpawnCameraObject
	applymovement OBJ_EVENT_ID_CAMERA, Lake_Verity_Movement_Camera_Pan_Towards_Cyrus
	waitmovement 0
	msgbox Route201_Text_Cyrus_Talks_To_Himself, MSGBOX_SIGN
	applymovement OBJ_EVENT_ID_CAMERA, Lake_Verity_Movement_Camera_Pan_Back
	applymovement 2, Lake_Verity_Movement_Camera_Cyrus_Comes_Close
	waitmovement 0
	special RemoveCameraObject
	end

LakeVerity_EventScript_Lake_Event_Done::
    end

Route201_Text_WhatsGoingOn:
    .string "{B_RIVAL_NAME}: What's going on...?$"

Route201_Text_Cyrus_Talks_To_Himself:
    .string "... The flowing time...\n"
    .string "... The expanding space...\p"
    .string "I will make it all mine one day...\n"
    .string "Cyrus is my name. Remember it...\p"
    .string "Until then, sleep while you can,\n"
    .string "legendary Pokemon of the lake bed...$"

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

Lake_Verity_Movement_Camera_Cyrus_Comes_Close:
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
