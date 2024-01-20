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
	end

LakeVerity_EventScript_Lake_Event_Done::
    end

Route201_Text_WhatsGoingOn:
    .string "{B_RIVAL_NAME}: What's going on...?$"
