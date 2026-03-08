PlayersHouse2F_MapScripts::
	.byte 0


PlayersHouse2F_EventScript_PC::
# 5 "data/maps/PlayersHouse2F/scripts.pory"
	msgbox PlayersHouse2F_EventScript_PC_Text_0, MSGBOX_SIGN
	end


PlayersHouse2F_EventScript_TV::
# 16 "data/maps/PlayersHouse2F/scripts.pory"
	msgbox PlayersHouse2F_EventScript_TV_Text_0, MSGBOX_SIGN
	end


PlayersHouse2F_EventScript_Switch::
# 22 "data/maps/PlayersHouse2F/scripts.pory"
	msgbox PlayersHouse2F_EventScript_Switch_Text_0, MSGBOX_SIGN
	end


PlayersHouse2F_EventScript_Tutorial::
# 29 "data/maps/PlayersHouse2F/scripts.pory"
	msgbox PlayersHouse2F_EventScript_Tutorial_Text_0, MSGBOX_SIGN
	end


PlayersHouse2F_EventScript_Rival_Comes_In::
# 36 "data/maps/PlayersHouse2F/scripts.pory"
	lock
# 38 "data/maps/PlayersHouse2F/scripts.pory"
	applymovement LOCALID_BARRY_PLAYER_HOUSE, PlayersHouse2F_EventScript_Rival_Comes_In_Movement_0
# 39 "data/maps/PlayersHouse2F/scripts.pory"
	waitmovement 0
# 40 "data/maps/PlayersHouse2F/scripts.pory"
	showobjectat LOCALID_BARRY_PLAYER_HOUSE, MAP_PLAYERS_HOUSE2F
# 41 "data/maps/PlayersHouse2F/scripts.pory"
	playse SE_EXIT
# 42 "data/maps/PlayersHouse2F/scripts.pory"
	waitse
# 43 "data/maps/PlayersHouse2F/scripts.pory"
	playse SE_PIN
# 44 "data/maps/PlayersHouse2F/scripts.pory"
	applymovement LOCALID_BARRY_PLAYER_HOUSE, PlayersHouse2F_EventScript_Rival_Comes_In_Movement_1
# 45 "data/maps/PlayersHouse2F/scripts.pory"
	waitmovement 0
# 46 "data/maps/PlayersHouse2F/scripts.pory"
	delay 30
# 47 "data/maps/PlayersHouse2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayersHouse2F_EventScript_Rival_Comes_In_Movement_2
# 48 "data/maps/PlayersHouse2F/scripts.pory"
	waitmovement 0
# 49 "data/maps/PlayersHouse2F/scripts.pory"
	msgbox PlayersHouse2F_EventScript_Rival_Comes_In_Text_0, MSGBOX_DEFAULT
# 50 "data/maps/PlayersHouse2F/scripts.pory"
	closemessage
# 51 "data/maps/PlayersHouse2F/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 52 "data/maps/PlayersHouse2F/scripts.pory"
	compare VAR_TEMP_0, 4
	goto_if_eq PlayersHouse2F_EventScript_Rival_Comes_In_2
# 57 "data/maps/PlayersHouse2F/scripts.pory"
	compare VAR_TEMP_0, 2
	goto_if_eq PlayersHouse2F_EventScript_Rival_Comes_In_3
# 62 "data/maps/PlayersHouse2F/scripts.pory"
	compare VAR_TEMP_0, 3
	goto_if_eq PlayersHouse2F_EventScript_Rival_Comes_In_4
PlayersHouse2F_EventScript_Rival_Comes_In_1:
# 75 "data/maps/PlayersHouse2F/scripts.pory"
	msgbox PlayersHouse2F_EventScript_Rival_Comes_In_Text_1, MSGBOX_DEFAULT
# 83 "data/maps/PlayersHouse2F/scripts.pory"
	closemessage
# 84 "data/maps/PlayersHouse2F/scripts.pory"
	playse SE_PIN
# 85 "data/maps/PlayersHouse2F/scripts.pory"
	applymovement LOCALID_BARRY_PLAYER_HOUSE, PlayersHouse2F_EventScript_Rival_Comes_In_Movement_1
