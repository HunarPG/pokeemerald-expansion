Route202_MapScripts::
	.byte 0

Route202_EventScript_Youngster_Tristan::
	trainerbattle_single TRAINER_SAWYER_1, Route202_Text_Youngster_Tristan_Intro, Route202_Text_Youngster_Tristan_Defeated
	msgbox Route202_Text_Youngster_Tristan_PostBattle, MSGBOX_AUTOCLOSE
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
