Oreburgh_Gate_MapScripts::
	.byte 0


Orebugh_Gate_EventScripts_Hiker::
	goto_if_set FLAG_RECEIVED_TM_ROCK_SMASH, Orebugh_Gate_EventScripts_Hiker_1
	goto Orebugh_Gate_EventScripts_Hiker_Give_Rock_Smash
	return

Orebugh_Gate_EventScripts_Hiker_1:
	goto Orebugh_Gate_EventScripts_Hiker_Explain_Rock_Smash
	return


Orebugh_Gate_EventScripts_Hiker_Give_Rock_Smash::
	faceplayer
	msgbox Orebugh_Gate_EventScripts_Hiker_Give_Rock_Smash_Text, MSGBOX_SIGN
	giveitem ITEM_TM_ROCK_SMASH
	setflag FLAG_RECEIVED_TM_ROCK_SMASH
	setvar VAR_OREBURGH_GATE_STATE, 1
	closemessage
	end


Orebugh_Gate_EventScripts_Hiker_Explain_Rock_Smash::
	msgbox Orebugh_Gate_EventScripts_Hiker_Explain_Rock_Smash_Text, MSGBOX_NPC
	end


Orebugh_Gate_EventScripts_Hiker_Trigger::
	playse SE_PIN
	applymovement 1, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Face_Up
	waitmovement 0
	applymovement 1, Common_Movement_Delay48
	waitmovement 0
	applymovement 1, Movement_Orebugh_Gate_Hiker_Walk_Down
	waitmovement 0
	goto Orebugh_Gate_EventScripts_Hiker_Give_Rock_Smash
	return


Orebugh_Gate_EventScripts_Camper_Curtis::
	trainerbattle_single TRAINER_CURTIS, Orebugh_Gate_Text_Camper_Curtis_Intro, Orebugh_Gate_Text_Camper_Curtis_Defeated
	msgbox Orebugh_Gate_Text_Camper_Curtis_PostBattle, MSGBOX_AUTOCLOSE
	return


Orebugh_Gate_EventScripts_Picknicker_Diana::
	trainerbattle_single TRAINER_DIANA_1, Orebugh_Gate_Text_Picknicker_Diana_Intro, Orebugh_Gate_Text_Picknicker_Diana_Defeated
	msgbox Orebugh_Gate_Text_Picknicker_Diana_PostBattle, MSGBOX_AUTOCLOSE
	return


Movement_Orebugh_Gate_Hiker_Walk_Down:
	walk_down
	step_end

Orebugh_Gate_EventScripts_Hiker_Give_Rock_Smash_Text::
	.string "That sparkling new Pokétch!\n"
	.string "Your awkwardness as a traveler!\p"
	.string "Hmm... You’re still a pretty new\n"
	.string "Trainer, aren’t you?\p"
	.string "But it’s all good! You’re a new fellow\n"
	.string "friend of Pokémon!\p"
	.string "So, let me make a gift of this Hidden\n"
	.string "Machine to you!$"

Orebugh_Gate_EventScripts_Hiker_Explain_Rock_Smash_Text::
	.string "That Technical Machine, or TM for short,\n"
	.string "contains the hidden move Rock Smash.\p"
	.string "A Pokémon learning Rock Smash can\n"
	.string "smash small boulders in the field.\p"
	.string "But the Trainer has to have\n"
	.string "the Gym Badge from Oreburgh City.\p"
	.string "If you don’t have that Badge, you\n"
	.string "can’t make a Pokémon use the hidden\l"
	.string "move Rock Smash outside of battle.$"

Orebugh_Gate_Text_Camper_Curtis_Intro::
	.string "We Trainers will accept challenges\n"
	.string "anywhere! It’s what we do.$"

Orebugh_Gate_Text_Camper_Curtis_Defeated::
	.string "Hmm...\n"
	.string "Insufficiently raised?$"

Orebugh_Gate_Text_Camper_Curtis_PostBattle::
	.string "Pokémon can appear anywhere in a cave.\n"
	.string "It’s not like the tall grass by roads.$"

Orebugh_Gate_Text_Picknicker_Diana_Intro::
	.string "To celebrate my getting through this\n"
	.string "cave, I’m going to battle you!$"

Orebugh_Gate_Text_Picknicker_Diana_Defeated::
	.string "Well, I guess losing is something\n"
	.string "to commemorate, too...$"

Orebugh_Gate_Text_Picknicker_Diana_PostBattle::
	.string "Getting through that cave feels\n"
	.string "like an adventure.$"
