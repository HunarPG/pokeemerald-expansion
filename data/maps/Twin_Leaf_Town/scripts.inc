Twin_Leaf_Town_MapScripts::
	.byte 0


Twin_Leaf_Town_EventScript_Players_House_Sign::
	msgbox Twin_Leaf_Town_EventScript_Players_House_Sign_Text_0, MSGBOX_SIGN
	end


Twin_Leaf_Town_EventScript_Barrys_House_Sign::
	msgbox Twin_Leaf_Town_EventScript_Barrys_House_Sign_Text_0, MSGBOX_SIGN
	end


Twin_Leaf_Town_EventScript_Sign::
	msgbox Twin_Leaf_Town_EventScript_Sign_Text_0, MSGBOX_SIGN
	end


Twin_Leaf_Town_EventScript_Fat_MAN::
	msgbox Twin_Leaf_Town_EventScript_Fat_MAN_Text_0, MSGBOX_NPC
	end


Twin_Leaf_Town_EventScript_LADY::
	msgbox Twin_Leaf_Town_EventScript_LADY_Text_0, MSGBOX_NPC
	end


Twin_Leaf_Town_EventScript_Barry::
	lock
	setflag FLAG_HIDE_ROUTE_201_ROWANS_BAG
	setflag FLAG_HIDE_ROWAN_ROUTE_201
	setflag FLAG_HIDE_LUCAS_ROUTE_201
	setflag FLAG_HIDE_DAWN_ROUTE_201
	showobjectat LOCALID_BARRY_TWINLEAF, MAP_TWIN_LEAF_TOWN
	playse SE_DOOR
	applymovement LOCALID_BARRY_TWINLEAF, Twin_Leaf_Town_EventScript_Barry_Movement_0
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Twin_Leaf_Town_EventScript_Barry_Movement_1
	waitmovement 0
	msgbox Twin_Leaf_Town_EventScript_Barry_Text_0, MSGBOX_DEFAULT
	closemessage
	playse SE_PIN
	applymovement LOCALID_BARRY_TWINLEAF, Twin_Leaf_Town_EventScript_Barry_Movement_2
	waitmovement 0
	delay 30
	fadenewbgm MUS_DP_RIVAL
	msgbox Twin_Leaf_Town_EventScript_Barry_Text_1, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_BARRY_TWINLEAF, Twin_Leaf_Town_EventScript_Barry_Movement_3
	waitmovement 0
	playse SE_PIN
	applymovement LOCALID_BARRY_TWINLEAF, Twin_Leaf_Town_EventScript_Barry_Movement_2
	waitmovement 0
	delay 30
	applymovement LOCALID_BARRY_TWINLEAF, Twin_Leaf_Town_EventScript_Barry_Movement_4
	waitmovement 0
	msgbox Twin_Leaf_Town_EventScript_Barry_Text_2, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_BARRY_TWINLEAF, Twin_Leaf_Town_EventScript_Barry_Movement_5
	waitmovement 0
	playse SE_DOOR
	removeobject LOCALID_BARRY_TWINLEAF
	setvar VAR_MET_RIVAL_IN_TWINLEAF, 1
	fadedefaultbgm
	release
	end


Twin_Leaf_Town_EventScript_Guy::
	switch VAR_RIVAL_MOM_TEXT
	case 0, Twin_Leaf_Town_EventScript_Guy_2
	case 1, Twin_Leaf_Town_EventScript_Guy_3
	return

Twin_Leaf_Town_EventScript_Guy_2:
	goto TwinLeafTown_EventScript_Guy_Before_Talking_To_Berry
	return

Twin_Leaf_Town_EventScript_Guy_3:
	goto TwinLeafTown_EventScript_Guy_After_Talking_To_Berry
	return


TwinLeafTown_EventScript_Guy_Before_Talking_To_Berry::
	msgbox TwinLeafTown_EventScript_Guy_Before_Talking_To_Berry_Text_0, MSGBOX_NPC
	end


TwinLeafTown_EventScript_Guy_After_Talking_To_Berry::
	msgbox TwinLeafTown_EventScript_Guy_After_Talking_To_Berry_Text_0, MSGBOX_NPC
	end


