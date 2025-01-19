Jubilife_City_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Jubilife_City_OnTransition
	.byte 0


Jubilife_City_OnTransition::
	checkplayergender
	goto_if_eq VAR_RESULT, MALE, Jubilife_City_EventScript_Hide_Lucas
	goto_if_eq VAR_RESULT, FEMALE, Jubilife_City_EventScript_Hide_Dawn
	return


Jubilife_City_EventScript_Hide_Lucas::
	setflag FLAG_HIDE_LUCAS_JUBILIFE_CITY
	end


Jubilife_City_EventScript_Hide_Dawn::
	setflag FLAG_HIDE_DAWN_JUBILIFE_CITY
	end


Jubilife_City_EventScript_Rival_2_Tutorial_1::
	checkplayergender
	goto_if_eq VAR_RESULT, MALE, Jubilife_City_EventScript_Dawn_Tutorial_Take_Near_Looker_1
	goto_if_eq VAR_RESULT, FEMALE, Jubilife_City_EventScript_Lucas_Tutorial_Take_Near_Looker_1
	return


Jubilife_City_EventScript_Rival_2_Tutorial_2::
	checkplayergender
	goto_if_eq VAR_RESULT, MALE, Jubilife_City_EventScript_Dawn_Tutorial_Take_Near_Looker_2
	goto_if_eq VAR_RESULT, FEMALE, Jubilife_City_EventScript_Lucas_Tutorial_Take_Near_Looker_2
	return


Jubilife_City_EventScript_Rival_2_Tutorial_3::
	checkplayergender
	goto_if_eq VAR_RESULT, MALE, Jubilife_City_EventScript_Dawn_Tutorial_Take_Near_Looker_3
	goto_if_eq VAR_RESULT, FEMALE, Jubilife_City_EventScript_Lucas_Tutorial_Take_Near_Looker_3
	return


Jubilife_City_EventScript_Dawn_Tutorial_Take_Near_Looker_1::
	lockall
	applymovement 1, Movement_Jubiife_City_Rival_2_Comes_In_Sight_1
	waitmovement 0
	playse SE_PIN
	applymovement 1, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement 1, Common_Movement_Delay48
	waitmovement 0
	fadenewbgm MUS_DP_DAWN
	applymovement 1, Movement_Jubiife_City_Rival_2_Reaches_Player
	waitmovement 0
	msgbox Dawn_Talks_Before_Tutorial, MSGBOX_SIGN
	applymovement 1, Movement_Rival_2_Takes_Up_To_Looker_1
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Player_Goes_Up_To_Looker_1
	waitmovement 0
	goto Jubilife_City_EventScript_Dawn_Move_To_Looker_Cutscene
	return


Jubilife_City_EventScript_Lucas_Tutorial_Take_Near_Looker_1::
	lockall
	applymovement 2, Movement_Jubiife_City_Rival_2_Comes_In_Sight_1
	waitmovement 0
	playse SE_PIN
	applymovement 2, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement 2, Common_Movement_Delay48
	waitmovement 0
	fadenewbgm MUS_DP_LUCAS
	applymovement 2, Movement_Jubiife_City_Rival_2_Reaches_Player
	waitmovement 0
	msgbox Lucas_Talks_Before_Tutorial, MSGBOX_SIGN
	applymovement 2, Movement_Rival_2_Takes_Up_To_Looker_1
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Player_Goes_Up_To_Looker_1
	waitmovement 0
	goto Jubilife_City_EventScript_Lucas_Move_To_Looker_Cutscene
	return


Jubilife_City_EventScript_Dawn_Tutorial_Take_Near_Looker_2::
	lockall
	applymovement 1, Movement_Jubiife_City_Rival_2_Comes_In_Sight_2
	waitmovement 0
	playse SE_PIN
	applymovement 1, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement 1, Common_Movement_Delay48
	waitmovement 0
	fadenewbgm MUS_DP_DAWN
	applymovement 1, Movement_Jubiife_City_Rival_2_Reaches_Player
	waitmovement 0
	msgbox Dawn_Talks_Before_Tutorial, MSGBOX_SIGN
	applymovement 1, Movement_Rival_2_Takes_Up_To_Looker_2
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Player_Goes_Up_To_Looker_2
	waitmovement 0
	goto Jubilife_City_EventScript_Dawn_Move_To_Looker_Cutscene
	return