# 86 "data/maps/PlayersHouse2F/scripts.pory"
	waitmovement 0
# 87 "data/maps/PlayersHouse2F/scripts.pory"
	delay 60
# 88 "data/maps/PlayersHouse2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayersHouse2F_EventScript_Rival_Comes_In_Movement_7
# 89 "data/maps/PlayersHouse2F/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 90 "data/maps/PlayersHouse2F/scripts.pory"
	compare VAR_TEMP_0, 4
	goto_if_eq PlayersHouse2F_EventScript_Rival_Comes_In_9
# 95 "data/maps/PlayersHouse2F/scripts.pory"
	compare VAR_TEMP_0, 2
	goto_if_eq PlayersHouse2F_EventScript_Rival_Comes_In_10
# 100 "data/maps/PlayersHouse2F/scripts.pory"
	compare VAR_TEMP_0, 3
	goto_if_eq PlayersHouse2F_EventScript_Rival_Comes_In_11
PlayersHouse2F_EventScript_Rival_Comes_In_8:
# 113 "data/maps/PlayersHouse2F/scripts.pory"
	msgbox PlayersHouse2F_EventScript_Rival_Comes_In_Text_2, MSGBOX_DEFAULT
# 115 "data/maps/PlayersHouse2F/scripts.pory"
	closemessage
# 116 "data/maps/PlayersHouse2F/scripts.pory"
	applymovement LOCALID_BARRY_PLAYER_HOUSE, PlayersHouse2F_EventScript_Rival_Comes_In_Movement_2
# 117 "data/maps/PlayersHouse2F/scripts.pory"
	waitmovement 0
# 118 "data/maps/PlayersHouse2F/scripts.pory"
	msgbox PlayersHouse2F_EventScript_Rival_Comes_In_Text_3, MSGBOX_DEFAULT
# 120 "data/maps/PlayersHouse2F/scripts.pory"
	closemessage
# 121 "data/maps/PlayersHouse2F/scripts.pory"
	compare VAR_TEMP_0, 4
	goto_if_eq PlayersHouse2F_EventScript_Rival_Comes_In_20
# 126 "data/maps/PlayersHouse2F/scripts.pory"
	compare VAR_TEMP_0, 2
	goto_if_eq PlayersHouse2F_EventScript_Rival_Comes_In_21
# 131 "data/maps/PlayersHouse2F/scripts.pory"
	compare VAR_TEMP_0, 3
	goto_if_eq PlayersHouse2F_EventScript_Rival_Comes_In_22
PlayersHouse2F_EventScript_Rival_Comes_In_19:
# 144 "data/maps/PlayersHouse2F/scripts.pory"
	msgbox PlayersHouse2F_EventScript_Rival_Comes_In_Text_4, MSGBOX_DEFAULT
# 149 "data/maps/PlayersHouse2F/scripts.pory"
	closemessage
# 150 "data/maps/PlayersHouse2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayersHouse2F_EventScript_Rival_Comes_In_Movement_2
# 151 "data/maps/PlayersHouse2F/scripts.pory"
	compare VAR_TEMP_0, 4
	goto_if_eq PlayersHouse2F_EventScript_Rival_Comes_In_31
# 156 "data/maps/PlayersHouse2F/scripts.pory"
	compare VAR_TEMP_0, 2
	goto_if_eq PlayersHouse2F_EventScript_Rival_Comes_In_32
# 161 "data/maps/PlayersHouse2F/scripts.pory"
	compare VAR_TEMP_0, 3
	goto_if_eq PlayersHouse2F_EventScript_Rival_Comes_In_33
PlayersHouse2F_EventScript_Rival_Comes_In_30:
# 174 "data/maps/PlayersHouse2F/scripts.pory"
	removeobject LOCALID_BARRY_PLAYER_HOUSE
# 175 "data/maps/PlayersHouse2F/scripts.pory"
	fadedefaultbgm
# 176 "data/maps/PlayersHouse2F/scripts.pory"
	playse SE_EXIT
# 177 "data/maps/PlayersHouse2F/scripts.pory"
	waitse
