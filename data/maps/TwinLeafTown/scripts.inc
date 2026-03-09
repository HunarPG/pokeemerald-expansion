TwinLeafTown_MapScripts::
	.byte 0


TwinLeafTown_EventScript_Players_House_Sign::
# 5 "data/maps/TwinLeafTown/scripts.pory"
	msgbox TwinLeafTown_EventScript_Players_House_Sign_Text_0, MSGBOX_SIGN
	end


TwinLeafTown_EventScript_Barrys_House_Sign::
# 11 "data/maps/TwinLeafTown/scripts.pory"
	msgbox TwinLeafTown_EventScript_Barrys_House_Sign_Text_0, MSGBOX_SIGN
	end


TwinLeafTown_EventScript_Sign::
# 17 "data/maps/TwinLeafTown/scripts.pory"
	msgbox TwinLeafTown_EventScript_Sign_Text_0, MSGBOX_SIGN
	end


TwinLeafTown_EventScript_Fat_MAN::
# 24 "data/maps/TwinLeafTown/scripts.pory"
	msgbox TwinLeafTown_EventScript_Fat_MAN_Text_0, MSGBOX_NPC
	end


TwinLeafTown_EventScript_LADY::
# 32 "data/maps/TwinLeafTown/scripts.pory"
	msgbox TwinLeafTown_EventScript_LADY_Text_0, MSGBOX_NPC
	end


TwinLeafTown_EventScript_Barry::
# 41 "data/maps/TwinLeafTown/scripts.pory"
	lock
# 42 "data/maps/TwinLeafTown/scripts.pory"
	setflag FLAG_HIDE_ROUTE_201_ROWANS_BAG
# 43 "data/maps/TwinLeafTown/scripts.pory"
	setflag FLAG_HIDE_ROWAN_ROUTE_201
# 44 "data/maps/TwinLeafTown/scripts.pory"
	setflag FLAG_HIDE_RIVAL_201
# 45 "data/maps/TwinLeafTown/scripts.pory"
	showobjectat LOCALID_BARRY_TWINLEAF, MAP_TWIN_LEAF_TOWN
# 46 "data/maps/TwinLeafTown/scripts.pory"
	playse SE_DOOR
# 47 "data/maps/TwinLeafTown/scripts.pory"
	applymovement LOCALID_BARRY_TWINLEAF, TwinLeafTown_EventScript_Barry_Movement_0
# 48 "data/maps/TwinLeafTown/scripts.pory"
	waitmovement 0
# 49 "data/maps/TwinLeafTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TwinLeafTown_EventScript_Barry_Movement_1
# 50 "data/maps/TwinLeafTown/scripts.pory"
	waitmovement 0
# 51 "data/maps/TwinLeafTown/scripts.pory"
	msgbox TwinLeafTown_EventScript_Barry_Text_0, MSGBOX_DEFAULT
# 52 "data/maps/TwinLeafTown/scripts.pory"
	closemessage
# 53 "data/maps/TwinLeafTown/scripts.pory"
	playse SE_PIN
# 54 "data/maps/TwinLeafTown/scripts.pory"
	applymovement LOCALID_BARRY_TWINLEAF, TwinLeafTown_EventScript_Barry_Movement_2
# 55 "data/maps/TwinLeafTown/scripts.pory"
	waitmovement 0
# 56 "data/maps/TwinLeafTown/scripts.pory"
	delay 30
# 58 "data/maps/TwinLeafTown/scripts.pory"
	msgbox TwinLeafTown_EventScript_Barry_Text_1, MSGBOX_DEFAULT
# 62 "data/maps/TwinLeafTown/scripts.pory"
	closemessage
# 63 "data/maps/TwinLeafTown/scripts.pory"
	applymovement LOCALID_BARRY_TWINLEAF, TwinLeafTown_EventScript_Barry_Movement_3
# 64 "data/maps/TwinLeafTown/scripts.pory"
	waitmovement 0
# 65 "data/maps/TwinLeafTown/scripts.pory"
	playse SE_PIN
# 66 "data/maps/TwinLeafTown/scripts.pory"
	applymovement LOCALID_BARRY_TWINLEAF, TwinLeafTown_EventScript_Barry_Movement_2
# 67 "data/maps/TwinLeafTown/scripts.pory"
	waitmovement 0
# 68 "data/maps/TwinLeafTown/scripts.pory"
	delay 30
# 69 "data/maps/TwinLeafTown/scripts.pory"
	applymovement LOCALID_BARRY_TWINLEAF, TwinLeafTown_EventScript_Barry_Movement_4
