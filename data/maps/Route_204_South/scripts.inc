Route_204_South_MapScripts::
	.byte 0


Route_204_South_EventScript_Lass_Sarah::
	trainerbattle_single TRAINER_SARAH, Route_204_South_EventScript_Lass_Sarah_Text_0, Route_204_South_EventScript_Lass_Sarah_Text_1
	msgbox Route_204_South_EventScript_Lass_Sarah_Text_2, MSGBOX_AUTOCLOSE
	return


Route_204_South_EventScript_Route_204_South_Sign_1::
	msgbox Route_204_South_EventScript_Route_204_South_Sign_1_Text_0, MSGBOX_SIGN
	return


Route_204_South_EventScript_Route_204_South_Sign_2::
	msgbox Route_204_South_EventScript_Route_204_South_Sign_2_Text_0, MSGBOX_SIGN
	return


Route_204_South_EventScript_Youngster_Tyler::
	trainerbattle_single TRAINER_TYLER, Route_204_South_EventScript_Youngster_Tyler_Text_0, Route_204_South_EventScript_Youngster_Tyler_Text_1
	msgbox Route_204_South_EventScript_Youngster_Tyler_Text_2, MSGBOX_AUTOCLOSE
	return


Route_204_South_EventScript_Lass_Samantha::
	trainerbattle_single TRAINER_SAMANTHA, Route_204_South_EventScript_Lass_Samantha_Text_0, Route_204_South_EventScript_Lass_Samantha_Text_1
	msgbox Route_204_South_EventScript_Lass_Samantha_Text_2, MSGBOX_AUTOCLOSE
	return


Route_204_South_EventScript_Lass_Sarah_Text_0:
	.string "Oh, a weak-looking Trainer...\n"
	.string "Do you want to have a go?$"

Route_204_South_EventScript_Lass_Sarah_Text_1:
	.string "Aww...\n"
	.string "I should have said no.$"

Route_204_South_EventScript_Lass_Sarah_Text_2:
	.string "Oh, you’re so mean!\n"
	.string "I just started training Pokémon!\n$"

Route_204_South_EventScript_Route_204_South_Sign_1_Text_0:
	.string "Rt. 204\n"
	.string "Jubilife City$"

Route_204_South_EventScript_Route_204_South_Sign_2_Text_0:
	.string "Ravaged Path$"

Route_204_South_EventScript_Youngster_Tyler_Text_0:
	.string "I’ll beat you with the Magikarp my dad\n"
	.string "gave me!$"

Route_204_South_EventScript_Youngster_Tyler_Text_1:
	.string "But they’re Pokémon I got from my\n"
	.string "dad...$"

Route_204_South_EventScript_Youngster_Tyler_Text_2:
	.string "Who gave you your first Pokémon?\p"
	.string "Your first Pokémon is the one with\n"
	.string "the most fond memories, I think.$"

Route_204_South_EventScript_Lass_Samantha_Text_0:
	.string "May I please trouble you for a\n"
	.string "battle?$"

Route_204_South_EventScript_Lass_Samantha_Text_1:
	.string "Oh...\n"
	.string "You’re so strong...$"

Route_204_South_EventScript_Lass_Samantha_Text_2:
	.string "Maybe I could have won if my Pokémon\n"
	.string "was holding a Berry...$"