# 178 "data/maps/PlayersHouse2F/scripts.pory"
	setvar VAR_RIVAL_CAME_IN_YOUR_ROOM, 1
# 179 "data/maps/PlayersHouse2F/scripts.pory"
	release
	end

PlayersHouse2F_EventScript_Rival_Comes_In_2:
# 54 "data/maps/PlayersHouse2F/scripts.pory"
	applymovement LOCALID_BARRY_PLAYER_HOUSE, PlayersHouse2F_EventScript_Rival_Comes_In_Movement_3
# 55 "data/maps/PlayersHouse2F/scripts.pory"
	waitmovement 0
	goto PlayersHouse2F_EventScript_Rival_Comes_In_1

PlayersHouse2F_EventScript_Rival_Comes_In_3:
# 59 "data/maps/PlayersHouse2F/scripts.pory"
	applymovement LOCALID_BARRY_PLAYER_HOUSE, PlayersHouse2F_EventScript_Rival_Comes_In_Movement_4
# 60 "data/maps/PlayersHouse2F/scripts.pory"
	waitmovement 0
	goto PlayersHouse2F_EventScript_Rival_Comes_In_1

PlayersHouse2F_EventScript_Rival_Comes_In_4:
# 64 "data/maps/PlayersHouse2F/scripts.pory"
	compare VAR_TEMP_1, 4
	goto_if_eq PlayersHouse2F_EventScript_Rival_Comes_In_15
# 69 "data/maps/PlayersHouse2F/scripts.pory"
	compare VAR_TEMP_1, 6
	goto_if_eq PlayersHouse2F_EventScript_Rival_Comes_In_16
	goto PlayersHouse2F_EventScript_Rival_Comes_In_1

PlayersHouse2F_EventScript_Rival_Comes_In_9:
# 92 "data/maps/PlayersHouse2F/scripts.pory"
	applymovement LOCALID_BARRY_PLAYER_HOUSE, PlayersHouse2F_EventScript_Rival_Comes_In_Movement_8
# 93 "data/maps/PlayersHouse2F/scripts.pory"
	waitmovement 0
	goto PlayersHouse2F_EventScript_Rival_Comes_In_8

PlayersHouse2F_EventScript_Rival_Comes_In_10:
# 97 "data/maps/PlayersHouse2F/scripts.pory"
	applymovement LOCALID_BARRY_PLAYER_HOUSE, PlayersHouse2F_EventScript_Rival_Comes_In_Movement_9
# 98 "data/maps/PlayersHouse2F/scripts.pory"
	waitmovement 0
	goto PlayersHouse2F_EventScript_Rival_Comes_In_8

PlayersHouse2F_EventScript_Rival_Comes_In_11:
# 102 "data/maps/PlayersHouse2F/scripts.pory"
	compare VAR_TEMP_1, 4
	goto_if_eq PlayersHouse2F_EventScript_Rival_Comes_In_26
# 107 "data/maps/PlayersHouse2F/scripts.pory"
	compare VAR_TEMP_1, 6
	goto_if_eq PlayersHouse2F_EventScript_Rival_Comes_In_27
	goto PlayersHouse2F_EventScript_Rival_Comes_In_8

PlayersHouse2F_EventScript_Rival_Comes_In_15:
# 66 "data/maps/PlayersHouse2F/scripts.pory"
	applymovement LOCALID_BARRY_PLAYER_HOUSE, PlayersHouse2F_EventScript_Rival_Comes_In_Movement_5
# 67 "data/maps/PlayersHouse2F/scripts.pory"
	waitmovement 0
	goto PlayersHouse2F_EventScript_Rival_Comes_In_1

PlayersHouse2F_EventScript_Rival_Comes_In_16:
# 71 "data/maps/PlayersHouse2F/scripts.pory"
	applymovement LOCALID_BARRY_PLAYER_HOUSE, PlayersHouse2F_EventScript_Rival_Comes_In_Movement_6
# 72 "data/maps/PlayersHouse2F/scripts.pory"
	waitmovement 0
	goto PlayersHouse2F_EventScript_Rival_Comes_In_1