# 70 "data/maps/TwinLeafTown/scripts.pory"
	waitmovement 0
# 71 "data/maps/TwinLeafTown/scripts.pory"
	msgbox TwinLeafTown_EventScript_Barry_Text_2, MSGBOX_DEFAULT
# 73 "data/maps/TwinLeafTown/scripts.pory"
	closemessage
# 74 "data/maps/TwinLeafTown/scripts.pory"
	applymovement LOCALID_BARRY_TWINLEAF, TwinLeafTown_EventScript_Barry_Movement_5
# 75 "data/maps/TwinLeafTown/scripts.pory"
	waitmovement 0
# 76 "data/maps/TwinLeafTown/scripts.pory"
	playse SE_DOOR
# 77 "data/maps/TwinLeafTown/scripts.pory"
	removeobject LOCALID_BARRY_TWINLEAF
# 78 "data/maps/TwinLeafTown/scripts.pory"
	setvar VAR_MET_RIVAL_IN_TWINLEAF, 1
# 79 "data/maps/TwinLeafTown/scripts.pory"
	fadedefaultbgm
# 80 "data/maps/TwinLeafTown/scripts.pory"
	release
	end


TwinLeafTown_EventScript_Guy::
# 86 "data/maps/TwinLeafTown/scripts.pory"
	switch VAR_RIVAL_MOM_TEXT
# 88 "data/maps/TwinLeafTown/scripts.pory"
	case 0, TwinLeafTown_EventScript_Guy_2
# 89 "data/maps/TwinLeafTown/scripts.pory"
	case 1, TwinLeafTown_EventScript_Guy_3
	return

TwinLeafTown_EventScript_Guy_2:
# 88 "data/maps/TwinLeafTown/scripts.pory"
	goto TwinLeafTown_EventScript_Guy_Before_Talking_To_Berry
	return

TwinLeafTown_EventScript_Guy_3:
# 89 "data/maps/TwinLeafTown/scripts.pory"
	goto TwinLeafTown_EventScript_Guy_After_Talking_To_Berry
	return


TwinLeafTown_EventScript_Guy_Before_Talking_To_Berry::
# 95 "data/maps/TwinLeafTown/scripts.pory"
	msgbox TwinLeafTown_EventScript_Guy_Before_Talking_To_Berry_Text_0, MSGBOX_NPC
	end


TwinLeafTown_EventScript_Guy_After_Talking_To_Berry::
# 104 "data/maps/TwinLeafTown/scripts.pory"
	msgbox TwinLeafTown_EventScript_Guy_After_Talking_To_Berry_Text_0, MSGBOX_NPC
	end


TwinLeafTown_EventScript_Guy_Stop_You::
# 115 "data/maps/TwinLeafTown/scripts.pory"
	lock
# 116 "data/maps/TwinLeafTown/scripts.pory"
	applymovement LOCALID_GUY, TwinLeafTown_EventScript_Guy_Stop_You_Movement_0
# 117 "data/maps/TwinLeafTown/scripts.pory"
	waitmovement 0
# 118 "data/maps/TwinLeafTown/scripts.pory"
	playse SE_PIN
# 119 "data/maps/TwinLeafTown/scripts.pory"
	applymovement LOCALID_GUY, TwinLeafTown_EventScript_Barry_Movement_2
# 120 "data/maps/TwinLeafTown/scripts.pory"
	waitmovement 0
# 121 "data/maps/TwinLeafTown/scripts.pory"
	delay 30
# 122 "data/maps/TwinLeafTown/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 123 "data/maps/TwinLeafTown/scripts.pory"
	switch VAR_TEMP_0
# 125 "data/maps/TwinLeafTown/scripts.pory"
	case 12, TwinLeafTown_EventScript_Guy_Stop_You_3
# 127 "data/maps/TwinLeafTown/scripts.pory"
	case 13, TwinLeafTown_EventScript_Guy_Stop_You_4
# 129 "data/maps/TwinLeafTown/scripts.pory"
	case 14, TwinLeafTown_EventScript_Guy_Stop_You_5
# 131 "data/maps/TwinLeafTown/scripts.pory"
	case 15, TwinLeafTown_EventScript_Guy_Stop_You_6
# 133 "data/maps/TwinLeafTown/scripts.pory"
	case 16, TwinLeafTown_EventScript_Guy_Stop_You_7
# 135 "data/maps/TwinLeafTown/scripts.pory"
	case 17, TwinLeafTown_EventScript_Guy_Stop_You_8
