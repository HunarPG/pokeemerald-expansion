PlayersHouse1F_MapScripts::
# 3 "data/maps/PlayersHouse1F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, PlayersHouse1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
# 8 "data/maps/PlayersHouse1F/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, PlayersHouse1F_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
	.byte 0

PlayersHouse1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 5 "data/maps/PlayersHouse1F/scripts.pory"
	map_script_2 VAR_MOM_TEXT, 0, PlayersHouse1F_EventScript_Mom_Telling_About_Barry
# 6 "data/maps/PlayersHouse1F/scripts.pory"
	map_script_2 VAR_MOM_TEXT, 4, PlayersHouse1F_EventScript_Mom_Get_To_Know_That_You_Got_Pokemon
	.2byte 0

PlayersHouse1F_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 10 "data/maps/PlayersHouse1F/scripts.pory"
	map_script_2 VAR_MOM_TEXT, 4, PlayersHouse1F_EventScript_Change_Player_Facing_Direction_To_Up
	.2byte 0


PlayersHouse1F_EventScript_Mom_Telling_About_Barry::
# 16 "data/maps/PlayersHouse1F/scripts.pory"
	lock
# 17 "data/maps/PlayersHouse1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayersHouse1F_EventScript_Mom_Telling_About_Barry_Movement_0
# 18 "data/maps/PlayersHouse1F/scripts.pory"
	waitmovement 0
# 19 "data/maps/PlayersHouse1F/scripts.pory"
	playse SE_PIN
# 20 "data/maps/PlayersHouse1F/scripts.pory"
	applymovement LOCALID_MOM_SITTING, PlayersHouse1F_EventScript_Mom_Telling_About_Barry_Movement_1
# 21 "data/maps/PlayersHouse1F/scripts.pory"
	waitmovement 0
# 22 "data/maps/PlayersHouse1F/scripts.pory"
	delay 30
# 23 "data/maps/PlayersHouse1F/scripts.pory"
	applymovement LOCALID_MOM_SITTING, PlayersHouse1F_EventScript_Mom_Telling_About_Barry_Movement_2
# 24 "data/maps/PlayersHouse1F/scripts.pory"
	waitmovement 0
# 25 "data/maps/PlayersHouse1F/scripts.pory"
	setvar VAR_MOM_TEXT, 1
# 26 "data/maps/PlayersHouse1F/scripts.pory"
	msgbox PlayersHouse1F_EventScript_Mom_Telling_About_Barry_Text_0, MSGBOX_DEFAULT
# 30 "data/maps/PlayersHouse1F/scripts.pory"
	closemessage
# 31 "data/maps/PlayersHouse1F/scripts.pory"
	applymovement LOCALID_MOM_SITTING, PlayersHouse1F_EventScript_Mom_Telling_About_Barry_Movement_3
# 32 "data/maps/PlayersHouse1F/scripts.pory"
	waitmovement 0
# 33 "data/maps/PlayersHouse1F/scripts.pory"
	release
	end


PlayersHouse1F_EventScript_Mom_SAY_DONT_GO_IN_GRASS::
# 39 "data/maps/PlayersHouse1F/scripts.pory"
	lock
# 40 "data/maps/PlayersHouse1F/scripts.pory"
	applymovement LOCALID_MOM_SITTING, PlayersHouse1F_EventScript_Mom_Telling_About_Barry_Movement_0
# 41 "data/maps/PlayersHouse1F/scripts.pory"
	waitmovement 0
# 42 "data/maps/PlayersHouse1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayersHouse1F_EventScript_Mom_SAY_DONT_GO_IN_GRASS_Movement_0
# 43 "data/maps/PlayersHouse1F/scripts.pory"
	waitmovement 0
# 44 "data/maps/PlayersHouse1F/scripts.pory"
	msgbox PlayersHouse1F_EventScript_Mom_SAY_DONT_GO_IN_GRASS_Text_0, MSGBOX_SIGN
# 51 "data/maps/PlayersHouse1F/scripts.pory"
	setvar VAR_MOM_TEXT, 2
# 52 "data/maps/PlayersHouse1F/scripts.pory"
	applymovement LOCALID_MOM_SITTING, PlayersHouse1F_EventScript_Mom_SAY_DONT_GO_IN_GRASS_Movement_0
# 53 "data/maps/PlayersHouse1F/scripts.pory"
	waitmovement 0
# 54 "data/maps/PlayersHouse1F/scripts.pory"
	release
	end


PlayersHouse1F_EventScript_Mom::
# 60 "data/maps/PlayersHouse1F/scripts.pory"
	switch VAR_MOM_TEXT
# 62 "data/maps/PlayersHouse1F/scripts.pory"
	case 1, PlayersHouse1F_EventScript_Mom_2
# 63 "data/maps/PlayersHouse1F/scripts.pory"
	case 2, PlayersHouse1F_EventScript_Mom_3
# 64 "data/maps/PlayersHouse1F/scripts.pory"
	case 3, PlayersHouse1F_EventScript_Mom_4
# 65 "data/maps/PlayersHouse1F/scripts.pory"
	case 5, PlayersHouse1F_EventScript_Mom_5
# 66 "data/maps/PlayersHouse1F/scripts.pory"
	case 6, PlayersHouse1F_EventScript_Mom_6
# 67 "data/maps/PlayersHouse1F/scripts.pory"
	case 7, PlayersHouse1F_EventScript_Mom_7
# 68 "data/maps/PlayersHouse1F/scripts.pory"
	case 8, PlayersHouse1F_EventScript_Mom_8
	return

PlayersHouse1F_EventScript_Mom_2:
# 62 "data/maps/PlayersHouse1F/scripts.pory"
	goto PlayersHouse1F_EventScript_Mom_Tell_Barry_Impatient
	return

PlayersHouse1F_EventScript_Mom_3:
# 63 "data/maps/PlayersHouse1F/scripts.pory"
	goto PlayersHouse1F_EventScript_Mom_Say_Bye
	return