PlayersHouse2F_EventScript_Rival_Comes_In_20:
# 123 "data/maps/PlayersHouse2F/scripts.pory"
	applymovement LOCALID_BARRY_PLAYER_HOUSE, PlayersHouse2F_EventScript_Rival_Comes_In_Movement_12
# 124 "data/maps/PlayersHouse2F/scripts.pory"
	waitmovement 0
	goto PlayersHouse2F_EventScript_Rival_Comes_In_19

PlayersHouse2F_EventScript_Rival_Comes_In_21:
# 128 "data/maps/PlayersHouse2F/scripts.pory"
	applymovement LOCALID_BARRY_PLAYER_HOUSE, PlayersHouse2F_EventScript_Rival_Comes_In_Movement_13
# 129 "data/maps/PlayersHouse2F/scripts.pory"
	waitmovement 0
	goto PlayersHouse2F_EventScript_Rival_Comes_In_19

PlayersHouse2F_EventScript_Rival_Comes_In_22:
# 133 "data/maps/PlayersHouse2F/scripts.pory"
	compare VAR_TEMP_1, 4
	goto_if_eq PlayersHouse2F_EventScript_Rival_Comes_In_37
# 138 "data/maps/PlayersHouse2F/scripts.pory"
	compare VAR_TEMP_1, 6
	goto_if_eq PlayersHouse2F_EventScript_Rival_Comes_In_38
	goto PlayersHouse2F_EventScript_Rival_Comes_In_19

PlayersHouse2F_EventScript_Rival_Comes_In_26:
# 104 "data/maps/PlayersHouse2F/scripts.pory"
	applymovement LOCALID_BARRY_PLAYER_HOUSE, PlayersHouse2F_EventScript_Rival_Comes_In_Movement_10
# 105 "data/maps/PlayersHouse2F/scripts.pory"
	waitmovement 0
	goto PlayersHouse2F_EventScript_Rival_Comes_In_8

PlayersHouse2F_EventScript_Rival_Comes_In_27:
# 109 "data/maps/PlayersHouse2F/scripts.pory"
	applymovement LOCALID_BARRY_PLAYER_HOUSE, PlayersHouse2F_EventScript_Rival_Comes_In_Movement_11
# 110 "data/maps/PlayersHouse2F/scripts.pory"
	waitmovement 0
	goto PlayersHouse2F_EventScript_Rival_Comes_In_8

PlayersHouse2F_EventScript_Rival_Comes_In_31:
# 153 "data/maps/PlayersHouse2F/scripts.pory"
	applymovement LOCALID_BARRY_PLAYER_HOUSE, PlayersHouse2F_EventScript_Rival_Comes_In_Movement_16
# 154 "data/maps/PlayersHouse2F/scripts.pory"
	waitmovement 0
	goto PlayersHouse2F_EventScript_Rival_Comes_In_30

PlayersHouse2F_EventScript_Rival_Comes_In_32:
# 158 "data/maps/PlayersHouse2F/scripts.pory"
	applymovement LOCALID_BARRY_PLAYER_HOUSE, PlayersHouse2F_EventScript_Rival_Comes_In_Movement_17
# 159 "data/maps/PlayersHouse2F/scripts.pory"
	waitmovement 0
	goto PlayersHouse2F_EventScript_Rival_Comes_In_30

PlayersHouse2F_EventScript_Rival_Comes_In_33:
# 163 "data/maps/PlayersHouse2F/scripts.pory"
	compare VAR_TEMP_1, 4
	goto_if_eq PlayersHouse2F_EventScript_Rival_Comes_In_41
# 168 "data/maps/PlayersHouse2F/scripts.pory"
	compare VAR_TEMP_1, 6
	goto_if_eq PlayersHouse2F_EventScript_Rival_Comes_In_42
	goto PlayersHouse2F_EventScript_Rival_Comes_In_30

PlayersHouse2F_EventScript_Rival_Comes_In_37:
# 135 "data/maps/PlayersHouse2F/scripts.pory"
	applymovement LOCALID_BARRY_PLAYER_HOUSE, PlayersHouse2F_EventScript_Rival_Comes_In_Movement_14