# 137 "data/maps/TwinLeafTown/scripts.pory"
	case 18, TwinLeafTown_EventScript_Guy_Stop_You_9
# 139 "data/maps/TwinLeafTown/scripts.pory"
	case 19, TwinLeafTown_EventScript_Guy_Stop_You_10
TwinLeafTown_EventScript_Guy_Stop_You_1:
# 142 "data/maps/TwinLeafTown/scripts.pory"
	waitmovement 0
# 143 "data/maps/TwinLeafTown/scripts.pory"
	applymovement LOCALID_GUY, TwinLeafTown_EventScript_Barry_Movement_0
# 144 "data/maps/TwinLeafTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TwinLeafTown_EventScript_Guy_Stop_You_Movement_9
# 145 "data/maps/TwinLeafTown/scripts.pory"
	waitmovement 0
# 146 "data/maps/TwinLeafTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TwinLeafTown_EventScript_Guy_Stop_You_Movement_0
# 147 "data/maps/TwinLeafTown/scripts.pory"
	waitmovement 0
# 148 "data/maps/TwinLeafTown/scripts.pory"
	delay 30
# 149 "data/maps/TwinLeafTown/scripts.pory"
	msgbox TwinLeafTown_EventScript_Guy_Before_Talking_To_Berry_Text_0, MSGBOX_DEFAULT
# 153 "data/maps/TwinLeafTown/scripts.pory"
	closemessage
# 154 "data/maps/TwinLeafTown/scripts.pory"
	switch VAR_TEMP_0
# 156 "data/maps/TwinLeafTown/scripts.pory"
	case 12, TwinLeafTown_EventScript_Guy_Stop_You_13
# 158 "data/maps/TwinLeafTown/scripts.pory"
	case 13, TwinLeafTown_EventScript_Guy_Stop_You_14
# 160 "data/maps/TwinLeafTown/scripts.pory"
	case 14, TwinLeafTown_EventScript_Guy_Stop_You_15
# 162 "data/maps/TwinLeafTown/scripts.pory"
	case 15, TwinLeafTown_EventScript_Guy_Stop_You_16
# 164 "data/maps/TwinLeafTown/scripts.pory"
	case 16, TwinLeafTown_EventScript_Guy_Stop_You_17
# 166 "data/maps/TwinLeafTown/scripts.pory"
	case 17, TwinLeafTown_EventScript_Guy_Stop_You_18
# 168 "data/maps/TwinLeafTown/scripts.pory"
	case 18, TwinLeafTown_EventScript_Guy_Stop_You_19
# 170 "data/maps/TwinLeafTown/scripts.pory"
	case 19, TwinLeafTown_EventScript_Guy_Stop_You_20
TwinLeafTown_EventScript_Guy_Stop_You_11:
# 173 "data/maps/TwinLeafTown/scripts.pory"
	waitmovement 0
# 174 "data/maps/TwinLeafTown/scripts.pory"
	release
	end

TwinLeafTown_EventScript_Guy_Stop_You_3:
# 126 "data/maps/TwinLeafTown/scripts.pory"
	applymovement LOCALID_GUY, TwinLeafTown_EventScript_Guy_Stop_You_Movement_1
	goto TwinLeafTown_EventScript_Guy_Stop_You_1

TwinLeafTown_EventScript_Guy_Stop_You_4:
# 128 "data/maps/TwinLeafTown/scripts.pory"
	applymovement LOCALID_GUY, TwinLeafTown_EventScript_Guy_Stop_You_Movement_2
	goto TwinLeafTown_EventScript_Guy_Stop_You_1

TwinLeafTown_EventScript_Guy_Stop_You_5:
# 130 "data/maps/TwinLeafTown/scripts.pory"
	applymovement LOCALID_GUY, TwinLeafTown_EventScript_Guy_Stop_You_Movement_3
	goto TwinLeafTown_EventScript_Guy_Stop_You_1

TwinLeafTown_EventScript_Guy_Stop_You_6:
# 132 "data/maps/TwinLeafTown/scripts.pory"
	applymovement LOCALID_GUY, TwinLeafTown_EventScript_Guy_Stop_You_Movement_4
	goto TwinLeafTown_EventScript_Guy_Stop_You_1

TwinLeafTown_EventScript_Guy_Stop_You_7:
# 134 "data/maps/TwinLeafTown/scripts.pory"
	applymovement LOCALID_GUY, TwinLeafTown_EventScript_Guy_Stop_You_Movement_5
	goto TwinLeafTown_EventScript_Guy_Stop_You_1

