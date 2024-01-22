Route202_MapScripts::
   map_script MAP_SCRIPT_ON_TRANSITION, Route202_OnTransition
	.2byte 0

Route202_OnTransition::
	call_if_unset FLAG_CATCHING_TUTORIAL_DONE, Route202_Hide_Dawn_Lucas
   end

Route202_Hide_Dawn_Lucas::
   checkplayergender
	call_if_eq VAR_RESULT, MALE, Route_202_EventScript_Hide_Lucas
	call_if_eq VAR_RESULT, FEMALE, Route_202_EventScript_Hide_Dawn
   end

Route_202_EventScript_Hide_Lucas:
   setflag FLAG_HIDE_LUCAS_ROUTE_202
   end

Route_202_EventScript_Hide_Dawn:
   setflag FLAG_HIDE_DAWN_ROUTE_202
   end

Route_202_EventScript_Rival_2_Stops_Until_You_Talk_To_Mom_1::
   checkplayergender
	call_if_eq VAR_RESULT, MALE, Route_202_EventScript_Dawn_Stops_You_1
	call_if_eq VAR_RESULT, FEMALE, Route_202_EventScript_Lucas_Stops_You_1
   end

Route_202_EventScript_Rival_2_Stops_Until_You_Talk_To_Mom_2::
	call_if_eq VAR_RESULT, MALE, Route_202_EventScript_Dawn_Stops_You_2
	call_if_eq VAR_RESULT, FEMALE, Route_202_EventScript_Lucas_Stops_You_2
   end

Route_202_EventScript_Rival_2_Stops_Until_You_Talk_To_Mom_3::
	call_if_eq VAR_RESULT, MALE, Route_202_EventScript_Dawn_Stops_You_3
	call_if_eq VAR_RESULT, FEMALE, Route_202_EventScript_Lucas_Stops_You_3
   end

Route_202_EventScript_Rival_2_Stops_Until_You_Talk_To_Mom_4::
	call_if_eq VAR_RESULT, MALE, Route_202_EventScript_Dawn_Stops_You_4
	call_if_eq VAR_RESULT, FEMALE, Route_202_EventScript_Lucas_Stops_You_4
   end

Route_202_EventScript_Dawn_Stops_You_1::
   applymovement OBJ_EVENT_ID_PLAYER, Route_202_Movement_Player_Faces_Left
   playse SE_PIN
   applymovement 6, Common_Movement_ExclamationMark
   waitmovement 0
   applymovement 6, Common_Movement_Delay48
   waitmovement 0
   applymovement 6, Route_202_Movement_Rival_2_Comes_To_You_1
   waitmovement 0
   msgbox Route202_Text_Dawn_Tells_To_Go_Home, MSGBOX_SIGN
   applymovement 6, Route_202_Movement_Rival_2_Walks_Right
   applymovement OBJ_EVENT_ID_PLAYER, Route_202_Movement_Player_Gets_Back
   waitmovement 0
   applymovement 6, Route_202_Movement_Rival_2_Goes_Back_1
   waitmovement 0
   end

Route_202_EventScript_Dawn_Stops_You_2::
   applymovement OBJ_EVENT_ID_PLAYER, Route_202_Movement_Player_Faces_Left
   playse SE_PIN
   applymovement 6, Common_Movement_ExclamationMark
   waitmovement 0
   applymovement 6, Common_Movement_Delay48
   waitmovement 0
   applymovement 6, Route_202_Movement_Rival_2_Comes_To_You_2
   waitmovement 0
   msgbox Route202_Text_Dawn_Tells_To_Go_Home, MSGBOX_SIGN
   applymovement 6, Route_202_Movement_Rival_2_Walks_Right
   applymovement OBJ_EVENT_ID_PLAYER, Route_202_Movement_Player_Gets_Back
   waitmovement 0
   applymovement 6, Route_202_Movement_Rival_2_Goes_Back_2
   waitmovement 0
   end

Route_202_EventScript_Dawn_Stops_You_3::
   applymovement OBJ_EVENT_ID_PLAYER, Route_202_Movement_Player_Faces_Left
   playse SE_PIN
   applymovement 6, Common_Movement_ExclamationMark
   waitmovement 0
   applymovement 6, Common_Movement_Delay48
   waitmovement 0
   applymovement 6, Route_202_Movement_Rival_2_Comes_To_You_3
   waitmovement 0
   msgbox Route202_Text_Dawn_Tells_To_Go_Home, MSGBOX_SIGN
   applymovement 6, Route_202_Movement_Rival_2_Walks_Right
   applymovement OBJ_EVENT_ID_PLAYER, Route_202_Movement_Player_Gets_Back
   waitmovement 0
   applymovement 6, Route_202_Movement_Rival_2_Goes_Back_3
   waitmovement 0
   end