# 136 "data/maps/PlayersHouse2F/scripts.pory"
	waitmovement 0
	goto PlayersHouse2F_EventScript_Rival_Comes_In_19

PlayersHouse2F_EventScript_Rival_Comes_In_38:
# 140 "data/maps/PlayersHouse2F/scripts.pory"
	applymovement LOCALID_BARRY_PLAYER_HOUSE, PlayersHouse2F_EventScript_Rival_Comes_In_Movement_15
# 141 "data/maps/PlayersHouse2F/scripts.pory"
	waitmovement 0
	goto PlayersHouse2F_EventScript_Rival_Comes_In_19

PlayersHouse2F_EventScript_Rival_Comes_In_41:
# 165 "data/maps/PlayersHouse2F/scripts.pory"
	applymovement LOCALID_BARRY_PLAYER_HOUSE, PlayersHouse2F_EventScript_Rival_Comes_In_Movement_18
# 166 "data/maps/PlayersHouse2F/scripts.pory"
	waitmovement 0
	goto PlayersHouse2F_EventScript_Rival_Comes_In_30

PlayersHouse2F_EventScript_Rival_Comes_In_42:
# 170 "data/maps/PlayersHouse2F/scripts.pory"
	applymovement LOCALID_BARRY_PLAYER_HOUSE, PlayersHouse2F_EventScript_Rival_Comes_In_Movement_19
# 171 "data/maps/PlayersHouse2F/scripts.pory"
	waitmovement 0
	goto PlayersHouse2F_EventScript_Rival_Comes_In_30


# 38 "data/maps/PlayersHouse2F/scripts.pory"
PlayersHouse2F_EventScript_Rival_Comes_In_Movement_0:
# 38 "data/maps/PlayersHouse2F/scripts.pory"
	walk_fast_left
	step_end

# 44 "data/maps/PlayersHouse2F/scripts.pory"
PlayersHouse2F_EventScript_Rival_Comes_In_Movement_1:
# 44 "data/maps/PlayersHouse2F/scripts.pory"
	emote_exclamation_mark
	step_end

# 47 "data/maps/PlayersHouse2F/scripts.pory"
PlayersHouse2F_EventScript_Rival_Comes_In_Movement_2:
# 47 "data/maps/PlayersHouse2F/scripts.pory"
	face_right
	step_end

# 54 "data/maps/PlayersHouse2F/scripts.pory"
PlayersHouse2F_EventScript_Rival_Comes_In_Movement_3:
# 54 "data/maps/PlayersHouse2F/scripts.pory"
	walk_fast_down
# 54 "data/maps/PlayersHouse2F/scripts.pory"
	walk_fast_down
# 54 "data/maps/PlayersHouse2F/scripts.pory"
	walk_fast_left
# 54 "data/maps/PlayersHouse2F/scripts.pory"
	walk_fast_left
	step_end

# 59 "data/maps/PlayersHouse2F/scripts.pory"
PlayersHouse2F_EventScript_Rival_Comes_In_Movement_4:
# 59 "data/maps/PlayersHouse2F/scripts.pory"
	walk_fast_left
# 59 "data/maps/PlayersHouse2F/scripts.pory"
	walk_fast_down
# 59 "data/maps/PlayersHouse2F/scripts.pory"
	walk_fast_down
# 59 "data/maps/PlayersHouse2F/scripts.pory"
	walk_fast_left
# 59 "data/maps/PlayersHouse2F/scripts.pory"
	walk_fast_left
# 59 "data/maps/PlayersHouse2F/scripts.pory"
	walk_fast_left
	step_end

# 66 "data/maps/PlayersHouse2F/scripts.pory"
PlayersHouse2F_EventScript_Rival_Comes_In_Movement_5:
# 66 "data/maps/PlayersHouse2F/scripts.pory"
	walk_fast_down
# 66 "data/maps/PlayersHouse2F/scripts.pory"
	walk_fast_left
# 66 "data/maps/PlayersHouse2F/scripts.pory"
	walk_fast_left
# 66 "data/maps/PlayersHouse2F/scripts.pory"
	walk_fast_left
	step_end