TwinLeafTown_EventScript_Guy_Stop_You_8:
# 136 "data/maps/TwinLeafTown/scripts.pory"
	applymovement LOCALID_GUY, TwinLeafTown_EventScript_Guy_Stop_You_Movement_6
	goto TwinLeafTown_EventScript_Guy_Stop_You_1

TwinLeafTown_EventScript_Guy_Stop_You_9:
# 138 "data/maps/TwinLeafTown/scripts.pory"
	applymovement LOCALID_GUY, TwinLeafTown_EventScript_Guy_Stop_You_Movement_7
	goto TwinLeafTown_EventScript_Guy_Stop_You_1

TwinLeafTown_EventScript_Guy_Stop_You_10:
# 140 "data/maps/TwinLeafTown/scripts.pory"
	applymovement LOCALID_GUY, TwinLeafTown_EventScript_Guy_Stop_You_Movement_8
	goto TwinLeafTown_EventScript_Guy_Stop_You_1

TwinLeafTown_EventScript_Guy_Stop_You_13:
# 157 "data/maps/TwinLeafTown/scripts.pory"
	applymovement LOCALID_GUY, TwinLeafTown_EventScript_Guy_Stop_You_Movement_10
	goto TwinLeafTown_EventScript_Guy_Stop_You_11

TwinLeafTown_EventScript_Guy_Stop_You_14:
# 159 "data/maps/TwinLeafTown/scripts.pory"
	applymovement LOCALID_GUY, TwinLeafTown_EventScript_Guy_Stop_You_Movement_11
	goto TwinLeafTown_EventScript_Guy_Stop_You_11

TwinLeafTown_EventScript_Guy_Stop_You_15:
# 161 "data/maps/TwinLeafTown/scripts.pory"
	applymovement LOCALID_GUY, TwinLeafTown_EventScript_Guy_Stop_You_Movement_12
	goto TwinLeafTown_EventScript_Guy_Stop_You_11

TwinLeafTown_EventScript_Guy_Stop_You_16:
# 163 "data/maps/TwinLeafTown/scripts.pory"
	applymovement LOCALID_GUY, TwinLeafTown_EventScript_Guy_Stop_You_Movement_13
	goto TwinLeafTown_EventScript_Guy_Stop_You_11

TwinLeafTown_EventScript_Guy_Stop_You_17:
# 165 "data/maps/TwinLeafTown/scripts.pory"
	applymovement LOCALID_GUY, TwinLeafTown_EventScript_Guy_Stop_You_Movement_14
	goto TwinLeafTown_EventScript_Guy_Stop_You_11

TwinLeafTown_EventScript_Guy_Stop_You_18:
# 167 "data/maps/TwinLeafTown/scripts.pory"
	applymovement LOCALID_GUY, TwinLeafTown_EventScript_Guy_Stop_You_Movement_15
	goto TwinLeafTown_EventScript_Guy_Stop_You_11

TwinLeafTown_EventScript_Guy_Stop_You_19:
# 169 "data/maps/TwinLeafTown/scripts.pory"
	applymovement LOCALID_GUY, TwinLeafTown_EventScript_Guy_Stop_You_Movement_16
	goto TwinLeafTown_EventScript_Guy_Stop_You_11

TwinLeafTown_EventScript_Guy_Stop_You_20:
# 171 "data/maps/TwinLeafTown/scripts.pory"
	applymovement LOCALID_GUY, TwinLeafTown_EventScript_Guy_Stop_You_Movement_17
	goto TwinLeafTown_EventScript_Guy_Stop_You_11


# 47 "data/maps/TwinLeafTown/scripts.pory"
TwinLeafTown_EventScript_Barry_Movement_0:
# 47 "data/maps/TwinLeafTown/scripts.pory"
	walk_fast_down
	step_end

# 49 "data/maps/TwinLeafTown/scripts.pory"
TwinLeafTown_EventScript_Barry_Movement_1:
# 49 "data/maps/TwinLeafTown/scripts.pory"
	walk_fast_down
# 49 "data/maps/TwinLeafTown/scripts.pory"
	face_up
	step_end

# 54 "data/maps/TwinLeafTown/scripts.pory"
TwinLeafTown_EventScript_Barry_Movement_2:
# 54 "data/maps/TwinLeafTown/scripts.pory"
	emote_exclamation_mark
	step_end

# 63 "data/maps/TwinLeafTown/scripts.pory"
TwinLeafTown_EventScript_Barry_Movement_3:
# 63 "data/maps/TwinLeafTown/scripts.pory"
	walk_fast_right