Route_202_EventScript_Dawn_Stops_You_4::
   applymovement OBJ_EVENT_ID_PLAYER, Route_202_Movement_Player_Faces_Left
   playse SE_PIN
   applymovement 6, Common_Movement_ExclamationMark
   waitmovement 0
   applymovement 6, Common_Movement_Delay48
   waitmovement 0
   applymovement 6, Route_202_Movement_Rival_2_Comes_To_You_4
   waitmovement 0
   msgbox Route202_Text_Dawn_Tells_To_Go_Home, MSGBOX_SIGN
   applymovement 6, Route_202_Movement_Rival_2_Walks_Right
   applymovement OBJ_EVENT_ID_PLAYER, Route_202_Movement_Player_Gets_Back
   waitmovement 0
   applymovement 6, Route_202_Movement_Rival_2_Goes_Back_4
   waitmovement 0
   end

Route_202_EventScript_Lucas_Stops_You_1::
   applymovement OBJ_EVENT_ID_PLAYER, Route_202_Movement_Player_Faces_Left
   playse SE_PIN
   applymovement 5, Common_Movement_ExclamationMark
   waitmovement 0
   applymovement 5, Common_Movement_Delay48
   waitmovement 0
   applymovement 5, Route_202_Movement_Rival_2_Comes_To_You_1
   waitmovement 0
   msgbox Route202_Text_Lucas_Tells_To_Go_Home, MSGBOX_SIGN
   applymovement 5, Route_202_Movement_Rival_2_Walks_Right
   applymovement OBJ_EVENT_ID_PLAYER, Route_202_Movement_Player_Gets_Back
   waitmovement 0
   applymovement 5, Route_202_Movement_Rival_2_Goes_Back_1
   waitmovement 0
   end

Route_202_EventScript_Lucas_Stops_You_2::
   applymovement OBJ_EVENT_ID_PLAYER, Route_202_Movement_Player_Faces_Left
   playse SE_PIN
   applymovement 5, Common_Movement_ExclamationMark
   waitmovement 0
   applymovement 5, Common_Movement_Delay48
   waitmovement 0
   applymovement 5, Route_202_Movement_Rival_2_Comes_To_You_2
   waitmovement 0
   msgbox Route202_Text_Lucas_Tells_To_Go_Home, MSGBOX_SIGN
   applymovement 5, Route_202_Movement_Rival_2_Walks_Right
   applymovement OBJ_EVENT_ID_PLAYER, Route_202_Movement_Player_Gets_Back
   waitmovement 0
   applymovement 5, Route_202_Movement_Rival_2_Goes_Back_2
   waitmovement 0
   end

Route_202_EventScript_Lucas_Stops_You_3::
   applymovement OBJ_EVENT_ID_PLAYER, Route_202_Movement_Player_Faces_Left
   playse SE_PIN
   applymovement 5, Common_Movement_ExclamationMark
   waitmovement 0
   applymovement 5, Common_Movement_Delay48
   waitmovement 0
   applymovement 5, Route_202_Movement_Rival_2_Comes_To_You_3
   waitmovement 0
   msgbox Route202_Text_Lucas_Tells_To_Go_Home, MSGBOX_SIGN
   applymovement 5, Route_202_Movement_Rival_2_Walks_Right
   applymovement OBJ_EVENT_ID_PLAYER, Route_202_Movement_Player_Gets_Back
   waitmovement 0
   applymovement 5, Route_202_Movement_Rival_2_Goes_Back_3
   waitmovement 0
   end

Route_202_EventScript_Lucas_Stops_You_4::
   applymovement OBJ_EVENT_ID_PLAYER, Route_202_Movement_Player_Faces_Left
   playse SE_PIN
   applymovement 5, Common_Movement_ExclamationMark
   waitmovement 0
   applymovement 5, Common_Movement_Delay48
   waitmovement 0
   applymovement 5, Route_202_Movement_Rival_2_Comes_To_You_4
   waitmovement 0
   msgbox Route202_Text_Lucas_Tells_To_Go_Home, MSGBOX_SIGN
   applymovement 5, Route_202_Movement_Rival_2_Walks_Right
   applymovement OBJ_EVENT_ID_PLAYER, Route_202_Movement_Player_Gets_Back
   waitmovement 0
   applymovement 5, Route_202_Movement_Rival_2_Goes_Back_4
   waitmovement 0
   end

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