PlayersHouse1F_EventScript_Mom_4:
# 64 "data/maps/PlayersHouse1F/scripts.pory"
	goto PlayersHouse1F_EventScript_Mom_Say_Barry_Is_Waiting
	return

PlayersHouse1F_EventScript_Mom_5:
# 65 "data/maps/PlayersHouse1F/scripts.pory"
	goto PlayersHouse1F_EventScript_Mom_Heal_Your_Pokemon
	return

PlayersHouse1F_EventScript_Mom_6:
# 66 "data/maps/PlayersHouse1F/scripts.pory"
	goto PlayersHouse1F_EventScript_You_Tell_Mom_About_Leaving
	return

PlayersHouse1F_EventScript_Mom_7:
# 67 "data/maps/PlayersHouse1F/scripts.pory"
	goto PlayersHouse1F_EventScript_Mom_Heal_Your_Pokemon
	return

PlayersHouse1F_EventScript_Mom_8:
# 68 "data/maps/PlayersHouse1F/scripts.pory"
	goto PlayersHouse1F_EventScript_Mom_Heal_Your_Pokemon
	return


PlayersHouse1F_EventScript_Mom_Tell_Barry_Impatient::
# 74 "data/maps/PlayersHouse1F/scripts.pory"
	msgbox PlayersHouse1F_EventScript_Mom_Tell_Barry_Impatient_Text_0, MSGBOX_NPC
	end


PlayersHouse1F_EventScript_Mom_Say_Bye::
# 81 "data/maps/PlayersHouse1F/scripts.pory"
	msgbox PlayersHouse1F_EventScript_Mom_Say_Bye_Text_0, MSGBOX_NPC
	end


PlayersHouse1F_EventScript_Mom_Say_Barry_Is_Waiting::
# 88 "data/maps/PlayersHouse1F/scripts.pory"
	msgbox PlayersHouse1F_EventScript_Mom_Say_Barry_Is_Waiting_Text_0, MSGBOX_NPC
	end


PlayersHouse1F_EventScript_Mom_Get_To_Know_That_You_Got_Pokemon::
# 95 "data/maps/PlayersHouse1F/scripts.pory"
	lock
# 96 "data/maps/PlayersHouse1F/scripts.pory"
	applymovement LOCALID_MOM_STANDING, PlayersHouse1F_EventScript_Mom_Telling_About_Barry_Movement_0
# 97 "data/maps/PlayersHouse1F/scripts.pory"
	delay 30
# 98 "data/maps/PlayersHouse1F/scripts.pory"
	applymovement LOCALID_MOM_STANDING, PlayersHouse1F_EventScript_Mom_Get_To_Know_That_You_Got_Pokemon_Movement_0
# 99 "data/maps/PlayersHouse1F/scripts.pory"
	waitmovement 0
# 100 "data/maps/PlayersHouse1F/scripts.pory"
	delay 30
# 101 "data/maps/PlayersHouse1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayersHouse1F_EventScript_Mom_Get_To_Know_That_You_Got_Pokemon_Movement_1
# 102 "data/maps/PlayersHouse1F/scripts.pory"
	applymovement LOCALID_MOM_STANDING, PlayersHouse1F_EventScript_Mom_Get_To_Know_That_You_Got_Pokemon_Movement_2
# 103 "data/maps/PlayersHouse1F/scripts.pory"
	waitmovement 0
# 104 "data/maps/PlayersHouse1F/scripts.pory"
	applymovement LOCALID_MOM_STANDING, PlayersHouse1F_EventScript_Mom_Get_To_Know_That_You_Got_Pokemon_Movement_3
# 105 "data/maps/PlayersHouse1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayersHouse1F_EventScript_Mom_Get_To_Know_That_You_Got_Pokemon_Movement_4
# 106 "data/maps/PlayersHouse1F/scripts.pory"
	waitmovement 0
# 107 "data/maps/PlayersHouse1F/scripts.pory"
	msgbox PlayersHouse1F_EventScript_Mom_Get_To_Know_That_You_Got_Pokemon_Text_0, MSGBOX_DEFAULT
# 121 "data/maps/PlayersHouse1F/scripts.pory"
	closemessage
# 122 "data/maps/PlayersHouse1F/scripts.pory"
	delay 30
# 123 "data/maps/PlayersHouse1F/scripts.pory"
	msgbox PlayersHouse1F_EventScript_Mom_Get_To_Know_That_You_Got_Pokemon_Text_1, MSGBOX_DEFAULT
# 125 "data/maps/PlayersHouse1F/scripts.pory"
	closemessage
# 127 "data/maps/PlayersHouse1F/scripts.pory"
	msgbox PlayersHouse1F_EventScript_Mom_Get_To_Know_That_You_Got_Pokemon_Text_2, MSGBOX_DEFAULT
# 140 "data/maps/PlayersHouse1F/scripts.pory"
	closemessage
# 141 "data/maps/PlayersHouse1F/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 142 "data/maps/PlayersHouse1F/scripts.pory"
	setvar VAR_MOM_TEXT, 5
# 143 "data/maps/PlayersHouse1F/scripts.pory"
	applymovement LOCALID_MOM_STANDING, PlayersHouse1F_EventScript_Mom_SAY_DONT_GO_IN_GRASS_Movement_0
# 144 "data/maps/PlayersHouse1F/scripts.pory"
	removeobject LOCALID_MOM_STANDING
# 145 "data/maps/PlayersHouse1F/scripts.pory"
	setflag FLAG_HIDE_MOM_FROM_CUTSCENE_IN_PLAYER_HOUSE
# 146 "data/maps/PlayersHouse1F/scripts.pory"
	addobject LOCALID_MOM_SITTING
# 147 "data/maps/PlayersHouse1F/scripts.pory"
	clearflag FLAG_HIDE_MOM_SITTING_IN_PLAYER_HOUSE
# 148 "data/maps/PlayersHouse1F/scripts.pory"
	release
	end