# 63 "data/maps/TwinLeafTown/scripts.pory"
	walk_fast_right
# 63 "data/maps/TwinLeafTown/scripts.pory"
	walk_fast_right
# 63 "data/maps/TwinLeafTown/scripts.pory"
	walk_fast_right
	step_end

# 69 "data/maps/TwinLeafTown/scripts.pory"
TwinLeafTown_EventScript_Barry_Movement_4:
# 69 "data/maps/TwinLeafTown/scripts.pory"
	walk_fast_left
# 69 "data/maps/TwinLeafTown/scripts.pory"
	walk_fast_left
# 69 "data/maps/TwinLeafTown/scripts.pory"
	walk_fast_left
# 69 "data/maps/TwinLeafTown/scripts.pory"
	walk_fast_left
# 69 "data/maps/TwinLeafTown/scripts.pory"
	face_down
	step_end

# 74 "data/maps/TwinLeafTown/scripts.pory"
TwinLeafTown_EventScript_Barry_Movement_5:
# 74 "data/maps/TwinLeafTown/scripts.pory"
	walk_fast_up
	step_end

# 116 "data/maps/TwinLeafTown/scripts.pory"
TwinLeafTown_EventScript_Guy_Stop_You_Movement_0:
# 116 "data/maps/TwinLeafTown/scripts.pory"
	face_up
	step_end

# 126 "data/maps/TwinLeafTown/scripts.pory"
TwinLeafTown_EventScript_Guy_Stop_You_Movement_1:
# 126 "data/maps/TwinLeafTown/scripts.pory"
	walk_fast_up
# 126 "data/maps/TwinLeafTown/scripts.pory"
	walk_fast_up
# 126 "data/maps/TwinLeafTown/scripts.pory"
	walk_fast_right
# 126 "data/maps/TwinLeafTown/scripts.pory"
	walk_fast_up
# 126 "data/maps/TwinLeafTown/scripts.pory"
	walk_fast_up
# 126 "data/maps/TwinLeafTown/scripts.pory"
	walk_fast_left
# 126 "data/maps/TwinLeafTown/scripts.pory"
	face_down
	step_end

# 128 "data/maps/TwinLeafTown/scripts.pory"
TwinLeafTown_EventScript_Guy_Stop_You_Movement_2:
# 128 "data/maps/TwinLeafTown/scripts.pory"
	walk_fast_up
# 128 "data/maps/TwinLeafTown/scripts.pory"
	walk_fast_up
# 128 "data/maps/TwinLeafTown/scripts.pory"
	walk_fast_up
# 128 "data/maps/TwinLeafTown/scripts.pory"
	walk_fast_up
# 128 "data/maps/TwinLeafTown/scripts.pory"
	walk_fast_right
# 128 "data/maps/TwinLeafTown/scripts.pory"
	face_down
	step_end

# 130 "data/maps/TwinLeafTown/scripts.pory"
TwinLeafTown_EventScript_Guy_Stop_You_Movement_3:
# 130 "data/maps/TwinLeafTown/scripts.pory"
	walk_fast_up
# 130 "data/maps/TwinLeafTown/scripts.pory"
	walk_fast_up
# 130 "data/maps/TwinLeafTown/scripts.pory"
	walk_fast_up
# 130 "data/maps/TwinLeafTown/scripts.pory"
	walk_fast_up
# 130 "data/maps/TwinLeafTown/scripts.pory"
	walk_fast_right
# 130 "data/maps/TwinLeafTown/scripts.pory"
	walk_fast_right
# 130 "data/maps/TwinLeafTown/scripts.pory"
	face_down
	step_end

# 132 "data/maps/TwinLeafTown/scripts.pory"
TwinLeafTown_EventScript_Guy_Stop_You_Movement_4:
# 132 "data/maps/TwinLeafTown/scripts.pory"
	walk_fast_up
# 132 "data/maps/TwinLeafTown/scripts.pory"
	walk_fast_up
# 132 "data/maps/TwinLeafTown/scripts.pory"
	walk_fast_up
# 132 "data/maps/TwinLeafTown/scripts.pory"
	walk_fast_up
# 132 "data/maps/TwinLeafTown/scripts.pory"
	walk_fast_right
# 132 "data/maps/TwinLeafTown/scripts.pory"
	walk_fast_right
# 132 "data/maps/TwinLeafTown/scripts.pory"
	walk_fast_right
