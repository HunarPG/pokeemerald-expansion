BarrysHouse2F_MapScripts::
# 3 "data/maps/BarrysHouse2F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, BarrysHouse2F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

BarrysHouse2F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 5 "data/maps/BarrysHouse2F/scripts.pory"
	map_script_2 VAR_MET_RIVAL_IN_TWINLEAF, 1, BarrysHouse2F_EventScript_Barry
	.2byte 0


BarrysHouse2F_EventScript_Barry::
# 11 "data/maps/BarrysHouse2F/scripts.pory"
	lock
# 12 "data/maps/BarrysHouse2F/scripts.pory"
	msgbox BarrysHouse2F_EventScript_Barry_Text_0, MSGBOX_DEFAULT
# 14 "data/maps/BarrysHouse2F/scripts.pory"
	waitmessage
# 15 "data/maps/BarrysHouse2F/scripts.pory"
	applymovement 1, BarrysHouse2F_EventScript_Barry_Movement_0
# 16 "data/maps/BarrysHouse2F/scripts.pory"
	waitmovement 0
# 18 "data/maps/BarrysHouse2F/scripts.pory"
	playse SE_PIN
# 19 "data/maps/BarrysHouse2F/scripts.pory"
	applymovement LOCALID_BARRY_RIVAL_HOUSE, BarrysHouse2F_EventScript_Barry_Movement_1
# 20 "data/maps/BarrysHouse2F/scripts.pory"
	waitmovement 0
# 21 "data/maps/BarrysHouse2F/scripts.pory"
	delay 30
# 22 "data/maps/BarrysHouse2F/scripts.pory"
	msgbox BarrysHouse2F_EventScript_Barry_Text_1, MSGBOX_DEFAULT
# 25 "data/maps/BarrysHouse2F/scripts.pory"
	closemessage
# 26 "data/maps/BarrysHouse2F/scripts.pory"
	applymovement LOCALID_BARRY_RIVAL_HOUSE, BarrysHouse2F_EventScript_Barry_Movement_2
# 27 "data/maps/BarrysHouse2F/scripts.pory"
	waitmovement 0
# 28 "data/maps/BarrysHouse2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BarrysHouse2F_EventScript_Barry_Movement_3
# 29 "data/maps/BarrysHouse2F/scripts.pory"
	waitmovement 0
# 30 "data/maps/BarrysHouse2F/scripts.pory"
	applymovement LOCALID_BARRY_RIVAL_HOUSE, BarrysHouse2F_EventScript_Barry_Movement_4
# 31 "data/maps/BarrysHouse2F/scripts.pory"
	waitmovement 0
# 32 "data/maps/BarrysHouse2F/scripts.pory"
	removeobject LOCALID_BARRY_RIVAL_HOUSE
# 33 "data/maps/BarrysHouse2F/scripts.pory"
	playse SE_EXIT
# 34 "data/maps/BarrysHouse2F/scripts.pory"
	waitse
# 35 "data/maps/BarrysHouse2F/scripts.pory"
	setvar VAR_MET_RIVAL_IN_TWINLEAF, 2
# 36 "data/maps/BarrysHouse2F/scripts.pory"
	setvar VAR_RIVAL_MOM_TEXT, 1
# 37 "data/maps/BarrysHouse2F/scripts.pory"
	setflag FLAG_HIDE_BARRY_FROM_HIS_HOUSE
# 38 "data/maps/BarrysHouse2F/scripts.pory"
	fadedefaultbgm
# 39 "data/maps/BarrysHouse2F/scripts.pory"
	release
	end


BarrysHouse2F_EventScript_Switch::
# 45 "data/maps/BarrysHouse2F/scripts.pory"
	msgbox BarrysHouse2F_EventScript_Switch_Text_0, MSGBOX_SIGN
	end


BarrysHouse2F_EventScript_PC::
# 52 "data/maps/BarrysHouse2F/scripts.pory"
	msgbox BarrysHouse2F_EventScript_PC_Text_0, MSGBOX_SIGN
	end


# 15 "data/maps/BarrysHouse2F/scripts.pory"
BarrysHouse2F_EventScript_Barry_Movement_0:
# 15 "data/maps/BarrysHouse2F/scripts.pory"
	face_left
	step_end

# 19 "data/maps/BarrysHouse2F/scripts.pory"
BarrysHouse2F_EventScript_Barry_Movement_1:
# 19 "data/maps/BarrysHouse2F/scripts.pory"
	emote_exclamation_mark
	step_end

# 26 "data/maps/BarrysHouse2F/scripts.pory"
BarrysHouse2F_EventScript_Barry_Movement_2:
# 26 "data/maps/BarrysHouse2F/scripts.pory"
	walk_fast_down
# 26 "data/maps/BarrysHouse2F/scripts.pory"
	walk_fast_left
# 26 "data/maps/BarrysHouse2F/scripts.pory"
	walk_fast_left
# 26 "data/maps/BarrysHouse2F/scripts.pory"
	walk_fast_left
# 26 "data/maps/BarrysHouse2F/scripts.pory"
	walk_fast_left
	step_end

# 28 "data/maps/BarrysHouse2F/scripts.pory"
BarrysHouse2F_EventScript_Barry_Movement_3:
# 28 "data/maps/BarrysHouse2F/scripts.pory"
	walk_fast_down
# 28 "data/maps/BarrysHouse2F/scripts.pory"
	face_up
	step_end

# 30 "data/maps/BarrysHouse2F/scripts.pory"
BarrysHouse2F_EventScript_Barry_Movement_4:
# 30 "data/maps/BarrysHouse2F/scripts.pory"
	walk_fast_up
# 30 "data/maps/BarrysHouse2F/scripts.pory"
	walk_fast_left
# 30 "data/maps/BarrysHouse2F/scripts.pory"
	walk_fast_left
	step_end

BarrysHouse2F_EventScript_Barry_Text_0:
# 12 "data/maps/BarrysHouse2F/scripts.pory"
	.string "{RIVAL}: ...I better take\n"
	.string "my Bag and Journal, too...$"

BarrysHouse2F_EventScript_Barry_Text_1:
# 22 "data/maps/BarrysHouse2F/scripts.pory"
	.string "Oh, hey, {PLAYER}!\p"
	.string "I'll be waiting on the road!\n"
	.string "It's a ¥10 million fine if you're late$"

BarrysHouse2F_EventScript_Switch_Text_0:
# 45 "data/maps/BarrysHouse2F/scripts.pory"
	.string "It's a Switch!\n"
	.string "It's controlled by the Joycons!$"

BarrysHouse2F_EventScript_PC_Text_0:
# 52 "data/maps/BarrysHouse2F/scripts.pory"
	.string "{PLAYER} checked the PC screen\p"
	.string "Adventure Rule No. 1\n"
	.string "The X Button opens the menu!\p"
	.string "Adventure Rule No. 2\n"
	.string "Record your progress with SAVE.\p"
	.string "There is nothing else on here...$"
