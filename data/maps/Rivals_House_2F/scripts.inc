Rivals_House_2F_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Rivals_House_2F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Rivals_House_2F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
	map_script_2 VAR_MET_RIVAL_IN_TWINLEAF, 1, Rivals_House_2F_EventScript_Barry
	.2byte 0


Rivals_House_2F_EventScript_Barry::
	lock
	msgbox Rivals_House_2F_EventScript_Barry_Text_0, MSGBOX_DEFAULT
	waitmessage
	applymovement 1, Rivals_House_2F_EventScript_Barry_Movement_0
	waitmovement 0
	fadenewbgm MUS_DP_RIVAL
	playse SE_PIN
	applymovement LOCALID_BARRY_RIVAL_HOUSE, Rivals_House_2F_EventScript_Barry_Movement_1
	waitmovement 0
	delay 30
	msgbox Rivals_House_2F_EventScript_Barry_Text_1, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_BARRY_RIVAL_HOUSE, Rivals_House_2F_EventScript_Barry_Movement_2
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Rivals_House_2F_EventScript_Barry_Movement_3
	waitmovement 0
	applymovement LOCALID_BARRY_RIVAL_HOUSE, Rivals_House_2F_EventScript_Barry_Movement_4
	waitmovement 0
	removeobject LOCALID_BARRY_RIVAL_HOUSE
	playse SE_EXIT
	waitse
	setvar VAR_MET_RIVAL_IN_TWINLEAF, 2
	setvar VAR_RIVAL_MOM_TEXT, 1
	setflag Remove_Rival_From_His_House
	fadedefaultbgm
	release
	end


Rivals_House_2F_EventScript_Switch::
	msgbox Rivals_House_2F_EventScript_Switch_Text_0, MSGBOX_SIGN
	end


Rivals_House_2F_EventScript_PC::
	msgbox Rivals_House_2F_EventScript_PC_Text_0, MSGBOX_SIGN
	end


Rivals_House_2F_EventScript_Barry_Movement_0:
	face_left
	step_end

Rivals_House_2F_EventScript_Barry_Movement_1:
	emote_exclamation_mark
	step_end

Rivals_House_2F_EventScript_Barry_Movement_2:
	walk_fast_down
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	step_end

Rivals_House_2F_EventScript_Barry_Movement_3:
	walk_fast_down
	face_up
	step_end

Rivals_House_2F_EventScript_Barry_Movement_4:
	walk_fast_up
	walk_fast_left
	walk_fast_left
	step_end

Rivals_House_2F_EventScript_Barry_Text_0:
	.string "{RIVAL}: ...I better take\n"
	.string "my Bag and Journal, too...$"

Rivals_House_2F_EventScript_Barry_Text_1:
	.string "Oh, hey, {PLAYER}!\p"
	.string "I'll be waiting on the road!\n"
	.string "It's a ¥10 million fine if you're late$"

Rivals_House_2F_EventScript_Switch_Text_0:
	.string "It's a Switch!\n"
	.string "It's controlled by the Joycons!$"

Rivals_House_2F_EventScript_PC_Text_0:
	.string "{PLAYER} checked the PC screen\p"
	.string "Adventure Rule No. 1\n"
	.string "The X Button opens the menu!\p"
	.string "Adventure Rule No. 2\n"
	.string "Record your progress with SAVE.\p"
	.string "There is nothing else on here...$"