# 132 "data/maps/TwinLeafTown/scripts.pory"
	face_down
	step_end

# 134 "data/maps/TwinLeafTown/scripts.pory"
TwinLeafTown_EventScript_Guy_Stop_You_Movement_5:
# 134 "data/maps/TwinLeafTown/scripts.pory"
	walk_fast_up
# 134 "data/maps/TwinLeafTown/scripts.pory"
	walk_fast_up
# 134 "data/maps/TwinLeafTown/scripts.pory"
	walk_fast_up
# 134 "data/maps/TwinLeafTown/scripts.pory"
	walk_fast_up
# 134 "data/maps/TwinLeafTown/scripts.pory"
	walk_fast_right
# 134 "data/maps/TwinLeafTown/scripts.pory"
	walk_fast_right
# 134 "data/maps/TwinLeafTown/scripts.pory"
	walk_fast_right
# 134 "data/maps/TwinLeafTown/scripts.pory"
	walk_fast_right
# 134 "data/maps/TwinLeafTown/scripts.pory"
	face_down
	step_end

# 136 "data/maps/TwinLeafTown/scripts.pory"
TwinLeafTown_EventScript_Guy_Stop_You_Movement_6:
# 136 "data/maps/TwinLeafTown/scripts.pory"
	walk_fast_up
# 136 "data/maps/TwinLeafTown/scripts.pory"
	walk_fast_up
# 136 "data/maps/TwinLeafTown/scripts.pory"
	walk_fast_up
# 136 "data/maps/TwinLeafTown/scripts.pory"
	walk_fast_up
# 136 "data/maps/TwinLeafTown/scripts.pory"
	walk_fast_right
# 136 "data/maps/TwinLeafTown/scripts.pory"
	walk_fast_right
# 136 "data/maps/TwinLeafTown/scripts.pory"
	walk_fast_right
# 136 "data/maps/TwinLeafTown/scripts.pory"
	walk_fast_right
# 136 "data/maps/TwinLeafTown/scripts.pory"
	walk_fast_right
# 136 "data/maps/TwinLeafTown/scripts.pory"
	face_down
	step_end

# 138 "data/maps/TwinLeafTown/scripts.pory"
TwinLeafTown_EventScript_Guy_Stop_You_Movement_7:
# 138 "data/maps/TwinLeafTown/scripts.pory"
	walk_fast_up
# 138 "data/maps/TwinLeafTown/scripts.pory"
	walk_fast_up
# 138 "data/maps/TwinLeafTown/scripts.pory"
	walk_fast_up
# 138 "data/maps/TwinLeafTown/scripts.pory"
	walk_fast_up
# 138 "data/maps/TwinLeafTown/scripts.pory"
	walk_fast_right
# 138 "data/maps/TwinLeafTown/scripts.pory"
	walk_fast_right
# 138 "data/maps/TwinLeafTown/scripts.pory"
	walk_fast_right
# 138 "data/maps/TwinLeafTown/scripts.pory"
	walk_fast_right
# 138 "data/maps/TwinLeafTown/scripts.pory"
	walk_fast_right
# 138 "data/maps/TwinLeafTown/scripts.pory"
	walk_fast_right
# 138 "data/maps/TwinLeafTown/scripts.pory"
	face_down
	step_end

# 140 "data/maps/TwinLeafTown/scripts.pory"
TwinLeafTown_EventScript_Guy_Stop_You_Movement_8:
# 140 "data/maps/TwinLeafTown/scripts.pory"
	walk_fast_up
# 140 "data/maps/TwinLeafTown/scripts.pory"
	walk_fast_up
# 140 "data/maps/TwinLeafTown/scripts.pory"
	walk_fast_up
# 140 "data/maps/TwinLeafTown/scripts.pory"
	walk_fast_up
# 140 "data/maps/TwinLeafTown/scripts.pory"
	walk_fast_right
# 140 "data/maps/TwinLeafTown/scripts.pory"
	walk_fast_right
# 140 "data/maps/TwinLeafTown/scripts.pory"
	walk_fast_right
# 140 "data/maps/TwinLeafTown/scripts.pory"
	walk_fast_right
# 140 "data/maps/TwinLeafTown/scripts.pory"
	walk_fast_right
# 140 "data/maps/TwinLeafTown/scripts.pory"
	walk_fast_right
# 140 "data/maps/TwinLeafTown/scripts.pory"
	walk_fast_right
# 140 "data/maps/TwinLeafTown/scripts.pory"
	face_down
	step_end

