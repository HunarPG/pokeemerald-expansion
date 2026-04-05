Route203_MapScripts::
	.byte 0


Route203_EventScript_Barry::
	lockall
	playse SE_PIN
	applymovement LOCALID_BARRY_ROUTE_203, Route203_EventScript_Barry_Movement_0
	waitmovement 0
	delay 30
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	switch VAR_TEMP_1
	case 19, Route203_EventScript_Barry_3
	case 20, Route203_EventScript_Barry_4
	case 21, Route203_EventScript_Barry_5
	case 22, Route203_EventScript_Barry_6
Route203_EventScript_Barry_1:
	waitmovement 0
	msgbox Route203_EventScript_Barry_Text_0, MSGBOX_NPC
	switch VAR_STARTER_MON
	case 0, Route203_EventScript_Barry_8
	case 1, Route203_EventScript_Barry_9
	case 2, Route203_EventScript_Barry_10
	return

Route203_EventScript_Barry_3:
	applymovement LOCALID_BARRY_ROUTE_203, Route203_EventScript_Barry_Movement_1
	goto Route203_EventScript_Barry_1

Route203_EventScript_Barry_4:
	applymovement LOCALID_BARRY_ROUTE_203, Route203_EventScript_Barry_Movement_2
	goto Route203_EventScript_Barry_1

Route203_EventScript_Barry_5:
	applymovement LOCALID_BARRY_ROUTE_203, Route203_EventScript_Barry_Movement_3
	goto Route203_EventScript_Barry_1

Route203_EventScript_Barry_6:
	applymovement LOCALID_BARRY_ROUTE_203, Route203_EventScript_Barry_Movement_4
	goto Route203_EventScript_Barry_1

Route203_EventScript_Barry_8:
	goto Route203_EventScript_Start_Barry_Battle_Turtwig
	return

Route203_EventScript_Barry_9:
	goto Route203_EventScript_Start_Barry_Battle_Chimchar
	return

Route203_EventScript_Barry_10:
	goto Route203_EventScript_Start_Barry_Battle_Piplup
	return


Route203_EventScript_Start_Barry_Battle_Turtwig::
	trainerbattle_no_intro TRAINER_BARRY_ROUTE_203_TURTWIG, Route203_EventScript_Start_Barry_Battle_Turtwig_Text_0
	goto Route203_EventScript_After_Barry_Battle
	return


Route203_EventScript_Start_Barry_Battle_Chimchar::
	trainerbattle_no_intro TRAINER_BARRY_ROUTE_203_CHIMCHAR, Route203_EventScript_Start_Barry_Battle_Turtwig_Text_0
	goto Route203_EventScript_After_Barry_Battle
	return


Route203_EventScript_Start_Barry_Battle_Piplup::
	trainerbattle_no_intro TRAINER_BARRY_ROUTE_203_PIPLUP, Route203_EventScript_Start_Barry_Battle_Piplup_Text_0
	goto Route203_EventScript_After_Barry_Battle
	return


Route203_EventScript_After_Barry_Battle::
	msgbox Route203_EventScript_After_Barry_Battle_Text_0, MSGBOX_SIGN
	applymovement LOCALID_BARRY_ROUTE_203, Route203_EventScript_After_Barry_Battle_Movement_0
	waitmovement 0
	removeobject LOCALID_BARRY_ROUTE_203
	setflag FLAG_HIDE_BARRY_ROUTE_203
	setvar VAR_ROUTE203_STATE, 1
	releaseall
	end


Route203_EventScript_Sign_1::
	msgbox Route203_EventScript_Sign_1_Text_0, MSGBOX_SIGN
	return


Route203_EventScript_Youngster_Michael::
	trainerbattle_single TRAINER_MICHAEL, Route203_EventScript_Youngster_Michael_Text_0, Route203_EventScript_Youngster_Michael_Text_1
	msgbox Route203_EventScript_Youngster_Michael_Text_2, MSGBOX_AUTOCLOSE
	return


Route203_EventScript_Girl::
	msgbox Route203_EventScript_Girl_Text_0, MSGBOX_NPC
	return


Route203_EventScript_Trainer_Tips_1::
	msgbox Route203_EventScript_Trainer_Tips_1_Text_0, MSGBOX_SIGN
	return


Route203_EventScript_Youngster_Dallas::
	trainerbattle_single TRAINER_DALLAS, Route203_EventScript_Youngster_Dallas_Text_0, Route203_EventScript_Youngster_Dallas_Text_1
	msgbox Route203_EventScript_Youngster_Dallas_Text_2, MSGBOX_AUTOCLOSE
	return


Route203_EventScript_Youngster_Sebastian::
	trainerbattle_single TRAINER_SEBASTIAN, Route203_EventScript_Youngster_Sebastian_Text_0, Route203_EventScript_Youngster_Sebastian_Text_1
	msgbox Route203_EventScript_Youngster_Sebastian_Text_2, MSGBOX_AUTOCLOSE
	return


Route203_EventScript_Lass_Kaitlin::
	trainerbattle_single TRAINER_KAITLIN, Route203_EventScript_Lass_Kaitlin_Text_0, Route203_EventScript_Lass_Kaitlin_Text_1
	msgbox Route203_EventScript_Lass_Kaitlin_Text_2, MSGBOX_AUTOCLOSE
	return


Route203_EventScript_Trainer_Tips_2::
	msgbox Route203_EventScript_Trainer_Tips_2_Text_0, MSGBOX_SIGN
	return


Route203_EventScript_Lass_Madeline::
	trainerbattle_single TRAINER_MADELINE_1, Route203_EventScript_Lass_Madeline_Text_0, Route203_EventScript_Lass_Madeline_Text_1
	msgbox Route203_EventScript_Lass_Madeline_Text_2, MSGBOX_AUTOCLOSE
	return