# 71 "data/maps/PlayersHouse2F/scripts.pory"
PlayersHouse2F_EventScript_Rival_Comes_In_Movement_6:
# 71 "data/maps/PlayersHouse2F/scripts.pory"
	walk_fast_down
# 71 "data/maps/PlayersHouse2F/scripts.pory"
	walk_fast_down
# 71 "data/maps/PlayersHouse2F/scripts.pory"
	walk_fast_down
# 71 "data/maps/PlayersHouse2F/scripts.pory"
	walk_fast_left
# 71 "data/maps/PlayersHouse2F/scripts.pory"
	walk_fast_left
# 71 "data/maps/PlayersHouse2F/scripts.pory"
	walk_fast_left
	step_end

# 88 "data/maps/PlayersHouse2F/scripts.pory"
PlayersHouse2F_EventScript_Rival_Comes_In_Movement_7:
# 88 "data/maps/PlayersHouse2F/scripts.pory"
	face_left
	step_end

# 92 "data/maps/PlayersHouse2F/scripts.pory"
PlayersHouse2F_EventScript_Rival_Comes_In_Movement_8:
# 92 "data/maps/PlayersHouse2F/scripts.pory"
	walk_fast_up
# 92 "data/maps/PlayersHouse2F/scripts.pory"
	walk_fast_left
# 92 "data/maps/PlayersHouse2F/scripts.pory"
	walk_fast_left
# 92 "data/maps/PlayersHouse2F/scripts.pory"
	walk_fast_up
# 92 "data/maps/PlayersHouse2F/scripts.pory"
	walk_fast_left
# 92 "data/maps/PlayersHouse2F/scripts.pory"
	walk_fast_left
# 92 "data/maps/PlayersHouse2F/scripts.pory"
	walk_fast_left
# 92 "data/maps/PlayersHouse2F/scripts.pory"
	face_up
	step_end

# 97 "data/maps/PlayersHouse2F/scripts.pory"
PlayersHouse2F_EventScript_Rival_Comes_In_Movement_9:
# 97 "data/maps/PlayersHouse2F/scripts.pory"
	walk_fast_up
# 97 "data/maps/PlayersHouse2F/scripts.pory"
	walk_fast_up
# 97 "data/maps/PlayersHouse2F/scripts.pory"
	walk_fast_left
# 97 "data/maps/PlayersHouse2F/scripts.pory"
	walk_fast_left
# 97 "data/maps/PlayersHouse2F/scripts.pory"
	walk_fast_left
# 97 "data/maps/PlayersHouse2F/scripts.pory"
	face_up
	step_end

# 104 "data/maps/PlayersHouse2F/scripts.pory"
PlayersHouse2F_EventScript_Rival_Comes_In_Movement_10:
# 104 "data/maps/PlayersHouse2F/scripts.pory"
	walk_fast_down
# 104 "data/maps/PlayersHouse2F/scripts.pory"
	walk_fast_left
# 104 "data/maps/PlayersHouse2F/scripts.pory"
	walk_fast_left
# 104 "data/maps/PlayersHouse2F/scripts.pory"
	walk_fast_left
# 104 "data/maps/PlayersHouse2F/scripts.pory"
	walk_fast_left
# 104 "data/maps/PlayersHouse2F/scripts.pory"
	walk_fast_up
# 104 "data/maps/PlayersHouse2F/scripts.pory"
	walk_fast_up
	step_end

# 109 "data/maps/PlayersHouse2F/scripts.pory"
PlayersHouse2F_EventScript_Rival_Comes_In_Movement_11:
# 109 "data/maps/PlayersHouse2F/scripts.pory"
	walk_fast_up
# 109 "data/maps/PlayersHouse2F/scripts.pory"
	walk_fast_left
# 109 "data/maps/PlayersHouse2F/scripts.pory"
	walk_fast_left
# 109 "data/maps/PlayersHouse2F/scripts.pory"
	walk_fast_left
# 109 "data/maps/PlayersHouse2F/scripts.pory"
	walk_fast_left
# 109 "data/maps/PlayersHouse2F/scripts.pory"
	walk_fast_up
# 109 "data/maps/PlayersHouse2F/scripts.pory"
	walk_fast_up
	step_end

