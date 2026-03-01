Route_203_MapScripts::
	.byte 0


Route_203_EventScript_Sign_1::
	msgbox Route_203_EventScript_Sign_1_Text_0, MSGBOX_SIGN
	return


Route_203_EventScript_Youngster_Michael::
	trainerbattle_single TRAINER_MICHAEL, Route_203_EventScript_Youngster_Michael_Text_0, Route_203_EventScript_Youngster_Michael_Text_1
	msgbox Route_203_EventScript_Youngster_Michael_Text_2, MSGBOX_AUTOCLOSE
	return


Route_203_EventScript_Girl::
	msgbox Route_203_EventScript_Girl_Text_0, MSGBOX_NPC
	return


Route_203_EventScript_Trainer_Tips_1::
	msgbox Route_203_EventScript_Trainer_Tips_1_Text_0, MSGBOX_SIGN
	return


Route_203_EventScript_Youngster_Dallas::
	trainerbattle_single TRAINER_DALLAS, Route_203_EventScript_Youngster_Dallas_Text_0, Route_203_EventScript_Youngster_Dallas_Text_1
	msgbox Route_203_EventScript_Youngster_Dallas_Text_2, MSGBOX_AUTOCLOSE
	return


Route_203_EventScript_Youngster_Sebastian::
	trainerbattle_single TRAINER_SEBASTIAN, Route_203_EventScript_Youngster_Sebastian_Text_0, Route_203_EventScript_Youngster_Sebastian_Text_1
	msgbox Route_203_EventScript_Youngster_Sebastian_Text_2, MSGBOX_AUTOCLOSE
	return


Route_203_EventScript_Lass_Kaitlin::
	trainerbattle_single TRAINER_KAITLIN, Route_203_EventScript_Lass_Kaitlin_Text_0, Route_203_EventScript_Lass_Kaitlin_Text_1
	msgbox Route_203_EventScript_Lass_Kaitlin_Text_2, MSGBOX_AUTOCLOSE
	return


Route_203_EventScript_Trainer_Tips_2::
	msgbox Route_203_EventScript_Trainer_Tips_2_Text_0, MSGBOX_SIGN
	return


Route_203_EventScript_Lass_Madeline::
	trainerbattle_single TRAINER_MADELINE_1, Route_203_EventScript_Lass_Madeline_Text_0, Route_203_EventScript_Lass_Madeline_Text_1
	msgbox Route_203_EventScript_Lass_Madeline_Text_2, MSGBOX_AUTOCLOSE
	return


Route_203_EventScript_Sign_2::
	msgbox Route_203_EventScript_Sign_2_Text_0, MSGBOX_SIGN
	return


Route_203_EventScript_Sign_1_Text_0:
	.string "Rt. 203\n"
	.string "Jubilife City$"

Route_203_EventScript_Youngster_Michael_Text_0:
	.string "I get my get-up-and-go from my\n"
	.string "Pokémon!\p"
	.string "Here we go!\n"
	.string "Kricketot! Zubat!$"

Route_203_EventScript_Youngster_Michael_Text_1:
	.string "Ack! My Pokémon...$"

Route_203_EventScript_Youngster_Michael_Text_2:
	.string "Keep out of the grass or dodge the\n"
	.string "eyes of Trainers...?\p"
	.string "rI always have a tough time choosing.$"

Route_203_EventScript_Girl_Text_0:
	.string "Your favorite Pokémon should be placed\n"
	.string "at the top left of your party list.\p"
	.string "That way, it will be the first to go out\n"
	.string "in a battle.$"

Route_203_EventScript_Trainer_Tips_1_Text_0:
	.string "Trainer Tips!\p"
	.string "Pokémon moves use energy called\n"
	.string "Power Points, or PP for short.\p"
	.string "If the PP of moves runs low, head for\n"
	.string "any Pokémon Center.$"

Route_203_EventScript_Youngster_Dallas_Text_0:
	.string "I’m never apart from my Shinx.\n"
	.string "Our bond is strong!$"

Route_203_EventScript_Youngster_Dallas_Text_1:
	.string "So sad...\n"
	.string "And so crushed...$"

Route_203_EventScript_Youngster_Dallas_Text_2:
	.string "I don’t bear grudges over losing.\n"
	.string "But I promise I’ll get tougher!$"

Route_203_EventScript_Youngster_Sebastian_Text_0:
	.string "Before I challenge the Pokémon Gym\n"
	.string "Leader, I’ll test my strength on you!$"

Route_203_EventScript_Youngster_Sebastian_Text_1:
	.string "I guess it means I’m not ready for\n"
	.string "the Gym challenge yet...$"

Route_203_EventScript_Youngster_Sebastian_Text_2:
	.string "I guess if you don’t have a single\n"
	.string "Gym Badge, you’re a total nobody...$"

Route_203_EventScript_Lass_Kaitlin_Text_0:
	.string "I found a Trainer while looking for\n"
	.string "some Pokémon!$"

Route_203_EventScript_Lass_Kaitlin_Text_1:
	.string "Hunh? You’re finished so soon?$"

Route_203_EventScript_Lass_Kaitlin_Text_2:
	.string "I walk through tall grass until I\n"
	.string "find the Pokémon I want.$"

Route_203_EventScript_Trainer_Tips_2_Text_0:
	.string "Trainer Tips!\p"
	.string "If a Pokémon is about to evolve,\n"
	.string "it can be instantly stopped.\p"
	.string "Press the B Button during evolution\n"
	.string "to startle the Pokémon into stopping.\p"
	.string "That is how evolution can be\n"
	.string "canceled.$"

Route_203_EventScript_Lass_Madeline_Text_0:
	.string "I got a nifty-keen Gym Badge from\n"
	.string "the Gym Leader in Oreburgh City!$"

Route_203_EventScript_Lass_Madeline_Text_1:
	.string "Oh, I lost! Lalala!$"

Route_203_EventScript_Lass_Madeline_Text_2:
	.string "I’m collecting lots of Gym Badges.\n"
	.string "They’re so sparkly and pretty!$"

Route_203_EventScript_Sign_2_Text_0:
	.string "Rt. 203\n"
	.string "Oreburgh City$"
