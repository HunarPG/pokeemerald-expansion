Route202_MapScripts::
	.byte 0

Route202_EventScript_Youngster_Tristan::
	trainerbattle_single TRAINER_SAWYER_1, Route202_Text_Youngster_Tristan_Intro, Route202_Text_Youngster_Tristan_Defeated
	msgbox Route202_Text_Youngster_Tristan_PostBattle, MSGBOX_AUTOCLOSE
	end

Route202_EventScript_Lass_Natalie::
	trainerbattle_single TRAINER_GRUNT_AQUA_HIDEOUT_1, Route202_Text_Youngster_Lass_Natalie_Intro, Route202_Text_Lass_Natalie_Defeated
	msgbox Route202_Text_Lass_Natalie_PostBattle, MSGBOX_AUTOCLOSE
	end

Route202_EventScript_Youngster_Logan::
	trainerbattle_single TRAINER_GRUNT_AQUA_HIDEOUT_2, Route202_Text_Youngster_Logan_Intro, Route202_Text_Youngster_Logan_Defeated
	msgbox Route202_Text_Youngster_Logan_PostBattle, MSGBOX_AUTOCLOSE
	end

Route202_Text_Youngster_Tristan_Intro:
   .string "You're a Pokemon Trainer, and so am I\n"
   .string "Our eyes met, so battle we must!$"

Route202_Text_Youngster_Tristan_Defeated:
   .string "Too Strong!\n"
   .string "Too Strong!$"

Route202_Text_Youngster_Tristan_PostBattle:
   .string "Don't be shy about talking to\n"
   .string "Trainers you's like to battle.\p"
   .string "Pokemon grow stronger and stronger\n"
   .string "from battling.$"

Route202_Text_Youngster_Lass_Natalie_Intro:
   .string "I spy, with my little eye...\n"
   .string "A Trainer!\p"
   .string "A battle. please!$"

Route202_Text_Lass_Natalie_Defeated:
   .string "Oh, boo!\n"
   .string "I can't win!$"

Route202_Text_Lass_Natalie_PostBattle:
   .string "My Pokemon are all tuckered out!\n"
   .string "I need to go to a Pokemon Center!$"

Route202_Text_Youngster_Logan_Intro:
   .string "Let's have a Pokemon battle!\n"
   .string "Humph! but I'm gonna win!$"

Route202_Text_Youngster_Logan_Defeated:
   .string "You beat me?!\n"
   .string "You've gt talent!$"

Route202_Text_Youngster_Logan_PostBattle:
   .string "It was fun battling!\n"
   .string "Yup! I'm going to battle everyone!$"