PlayersHouse1F_EventScript_Mom_Heal_Your_Pokemon::
# 154 "data/maps/PlayersHouse1F/scripts.pory"
	msgbox PlayersHouse1F_EventScript_Mom_Heal_Your_Pokemon_Text_0, MSGBOX_NPC
# 157 "data/maps/PlayersHouse1F/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
	end


PlayersHouse1F_EventScript_You_Tell_Mom_About_Leaving::
# 163 "data/maps/PlayersHouse1F/scripts.pory"
	msgbox PlayersHouse1F_EventScript_Mom_Heal_Your_Pokemon_Text_0, MSGBOX_NPC
# 166 "data/maps/PlayersHouse1F/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 167 "data/maps/PlayersHouse1F/scripts.pory"
	msgbox PlayersHouse1F_EventScript_You_Tell_Mom_About_Leaving_Text_0, MSGBOX_SIGN
# 176 "data/maps/PlayersHouse1F/scripts.pory"
	msgbox PlayersHouse1F_EventScript_You_Tell_Mom_About_Leaving_Text_1, MSGBOX_SIGN
# 180 "data/maps/PlayersHouse1F/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 181 "data/maps/PlayersHouse1F/scripts.pory"
	switch VAR_RESULT
# 183 "data/maps/PlayersHouse1F/scripts.pory"
	case DIR_EAST, PlayersHouse1F_EventScript_You_Tell_Mom_About_Leaving_3
# 184 "data/maps/PlayersHouse1F/scripts.pory"
	case DIR_NORTH, PlayersHouse1F_EventScript_You_Tell_Mom_About_Leaving_3
# 185 "data/maps/PlayersHouse1F/scripts.pory"
	case DIR_WEST, PlayersHouse1F_EventScript_You_Tell_Mom_About_Leaving_3
# 187 "data/maps/PlayersHouse1F/scripts.pory"
	case DIR_SOUTH, PlayersHouse1F_EventScript_You_Tell_Mom_About_Leaving_4
PlayersHouse1F_EventScript_You_Tell_Mom_About_Leaving_1:
# 190 "data/maps/PlayersHouse1F/scripts.pory"
	waitmovement 0
# 191 "data/maps/PlayersHouse1F/scripts.pory"
	msgbox PlayersHouse1F_EventScript_You_Tell_Mom_About_Leaving_Text_2, MSGBOX_SIGN
# 196 "data/maps/PlayersHouse1F/scripts.pory"
	switch VAR_RESULT
# 198 "data/maps/PlayersHouse1F/scripts.pory"
	case DIR_EAST, PlayersHouse1F_EventScript_You_Tell_Mom_About_Leaving_7
# 200 "data/maps/PlayersHouse1F/scripts.pory"
	case DIR_NORTH, PlayersHouse1F_EventScript_You_Tell_Mom_About_Leaving_8
# 202 "data/maps/PlayersHouse1F/scripts.pory"
	case DIR_SOUTH, PlayersHouse1F_EventScript_You_Tell_Mom_About_Leaving_9
# 204 "data/maps/PlayersHouse1F/scripts.pory"
	case DIR_WEST, PlayersHouse1F_EventScript_You_Tell_Mom_About_Leaving_10
PlayersHouse1F_EventScript_You_Tell_Mom_About_Leaving_5:
# 207 "data/maps/PlayersHouse1F/scripts.pory"
	waitmovement 0
# 208 "data/maps/PlayersHouse1F/scripts.pory"
	msgbox PlayersHouse1F_EventScript_You_Tell_Mom_About_Leaving_Text_3, MSGBOX_SIGN
# 218 "data/maps/PlayersHouse1F/scripts.pory"
	playse SE_DOOR
# 219 "data/maps/PlayersHouse1F/scripts.pory"
	addobject LOCALID_BARRY_MOM
# 220 "data/maps/PlayersHouse1F/scripts.pory"
	clearflag FLAG_HIDE_BARRY_MOM_IN_PLAYER_HOUSE
# 221 "data/maps/PlayersHouse1F/scripts.pory"
	applymovement LOCALID_MOM_SITTING, PlayersHouse1F_EventScript_Mom_Telling_About_Barry_Movement_0
# 222 "data/maps/PlayersHouse1F/scripts.pory"
	waitmovement 0
# 223 "data/maps/PlayersHouse1F/scripts.pory"
	playse SE_PIN
# 224 "data/maps/PlayersHouse1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayersHouse1F_EventScript_Mom_Telling_About_Barry_Movement_0
# 225 "data/maps/PlayersHouse1F/scripts.pory"
	waitmovement 0
# 226 "data/maps/PlayersHouse1F/scripts.pory"
	delay 30
# 227 "data/maps/PlayersHouse1F/scripts.pory"
	playse SE_PIN
# 228 "data/maps/PlayersHouse1F/scripts.pory"
	applymovement LOCALID_MOM_SITTING, PlayersHouse1F_EventScript_Mom_Telling_About_Barry_Movement_1
# 229 "data/maps/PlayersHouse1F/scripts.pory"
	waitmovement 0
# 230 "data/maps/PlayersHouse1F/scripts.pory"
	delay 30
# 231 "data/maps/PlayersHouse1F/scripts.pory"
	applymovement LOCALID_BARRY_MOM, PlayersHouse1F_EventScript_You_Tell_Mom_About_Leaving_Movement_1
# 232 "data/maps/PlayersHouse1F/scripts.pory"
	waitmovement 0
# 233 "data/maps/PlayersHouse1F/scripts.pory"
	msgbox PlayersHouse1F_EventScript_You_Tell_Mom_About_Leaving_Text_4, MSGBOX_SIGN
# 235 "data/maps/PlayersHouse1F/scripts.pory"
	applymovement LOCALID_MOM_SITTING, PlayersHouse1F_EventScript_You_Tell_Mom_About_Leaving_Movement_2
# 236 "data/maps/PlayersHouse1F/scripts.pory"
	waitmovement 0
# 237 "data/maps/PlayersHouse1F/scripts.pory"
	msgbox PlayersHouse1F_EventScript_You_Tell_Mom_About_Leaving_Text_5, MSGBOX_SIGN