Twin_Leaf_Town_EventScript_Guy_Stop_You::
	lock
	applymovement LOCALID_GUY, Twin_Leaf_Town_EventScript_Guy_Stop_You_Movement_0
	waitmovement 0
	playse SE_PIN
	applymovement LOCALID_GUY, Twin_Leaf_Town_EventScript_Barry_Movement_2
	waitmovement 0
	delay 30
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	switch VAR_TEMP_0
	case 12, Twin_Leaf_Town_EventScript_Guy_Stop_You_3
	case 13, Twin_Leaf_Town_EventScript_Guy_Stop_You_4
	case 14, Twin_Leaf_Town_EventScript_Guy_Stop_You_5
	case 15, Twin_Leaf_Town_EventScript_Guy_Stop_You_6
	case 16, Twin_Leaf_Town_EventScript_Guy_Stop_You_7
	case 17, Twin_Leaf_Town_EventScript_Guy_Stop_You_8
	case 18, Twin_Leaf_Town_EventScript_Guy_Stop_You_9
	case 19, Twin_Leaf_Town_EventScript_Guy_Stop_You_10
Twin_Leaf_Town_EventScript_Guy_Stop_You_1:
	waitmovement 0
	applymovement LOCALID_GUY, Twin_Leaf_Town_EventScript_Barry_Movement_0
	applymovement OBJ_EVENT_ID_PLAYER, Twin_Leaf_Town_EventScript_Guy_Stop_You_Movement_9
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Twin_Leaf_Town_EventScript_Guy_Stop_You_Movement_0
	waitmovement 0
	delay 30
	msgbox TwinLeafTown_EventScript_Guy_Before_Talking_To_Berry_Text_0, MSGBOX_DEFAULT
	closemessage
	switch VAR_TEMP_0
	case 12, Twin_Leaf_Town_EventScript_Guy_Stop_You_13
	case 13, Twin_Leaf_Town_EventScript_Guy_Stop_You_14
	case 14, Twin_Leaf_Town_EventScript_Guy_Stop_You_15
	case 15, Twin_Leaf_Town_EventScript_Guy_Stop_You_16
	case 16, Twin_Leaf_Town_EventScript_Guy_Stop_You_17
	case 17, Twin_Leaf_Town_EventScript_Guy_Stop_You_18
	case 18, Twin_Leaf_Town_EventScript_Guy_Stop_You_19
	case 19, Twin_Leaf_Town_EventScript_Guy_Stop_You_20
Twin_Leaf_Town_EventScript_Guy_Stop_You_11:
	waitmovement 0
	release
	end

Twin_Leaf_Town_EventScript_Guy_Stop_You_3:
	applymovement LOCALID_GUY, Twin_Leaf_Town_EventScript_Guy_Stop_You_Movement_1
	goto Twin_Leaf_Town_EventScript_Guy_Stop_You_1

Twin_Leaf_Town_EventScript_Guy_Stop_You_4:
	applymovement LOCALID_GUY, Twin_Leaf_Town_EventScript_Guy_Stop_You_Movement_2
	goto Twin_Leaf_Town_EventScript_Guy_Stop_You_1

Twin_Leaf_Town_EventScript_Guy_Stop_You_5:
	applymovement LOCALID_GUY, Twin_Leaf_Town_EventScript_Guy_Stop_You_Movement_3
	goto Twin_Leaf_Town_EventScript_Guy_Stop_You_1

Twin_Leaf_Town_EventScript_Guy_Stop_You_6:
	applymovement LOCALID_GUY, Twin_Leaf_Town_EventScript_Guy_Stop_You_Movement_4
	goto Twin_Leaf_Town_EventScript_Guy_Stop_You_1

Twin_Leaf_Town_EventScript_Guy_Stop_You_7:
	applymovement LOCALID_GUY, Twin_Leaf_Town_EventScript_Guy_Stop_You_Movement_5
	goto Twin_Leaf_Town_EventScript_Guy_Stop_You_1

Twin_Leaf_Town_EventScript_Guy_Stop_You_8:
	applymovement LOCALID_GUY, Twin_Leaf_Town_EventScript_Guy_Stop_You_Movement_6
	goto Twin_Leaf_Town_EventScript_Guy_Stop_You_1