Jubilife_City_EventScript_Lucas_Tutorial_Take_Near_Looker_2::
	lockall
	applymovement 2, Movement_Jubiife_City_Rival_2_Comes_In_Sight_2
	waitmovement 0
	playse SE_PIN
	applymovement 2, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement 2, Common_Movement_Delay48
	waitmovement 0
	fadenewbgm MUS_DP_LUCAS
	applymovement 2, Movement_Jubiife_City_Rival_2_Reaches_Player
	waitmovement 0
	msgbox Lucas_Talks_Before_Tutorial, MSGBOX_SIGN
	applymovement 2, Movement_Rival_2_Takes_Up_To_Looker_2
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Player_Goes_Up_To_Looker_2
	waitmovement 0
	goto Jubilife_City_EventScript_Lucas_Move_To_Looker_Cutscene
	return


Jubilife_City_EventScript_Dawn_Tutorial_Take_Near_Looker_3::
	lockall
	applymovement 1, Movement_Jubiife_City_Rival_2_Comes_In_Sight_3
	waitmovement 0
	playse SE_PIN
	applymovement 1, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement 1, Common_Movement_Delay48
	waitmovement 0
	fadenewbgm MUS_DP_DAWN
	applymovement 1, Movement_Jubiife_City_Rival_2_Reaches_Player
	waitmovement 0
	msgbox Dawn_Talks_Before_Tutorial, MSGBOX_SIGN
	applymovement 1, Movement_Rival_2_Takes_Up_To_Looker_3
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Player_Goes_Up_To_Looker_3
	waitmovement 0
	goto Jubilife_City_EventScript_Dawn_Move_To_Looker_Cutscene
	return


Jubilife_City_EventScript_Lucas_Tutorial_Take_Near_Looker_3::
	lockall
	applymovement 2, Movement_Jubiife_City_Rival_2_Comes_In_Sight_3
	waitmovement 0
	playse SE_PIN
	applymovement 2, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement 2, Common_Movement_Delay48
	waitmovement 0
	fadenewbgm MUS_DP_LUCAS
	applymovement 2, Movement_Jubiife_City_Rival_2_Reaches_Player
	waitmovement 0
	msgbox Lucas_Talks_Before_Tutorial, MSGBOX_SIGN
	applymovement 2, Movement_Rival_2_Takes_Up_To_Looker_3
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Player_Goes_Up_To_Looker_3
	waitmovement 0
	goto Jubilife_City_EventScript_Lucas_Move_To_Looker_Cutscene
	return


Jubilife_City_EventScript_Dawn_Move_To_Looker_Cutscene::
	msgbox Dawn_Notice_looker, MSGBOX_SIGN
	applymovement 3, Movement_Looker_Moves_Near_Pokecenter
	waitmovement 0
	applymovement 1, Movement_Rival_2_Move_To_Contrfront_Looker
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Player_Move_To_Contrfront_Looker
	applymovement 3, Movement_Looker_Gets_Caught
	waitmovement 0
	msgbox Dawn_Confronts_Looker, MSGBOX_AUTOCLOSE
	applymovement 3, Movement_Looker_Delays_Then_Face_Down
	waitmovement 0
	playse SE_PIN
	applymovement 3, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement 1, Common_Movement_Delay48
	waitmovement 0
	playbgm MUS_PL_LOOKER, FALSE
	msgbox Looker_Says_You_Unmasked_Me, MSGBOX_SIGN
	applymovement 1, Movement_Rival_Walk_In_Place_Up
	msgbox Dawn_Begs_Pardon_To_Looker, MSGBOX_SIGN
	msgbox Looker_Introduces_Himself, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, Jubilife_City_EventScript_Looker_Continues
	goto_if_eq VAR_RESULT, NO, Jubilife_City_EventScript_Looker_Explain_The_Saying
	end