# 248 "data/maps/PlayersHouse1F/scripts.pory"
	switch VAR_RESULT
# 250 "data/maps/PlayersHouse1F/scripts.pory"
	case DIR_EAST, PlayersHouse1F_EventScript_You_Tell_Mom_About_Leaving_13
# 253 "data/maps/PlayersHouse1F/scripts.pory"
	case DIR_NORTH, PlayersHouse1F_EventScript_You_Tell_Mom_About_Leaving_14
# 256 "data/maps/PlayersHouse1F/scripts.pory"
	case DIR_SOUTH, PlayersHouse1F_EventScript_You_Tell_Mom_About_Leaving_15
# 259 "data/maps/PlayersHouse1F/scripts.pory"
	case DIR_WEST, PlayersHouse1F_EventScript_You_Tell_Mom_About_Leaving_16
PlayersHouse1F_EventScript_You_Tell_Mom_About_Leaving_11:
# 263 "data/maps/PlayersHouse1F/scripts.pory"
	waitmovement 0
# 264 "data/maps/PlayersHouse1F/scripts.pory"
	msgbox PlayersHouse1F_EventScript_You_Tell_Mom_About_Leaving_Text_6, MSGBOX_SIGN
# 265 "data/maps/PlayersHouse1F/scripts.pory"
	switch VAR_RESULT
# 267 "data/maps/PlayersHouse1F/scripts.pory"
	case DIR_EAST, PlayersHouse1F_EventScript_You_Tell_Mom_About_Leaving_19
# 270 "data/maps/PlayersHouse1F/scripts.pory"
	case DIR_NORTH, PlayersHouse1F_EventScript_You_Tell_Mom_About_Leaving_20
# 272 "data/maps/PlayersHouse1F/scripts.pory"
	case DIR_SOUTH, PlayersHouse1F_EventScript_You_Tell_Mom_About_Leaving_21
# 275 "data/maps/PlayersHouse1F/scripts.pory"
	case DIR_WEST, PlayersHouse1F_EventScript_You_Tell_Mom_About_Leaving_22
PlayersHouse1F_EventScript_You_Tell_Mom_About_Leaving_17:
# 279 "data/maps/PlayersHouse1F/scripts.pory"
	waitmovement LOCALID_BARRY_MOM
# 280 "data/maps/PlayersHouse1F/scripts.pory"
	msgbox PlayersHouse1F_EventScript_You_Tell_Mom_About_Leaving_Text_7, MSGBOX_SIGN
# 285 "data/maps/PlayersHouse1F/scripts.pory"
	msgbox PlayersHouse1F_EventScript_You_Tell_Mom_About_Leaving_Text_8, MSGBOX_SIGN
# 292 "data/maps/PlayersHouse1F/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 293 "data/maps/PlayersHouse1F/scripts.pory"
	switch VAR_TEMP_0
# 295 "data/maps/PlayersHouse1F/scripts.pory"
	case 5, PlayersHouse1F_EventScript_You_Tell_Mom_About_Leaving_25
# 298 "data/maps/PlayersHouse1F/scripts.pory"
	case 6, PlayersHouse1F_EventScript_You_Tell_Mom_About_Leaving_26
# 309 "data/maps/PlayersHouse1F/scripts.pory"
	case 7, PlayersHouse1F_EventScript_You_Tell_Mom_About_Leaving_27
PlayersHouse1F_EventScript_You_Tell_Mom_About_Leaving_23:
# 314 "data/maps/PlayersHouse1F/scripts.pory"
	waitmovement LOCALID_BARRY_MOM
# 315 "data/maps/PlayersHouse1F/scripts.pory"
	playse SE_EXIT
# 316 "data/maps/PlayersHouse1F/scripts.pory"
	removeobject LOCALID_BARRY_MOM
# 317 "data/maps/PlayersHouse1F/scripts.pory"
	setflag FLAG_HIDE_BARRY_MOM_IN_PLAYER_HOUSE
# 318 "data/maps/PlayersHouse1F/scripts.pory"
	setvar VAR_MOM_TEXT, 7
	end

PlayersHouse1F_EventScript_You_Tell_Mom_About_Leaving_3:
# 186 "data/maps/PlayersHouse1F/scripts.pory"
	applymovement LOCALID_MOM_SITTING, PlayersHouse1F_EventScript_Mom_SAY_DONT_GO_IN_GRASS_Movement_0
	goto PlayersHouse1F_EventScript_You_Tell_Mom_About_Leaving_1

PlayersHouse1F_EventScript_You_Tell_Mom_About_Leaving_4:
# 188 "data/maps/PlayersHouse1F/scripts.pory"
	applymovement LOCALID_MOM_SITTING, PlayersHouse1F_EventScript_Mom_Telling_About_Barry_Movement_0
	goto PlayersHouse1F_EventScript_You_Tell_Mom_About_Leaving_1

PlayersHouse1F_EventScript_You_Tell_Mom_About_Leaving_7:
# 199 "data/maps/PlayersHouse1F/scripts.pory"
	applymovement LOCALID_MOM_SITTING, PlayersHouse1F_EventScript_You_Tell_Mom_About_Leaving_Movement_0
	goto PlayersHouse1F_EventScript_You_Tell_Mom_About_Leaving_5

PlayersHouse1F_EventScript_You_Tell_Mom_About_Leaving_8:
# 201 "data/maps/PlayersHouse1F/scripts.pory"
	applymovement LOCALID_MOM_SITTING, PlayersHouse1F_EventScript_Mom_Telling_About_Barry_Movement_0
	goto PlayersHouse1F_EventScript_You_Tell_Mom_About_Leaving_5

PlayersHouse1F_EventScript_You_Tell_Mom_About_Leaving_9:
# 203 "data/maps/PlayersHouse1F/scripts.pory"
	applymovement LOCALID_MOM_SITTING, PlayersHouse1F_EventScript_Mom_SAY_DONT_GO_IN_GRASS_Movement_0
	goto PlayersHouse1F_EventScript_You_Tell_Mom_About_Leaving_5