# 144 "data/maps/TwinLeafTown/scripts.pory"
TwinLeafTown_EventScript_Guy_Stop_You_Movement_9:
# 144 "data/maps/TwinLeafTown/scripts.pory"
	jump_down
	step_end

# 157 "data/maps/TwinLeafTown/scripts.pory"
TwinLeafTown_EventScript_Guy_Stop_You_Movement_10:
# 157 "data/maps/TwinLeafTown/scripts.pory"
	walk_fast_right
# 157 "data/maps/TwinLeafTown/scripts.pory"
	walk_fast_down
# 157 "data/maps/TwinLeafTown/scripts.pory"
	walk_fast_down
# 157 "data/maps/TwinLeafTown/scripts.pory"
	walk_fast_left
# 157 "data/maps/TwinLeafTown/scripts.pory"
	walk_fast_down
	step_end

# 159 "data/maps/TwinLeafTown/scripts.pory"
TwinLeafTown_EventScript_Guy_Stop_You_Movement_11:
# 159 "data/maps/TwinLeafTown/scripts.pory"
	walk_fast_left
# 159 "data/maps/TwinLeafTown/scripts.pory"
	walk_fast_down
# 159 "data/maps/TwinLeafTown/scripts.pory"
	walk_fast_down
# 159 "data/maps/TwinLeafTown/scripts.pory"
	walk_fast_down
	step_end

# 161 "data/maps/TwinLeafTown/scripts.pory"
TwinLeafTown_EventScript_Guy_Stop_You_Movement_12:
# 161 "data/maps/TwinLeafTown/scripts.pory"
	walk_fast_left
# 161 "data/maps/TwinLeafTown/scripts.pory"
	walk_fast_left
# 161 "data/maps/TwinLeafTown/scripts.pory"
	walk_fast_down
# 161 "data/maps/TwinLeafTown/scripts.pory"
	walk_fast_down
# 161 "data/maps/TwinLeafTown/scripts.pory"
	walk_fast_down
	step_end

# 163 "data/maps/TwinLeafTown/scripts.pory"
TwinLeafTown_EventScript_Guy_Stop_You_Movement_13:
# 163 "data/maps/TwinLeafTown/scripts.pory"
	walk_fast_left
# 163 "data/maps/TwinLeafTown/scripts.pory"
	walk_fast_left
# 163 "data/maps/TwinLeafTown/scripts.pory"
	walk_fast_left
# 163 "data/maps/TwinLeafTown/scripts.pory"
	walk_fast_down
# 163 "data/maps/TwinLeafTown/scripts.pory"
	walk_fast_down
# 163 "data/maps/TwinLeafTown/scripts.pory"
	walk_fast_down
	step_end

# 165 "data/maps/TwinLeafTown/scripts.pory"
TwinLeafTown_EventScript_Guy_Stop_You_Movement_14:
# 165 "data/maps/TwinLeafTown/scripts.pory"
	walk_fast_left
# 165 "data/maps/TwinLeafTown/scripts.pory"
	walk_fast_left
# 165 "data/maps/TwinLeafTown/scripts.pory"
	walk_fast_left
# 165 "data/maps/TwinLeafTown/scripts.pory"
	walk_fast_left
# 165 "data/maps/TwinLeafTown/scripts.pory"
	walk_fast_down
# 165 "data/maps/TwinLeafTown/scripts.pory"
	walk_fast_down
# 165 "data/maps/TwinLeafTown/scripts.pory"
	walk_fast_down
	step_end

# 167 "data/maps/TwinLeafTown/scripts.pory"
TwinLeafTown_EventScript_Guy_Stop_You_Movement_15:
# 167 "data/maps/TwinLeafTown/scripts.pory"
	walk_fast_left
# 167 "data/maps/TwinLeafTown/scripts.pory"
	walk_fast_left
# 167 "data/maps/TwinLeafTown/scripts.pory"
	walk_fast_left
# 167 "data/maps/TwinLeafTown/scripts.pory"
	walk_fast_left
# 167 "data/maps/TwinLeafTown/scripts.pory"
	walk_fast_left
# 167 "data/maps/TwinLeafTown/scripts.pory"
	walk_fast_down
# 167 "data/maps/TwinLeafTown/scripts.pory"
	walk_fast_down
# 167 "data/maps/TwinLeafTown/scripts.pory"
	walk_fast_down
	step_end

# 169 "data/maps/TwinLeafTown/scripts.pory"
TwinLeafTown_EventScript_Guy_Stop_You_Movement_16:
# 169 "data/maps/TwinLeafTown/scripts.pory"
	walk_fast_left