Jubilife_City_EventScript_Lucas_Move_To_Looker_Cutscene::
	msgbox Lucas_Notice_looker, MSGBOX_SIGN
	applymovement 3, Movement_Looker_Moves_Near_Pokecenter
	waitmovement 0
	applymovement 2, Movement_Rival_2_Move_To_Contrfront_Looker
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Player_Move_To_Contrfront_Looker
	applymovement 3, Movement_Looker_Gets_Caught
	waitmovement 0
	msgbox Lucas_Confronts_Looker, MSGBOX_AUTOCLOSE
	applymovement 3, Movement_Looker_Delays_Then_Face_Down
	waitmovement 0
	playse SE_PIN
	applymovement 3, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement 1, Common_Movement_Delay48
	waitmovement 0
	playbgm MUS_PL_LOOKER, FALSE
	msgbox Looker_Says_You_Unmasked_Me, MSGBOX_SIGN
	applymovement 2, Movement_Rival_Walk_In_Place_Up
	msgbox Lucas_Begs_Pardon_To_Looker, MSGBOX_SIGN
	msgbox Looker_Introduces_Himself, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, Jubilife_City_EventScript_Looker_Still_Reference_The_Saying
	goto_if_eq VAR_RESULT, NO, Jubilife_City_EventScript_Looker_Explain_The_Saying
	end


Jubilife_City_EventScript_Looker_Explain_The_Saying::
	msgbox Jubilife_City_EventScript_Looker_Explain_The_Saying_Text, MSGBOX_SIGN
	goto Jubilife_City_EventScript_Looker_Continues
	return


Jubilife_City_EventScript_Looker_Still_Reference_The_Saying::
	msgbox Jubilife_City_EventScript_Looker_Still_Reference_The_Saying_Text, MSGBOX_SIGN
	goto Jubilife_City_EventScript_Looker_Continues
	return


Jubilife_City_EventScript_Looker_Continues::
	msgbox Jubilife_City_EventScript_Looker_Gives_Vs_Recorder, MSGBOX_SIGN
	giveitem ITEM_VS_SEEKER
	msgbox Jubilife_City_EventScript_Looker_Explains_Vs_Recorder, MSGBOX_SIGN
	applymovement 3, Movement_Looker_Looks_Around
	waitmovement 0
	msgbox Jubilife_City_EventScript_Looker_Requests, MSGBOX_SIGN
	checkplayergender
	goto_if_eq VAR_RESULT, MALE, Jubilife_City_EventScript_Looker_Leaves_Dawn
	goto_if_eq VAR_RESULT, FEMALE, Jubilife_City_EventScript_Looker_Leaves_Lucas
	return


Jubilife_City_EventScript_Looker_Leaves_Dawn::
	applymovement 3, Movement_Looker_Goes_Near_Pokemon_Center
	applymovement 1, Movement_Face_Right
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Face_Right
	waitmovement 3
	applymovement 3, Movement_Looker_Leaves_To_North
	applymovement 1, Movement_Face_Up
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Face_Up
	waitmovement 3
	msgbox Dawn_Tells_Working_For_Police_Is_Hard, MSGBOX_SIGN
	fadedefaultbgm
	applymovement 1, Common_Movement_Delay48
	waitmovement 0
	applymovement 1, Movement_Rival_2_Goes_Near_School
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Face_Left
	waitmovement 1
	msgbox Dawn_Tells_About_Trainer_School, MSGBOX_SIGN
	applymovement 1, Rival_2_Comes_Near_You_Before_Leaving
	waitmovement 0
	msgbox Dawn_Tells_She_Saw_Barry_Going_In, MSGBOX_SIGN
	applymovement 1, Movement_Rival_2_Leaves_South
	waitmovement 0
	removeobject 1
	setflag FLAG_HIDE_DAWN_JUBILIFE_CITY
	setvar VAR_JUBILIFE_CITY_STATE, 1
	releaseall
	end


Jubilife_City_EventScript_Looker_Leaves_Lucas::
	applymovement 3, Movement_Looker_Goes_Near_Pokemon_Center
	applymovement 2, Movement_Face_Right
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Face_Right
	waitmovement 3
	applymovement 3, Movement_Looker_Leaves_To_North
	applymovement 2, Movement_Face_Up
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Face_Up
	waitmovement 3
	msgbox Lucas_Tells_Working_For_Police_Is_Hard, MSGBOX_SIGN
	fadedefaultbgm
	applymovement 2, Movement_Rival_2_Goes_Near_School
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Face_Left
	waitmovement 2
	msgbox Lucas_Tells_About_Trainer_School, MSGBOX_SIGN
	applymovement 2, Rival_2_Comes_Near_You_Before_Leaving
	waitmovement 0
	msgbox Lucas_Tells_He_Saw_Barry_Going_In, MSGBOX_SIGN
	applymovement 2, Movement_Rival_2_Leaves_South
	waitmovement 0
	setflag FLAG_HIDE_LUCAS_JUBILIFE_CITY
	removeobject 2
	setvar VAR_JUBILIFE_CITY_STATE, 1
	releaseall
	end


