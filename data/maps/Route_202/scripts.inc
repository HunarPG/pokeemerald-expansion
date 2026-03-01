Route_202_MapScripts::
	.byte 0


Route_202_EventScript_Location_Sign::
	msgbox Route_202_EventScript_Location_Sign_Text_0, MSGBOX_SIGN
	return


Route_202_EventScript_Rival_2_Stops_Until_You_Talk_To_Mom::
	applymovement OBJ_EVENT_ID_PLAYER, Route_202_EventScript_Rival_2_Stops_Until_You_Talk_To_Mom_Movement_0
	waitmovement 0
	playse SE_PIN
	applymovement LOCALID_RIVAL_202, Route_202_EventScript_Rival_2_Stops_Until_You_Talk_To_Mom_Movement_1
	waitmovement 0
	delay 30
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	switch VAR_TEMP_1
	case 22, Route_202_EventScript_Rival_2_Stops_Until_You_Talk_To_Mom_3
	case 23, Route_202_EventScript_Rival_2_Stops_Until_You_Talk_To_Mom_4
	case 24, Route_202_EventScript_Rival_2_Stops_Until_You_Talk_To_Mom_5
	case 25, Route_202_EventScript_Rival_2_Stops_Until_You_Talk_To_Mom_6
Route_202_EventScript_Rival_2_Stops_Until_You_Talk_To_Mom_1:
	waitmovement 0
	checkplayergender
	switch VAR_RESULT
	case MALE, Route_202_EventScript_Rival_2_Stops_Until_You_Talk_To_Mom_9
	case FEMALE, Route_202_EventScript_Rival_2_Stops_Until_You_Talk_To_Mom_10
Route_202_EventScript_Rival_2_Stops_Until_You_Talk_To_Mom_7:
	applymovement LOCALID_RIVAL_202, Route_202_EventScript_Rival_2_Stops_Until_You_Talk_To_Mom_Movement_6
	applymovement OBJ_EVENT_ID_PLAYER, Route_202_EventScript_Rival_2_Stops_Until_You_Talk_To_Mom_Movement_7
	waitmovement 0
	switch VAR_TEMP_1
	case 22, Route_202_EventScript_Rival_2_Stops_Until_You_Talk_To_Mom_13
	case 23, Route_202_EventScript_Rival_2_Stops_Until_You_Talk_To_Mom_14
	case 24, Route_202_EventScript_Rival_2_Stops_Until_You_Talk_To_Mom_15
	case 25, Route_202_EventScript_Rival_2_Stops_Until_You_Talk_To_Mom_16
Route_202_EventScript_Rival_2_Stops_Until_You_Talk_To_Mom_11:
	waitmovement 0
	end

Route_202_EventScript_Rival_2_Stops_Until_You_Talk_To_Mom_3:
	applymovement LOCALID_RIVAL_202, Route_202_EventScript_Rival_2_Stops_Until_You_Talk_To_Mom_Movement_2
	goto Route_202_EventScript_Rival_2_Stops_Until_You_Talk_To_Mom_1

Route_202_EventScript_Rival_2_Stops_Until_You_Talk_To_Mom_4:
	applymovement LOCALID_RIVAL_202, Route_202_EventScript_Rival_2_Stops_Until_You_Talk_To_Mom_Movement_3
	goto Route_202_EventScript_Rival_2_Stops_Until_You_Talk_To_Mom_1

Route_202_EventScript_Rival_2_Stops_Until_You_Talk_To_Mom_5:
	applymovement LOCALID_RIVAL_202, Route_202_EventScript_Rival_2_Stops_Until_You_Talk_To_Mom_Movement_4
	goto Route_202_EventScript_Rival_2_Stops_Until_You_Talk_To_Mom_1

Route_202_EventScript_Rival_2_Stops_Until_You_Talk_To_Mom_6:
	applymovement LOCALID_RIVAL_202, Route_202_EventScript_Rival_2_Stops_Until_You_Talk_To_Mom_Movement_5
	goto Route_202_EventScript_Rival_2_Stops_Until_You_Talk_To_Mom_1