PlayersHouse1F_EventScript_You_Tell_Mom_About_Leaving_10:
# 205 "data/maps/PlayersHouse1F/scripts.pory"
	applymovement LOCALID_MOM_SITTING, PlayersHouse1F_EventScript_Mom_Get_To_Know_That_You_Got_Pokemon_Movement_1
	goto PlayersHouse1F_EventScript_You_Tell_Mom_About_Leaving_5

PlayersHouse1F_EventScript_You_Tell_Mom_About_Leaving_13:
# 251 "data/maps/PlayersHouse1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayersHouse1F_EventScript_Mom_Get_To_Know_That_You_Got_Pokemon_Movement_1
# 252 "data/maps/PlayersHouse1F/scripts.pory"
	applymovement LOCALID_MOM_SITTING, PlayersHouse1F_EventScript_You_Tell_Mom_About_Leaving_Movement_0
	goto PlayersHouse1F_EventScript_You_Tell_Mom_About_Leaving_11

PlayersHouse1F_EventScript_You_Tell_Mom_About_Leaving_14:
# 254 "data/maps/PlayersHouse1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayersHouse1F_EventScript_Mom_SAY_DONT_GO_IN_GRASS_Movement_0
# 255 "data/maps/PlayersHouse1F/scripts.pory"
	applymovement LOCALID_MOM_SITTING, PlayersHouse1F_EventScript_Mom_Telling_About_Barry_Movement_0
	goto PlayersHouse1F_EventScript_You_Tell_Mom_About_Leaving_11

PlayersHouse1F_EventScript_You_Tell_Mom_About_Leaving_15:
# 257 "data/maps/PlayersHouse1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayersHouse1F_EventScript_Mom_Telling_About_Barry_Movement_0
# 258 "data/maps/PlayersHouse1F/scripts.pory"
	applymovement LOCALID_MOM_SITTING, PlayersHouse1F_EventScript_Mom_SAY_DONT_GO_IN_GRASS_Movement_0
	goto PlayersHouse1F_EventScript_You_Tell_Mom_About_Leaving_11

PlayersHouse1F_EventScript_You_Tell_Mom_About_Leaving_16:
# 260 "data/maps/PlayersHouse1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayersHouse1F_EventScript_You_Tell_Mom_About_Leaving_Movement_0
# 261 "data/maps/PlayersHouse1F/scripts.pory"
	applymovement LOCALID_MOM_SITTING, PlayersHouse1F_EventScript_Mom_Get_To_Know_That_You_Got_Pokemon_Movement_1
	goto PlayersHouse1F_EventScript_You_Tell_Mom_About_Leaving_11

PlayersHouse1F_EventScript_You_Tell_Mom_About_Leaving_19:
# 268 "data/maps/PlayersHouse1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayersHouse1F_EventScript_Mom_Telling_About_Barry_Movement_0
# 269 "data/maps/PlayersHouse1F/scripts.pory"
	applymovement LOCALID_BARRY_MOM, PlayersHouse1F_EventScript_Mom_SAY_DONT_GO_IN_GRASS_Movement_0
	goto PlayersHouse1F_EventScript_You_Tell_Mom_About_Leaving_17

PlayersHouse1F_EventScript_You_Tell_Mom_About_Leaving_20:
# 271 "data/maps/PlayersHouse1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayersHouse1F_EventScript_You_Tell_Mom_About_Leaving_Movement_0
	goto PlayersHouse1F_EventScript_You_Tell_Mom_About_Leaving_17

PlayersHouse1F_EventScript_You_Tell_Mom_About_Leaving_21:
# 273 "data/maps/PlayersHouse1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayersHouse1F_EventScript_You_Tell_Mom_About_Leaving_Movement_0
# 274 "data/maps/PlayersHouse1F/scripts.pory"
	applymovement LOCALID_BARRY_MOM, PlayersHouse1F_EventScript_You_Tell_Mom_About_Leaving_Movement_3
	goto PlayersHouse1F_EventScript_You_Tell_Mom_About_Leaving_17

PlayersHouse1F_EventScript_You_Tell_Mom_About_Leaving_22:
# 276 "data/maps/PlayersHouse1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayersHouse1F_EventScript_Mom_Telling_About_Barry_Movement_0
# 277 "data/maps/PlayersHouse1F/scripts.pory"
	applymovement LOCALID_BARRY_MOM, PlayersHouse1F_EventScript_You_Tell_Mom_About_Leaving_Movement_4
	goto PlayersHouse1F_EventScript_You_Tell_Mom_About_Leaving_17

PlayersHouse1F_EventScript_You_Tell_Mom_About_Leaving_25:
# 296 "data/maps/PlayersHouse1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayersHouse1F_EventScript_Mom_Telling_About_Barry_Movement_0
# 297 "data/maps/PlayersHouse1F/scripts.pory"
	applymovement LOCALID_BARRY_MOM, PlayersHouse1F_EventScript_You_Tell_Mom_About_Leaving_Movement_5
	goto PlayersHouse1F_EventScript_You_Tell_Mom_About_Leaving_23

PlayersHouse1F_EventScript_You_Tell_Mom_About_Leaving_26:
# 299 "data/maps/PlayersHouse1F/scripts.pory"
	switch VAR_TEMP_1
# 301 "data/maps/PlayersHouse1F/scripts.pory"
	case 5, PlayersHouse1F_EventScript_You_Tell_Mom_About_Leaving_29
# 305 "data/maps/PlayersHouse1F/scripts.pory"
	case 7, PlayersHouse1F_EventScript_You_Tell_Mom_About_Leaving_30
	goto PlayersHouse1F_EventScript_You_Tell_Mom_About_Leaving_23

PlayersHouse1F_EventScript_You_Tell_Mom_About_Leaving_27:
# 310 "data/maps/PlayersHouse1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayersHouse1F_EventScript_Mom_Telling_About_Barry_Movement_0
# 311 "data/maps/PlayersHouse1F/scripts.pory"
	applymovement LOCALID_BARRY_MOM, PlayersHouse1F_EventScript_You_Tell_Mom_About_Leaving_Movement_7