Twin_Leaf_Town_EventScript_Guy_Stop_You_9:
	applymovement LOCALID_GUY, Twin_Leaf_Town_EventScript_Guy_Stop_You_Movement_7
	goto Twin_Leaf_Town_EventScript_Guy_Stop_You_1

Twin_Leaf_Town_EventScript_Guy_Stop_You_10:
	applymovement LOCALID_GUY, Twin_Leaf_Town_EventScript_Guy_Stop_You_Movement_8
	goto Twin_Leaf_Town_EventScript_Guy_Stop_You_1

Twin_Leaf_Town_EventScript_Guy_Stop_You_13:
	applymovement LOCALID_GUY, Twin_Leaf_Town_EventScript_Guy_Stop_You_Movement_10
	goto Twin_Leaf_Town_EventScript_Guy_Stop_You_11

Twin_Leaf_Town_EventScript_Guy_Stop_You_14:
	applymovement LOCALID_GUY, Twin_Leaf_Town_EventScript_Guy_Stop_You_Movement_11
	goto Twin_Leaf_Town_EventScript_Guy_Stop_You_11

Twin_Leaf_Town_EventScript_Guy_Stop_You_15:
	applymovement LOCALID_GUY, Twin_Leaf_Town_EventScript_Guy_Stop_You_Movement_12
	goto Twin_Leaf_Town_EventScript_Guy_Stop_You_11

Twin_Leaf_Town_EventScript_Guy_Stop_You_16:
	applymovement LOCALID_GUY, Twin_Leaf_Town_EventScript_Guy_Stop_You_Movement_13
	goto Twin_Leaf_Town_EventScript_Guy_Stop_You_11

Twin_Leaf_Town_EventScript_Guy_Stop_You_17:
	applymovement LOCALID_GUY, Twin_Leaf_Town_EventScript_Guy_Stop_You_Movement_14
	goto Twin_Leaf_Town_EventScript_Guy_Stop_You_11

Twin_Leaf_Town_EventScript_Guy_Stop_You_18:
	applymovement LOCALID_GUY, Twin_Leaf_Town_EventScript_Guy_Stop_You_Movement_15
	goto Twin_Leaf_Town_EventScript_Guy_Stop_You_11

Twin_Leaf_Town_EventScript_Guy_Stop_You_19:
	applymovement LOCALID_GUY, Twin_Leaf_Town_EventScript_Guy_Stop_You_Movement_16
	goto Twin_Leaf_Town_EventScript_Guy_Stop_You_11

Twin_Leaf_Town_EventScript_Guy_Stop_You_20:
	applymovement LOCALID_GUY, Twin_Leaf_Town_EventScript_Guy_Stop_You_Movement_17
	goto Twin_Leaf_Town_EventScript_Guy_Stop_You_11


Twin_Leaf_Town_EventScript_Barry_Movement_0:
	walk_fast_down
	step_end

Twin_Leaf_Town_EventScript_Barry_Movement_1:
	walk_fast_down
	face_up
	step_end

Twin_Leaf_Town_EventScript_Barry_Movement_2:
	emote_exclamation_mark
	step_end

Twin_Leaf_Town_EventScript_Barry_Movement_3:
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	step_end

Twin_Leaf_Town_EventScript_Barry_Movement_4:
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	face_down
	step_end

Twin_Leaf_Town_EventScript_Barry_Movement_5:
	walk_fast_up
	step_end

Twin_Leaf_Town_EventScript_Guy_Stop_You_Movement_0:
	face_up
	step_end

Twin_Leaf_Town_EventScript_Guy_Stop_You_Movement_1:
	walk_fast_up
	walk_fast_up
	walk_fast_right
	walk_fast_up
	walk_fast_up
	walk_fast_left
	face_down
	step_end

Twin_Leaf_Town_EventScript_Guy_Stop_You_Movement_2:
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_right
	face_down
	step_end

Twin_Leaf_Town_EventScript_Guy_Stop_You_Movement_3:
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_right
	walk_fast_right
	face_down
	step_end