Movement_Jubiife_City_Rival_2_Comes_In_Sight_1:
	walk_left
	walk_down
	walk_down
	walk_down
	step_end

Movement_Jubiife_City_Rival_2_Comes_In_Sight_2:
	walk_down
	walk_down
	walk_down
	step_end

Movement_Jubiife_City_Rival_2_Comes_In_Sight_3:
	walk_right
	walk_down
	walk_down
	walk_down
	step_end

Movement_Jubiife_City_Rival_2_Reaches_Player:
	walk_down
	walk_down
	step_end

Movement_Rival_2_Takes_Up_To_Looker_1:
	walk_right
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

Movement_Rival_2_Takes_Up_To_Looker_2:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

Movement_Rival_2_Takes_Up_To_Looker_3:
	walk_left
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

Movement_Player_Goes_Up_To_Looker_1:
	walk_up
	walk_right
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

Movement_Player_Goes_Up_To_Looker_2:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

Movement_Player_Goes_Up_To_Looker_3:
	walk_up
	walk_left
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

Movement_Looker_Moves_Near_Pokecenter:
	face_left
	delay_16
	delay_16
	face_down
	delay_16
	delay_16
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	face_right
	delay_16
	delay_16
	face_up
	delay_16
	delay_16
	step_end

Movement_Rival_2_Move_To_Contrfront_Looker:
	walk_up
	walk_up
	step_end

Movement_Player_Move_To_Contrfront_Looker:
	walk_up
	walk_up
	walk_right
	walk_up
	step_end

Movement_Looker_Gets_Caught:
	walk_right
	walk_right
	walk_right
	step_end

Movement_Looker_Delays_Then_Face_Down:
	delay_16
	face_down
	step_end

Movement_Rival_Walk_In_Place_Up:
	walk_in_place_up
	step_end

Movement_Looker_Looks_Around:
	delay_16
	delay_16
	face_left
	delay_16
	delay_16
	face_right
	delay_16
	delay_16
	face_down
	step_end

Movement_Looker_Goes_Near_Pokemon_Center:
	walk_right
	walk_right
	walk_right
	face_left
	delay_16
	delay_16
	step_end

Movement_Looker_Leaves_To_North:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	delay_16
	delay_16
	step_end

Movement_Rival_2_Goes_Near_School:
	walk_down
	walk_left
	walk_left
	step_end

Rival_2_Comes_Near_You_Before_Leaving:
	walk_up
	walk_right
	walk_right
	step_end

Movement_Rival_2_Leaves_South:
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

Dawn_Talks_Before_Tutorial::
	.string "Dawn: Hi, {PLAYER}!\n"
	.string "Are you catching Pokémon?\p"
	.string "...Um...\p"
	.string "I think you'd feel a lot safer if you\n"
	.string "were to catch some more.\n"
	.string "You know, like when you need to travel\n"
	.string "to faraway places.\p"
	.string "Oh, I know! Don't you think it's\n"
	.string "better to know more about Pokémon?\p"
	.string "Sure it is!\n"
	.string "I know just the place.\p"
	.string "Come on!\n"
	.string "Don't be shy. Follow me!$"

Lucas_Talks_Before_Tutorial::
	.string "Lucas: Hey, {PLAYER}!\n"
	.string "How many Pokémon have you caught?\p"
	.string "Huh?\n"
	.string "I think you should catch some more.\p"
	.string "It might be more of a challenge\n"
	.string "raising a lot of Pokémon...\p"
	.string "But it's worth it. The more Pokémon\n"
	.string "you have, the happier you'll be.\p"
	.string "Hey, that's right! Don't you think it's\n"
	.string "better to know more about Pokémon?\p"
	.string "Sure it is!\n"
	.string "There's this great place for that.\p"
	.string "Come on! It's all right.\n"
	.string "Follow me.$"

Dawn_Notice_looker::
	.string "Dawn: That man...\n"
	.string "What is he doing?$"

Lucas_Notice_looker::
	.string "Lucas: That guy...\n"
	.string "What's he doing?$"

Dawn_Confronts_Looker::
	.string "Dawn: Um...$"

Lucas_Confronts_Looker::
	.string "Lucas: Uh, excuse...$"