Route202_EventScript_Beta_Ends_Here::
   lockall
	msgbox Route202_Text_Beta_Ends_Here, MSGBOX_SIGN
   waitmessage
   applymovement OBJ_EVENT_ID_PLAYER, Route_202_Movement_Go_Back
   waitmovement 0
   releaseall
	end

Route202_EventScript_Location_Sign::
	msgbox Route202_Text_Location_Sign, MSGBOX_SIGN
	end

Route202_EventScript_Trainer_Tips::
	msgbox Route202_Text_Trainer_Tips, MSGBOX_SIGN
	end

Route202_EventScript_Location_Sign_1::
	msgbox Route202_Text_Location_Sign_1, MSGBOX_SIGN
	end

Route202_EventScript_NPC::
	msgbox Route202_Text_NPC, MSGBOX_NPC
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

Route202_Text_Location_Sign:
   .string "Rt. 202\n"
   .string "Sandgem Town$"

Route202_Text_Trainer_Tips:
   .string "Trainer Tips!\p"
   .string "All Pokemon that are involved in\n"
   .string "a battle earn Exp. points!\p"
   .string "The more your Pokemon battle,\n"
   .string "the stronger they will become.$"

Route202_Text_Location_Sign_1:
   .string "Rt. 202\n"
   .string "Jubilife City$"

Route202_Text_NPC:
   .string "Some Pokemon only appear in the\n"
   .string "morning.\p"
   .string "Some only come out at night.\p"
   .string "I'll keep looking till I've seen them\n"
   .string "all!$"

Route202_Text_Beta_Ends_Here:
   .string "This beta ends here.\n"
   .string "Hope you liked the hack.$"

Route202_Text_Dawn_Tells_To_Go_Home:
   .string "Dawn: {PLAYER}?!\p"
   .string "Did you tell your family that you're\n"
   .string "helping the professor?\p"
   .string "...You didn't, did you?\p"
   .string "I know that you're really eager to\n"
   .string "see all kinds of Pokemon.\p"
   .string "But you shouldn't make your mom\n"
   .string "worry that you've disappeared.$"

Route202_Text_Lucas_Tells_To_Go_Home:
   .string "Dawn: {PLAYER}?!\p"
   .string "Did you tell your family that you're\n"
   .string "helping the professor?\p"
   .string "...You didn't, did you?\p"
   .string "I know that you're really eager to\n"
   .string "see all kinds of Pokemon.\p"
   .string "But you shouldn't make your mom\n"
   .string "worry that you've disappeared.$"

Route_202_Movement_Go_Back:
   walk_down
   step_end

Route_202_Movement_Player_Faces_Left:
   face_left
   step_end

Route_202_Movement_Rival_2_Comes_To_You_1:
   walk_right
   walk_right
   walk_right
   walk_right
   walk_up
   walk_up
   walk_right
   step_end

Route_202_Movement_Rival_2_Comes_To_You_2:
   walk_right
   walk_right
   walk_right
   walk_right
   walk_up
   walk_right
   step_end

Route_202_Movement_Rival_2_Comes_To_You_3:
   walk_right
   walk_right
   walk_right
   walk_right
   walk_right
   step_end

Route_202_Movement_Rival_2_Comes_To_You_4:
   walk_right
   walk_right
   walk_right
   walk_right
   walk_down
   walk_right
   step_end

Route_202_Movement_Rival_2_Walks_Right:
   walk_right
   step_end

Route_202_Movement_Player_Gets_Back:
   walk_right
   face_left
   step_end

Route_202_Movement_Rival_2_Goes_Back_1:
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

Route_202_Movement_Rival_2_Goes_Back_2:
   walk_left
   walk_left
   walk_left
   walk_left
   walk_left
   walk_left
   walk_down
   face_right
   step_end

Route_202_Movement_Rival_2_Goes_Back_3:
   walk_left
   walk_left
   walk_left
   walk_left
   walk_left
   walk_left
   face_right
   step_end

Route_202_Movement_Rival_2_Goes_Back_4:
   walk_left
   walk_left
   walk_left
   walk_left
   walk_left
   walk_left
   walk_up
   face_right
   step_end