# 312 "data/maps/PlayersHouse1F/scripts.pory"
	applymovement LOCALID_MOM_SITTING, PlayersHouse1F_EventScript_Mom_Telling_About_Barry_Movement_0
	goto PlayersHouse1F_EventScript_You_Tell_Mom_About_Leaving_23

PlayersHouse1F_EventScript_You_Tell_Mom_About_Leaving_29:
# 302 "data/maps/PlayersHouse1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayersHouse1F_EventScript_Mom_Telling_About_Barry_Movement_0
# 303 "data/maps/PlayersHouse1F/scripts.pory"
	applymovement LOCALID_BARRY_MOM, PlayersHouse1F_EventScript_You_Tell_Mom_About_Leaving_Movement_6
# 304 "data/maps/PlayersHouse1F/scripts.pory"
	applymovement LOCALID_MOM_SITTING, PlayersHouse1F_EventScript_Mom_Telling_About_Barry_Movement_0
	goto PlayersHouse1F_EventScript_You_Tell_Mom_About_Leaving_23

PlayersHouse1F_EventScript_You_Tell_Mom_About_Leaving_30:
# 306 "data/maps/PlayersHouse1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayersHouse1F_EventScript_Mom_Telling_About_Barry_Movement_0
# 307 "data/maps/PlayersHouse1F/scripts.pory"
	applymovement LOCALID_BARRY_MOM, PlayersHouse1F_EventScript_You_Tell_Mom_About_Leaving_Movement_5
	goto PlayersHouse1F_EventScript_You_Tell_Mom_About_Leaving_23


PlayersHouse1F_EventScript_Change_Player_Facing_Direction_To_Up::
# 324 "data/maps/PlayersHouse1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayersHouse1F_EventScript_Mom_SAY_DONT_GO_IN_GRASS_Movement_0
	return


PlayersHouse1F_EventScript_Sink::
# 329 "data/maps/PlayersHouse1F/scripts.pory"
	msgbox PlayersHouse1F_EventScript_Sink_Text_0, MSGBOX_SIGN
	end


# 17 "data/maps/PlayersHouse1F/scripts.pory"
PlayersHouse1F_EventScript_Mom_Telling_About_Barry_Movement_0:
# 17 "data/maps/PlayersHouse1F/scripts.pory"
	face_down
	step_end

# 20 "data/maps/PlayersHouse1F/scripts.pory"
PlayersHouse1F_EventScript_Mom_Telling_About_Barry_Movement_1:
# 20 "data/maps/PlayersHouse1F/scripts.pory"
	emote_exclamation_mark
	step_end

# 23 "data/maps/PlayersHouse1F/scripts.pory"
PlayersHouse1F_EventScript_Mom_Telling_About_Barry_Movement_2:
# 23 "data/maps/PlayersHouse1F/scripts.pory"
	walk_up
# 23 "data/maps/PlayersHouse1F/scripts.pory"
	walk_right
# 23 "data/maps/PlayersHouse1F/scripts.pory"
	walk_right
# 23 "data/maps/PlayersHouse1F/scripts.pory"
	walk_right
# 23 "data/maps/PlayersHouse1F/scripts.pory"
	walk_up
# 23 "data/maps/PlayersHouse1F/scripts.pory"
	walk_up
	step_end

# 31 "data/maps/PlayersHouse1F/scripts.pory"
PlayersHouse1F_EventScript_Mom_Telling_About_Barry_Movement_3:
# 31 "data/maps/PlayersHouse1F/scripts.pory"
	walk_down
# 31 "data/maps/PlayersHouse1F/scripts.pory"
	walk_down
# 31 "data/maps/PlayersHouse1F/scripts.pory"
	walk_left
# 31 "data/maps/PlayersHouse1F/scripts.pory"
	walk_left
# 31 "data/maps/PlayersHouse1F/scripts.pory"
	walk_left
# 31 "data/maps/PlayersHouse1F/scripts.pory"
	walk_down
# 31 "data/maps/PlayersHouse1F/scripts.pory"
	face_up
	step_end

# 42 "data/maps/PlayersHouse1F/scripts.pory"
PlayersHouse1F_EventScript_Mom_SAY_DONT_GO_IN_GRASS_Movement_0:
# 42 "data/maps/PlayersHouse1F/scripts.pory"
	face_up
	step_end

# 98 "data/maps/PlayersHouse1F/scripts.pory"
PlayersHouse1F_EventScript_Mom_Get_To_Know_That_You_Got_Pokemon_Movement_0:
# 98 "data/maps/PlayersHouse1F/scripts.pory"
	walk_left
# 98 "data/maps/PlayersHouse1F/scripts.pory"
	face_up
	step_end

# 101 "data/maps/PlayersHouse1F/scripts.pory"
PlayersHouse1F_EventScript_Mom_Get_To_Know_That_You_Got_Pokemon_Movement_1:
# 101 "data/maps/PlayersHouse1F/scripts.pory"
	face_right
	step_end

# 102 "data/maps/PlayersHouse1F/scripts.pory"
PlayersHouse1F_EventScript_Mom_Get_To_Know_That_You_Got_Pokemon_Movement_2:
# 102 "data/maps/PlayersHouse1F/scripts.pory"
	walk_right
# 102 "data/maps/PlayersHouse1F/scripts.pory"
	walk_right
# 102 "data/maps/PlayersHouse1F/scripts.pory"
	walk_right
# 102 "data/maps/PlayersHouse1F/scripts.pory"
	walk_down
# 102 "data/maps/PlayersHouse1F/scripts.pory"
	walk_right
	step_end

# 104 "data/maps/PlayersHouse1F/scripts.pory"
PlayersHouse1F_EventScript_Mom_Get_To_Know_That_You_Got_Pokemon_Movement_3:
# 104 "data/maps/PlayersHouse1F/scripts.pory"
	walk_down