# 123 "data/maps/PlayersHouse2F/scripts.pory"
PlayersHouse2F_EventScript_Rival_Comes_In_Movement_12:
# 123 "data/maps/PlayersHouse2F/scripts.pory"
	walk_fast_right
# 123 "data/maps/PlayersHouse2F/scripts.pory"
	walk_fast_down
# 123 "data/maps/PlayersHouse2F/scripts.pory"
	walk_fast_down
# 123 "data/maps/PlayersHouse2F/scripts.pory"
	walk_fast_right
# 123 "data/maps/PlayersHouse2F/scripts.pory"
	walk_fast_right
	step_end

# 128 "data/maps/PlayersHouse2F/scripts.pory"
PlayersHouse2F_EventScript_Rival_Comes_In_Movement_13:
# 128 "data/maps/PlayersHouse2F/scripts.pory"
	walk_fast_right
# 128 "data/maps/PlayersHouse2F/scripts.pory"
	walk_fast_down
# 128 "data/maps/PlayersHouse2F/scripts.pory"
	walk_fast_down
# 128 "data/maps/PlayersHouse2F/scripts.pory"
	face_right
	step_end

# 135 "data/maps/PlayersHouse2F/scripts.pory"
PlayersHouse2F_EventScript_Rival_Comes_In_Movement_14:
# 135 "data/maps/PlayersHouse2F/scripts.pory"
	walk_fast_down
# 135 "data/maps/PlayersHouse2F/scripts.pory"
	walk_fast_right
# 135 "data/maps/PlayersHouse2F/scripts.pory"
	walk_fast_right
	step_end

# 140 "data/maps/PlayersHouse2F/scripts.pory"
PlayersHouse2F_EventScript_Rival_Comes_In_Movement_15:
# 140 "data/maps/PlayersHouse2F/scripts.pory"
	walk_fast_right
# 140 "data/maps/PlayersHouse2F/scripts.pory"
	walk_fast_down
# 140 "data/maps/PlayersHouse2F/scripts.pory"
	walk_fast_down
# 140 "data/maps/PlayersHouse2F/scripts.pory"
	walk_fast_down
# 140 "data/maps/PlayersHouse2F/scripts.pory"
	walk_fast_right
	step_end

# 153 "data/maps/PlayersHouse2F/scripts.pory"
PlayersHouse2F_EventScript_Rival_Comes_In_Movement_16:
# 153 "data/maps/PlayersHouse2F/scripts.pory"
	walk_fast_up
# 153 "data/maps/PlayersHouse2F/scripts.pory"
	walk_fast_right
# 153 "data/maps/PlayersHouse2F/scripts.pory"
	walk_fast_right
# 153 "data/maps/PlayersHouse2F/scripts.pory"
	walk_fast_up
# 153 "data/maps/PlayersHouse2F/scripts.pory"
	walk_fast_right
# 153 "data/maps/PlayersHouse2F/scripts.pory"
	walk_fast_right
	step_end

# 158 "data/maps/PlayersHouse2F/scripts.pory"
PlayersHouse2F_EventScript_Rival_Comes_In_Movement_17:
# 158 "data/maps/PlayersHouse2F/scripts.pory"
	walk_fast_up
# 158 "data/maps/PlayersHouse2F/scripts.pory"
	walk_fast_right
# 158 "data/maps/PlayersHouse2F/scripts.pory"
	walk_fast_right
# 158 "data/maps/PlayersHouse2F/scripts.pory"
	walk_fast_right
# 158 "data/maps/PlayersHouse2F/scripts.pory"
	walk_fast_right
# 158 "data/maps/PlayersHouse2F/scripts.pory"
	walk_fast_up
# 158 "data/maps/PlayersHouse2F/scripts.pory"
	walk_fast_right
# 158 "data/maps/PlayersHouse2F/scripts.pory"
	walk_fast_right
	step_end

# 165 "data/maps/PlayersHouse2F/scripts.pory"
PlayersHouse2F_EventScript_Rival_Comes_In_Movement_18:
# 165 "data/maps/PlayersHouse2F/scripts.pory"
	walk_fast_down
# 165 "data/maps/PlayersHouse2F/scripts.pory"
	walk_fast_right