Looker_Says_You_Unmasked_Me::
	.string "WHAAAT?!\p"
	.string "Mysterious man: ...How did you know?\p"
	.string "How did you unmask me as a member of\n"
	.string "the International Police?!$"

Dawn_Begs_Pardon_To_Looker::
	.string "Dawn: Huh? What? I beg your pardon?\n"
	.string "I was just making conversation...$"

Lucas_Begs_Pardon_To_Looker::
	.string "Lucas: Huh? What? Are you kidding?\n"
	.string "I was just making small talk...$"

Looker_Introduces_Himself::
	.string "Shady man: ...Heh. You claim you were\n"
	.string "only making conversation, do you?\p"
	.string "But, I know better not to believe that.\n"
	.string "No, no, no.\p"
	.string "You recognized right away that I was\n"
	.string "someone extraordinary.\p"
	.string "That is why you spoke to me, is it not?\n"
	.string "Your power of observation is fearsome!\p"
	.string "Quite admirable, you are!\p"
	.string "Now that my cover has been blown, let\n"
	.string "me introduce myself.\p"
	.string "I am a globe-trotting elite of the\n"
	.string "International Police.\p"
	.string "My name... Ah, no, I shall inform you\n"
	.string "only of my code name.\p"
	.string "My code name, it is Looker.\n"
	.string "It is what they all call me.\p"
	.string "Incidentally, is the saying, “Don't be\n"
	.string "a thief!” familiar to you?$"

Jubilife_City_EventScript_Looker_Explain_The_Saying_Text::
	.string "Looker: No? You claim to not know it?\n"
	.string "How could that be?\p"
	.string "rPerhaps your mama has said it, but you\n"
	.string "have forgotten it, like usual?\p"
	.string "Now listen, my friends. It is wrong to\n"
	.string "take what belongs to others.$"

Jubilife_City_EventScript_Looker_Still_Reference_The_Saying_Text::
	.string "Looker: Yes, that is correct.\n"
	.string "Taking what belongs to others is wrong.$"

Jubilife_City_EventScript_Looker_Gives_Vs_Recorder::
	.string "Unfortunately, there are apparently\n"
	.string "those who do not heed those words.\p"
	.string "In Sinnoh, in fact, there are criminals\n"
	.string "stealing the Pokémon of others.\p"
	.string "I have, therefore, been on the lookout\n"
	.string "for characters arousing my suspicion.\p"
	.string "Incidentally, you are Trainers, yes?\n"
	.string "Perhaps you can make use of this?$"

Jubilife_City_EventScript_Looker_Explains_Vs_Recorder::
	.string "That Vs. Recorder, it is a nifty device\n"
	.string "for recording a match.\p"
	.string "I obtained it because it is quite popular\n"
	.string "these days.\p"
	.string "But myself, I do not do Pokémon\n"
	.string "battling very often.\p"
	.string "It will be in better hands with you.$"

Jubilife_City_EventScript_Looker_Requests::
	.string "Looker: Also, I have a request.\p"
	.string "If you were to see me again, I ask that\n"
	.string "you not talk to me, for I am on duty.\p"
	.string "...Actually, yes, yes, you may speak to\n"
	.string "me. You must.\p"
	.string "Not because I am lonely, no, no!\n"
	.string "You must inform me of bad guys!\l"
	.string "You must inform me of any happenings!$"

Dawn_Tells_Working_For_Police_Is_Hard::
	.string "Dawn: ...Working for the International\n"
	.string "Police must be hard.$"

Lucas_Tells_Working_For_Police_Is_Hard::
	.string "Lucas: ...Working for the International\n"
	.string "Police sounds hard.$"

Dawn_Tells_About_Trainer_School::
	.string "{PLAYER}, here it is.\n"
	.string "It's the Trainers' School.\l"
	.string "fThe name says it all!$"

Lucas_Tells_About_Trainer_School::
	.string "{PLAYER}, here we are.\n"
	.string "This is the Trainers' School.\l"
	.string "The name says it all!$"

Dawn_Tells_She_Saw_Barry_Going_In::
	.string "I saw your friend {B_RIVAL_NAME} go in\n"
	.string "earlier.\p"
	.string "He could still be in there studying.\n"
	.string "OK, bye now!$"

Lucas_Tells_He_Saw_Barry_Going_In::
	.string "Your pal {B_RIVAL_NAME} went in earlier.\n"
	.string "He might still be studying in there.\p"
	.string "OK, see you around!$"