Route_202_EventScript_Rival_2_Stops_Until_You_Talk_To_Mom_9:
	msgbox Route_202_EventScript_Rival_2_Stops_Until_You_Talk_To_Mom_Text_0, MSGBOX_SIGN
	goto Route_202_EventScript_Rival_2_Stops_Until_You_Talk_To_Mom_7

Route_202_EventScript_Rival_2_Stops_Until_You_Talk_To_Mom_10:
	msgbox Route_202_EventScript_Rival_2_Stops_Until_You_Talk_To_Mom_Text_1, MSGBOX_SIGN
	goto Route_202_EventScript_Rival_2_Stops_Until_You_Talk_To_Mom_7

Route_202_EventScript_Rival_2_Stops_Until_You_Talk_To_Mom_13:
	applymovement LOCALID_RIVAL_202, Route_202_EventScript_Rival_2_Stops_Until_You_Talk_To_Mom_Movement_8
	goto Route_202_EventScript_Rival_2_Stops_Until_You_Talk_To_Mom_11

Route_202_EventScript_Rival_2_Stops_Until_You_Talk_To_Mom_14:
	applymovement LOCALID_RIVAL_202, Route_202_EventScript_Rival_2_Stops_Until_You_Talk_To_Mom_Movement_9
	goto Route_202_EventScript_Rival_2_Stops_Until_You_Talk_To_Mom_11

Route_202_EventScript_Rival_2_Stops_Until_You_Talk_To_Mom_15:
	applymovement LOCALID_RIVAL_202, Route_202_EventScript_Rival_2_Stops_Until_You_Talk_To_Mom_Movement_10
	goto Route_202_EventScript_Rival_2_Stops_Until_You_Talk_To_Mom_11

Route_202_EventScript_Rival_2_Stops_Until_You_Talk_To_Mom_16:
	applymovement LOCALID_RIVAL_202, Route_202_EventScript_Rival_2_Stops_Until_You_Talk_To_Mom_Movement_11
	goto Route_202_EventScript_Rival_2_Stops_Until_You_Talk_To_Mom_11


Route_202_EventScript_Rival_2_Catching_Tutorial::
	applymovement OBJ_EVENT_ID_PLAYER, Route_202_EventScript_Rival_2_Stops_Until_You_Talk_To_Mom_Movement_0
	waitmovement 0
	playse SE_PIN
	applymovement LOCALID_RIVAL_202, Route_202_EventScript_Rival_2_Stops_Until_You_Talk_To_Mom_Movement_1
	waitmovement 0
	delay 30
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	switch VAR_TEMP_1
	case 22, Route_202_EventScript_Rival_2_Catching_Tutorial_3
	case 23, Route_202_EventScript_Rival_2_Catching_Tutorial_4
	case 24, Route_202_EventScript_Rival_2_Catching_Tutorial_5
	case 25, Route_202_EventScript_Rival_2_Catching_Tutorial_6
Route_202_EventScript_Rival_2_Catching_Tutorial_1:
	waitmovement 0
	checkplayergender
	switch VAR_RESULT
	case MALE, Route_202_EventScript_Rival_2_Catching_Tutorial_9
	case FEMALE, Route_202_EventScript_Rival_2_Catching_Tutorial_10
Route_202_EventScript_Rival_2_Catching_Tutorial_7:
	applymovement LOCALID_RIVAL_202, Route_202_EventScript_Rival_2_Catching_Tutorial_Movement_0
	applymovement OBJ_EVENT_ID_PLAYER, Route_202_EventScript_Rival_2_Catching_Tutorial_Movement_0
	waitmovement 0
	goto Route_202_EventScript_Perform_Catching_Tutorial
	return

Route_202_EventScript_Rival_2_Catching_Tutorial_3:
	applymovement LOCALID_RIVAL_202, Route_202_EventScript_Rival_2_Stops_Until_You_Talk_To_Mom_Movement_2
	goto Route_202_EventScript_Rival_2_Catching_Tutorial_1

Route_202_EventScript_Rival_2_Catching_Tutorial_4:
	applymovement LOCALID_RIVAL_202, Route_202_EventScript_Rival_2_Stops_Until_You_Talk_To_Mom_Movement_3
	goto Route_202_EventScript_Rival_2_Catching_Tutorial_1