# 104 "data/maps/PlayersHouse1F/scripts.pory"
	walk_down
# 104 "data/maps/PlayersHouse1F/scripts.pory"
	walk_down
# 104 "data/maps/PlayersHouse1F/scripts.pory"
	walk_right
# 104 "data/maps/PlayersHouse1F/scripts.pory"
	walk_right
# 104 "data/maps/PlayersHouse1F/scripts.pory"
	face_left
	step_end

# 105 "data/maps/PlayersHouse1F/scripts.pory"
PlayersHouse1F_EventScript_Mom_Get_To_Know_That_You_Got_Pokemon_Movement_4:
# 105 "data/maps/PlayersHouse1F/scripts.pory"
	walk_right
# 105 "data/maps/PlayersHouse1F/scripts.pory"
	walk_right
# 105 "data/maps/PlayersHouse1F/scripts.pory"
	walk_right
# 105 "data/maps/PlayersHouse1F/scripts.pory"
	walk_down
# 105 "data/maps/PlayersHouse1F/scripts.pory"
	walk_down
# 105 "data/maps/PlayersHouse1F/scripts.pory"
	walk_right
	step_end

# 199 "data/maps/PlayersHouse1F/scripts.pory"
PlayersHouse1F_EventScript_You_Tell_Mom_About_Leaving_Movement_0:
# 199 "data/maps/PlayersHouse1F/scripts.pory"
	face_left
	step_end

# 231 "data/maps/PlayersHouse1F/scripts.pory"
PlayersHouse1F_EventScript_You_Tell_Mom_About_Leaving_Movement_1:
# 231 "data/maps/PlayersHouse1F/scripts.pory"
	walk_up
# 231 "data/maps/PlayersHouse1F/scripts.pory"
	face_right
	step_end

# 235 "data/maps/PlayersHouse1F/scripts.pory"
PlayersHouse1F_EventScript_You_Tell_Mom_About_Leaving_Movement_2:
# 235 "data/maps/PlayersHouse1F/scripts.pory"
	walk_in_place_down
	step_end

# 274 "data/maps/PlayersHouse1F/scripts.pory"
PlayersHouse1F_EventScript_You_Tell_Mom_About_Leaving_Movement_3:
# 274 "data/maps/PlayersHouse1F/scripts.pory"
	walk_up
# 274 "data/maps/PlayersHouse1F/scripts.pory"
	walk_up
# 274 "data/maps/PlayersHouse1F/scripts.pory"
	face_right
	step_end

# 277 "data/maps/PlayersHouse1F/scripts.pory"
PlayersHouse1F_EventScript_You_Tell_Mom_About_Leaving_Movement_4:
# 277 "data/maps/PlayersHouse1F/scripts.pory"
	walk_right
# 277 "data/maps/PlayersHouse1F/scripts.pory"
	walk_right
# 277 "data/maps/PlayersHouse1F/scripts.pory"
	face_up
	step_end

# 297 "data/maps/PlayersHouse1F/scripts.pory"
PlayersHouse1F_EventScript_You_Tell_Mom_About_Leaving_Movement_5:
# 297 "data/maps/PlayersHouse1F/scripts.pory"
	walk_down
	step_end

# 303 "data/maps/PlayersHouse1F/scripts.pory"
PlayersHouse1F_EventScript_You_Tell_Mom_About_Leaving_Movement_6:
# 303 "data/maps/PlayersHouse1F/scripts.pory"
	walk_down
# 303 "data/maps/PlayersHouse1F/scripts.pory"
	walk_down
# 303 "data/maps/PlayersHouse1F/scripts.pory"
	walk_down
	step_end

# 311 "data/maps/PlayersHouse1F/scripts.pory"
PlayersHouse1F_EventScript_You_Tell_Mom_About_Leaving_Movement_7:
# 311 "data/maps/PlayersHouse1F/scripts.pory"
	walk_left
# 311 "data/maps/PlayersHouse1F/scripts.pory"
	walk_left
# 311 "data/maps/PlayersHouse1F/scripts.pory"
	walk_down
	step_end

PlayersHouse1F_EventScript_Mom_Telling_About_Barry_Text_0:
# 26 "data/maps/PlayersHouse1F/scripts.pory"
	.string "Mom: {PLAYER}!\p"
	.string "{RIVAL} already left.\p"
	.string "I don't know what it was about, but\n"
	.string "he sure was in a hurry!$"

PlayersHouse1F_EventScript_Mom_SAY_DONT_GO_IN_GRASS_Text_0:
# 44 "data/maps/PlayersHouse1F/scripts.pory"
	.string "Mom: Oh, yes!\n"
	.string "{PLAYER}!\p"
	.string "Don't go into the tall grass.\n"
	.string "Wild Pokémon might attack you.\p"
	.string "It would be OK if you had your own\n"
	.string "Pokémon, but you don't, so...\p"
	.string "Well, take care, sweetie!$"

PlayersHouse1F_EventScript_Mom_Tell_Barry_Impatient_Text_0:
# 74 "data/maps/PlayersHouse1F/scripts.pory"
	.string "Mom: You know how impatient\n"
	.string "{RIVAL} is.!$"

PlayersHouse1F_EventScript_Mom_Say_Bye_Text_0:
# 81 "data/maps/PlayersHouse1F/scripts.pory"
	.string "Mom: Bye-bye, {PLAYER}!\n"
	.string "You take care now!$"

PlayersHouse1F_EventScript_Mom_Say_Barry_Is_Waiting_Text_0:
# 88 "data/maps/PlayersHouse1F/scripts.pory"
	.string "Mom: What is it, dear?\n"
	.string "Isn't {RIVAL} waiting for you?$"