Twin_Leaf_Town_EventScript_Guy_Stop_You_Movement_4:
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_right
	walk_fast_right
	walk_fast_right
	face_down
	step_end

Twin_Leaf_Town_EventScript_Guy_Stop_You_Movement_5:
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	face_down
	step_end

Twin_Leaf_Town_EventScript_Guy_Stop_You_Movement_6:
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	face_down
	step_end

Twin_Leaf_Town_EventScript_Guy_Stop_You_Movement_7:
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	face_down
	step_end

Twin_Leaf_Town_EventScript_Guy_Stop_You_Movement_8:
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	face_down
	step_end

Twin_Leaf_Town_EventScript_Guy_Stop_You_Movement_9:
	jump_down
	step_end

Twin_Leaf_Town_EventScript_Guy_Stop_You_Movement_10:
	walk_fast_right
	walk_fast_down
	walk_fast_down
	walk_fast_left
	walk_fast_down
	step_end

Twin_Leaf_Town_EventScript_Guy_Stop_You_Movement_11:
	walk_fast_left
	walk_fast_down
	walk_fast_down
	walk_fast_down
	step_end

Twin_Leaf_Town_EventScript_Guy_Stop_You_Movement_12:
	walk_fast_left
	walk_fast_left
	walk_fast_down
	walk_fast_down
	walk_fast_down
	step_end

Twin_Leaf_Town_EventScript_Guy_Stop_You_Movement_13:
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_down
	walk_fast_down
	walk_fast_down
	step_end

Twin_Leaf_Town_EventScript_Guy_Stop_You_Movement_14:
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_down
	walk_fast_down
	walk_fast_down
	step_end

Twin_Leaf_Town_EventScript_Guy_Stop_You_Movement_15:
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_down
	walk_fast_down
	walk_fast_down
	step_end

Twin_Leaf_Town_EventScript_Guy_Stop_You_Movement_16:
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_down
	walk_fast_down
	walk_fast_down
	step_end

Twin_Leaf_Town_EventScript_Guy_Stop_You_Movement_17:
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_down
	walk_fast_down
	walk_fast_down
	step_end

Twin_Leaf_Town_EventScript_Players_House_Sign_Text_0:
	.string "{PLAYER}'s House$"

Twin_Leaf_Town_EventScript_Barrys_House_Sign_Text_0:
	.string "{RIVAL}'s House$"

Twin_Leaf_Town_EventScript_Sign_Text_0:
	.string "Twinleaf Town\n"
	.string "Fresh and Free!$"

Twin_Leaf_Town_EventScript_Fat_MAN_Text_0:
	.string "Technology just blows me away!\p"
	.string "I mean, now you can play with people\n"
	.string "around the world...wirelessly!$"

Twin_Leaf_Town_EventScript_LADY_Text_0:
	.string "It's true that wild Pokémon do attack\n"
	.string "people sometimes...\p"
	.string "But, Pokémon also open their hearts\n"
	.string "to you, so you can become friends.$"

Twin_Leaf_Town_EventScript_Barry_Text_0:
	.string "Thud!!$"

Twin_Leaf_Town_EventScript_Barry_Text_1:
	.string "{RIVAL}: What was that about?!\p"
	.string "Oh, hey, {PLAYER}!\p"
	.string "Hey! I'm going to see Prof. Rowan!\n"
	.string "You should come, too! And quickly!$"

Twin_Leaf_Town_EventScript_Barry_Text_2:
	.string "{RIVAL}: Oh, jeez!\n"
	.string "Forgot something!$"

TwinLeafTown_EventScript_Guy_Before_Talking_To_Berry_Text_0:
	.string "Hiya, {PLAYER}.\n"
	.string "{RIVAL} was looking for you.\p"
	.string "I think he's home now.\n"
	.string "Why don't you go check it out?$"

TwinLeafTown_EventScript_Guy_After_Talking_To_Berry_Text_0:
	.string "Hiya, {PLAYER}.\n"
	.string "You are looking for {RIVAL}?\p"
	.string "He just went tearing of a little\n"
	.string "while ago.\p"
	.string "He's probably not gone too far.\n"
	.string "Why not go chase after him?$"