Route_202_EventScript_Rival_2_Catching_Tutorial_5:
	applymovement LOCALID_RIVAL_202, Route_202_EventScript_Rival_2_Stops_Until_You_Talk_To_Mom_Movement_4
	goto Route_202_EventScript_Rival_2_Catching_Tutorial_1

Route_202_EventScript_Rival_2_Catching_Tutorial_6:
	applymovement LOCALID_RIVAL_202, Route_202_EventScript_Rival_2_Stops_Until_You_Talk_To_Mom_Movement_5
	goto Route_202_EventScript_Rival_2_Catching_Tutorial_1

Route_202_EventScript_Rival_2_Catching_Tutorial_9:
	msgbox Route_202_EventScript_Rival_2_Catching_Tutorial_Text_0, MSGBOX_SIGN
	goto Route_202_EventScript_Rival_2_Catching_Tutorial_7

Route_202_EventScript_Rival_2_Catching_Tutorial_10:
	msgbox Route_202_EventScript_Rival_2_Catching_Tutorial_Text_1, MSGBOX_SIGN
	goto Route_202_EventScript_Rival_2_Catching_Tutorial_7


Route_202_EventScript_Perform_Catching_Tutorial::
	special SavePlayerParty
	special LoadWallyZigzagoon
	special StartWallyTutorialBattle
	waitstate
	special LoadPlayerParty
	goto Route_202_EventScript_Rival_Gives_Pokeballs_And_Leaves
	return


Route_202_EventScript_Rival_Gives_Pokeballs_And_Leaves::
	applymovement LOCALID_RIVAL_202, Route_202_EventScript_Rival_Gives_Pokeballs_And_Leaves_Movement_0
	waitmovement 0
	switch VAR_RESULT
	case MALE, Route_202_EventScript_Rival_Gives_Pokeballs_And_Leaves_3
	case FEMALE, Route_202_EventScript_Rival_Gives_Pokeballs_And_Leaves_4
Route_202_EventScript_Rival_Gives_Pokeballs_And_Leaves_1:
	giveitem ITEM_POKE_BALL, 5
	msgbox Route_202_EventScript_Rival_Gives_Pokeballs_And_Leaves_Text_2, MSGBOX_SIGN
	applymovement LOCALID_RIVAL_202, Route_202_EventScript_Rival_Gives_Pokeballs_And_Leaves_Movement_1
	waitmovement 0
	removeobject LOCALID_RIVAL_202
	setflag FLAG_HIDE_RIVAL_ROUTE_202
	setvar VAR_MOM_TEXT, 8
	releaseall
	end

Route_202_EventScript_Rival_Gives_Pokeballs_And_Leaves_3:
	msgbox Route_202_EventScript_Rival_Gives_Pokeballs_And_Leaves_Text_0, MSGBOX_SIGN
	goto Route_202_EventScript_Rival_Gives_Pokeballs_And_Leaves_1

Route_202_EventScript_Rival_Gives_Pokeballs_And_Leaves_4:
	msgbox Route_202_EventScript_Rival_Gives_Pokeballs_And_Leaves_Text_1, MSGBOX_SIGN
	goto Route_202_EventScript_Rival_Gives_Pokeballs_And_Leaves_1


Route_202_EventScript_Youngster_Tristan::
	trainerbattle_single TRAINER_TRISTAN_1, Route_202_EventScript_Youngster_Tristan_Text_0, Route_202_EventScript_Youngster_Tristan_Text_1
	msgbox Route_202_EventScript_Youngster_Tristan_Text_2, MSGBOX_AUTOCLOSE
	return


Route_202_EventScript_Trainer_Tips::
	msgbox Route_202_EventScript_Trainer_Tips_Text_0, MSGBOX_SIGN
	return


Route_202_EventScript_Lass_Natalie::
	trainerbattle_single TRAINER_NATALIE, Route_202_EventScript_Lass_Natalie_Text_0, Route_202_EventScript_Lass_Natalie_Text_1
	msgbox Route_202_EventScript_Lass_Natalie_Text_2, MSGBOX_AUTOCLOSE
	return


Route_202_EventScript_Youngster_Logan::
	trainerbattle_single TRAINER_LOGAN, Route_202_EventScript_Youngster_Logan_Text_0, Route_202_EventScript_Youngster_Logan_Text_1
	msgbox Route_202_EventScript_Youngster_Logan_Text_2, MSGBOX_AUTOCLOSE
	return