Route203_EventScript_Sign_2::
	msgbox Route203_EventScript_Sign_2_Text_0, MSGBOX_SIGN
	return


Route203_EventScript_Barry_Movement_0:
	emote_exclamation_mark
	step_end

Route203_EventScript_Barry_Movement_1:
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	step_end

Route203_EventScript_Barry_Movement_2:
	walk_fast_left
	walk_fast_left
	walk_fast_down
	walk_fast_left
	walk_fast_left
	step_end

Route203_EventScript_Barry_Movement_3:
	walk_fast_left
	walk_fast_left
	walk_fast_down
	walk_fast_down
	walk_fast_left
	walk_fast_left
	step_end

Route203_EventScript_Barry_Movement_4:
	walk_fast_left
	walk_fast_left
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_left
	walk_fast_left
	step_end

Route203_EventScript_After_Barry_Battle_Movement_0:
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	step_end

Route203_EventScript_Barry_Text_0:
	.string "{RIVAL}: Hey! {PLAYER}!\n"
	.string "Tell me you got a little tougher!\p"
	.string "Me? Do you even need to ask?\n"
	.string "Of course I got tougher!\p"
	.string "Come on!\n"
	.string "I'll demonstrate it to you!$"

Route203_EventScript_Start_Barry_Battle_Turtwig_Text_0:
	.string "What just happened?\n"
	.string "I lost?!$"

Route203_EventScript_Start_Barry_Battle_Piplup_Text_0:
	.string "What's going on here?\n"
	.string "What, I lost?!$"

Route203_EventScript_After_Barry_Battle_Text_0:
	.string "{RIVAL}: Waah!\n"
	.string "What do you mean I lost?!\p"
	.string "Well, that's it!\n"
	.string "That's the last time I'll ever lose!\p"
	.string "I'm going to be the world's toughest\n"
	.string "Trainer, and you know it!\p"
	.string "The first thing to do is take on\n"
	.string "the Oreburgh City Pokémon Gym!\p"
	.string "I'm gonna toughen up for that,\n"
	.string "totally!$"

Route203_EventScript_Sign_1_Text_0:
	.string "Rt. 203\n"
	.string "Jubilife City$"

Route203_EventScript_Youngster_Michael_Text_0:
	.string "I get my get-up-and-go from my\n"
	.string "Pokémon!\p"
	.string "Here we go!\n"
	.string "Kricketot! Zubat!$"

Route203_EventScript_Youngster_Michael_Text_1:
	.string "Ack! My Pokémon...$"

Route203_EventScript_Youngster_Michael_Text_2:
	.string "Keep out of the grass or dodge the\n"
	.string "eyes of Trainers...?\p"
	.string "I always have a tough time choosing.$"

Route203_EventScript_Girl_Text_0:
	.string "Your favorite Pokémon should be placed\n"
	.string "at the top left of your party list.\p"
	.string "That way, it will be the first to go out\n"
	.string "in a battle.$"

Route203_EventScript_Trainer_Tips_1_Text_0:
	.string "Trainer Tips!\p"
	.string "Pokémon moves use energy called\n"
	.string "Power Points, or PP for short.\p"
	.string "If the PP of moves runs low, head for\n"
	.string "any Pokémon Center.$"

Route203_EventScript_Youngster_Dallas_Text_0:
	.string "I’m never apart from my Shinx.\n"
	.string "Our bond is strong!$"

Route203_EventScript_Youngster_Dallas_Text_1:
	.string "So sad...\n"
	.string "And so crushed...$"

Route203_EventScript_Youngster_Dallas_Text_2:
	.string "I don’t bear grudges over losing.\n"
	.string "But I promise I’ll get tougher!$"

Route203_EventScript_Youngster_Sebastian_Text_0:
	.string "Before I challenge the Pokémon Gym\n"
	.string "Leader, I’ll test my strength on you!$"

Route203_EventScript_Youngster_Sebastian_Text_1:
	.string "I guess it means I’m not ready for\n"
	.string "the Gym challenge yet...$"

Route203_EventScript_Youngster_Sebastian_Text_2:
	.string "I guess if you don’t have a single\n"
	.string "Gym Badge, you’re a total nobody...$"

Route203_EventScript_Lass_Kaitlin_Text_0:
	.string "I found a Trainer while looking for\n"
	.string "some Pokémon!$"

Route203_EventScript_Lass_Kaitlin_Text_1:
	.string "Hunh? You’re finished so soon?$"

Route203_EventScript_Lass_Kaitlin_Text_2:
	.string "I walk through tall grass until I\n"
	.string "find the Pokémon I want.$"

Route203_EventScript_Trainer_Tips_2_Text_0:
	.string "Trainer Tips!\p"
	.string "If a Pokémon is about to evolve,\n"
	.string "it can be instantly stopped.\p"
	.string "Press the B Button during evolution\n"
	.string "to startle the Pokémon into stopping.\p"
	.string "That is how evolution can be\n"
	.string "canceled.$"

Route203_EventScript_Lass_Madeline_Text_0:
	.string "I got a nifty-keen Gym Badge from\n"
	.string "the Gym Leader in Oreburgh City!$"

Route203_EventScript_Lass_Madeline_Text_1:
	.string "Oh, I lost! Lalala!$"

Route203_EventScript_Lass_Madeline_Text_2:
	.string "I’m collecting lots of Gym Badges.\n"
	.string "They’re so sparkly and pretty!$"

Route203_EventScript_Sign_2_Text_0:
	.string "Rt. 203\n"
	.string "Oreburgh City$"
