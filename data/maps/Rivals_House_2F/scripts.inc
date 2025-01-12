Rivals_House_2F_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Rivals_House_2F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Rivals_House_2F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
	map_script_2 VAR_MET_RIVAL_IN_TWINLEAF, 1, Rivals_House_2F_EventScript_Barry
	.2byte 0


Rivals_House_2F_EventScript_Barry::
	lock
	msgbox Rivals_House_2F_EventScript_Rival_Takes_Bag_and_Journal_Text, MSGBOX_DEFAULT
	waitmessage
	applymovement 1, Movement_Face_Left
	waitmovement 0
	fadenewbgm MUS_RG_RIVAL_EXIT
	playse SE_PIN
	applymovement 1, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement 1, Common_Movement_Delay48
	waitmovement 0
	msgbox Rivals_House_2F_EventScript_Rival_Saying_to_Waiting_On_Road_Text, MSGBOX_DEFAULT
	closemessage
	applymovement 1, Movement_Rival_Comes_Towards_You
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Player_Move_Aside
	waitmovement 0
	applymovement 1, Movement_Rival_Exists
	waitmovement 0
	removeobject 1
	playse SE_EXIT
	waitse
	setvar VAR_MET_RIVAL_IN_TWINLEAF, 2
	setvar VAR_RIVAL_MOM_TEXT, 1
	setflag Remove_Rival_From_His_House
	fadedefaultbgm
	return


Rivals_House_2F_EventScript_Switch::
	msgbox Rivals_House_2F_EventScript_Switch_Text, MSGBOX_SIGN
	return


Rivals_House_2F_EventScript_PC::
	msgbox Rivals_House_2F_EventScript_PC_Text, MSGBOX_SIGN
	return


Movement_Rival_Comes_Towards_You:
	walk_fast_down
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	step_end

Movement_Player_Move_Aside:
	walk_fast_down
	face_up
	step_end

Movement_Rival_Exists:
	walk_fast_up
	walk_fast_left
	walk_fast_left
	step_end

Rivals_House_2F_EventScript_Rival_Takes_Bag_and_Journal_Text::
	.string "{B_RIVAL_NAME}: ...I better take\n"
	.string "my Bag and Journal, too...$"

Rivals_House_2F_EventScript_Rival_Saying_to_Waiting_On_Road_Text::
	.string "Oh, hey, {PLAYER}!\p"
	.string "I'll be waiting on the road!\n"
	.string "It's a ¥10 million fine if you're late$"

Rivals_House_2F_EventScript_Switch_Text::
	.string "It's a Switch!\n"
	.string "It's controlled by the Joycons!$"

Rivals_House_2F_EventScript_PC_Text::
	.string "{PLAYER} checked the PC screen\p"
	.string "Adventure Rule No. 1\n"
	.string "The X Button opens the menu!\p"
	.string "Adventure Rule No. 2\n"
	.string "Record your progress with SAVE.\p"
	.string "There is nothing else on here...$"
