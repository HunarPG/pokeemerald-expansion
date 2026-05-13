OreburghGate1F_MapScripts::
	.byte 0


OreburghGate1F_EventScripts_Hiker::
	goto_if_set FLAG_BADGE01_GET, OreburghGate1F_EventScripts_Hiker_1
	goto_if_set FLAG_RECEIVED_HM_ROCK_SMASH, OreburghGate1F_EventScripts_Hiker_2
	goto OreburghGate1F_EventScripts_Hiker_Give_Rock_Smash
	return

OreburghGate1F_EventScripts_Hiker_1:
	goto OreburghGate1F_EventScripts_Hiker_After_Badge
	return

OreburghGate1F_EventScripts_Hiker_2:
	goto OreburghGate1F_EventScripts_Hiker_Explain_Rock_Smash
	return


OreburghGate1F_EventScripts_Hiker_Give_Rock_Smash::
	faceplayer
	msgbox OreburghGate1F_EventScripts_Hiker_Give_Rock_Smash_Text_0, MSGBOX_SIGN
	giveitem ITEM_HM_ROCK_SMASH
	setflag FLAG_RECEIVED_HM_ROCK_SMASH
	setvar VAR_OREBURGH_GATE_STATE, 1
	closemessage
	end


OreburghGate1F_EventScripts_Hiker_Explain_Rock_Smash::
	msgbox OreburghGate1F_EventScripts_Hiker_Explain_Rock_Smash_Text_0, MSGBOX_NPC
	end


OreburghGate1F_EventScripts_Hiker_After_Badge::
	msgbox OreburghGate1F_EventScripts_Hiker_After_Badge_Text_0, MSGBOX_NPC
	end


OreburghGate1F_EventScripts_Hiker_Trigger::
	playse SE_PIN
	applymovement LOCALID_HIKER_OREBURGH_GATE, OreburghGate1F_EventScripts_Hiker_Trigger_Movement_0
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, OreburghGate1F_EventScripts_Hiker_Trigger_Movement_1
	waitmovement 0
	delay 30
	applymovement LOCALID_HIKER_OREBURGH_GATE, OreburghGate1F_EventScripts_Hiker_Trigger_Movement_2
	waitmovement 0
	goto OreburghGate1F_EventScripts_Hiker_Give_Rock_Smash
	return


OreburghGate1F_EventScripts_Camper_Curtis::
	trainerbattle_single TRAINER_CURTIS, OreburghGate1F_EventScripts_Camper_Curtis_Text_0, OreburghGate1F_EventScripts_Camper_Curtis_Text_1
	msgbox OreburghGate1F_EventScripts_Camper_Curtis_Text_2, MSGBOX_AUTOCLOSE
	return


OreburghGate1F_EventScripts_Picknicker_Diana::
	trainerbattle_single TRAINER_DIANA_1, OreburghGate1F_EventScripts_Picknicker_Diana_Text_0, OreburghGate1F_EventScripts_Picknicker_Diana_Text_1
	msgbox OreburghGate1F_EventScripts_Picknicker_Diana_Text_2, MSGBOX_AUTOCLOSE
	return


OreburghGate1F_EventScripts_Hiker_Trigger_Movement_0:
	emote_exclamation_mark
	step_end

OreburghGate1F_EventScripts_Hiker_Trigger_Movement_1:
	face_up
	step_end

OreburghGate1F_EventScripts_Hiker_Trigger_Movement_2:
	walk_down
	step_end

OreburghGate1F_EventScripts_Hiker_Give_Rock_Smash_Text_0:
	.string "That sparkling new Pokétch!\n"
	.string "Your awkwardness as a traveler!\p"
	.string "Hmm... You're still a pretty new\n"
	.string "Trainer, aren't you?\p"
	.string "But it's all good! You're a new fellow\n"
	.string "friend of Pokémon!\p"
	.string "So, let me make a gift of this Hidden\n"
	.string "Machine to you!$"

OreburghGate1F_EventScripts_Hiker_Explain_Rock_Smash_Text_0:
	.string "That Hidden Machine, or HM for short,\n"
	.string "contains the hidden move Rock Smash.\p"
	.string "A Pokémon learning Rock Smash can\n"
	.string "smash small boulders in the field.\p"
	.string "But the Trainer has to have\n"
	.string "the Gym Badge from Oreburgh City.\p"
	.string "If you don't have that Badge, you\n"
	.string "can't make a Pokémon use the hidden\l"
	.string "move Rock Smash outside of battle.$"

OreburghGate1F_EventScripts_Hiker_After_Badge_Text_0:
	.string "Oh! Good golly!\n"
	.string "That's Oreburgh City's Gym Badge!\p"
	.string "All right! Now you can use the hidden\n"
	.string "move Rock Smash on small boulders!$"

OreburghGate1F_EventScripts_Camper_Curtis_Text_0:
	.string "We Trainers will accept challenges\n"
	.string "anywhere! It's what we do.$"

OreburghGate1F_EventScripts_Camper_Curtis_Text_1:
	.string "Hmm...\n"
	.string "Insufficiently raised?$"

OreburghGate1F_EventScripts_Camper_Curtis_Text_2:
	.string "Pokémon can appear anywhere in a cave.\n"
	.string "It's not like the tall grass by roads.$"

OreburghGate1F_EventScripts_Picknicker_Diana_Text_0:
	.string "To celebrate my getting through this\n"
	.string "cave, I'm going to battle you!$"

OreburghGate1F_EventScripts_Picknicker_Diana_Text_1:
	.string "Well, I guess losing is something\n"
	.string "to commemorate, too...$"

OreburghGate1F_EventScripts_Picknicker_Diana_Text_2:
	.string "Getting through that cave feels\n"
	.string "like an adventure.$"