# 165 "data/maps/PlayersHouse2F/scripts.pory"
	walk_fast_right
# 165 "data/maps/PlayersHouse2F/scripts.pory"
	walk_fast_up
# 165 "data/maps/PlayersHouse2F/scripts.pory"
	walk_fast_right
# 165 "data/maps/PlayersHouse2F/scripts.pory"
	walk_fast_up
# 165 "data/maps/PlayersHouse2F/scripts.pory"
	walk_fast_right
# 165 "data/maps/PlayersHouse2F/scripts.pory"
	walk_fast_right
	step_end

# 170 "data/maps/PlayersHouse2F/scripts.pory"
PlayersHouse2F_EventScript_Rival_Comes_In_Movement_19:
# 170 "data/maps/PlayersHouse2F/scripts.pory"
	walk_fast_up
# 170 "data/maps/PlayersHouse2F/scripts.pory"
	walk_fast_right
# 170 "data/maps/PlayersHouse2F/scripts.pory"
	walk_fast_right
# 170 "data/maps/PlayersHouse2F/scripts.pory"
	walk_fast_right
# 170 "data/maps/PlayersHouse2F/scripts.pory"
	walk_fast_up
# 170 "data/maps/PlayersHouse2F/scripts.pory"
	walk_fast_up
# 170 "data/maps/PlayersHouse2F/scripts.pory"
	walk_fast_right
# 170 "data/maps/PlayersHouse2F/scripts.pory"
	walk_fast_right
	step_end

PlayersHouse2F_EventScript_PC_Text_0:
# 5 "data/maps/PlayersHouse2F/scripts.pory"
	.string "{PLAYER} checked the PC.\p"
	.string "Pokémon Basics...\p"
	.string "People live alongside Pokémon in\n"
	.string "this world.\p"
	.string "The people that battle Pokémon are\n"
	.string "called Pokémon Trainers.$"

PlayersHouse2F_EventScript_TV_Text_0:
# 16 "data/maps/PlayersHouse2F/scripts.pory"
	.string "Mom bought this TV as a gift.$"

PlayersHouse2F_EventScript_Switch_Text_0:
# 22 "data/maps/PlayersHouse2F/scripts.pory"
	.string "It's a Switch!\n"
	.string "It's controlled by the Joycons!$"

PlayersHouse2F_EventScript_Tutorial_Text_0:
# 29 "data/maps/PlayersHouse2F/scripts.pory"
	.string "The X Button\n"
	.string "opens the menu!$"

PlayersHouse2F_EventScript_Rival_Comes_In_Text_0:
# 49 "data/maps/PlayersHouse2F/scripts.pory"
	.string "{RIVAL}: There you are!$"

PlayersHouse2F_EventScript_Rival_Comes_In_Text_1:
# 75 "data/maps/PlayersHouse2F/scripts.pory"
	.string "Hey, {PLAYER}!\n"
	.string "Did you just see the TV? Sure you did!\p"
	.string "Prof. Rowan's that really important\n"
	.string "guy who studies Pokémon, right?\p"
	.string "That means he must have lots and lots\n"
	.string "of Pokémon.\p"
	.string "So, if we ask him, I bet he'd give us\n"
	.string "some Pokémon!$"

PlayersHouse2F_EventScript_Rival_Comes_In_Text_2:
# 113 "data/maps/PlayersHouse2F/scripts.pory"
	.string "Oh, hey!\n"
	.string "Is this a new PC?$"

PlayersHouse2F_EventScript_Rival_Comes_In_Text_3:
# 118 "data/maps/PlayersHouse2F/scripts.pory"
	.string "{RIVAL}: Uh...\n"
	.string "Where was I?$"

PlayersHouse2F_EventScript_Rival_Comes_In_Text_4:
# 144 "data/maps/PlayersHouse2F/scripts.pory"
	.string "Oh, right, right! We're going to go see\n"
	.string "Prof. Rowan and get some Pokémon.\p"
	.string "I will be waiting outside.\p"
	.string "Ok, {PLAYER}? If you're late, I'm\n"
	.string "fining you ¥10 million!$"