Route_202_EventScript_Location_Sign_1::
	msgbox Route_202_EventScript_Location_Sign_1_Text_0, MSGBOX_SIGN
	return


Route_202_EventScript_Youngster_Talking_About_Encounters::
	msgbox Route_202_EventScript_Youngster_Talking_About_Encounters_Text_0, MSGBOX_NPC
	return


Route_202_EventScript_Rival_2_Stops_Until_You_Talk_To_Mom_Movement_0:
	face_left
	step_end

Route_202_EventScript_Rival_2_Stops_Until_You_Talk_To_Mom_Movement_1:
	emote_exclamation_mark
	step_end

Route_202_EventScript_Rival_2_Stops_Until_You_Talk_To_Mom_Movement_2:
	walk_right
	walk_right
	walk_right
	walk_right
	walk_up
	walk_up
	walk_right
	step_end

Route_202_EventScript_Rival_2_Stops_Until_You_Talk_To_Mom_Movement_3:
	walk_right
	walk_right
	walk_right
	walk_right
	walk_up
	walk_right
	step_end

Route_202_EventScript_Rival_2_Stops_Until_You_Talk_To_Mom_Movement_4:
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

Route_202_EventScript_Rival_2_Stops_Until_You_Talk_To_Mom_Movement_5:
	walk_right
	walk_right
	walk_right
	walk_right
	walk_down
	walk_right
	step_end

Route_202_EventScript_Rival_2_Stops_Until_You_Talk_To_Mom_Movement_6:
	walk_right
	step_end

Route_202_EventScript_Rival_2_Stops_Until_You_Talk_To_Mom_Movement_7:
	walk_right
	face_left
	step_end

Route_202_EventScript_Rival_2_Stops_Until_You_Talk_To_Mom_Movement_8:
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_down
	walk_down
	face_right
	step_end

Route_202_EventScript_Rival_2_Stops_Until_You_Talk_To_Mom_Movement_9:
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_down
	face_right
	step_end

Route_202_EventScript_Rival_2_Stops_Until_You_Talk_To_Mom_Movement_10:
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	face_right
	step_end

Route_202_EventScript_Rival_2_Stops_Until_You_Talk_To_Mom_Movement_11:
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_up
	face_right
	step_end

Route_202_EventScript_Rival_2_Catching_Tutorial_Movement_0:
	walk_left
	walk_left
	step_end

Route_202_EventScript_Rival_Gives_Pokeballs_And_Leaves_Movement_0:
	face_right
	step_end

Route_202_EventScript_Rival_Gives_Pokeballs_And_Leaves_Movement_1:
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

Route_202_EventScript_Location_Sign_Text_0:
	.string "Rt. 202\n"
	.string "Sandgem Town$"

Route_202_EventScript_Rival_2_Stops_Until_You_Talk_To_Mom_Text_0:
	.string "Dawn: {PLAYER}?!\p"
	.string "Did you tell your family that you're\n"
	.string "helping the professor?\p"
	.string "...You didn't, did you?\p"
	.string "I know that you're really eager to\n"
	.string "see all kinds of Pokemon.\p"
	.string "But you shouldn't make your mom\n"
	.string "worry that you've disappeared.$"

Route_202_EventScript_Rival_2_Stops_Until_You_Talk_To_Mom_Text_1:
	.string "Lucas: {PLAYER}?!\p"
	.string "Did you tell your family that you're\n"
	.string "helping the professor?\p"
	.string "I bet you didn't, did you?\p"
	.string "I know that you're eager to\n"
	.string "see all kinds of Pokémon.\p"
	.string "But you shouldn't make your mom\n"
	.string "worry like that.$"

Route_202_EventScript_Rival_2_Catching_Tutorial_Text_0:
	.string "Dawn: Oh, that's right!\p"
	.string "{PLAYER}, I haven't shown you\n"
	.string "how to catch a Pokemon.\p"
	.string "I'll demonstrate how to catch\n"
	.string "one, so just watch me, OK?$"