PlayersHouse1F_EventScript_Mom_Get_To_Know_That_You_Got_Pokemon_Text_0:
# 107 "data/maps/PlayersHouse1F/scripts.pory"
	.string "Mom: What's the matter, dear?\p"
	.string "...\p"
	.string "Wow.\n"
	.string "That's what happened to you?\p"
	.string "You are lucky to have\n"
	.string "met Prof. Rowan.\p"
	.string "Imagine if you didn't...\p"
	.string "I wouldn't like to think what the wild\n"
	.string "Pokémon might have done to you two.\p"
	.string "{PLAYER}, go see Prof, Rowan, and\n"
	.string "thank him properly for your Pokémon.\p"
	.string "His lab is in Sandgem Town, isn't it?\p"
	.string "Now that you have your own Pokémon,\n"
	.string "the tall grass won't be so threatning.$"

PlayersHouse1F_EventScript_Mom_Get_To_Know_That_You_Got_Pokemon_Text_1:
# 123 "data/maps/PlayersHouse1F/scripts.pory"
	.string "Oh, I know!\n"
	.string "{PLAYER}, put these on.$"

PlayersHouse1F_EventScript_Mom_Get_To_Know_That_You_Got_Pokemon_Text_2:
# 127 "data/maps/PlayersHouse1F/scripts.pory"
	.string "{PLAYER} recieved a pair of\n"
	.string "Running Shoes!\p"
	.string "Going to Sandgem Town is like an\n"
	.string "adventure in itself, right?\p"
	.string "With those Running Shoes, you can\n"
	.string "get to faraway places much faster.\p"
	.string "Ok...\n"
	.string "Let me read the instructions...\p"
	.string "Press the B Button and dash\n"
	.string "about faster than ever before!\p"
	.string "Put on the running shoes and\n"
	.string "blaze new trails of adventure!\p"
	.string "Isn't that just nifty!$"

PlayersHouse1F_EventScript_Mom_Heal_Your_Pokemon_Text_0:
# 154 "data/maps/PlayersHouse1F/scripts.pory"
	.string "Mom: Welcome home, {PLAYER}.\n"
	.string "Are you and your Pokémon healthy?\l"
	.string "Take a quick rest, dear.$"

PlayersHouse1F_EventScript_You_Tell_Mom_About_Leaving_Text_0:
# 167 "data/maps/PlayersHouse1F/scripts.pory"
	.string "Mom: What is it, {PLAYER}?\p"
	.string "...\p"
	.string "Wow. Professor Rowan asked you\n"
	.string "to do something big.\p"
	.string "Ok, dear, got for it!\n"
	.string "Your mom's got your back!\p"
	.string "Oh, I know! {PLAYER}, I've got\n"
	.string "something that you'll find useful$"

PlayersHouse1F_EventScript_You_Tell_Mom_About_Leaving_Text_1:
# 176 "data/maps/PlayersHouse1F/scripts.pory"
	.string "That's a Journal. It keeps a record\n"
	.string "of your daily events.\p"
	.string "Check it, and you'll be able to\n"
	.string "remember what you did last.$"

PlayersHouse1F_EventScript_You_Tell_Mom_About_Leaving_Text_2:
# 191 "data/maps/PlayersHouse1F/scripts.pory"
	.string "Gee, a journey full of adventure...\n"
	.string "I envy you, kiddo.\p"
	.string "Plus, you are not alone.\n"
	.string "You have your Pokémon with you.\l"
	.string "I wish I could go instead!$"

PlayersHouse1F_EventScript_You_Tell_Mom_About_Leaving_Text_3:
# 208 "data/maps/PlayersHouse1F/scripts.pory"
	.string "I'm just joking dear!\n"
	.string "Yup, {PLAYER}!\p"
	.string "I'll be all right by myself, so you\n"
	.string "go and enjoy your adventure!\p"
	.string "When you're exposed to new things,\n"
	.string "and experience new sensations...\l"
	.string "It makes your mother happy, too.\p"
	.string "...But come back sometimes.\p"
	.string "I would like to see the kinds of\n"
	.string "Pokémon you've caught, dear.$"

PlayersHouse1F_EventScript_You_Tell_Mom_About_Leaving_Text_4:
# 233 "data/maps/PlayersHouse1F/scripts.pory"
	.string "{RIVAL}'s mom: Excuse me.\n"
	.string "Is my little {RIVAL} here?$"

PlayersHouse1F_EventScript_You_Tell_Mom_About_Leaving_Text_5:
# 237 "data/maps/PlayersHouse1F/scripts.pory"
	.string "Mom: Oh?\n"
	.string "No, he's not...\p"
	.string "{RIVAL}: Oh...\n"
	.string "Then, he must have left already...\l"
	.string "What to do...\p"
	.string "That boy shouted about going on an\n"
	.string "adventure, then he bolted\p"
	.string "He's so headstrong and reckless...\n"
	.string "I at least wanted him to take this...\p"
	.string "Mom: Not to worry, {PLAYER} will\n"
	.string "deliver that to him.$"

PlayersHouse1F_EventScript_You_Tell_Mom_About_Leaving_Text_6:
# 264 "data/maps/PlayersHouse1F/scripts.pory"
	.string "Won't you {PLAYER}?$"

PlayersHouse1F_EventScript_You_Tell_Mom_About_Leaving_Text_7:
# 280 "data/maps/PlayersHouse1F/scripts.pory"
	.string "{RIVAL}: Oh, really?\n"
	.string "You'd do that for me?\n"
	.string "{PLAYER}, please take this to\n"
	.string "{RIVAL} for me.$"

PlayersHouse1F_EventScript_You_Tell_Mom_About_Leaving_Text_8:
# 285 "data/maps/PlayersHouse1F/scripts.pory"
	.string "Mom: Bye-bye, {PLAYER}!\n"
	.string "Enjoy your adventure!\p"
	.string "{RIVAL}: Let me think...\p"
	.string "Knowing my boy, he would probably\n"
	.string "head straight to Jubilife City...\p"
	.string "Ok, please take that to my\n"
	.string "{RIVAL}.$"

PlayersHouse1F_EventScript_Sink_Text_0:
# 329 "data/maps/PlayersHouse1F/scripts.pory"
	.string "Mom's kitchen is spotless!\n"
	.string "You can see you face on the floor!$"
