Route_204_MapScripts::
	.byte 0


Route_204_EventScript_Lass_Sarah::
	trainerbattle_single TRAINER_SARAH, Route_204_Text_Lass_Sarah_Intro, Route_204_Text_Lass_Sarah_Defeated
	msgbox Route_204_Text_Lass_Sarah_PostBattle, MSGBOX_AUTOCLOSE
	return


Route_204_EventScript_Youngster_Tyler::
	trainerbattle_single TRAINER_TYLER, Route_204_Text_Lass_Tyler_Intro, Route_204_Text_Lass_Tyler_Defeated
	msgbox Route_204_Text_Lass_Tyler_PostBattle, MSGBOX_AUTOCLOSE
	return


Route_204_EventScript_Lass_Samantha::
	trainerbattle_single TRAINER_SAMANTHA, Route_204_Text_Lass_Samantha_Intro, Route_204_Text_Lass_Samantha_Defeated
	msgbox Route_204_Text_Lass_Samantha_PostBattle, MSGBOX_AUTOCLOSE
	return


Route_204_Text_Lass_Sarah_Intro::
	.string "Oh, a weak-looking Trainer...\n"
	.string "Do you want to have a go?$"

Route_204_Text_Lass_Sarah_Defeated::
	.string "Aww...\n"
	.string "I should have said no.$"

Route_204_Text_Lass_Sarah_PostBattle::
	.string "Oh, you’re so mean!\n"
	.string "I just started training Pokémon!\n$"

Route_204_Text_Lass_Tyler_Intro::
	.string "I’ll beat you with the Magikarp my dad\n"
	.string "gave me!$"

Route_204_Text_Lass_Tyler_Defeated::
	.string "But they’re Pokémon I got from my\n"
	.string "dad...$"

Route_204_Text_Lass_Tyler_PostBattle::
	.string "Who gave you your first Pokémon?\p"
	.string "Your first Pokémon is the one with\n"
	.string "the most fond memories, I think.$"

Route_204_Text_Lass_Samantha_Intro::
	.string "May I please trouble you for a\n"
	.string "battle?$"

Route_204_Text_Lass_Samantha_Defeated::
	.string "Oh...\n"
	.string "You’re so strong...$"

Route_204_Text_Lass_Samantha_PostBattle::
	.string "Maybe I could have won if my Pokémon\n"
	.string "was holding a Berry...$"