Route_202_EventScript_Rival_2_Catching_Tutorial_Text_1:
	.string "Lucas: {PLAYER}, do you know\n"
	.string "how to catch a Pokémon?\p"
	.string "I'll demonstrate how to catch\n"
	.string "one, so just watch, OK?$"

Route_202_EventScript_Rival_Gives_Pokeballs_And_Leaves_Text_0:
	.string "Dawn: Giggle...\n"
	.string "See? Isn't it neat?\p"
	.string "Actually it's better to lower your\n"
	.string "target's HP more than I did.\p"
	.string "It's important to get the Pokemon's\n"
	.string "HP down as low as possible.\p"
	.string "This is because a healthy Pokemon\n"
	.string "is very difficult to catch.\p"
	.string "Oh, Pokemon also get easier to catch\n"
	.string "if you make them sleep or something\l"
	.string "by using a Pokemon's move.\p"
	.string "Ok, {PLAYER}, to get you\n"
	.string "started, I'll give you five\l"
	.string "Poke Balls!$"

Route_202_EventScript_Rival_Gives_Pokeballs_And_Leaves_Text_1:
	.string "Lucas: And that's how it's done.\p"
	.string "Actually, I should have lowered the\n"
	.string "target's HP some more.\p"
	.string "Yup, the important thing is to lower\n"
	.string "the Pokémon's HP as much as possible.\p"
	.string "See, a healthy Pokémon isn't easy to\n"
	.string "catch.\p"
	.string "Oh, yeah. They also get easier to\n"
	.string "catch if you make one of your\l"
	.string "Pokémon put them to sleep or such.\p"
	.string "Here, {PLAYER}, I'll give you\n"
	.string "five Poké Balls to get you started.\p$"

Route_202_EventScript_Rival_Gives_Pokeballs_And_Leaves_Text_2:
	.string "If you have lots of Pokemon with you,\n"
	.string "it will be safer for longer trips\p"
	.string "Plus, it will be a lot more fun\n"
	.string "having your Pokemon friends along.\p"
	.string "Ok, I need to get going.\n"
	.string "Bye, now!$"

Route_202_EventScript_Youngster_Tristan_Text_0:
	.string "You're a Pokemon Trainer, and so am I\n"
	.string "Our eyes met, so battle we must!$"

Route_202_EventScript_Youngster_Tristan_Text_1:
	.string "Too Strong!\n"
	.string "Too Strong!$"

Route_202_EventScript_Youngster_Tristan_Text_2:
	.string "Don't be shy about talking to\n"
	.string "Trainers you's like to battle.\p"
	.string "Pokemon grow stronger and stronger\n"
	.string "from battling.$"

Route_202_EventScript_Trainer_Tips_Text_0:
	.string "Trainer Tips!\p"
	.string "All Pokemon that are involved in\n"
	.string "a battle earn Exp. points!\p"
	.string "The more your Pokemon battle,\n"
	.string "the stronger they will become.$"

Route_202_EventScript_Lass_Natalie_Text_0:
	.string "I spy, with my little eye...\n"
	.string "A Trainer!\p"
	.string "A battle. please!$"

Route_202_EventScript_Lass_Natalie_Text_1:
	.string "Oh, boo!\n"
	.string "I can't win!$"

Route_202_EventScript_Lass_Natalie_Text_2:
	.string "My Pokemon are all tuckered out!\n"
	.string "I need to go to a Pokemon Center!$"

Route_202_EventScript_Youngster_Logan_Text_0:
	.string "Let's have a Pokemon battle!\n"
	.string "Humph! but I'm gonna win!$"

Route_202_EventScript_Youngster_Logan_Text_1:
	.string "You beat me?!\n"
	.string "You've gt talent!$"

Route_202_EventScript_Youngster_Logan_Text_2:
	.string "It was fun battling!\n"
	.string "Yup! I'm going to battle everyone!$"

Route_202_EventScript_Location_Sign_1_Text_0:
	.string "Rt. 202\n"
	.string "Jubilife City$"

Route_202_EventScript_Youngster_Talking_About_Encounters_Text_0:
	.string "Some Pokemon only appear in the\n"
	.string "morning.\p"
	.string "Some only come out at night.\p"
	.string "I'll keep looking till I've seen them\n"
	.string "all!$"