# 169 "data/maps/TwinLeafTown/scripts.pory"
	walk_fast_left
# 169 "data/maps/TwinLeafTown/scripts.pory"
	walk_fast_left
# 169 "data/maps/TwinLeafTown/scripts.pory"
	walk_fast_left
# 169 "data/maps/TwinLeafTown/scripts.pory"
	walk_fast_left
# 169 "data/maps/TwinLeafTown/scripts.pory"
	walk_fast_left
# 169 "data/maps/TwinLeafTown/scripts.pory"
	walk_fast_down
# 169 "data/maps/TwinLeafTown/scripts.pory"
	walk_fast_down
# 169 "data/maps/TwinLeafTown/scripts.pory"
	walk_fast_down
	step_end

# 171 "data/maps/TwinLeafTown/scripts.pory"
TwinLeafTown_EventScript_Guy_Stop_You_Movement_17:
# 171 "data/maps/TwinLeafTown/scripts.pory"
	walk_fast_left
# 171 "data/maps/TwinLeafTown/scripts.pory"
	walk_fast_left
# 171 "data/maps/TwinLeafTown/scripts.pory"
	walk_fast_left
# 171 "data/maps/TwinLeafTown/scripts.pory"
	walk_fast_left
# 171 "data/maps/TwinLeafTown/scripts.pory"
	walk_fast_left
# 171 "data/maps/TwinLeafTown/scripts.pory"
	walk_fast_left
# 171 "data/maps/TwinLeafTown/scripts.pory"
	walk_fast_left
# 171 "data/maps/TwinLeafTown/scripts.pory"
	walk_fast_down
# 171 "data/maps/TwinLeafTown/scripts.pory"
	walk_fast_down
# 171 "data/maps/TwinLeafTown/scripts.pory"
	walk_fast_down
	step_end

TwinLeafTown_EventScript_Players_House_Sign_Text_0:
# 5 "data/maps/TwinLeafTown/scripts.pory"
	.string "{PLAYER}'s House$"

TwinLeafTown_EventScript_Barrys_House_Sign_Text_0:
# 11 "data/maps/TwinLeafTown/scripts.pory"
	.string "{RIVAL}'s House$"

TwinLeafTown_EventScript_Sign_Text_0:
# 17 "data/maps/TwinLeafTown/scripts.pory"
	.string "Twinleaf Town\n"
	.string "Fresh and Free!$"

TwinLeafTown_EventScript_Fat_MAN_Text_0:
# 24 "data/maps/TwinLeafTown/scripts.pory"
	.string "Technology just blows me away!\p"
	.string "I mean, now you can play with people\n"
	.string "around the world...wirelessly!$"

TwinLeafTown_EventScript_LADY_Text_0:
# 32 "data/maps/TwinLeafTown/scripts.pory"
	.string "It's true that wild Pokémon do attack\n"
	.string "people sometimes...\p"
	.string "But, Pokémon also open their hearts\n"
	.string "to you, so you can become friends.$"

TwinLeafTown_EventScript_Barry_Text_0:
# 51 "data/maps/TwinLeafTown/scripts.pory"
	.string "Thud!!$"

TwinLeafTown_EventScript_Barry_Text_1:
# 58 "data/maps/TwinLeafTown/scripts.pory"
	.string "{RIVAL}: What was that about?!\p"
	.string "Oh, hey, {PLAYER}!\p"
	.string "Hey! I'm going to see Prof. Rowan!\n"
	.string "You should come, too! And quickly!$"

TwinLeafTown_EventScript_Barry_Text_2:
# 71 "data/maps/TwinLeafTown/scripts.pory"
	.string "{RIVAL}: Oh, jeez!\n"
	.string "Forgot something!$"

TwinLeafTown_EventScript_Guy_Before_Talking_To_Berry_Text_0:
# 95 "data/maps/TwinLeafTown/scripts.pory"
	.string "Hiya, {PLAYER}.\n"
	.string "{RIVAL} was looking for you.\p"
	.string "I think he's home now.\n"
	.string "Why don't you go check it out?$"

TwinLeafTown_EventScript_Guy_After_Talking_To_Berry_Text_0:
# 104 "data/maps/TwinLeafTown/scripts.pory"
	.string "Hiya, {PLAYER}.\n"
	.string "You are looking for {RIVAL}?\p"
	.string "He just went tearing of a little\n"
	.string "while ago.\p"
	.string "He's probably not gone too far.\n"
	.string "Why not go chase after him?$"
