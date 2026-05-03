OreburghCityPokemonCenter1F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, OreburghCityPokemonCenter1F_On_Transition
	.byte 0


OreburghCityPokemonCenter1F_On_Transition::
	setrespawn HEAL_LOCATION_OREBURGH_CITY
	end


OreburghCityPokemonCenter1F_EventScript_Nurse::
	setvar VAR_0x800B, LOCALID_NURSE_OREBURGH_CITY_POKEMON_CENTER
	call Common_EventScript_PkmnCenterNurse
	waitmessage
	waitbuttonpress
	release
	end


OreburghCityPokemonCenter1F_EventScript_Nurse_Blocking_B1F::
	msgbox OreburghCityPokemonCenter1F_EventScript_Nurse_Blocking_B1F_Text_0, MSGBOX_NPC
	end


OreburghCityPokemonCenter1F_EventScript_Gentleman::
	goto_if_set FLAG_SYS_GAME_CLEAR, OreburghCityPokemonCenter1F_EventScript_Gentleman_2
	msgbox OreburghCityPokemonCenter1F_EventScript_Gentleman_Text_1, MSGBOX_NPC
OreburghCityPokemonCenter1F_EventScript_Gentleman_1:
	end

OreburghCityPokemonCenter1F_EventScript_Gentleman_2:
	msgbox OreburghCityPokemonCenter1F_EventScript_Gentleman_Text_0, MSGBOX_NPC
	goto OreburghCityPokemonCenter1F_EventScript_Gentleman_1


OreburghCityPokemonCenter1F_EventScript_Little_Boy::
	msgbox OreburghCityPokemonCenter1F_EventScript_Little_Boy_Text_0, MSGBOX_NPC
	end


OreburghCityPokemonCenter1F_EventScript_Woman::
	msgbox OreburghCityPokemonCenter1F_EventScript_Woman_Text_0, MSGBOX_NPC
	end


OreburghCityPokemonCenter1F_EventScript_Gameboy_Kid_1::
	msgbox OreburghCityPokemonCenter1F_EventScript_Gameboy_Kid_1_Text_0, MSGBOX_NPC
	end


OreburghCityPokemonCenter1F_EventScript_Gameboy_Kid_2::
	msgbox OreburghCityPokemonCenter1F_EventScript_Gameboy_Kid_2_Text_0, MSGBOX_NPC
	end


OreburghCityPokemonCenter1F_EventScript_Psychic::
	msgbox OreburghCityPokemonCenter1F_EventScript_Psychic_Text_0, MSGBOX_NPC
	goto OreburghCityPokemonCenter1F_EventScript_MultiChoice
	return


OreburghCityPokemonCenter1F_EventScript_MultiChoice::
	msgbox OreburghCityPokemonCenter1F_EventScript_MultiChoice_Text_0, MSGBOX_DEFAULT
	multichoice 0, 0, MULTI_TRAINER_TYPE, FALSE
	switch VAR_RESULT
	case 0, OreburghCityPokemonCenter1F_EventScript_MultiChoice_2
	case 1, OreburghCityPokemonCenter1F_EventScript_MultiChoice_3
	case 2, OreburghCityPokemonCenter1F_EventScript_MultiChoice_4
	case 3, OreburghCityPokemonCenter1F_EventScript_MultiChoice_5
	case 4, OreburghCityPokemonCenter1F_EventScript_MultiChoice_6
	case MULTI_B_PRESSED, OreburghCityPokemonCenter1F_EventScript_MultiChoice_7
	return

OreburghCityPokemonCenter1F_EventScript_MultiChoice_2:
	goto OreburghCityPokemonCenter1F_EventScript_Player_Choose_Ruin_Maniac
	return

OreburghCityPokemonCenter1F_EventScript_MultiChoice_3:
	goto OreburghCityPokemonCenter1F_EventScript_Player_Choose_Bug_Catcher
	return

OreburghCityPokemonCenter1F_EventScript_MultiChoice_4:
	goto OreburghCityPokemonCenter1F_EventScript_Player_Choose_Ace_Trainer
	return

OreburghCityPokemonCenter1F_EventScript_MultiChoice_5:
	goto OreburghCityPokemonCenter1F_EventScript_Player_Choose_Psychic
	return

OreburghCityPokemonCenter1F_EventScript_MultiChoice_6:
	goto OreburghCityPokemonCenter1F_EventScript_Exit_Multichoice
	return

OreburghCityPokemonCenter1F_EventScript_MultiChoice_7:
	goto OreburghCityPokemonCenter1F_EventScript_Exit_Multichoice
	return


OreburghCityPokemonCenter1F_EventScript_Exit_Multichoice::
	msgbox OreburghCityPokemonCenter1F_EventScript_Exit_Multichoice_Text_0, MSGBOX_NPC
	end


OreburghCityPokemonCenter1F_EventScript_Player_Choose_Ruin_Maniac::
	msgbox OreburghCityPokemonCenter1F_EventScript_Player_Choose_Ruin_Maniac_Text_0, MSGBOX_YESNO
	closemessage
	goto_if_eq VAR_RESULT, TRUE, OreburghCityPokemonCenter1F_EventScript_Players_Will_See_You_Ruin_Maniac
	goto_if_eq VAR_RESULT, FALSE, OreburghCityPokemonCenter1F_EventScript_MultiChoice
	return


OreburghCityPokemonCenter1F_EventScript_Players_Will_See_You_Ruin_Maniac::
	msgbox OreburghCityPokemonCenter1F_EventScript_Players_Will_See_You_Ruin_Maniac_Text_0, MSGBOX_NPC
	goto OreburghCityPokemonCenter1F_EventScript_Exit_Multichoice
	return


OreburghCityPokemonCenter1F_EventScript_Player_Choose_Bug_Catcher::
	msgbox OreburghCityPokemonCenter1F_EventScript_Player_Choose_Bug_Catcher_Text_0, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, TRUE, OreburghCityPokemonCenter1F_EventScript_Players_Will_See_You_Ruin_Maniac
	goto_if_eq VAR_RESULT, FALSE, OreburghCityPokemonCenter1F_EventScript_MultiChoice
	return


OreburghCityPokemonCenter1F_EventScript_Players_Will_See_You_Bug_Catcher::
	msgbox OreburghCityPokemonCenter1F_EventScript_Players_Will_See_You_Bug_Catcher_Text_0, MSGBOX_NPC
	goto OreburghCityPokemonCenter1F_EventScript_Exit_Multichoice
	return


OreburghCityPokemonCenter1F_EventScript_Player_Choose_Ace_Trainer::
	msgbox OreburghCityPokemonCenter1F_EventScript_Player_Choose_Ace_Trainer_Text_0, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, TRUE, OreburghCityPokemonCenter1F_EventScript_Players_Will_See_You_Ruin_Maniac
	goto_if_eq VAR_RESULT, FALSE, OreburghCityPokemonCenter1F_EventScript_MultiChoice
	return


OreburghCityPokemonCenter1F_EventScript_Players_Will_See_You_Ace_Trainer::
	msgbox OreburghCityPokemonCenter1F_EventScript_Players_Will_See_You_Ace_Trainer_Text_0, MSGBOX_NPC
	goto OreburghCityPokemonCenter1F_EventScript_Exit_Multichoice
	return


OreburghCityPokemonCenter1F_EventScript_Player_Choose_Psychic::
	msgbox OreburghCityPokemonCenter1F_EventScript_Player_Choose_Psychic_Text_0, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, TRUE, OreburghCityPokemonCenter1F_EventScript_Players_Will_See_You_Ruin_Maniac
	goto_if_eq VAR_RESULT, FALSE, OreburghCityPokemonCenter1F_EventScript_MultiChoice
	return


OreburghCityPokemonCenter1F_EventScript_Players_Will_See_You_Psychic::
	msgbox OreburghCityPokemonCenter1F_EventScript_Players_Will_See_You_Psychic_Text_0, MSGBOX_DEFAULT
	goto OreburghCityPokemonCenter1F_EventScript_Exit_Multichoice
	return


OreburghCityPokemonCenter1F_EventScript_Nurse_Blocking_B1F_Text_0:
	.string "I'm very sorry.\p"
	.string "We are working underground right now.\n"
	.string "It's off-limits to the public.\p"
	.string "Please try later on.$"

OreburghCityPokemonCenter1F_EventScript_Gentleman_Text_0:
	.string "Hmmm!\n"
	.string "What, or who, is this Team Galactic?!\p"
	.string "Lately, they've renounced such acts\n"
	.string "as stealing Pokémon.\p"
	.string "They're still involved in developing\n"
	.string "dream energies, but ethically now.$"

OreburghCityPokemonCenter1F_EventScript_Gentleman_Text_1:
	.string "Hmmm!\n"
	.string "What, or who, is this Team Galactic?!\p"
	.string "They make wonderful claims of a dream\n"
	.string "energy source on one hand...\p"
	.string "But rumor has it, they steal Pokémon\n"
	.string "from others by force.\p"
	.string "It's a mystery! They're mysterious!\n"
	.string "Isn't anyone investigating them?$"

OreburghCityPokemonCenter1F_EventScript_Little_Boy_Text_0:
	.string "Yay! I got a Pal Pad at the\n"
	.string "Pokémon Wi-Fi Club downstairs!$"

OreburghCityPokemonCenter1F_EventScript_Woman_Text_0:
	.string "Switch on the PC at any Pokémon\n"
	.string "Center.\p"
	.string "Connect to “Someone's PC” and access\n"
	.string "the Pokémon Storage System.\p"
	.string "That's all you need to do to store\n"
	.string "or bring out your Pokémon.$"

OreburghCityPokemonCenter1F_EventScript_Gameboy_Kid_1_Text_0:
	.string "You know how you can battle a friend\n"
	.string "using wireless communications?\p"
	.string "Well now, you can capture it as a Battle\n"
	.string "Video using a Vs. Recorder!$"

OreburghCityPokemonCenter1F_EventScript_Gameboy_Kid_2_Text_0:
	.string "Cool!\n"
	.string "You have a Vs. Recorder!\p"
	.string "So, did you go to the Global Terminal in\n"
	.string "Jubilife City? Did ya? Did ya?$"

OreburghCityPokemonCenter1F_EventScript_Psychic_Text_0:
	.string "Hmmm...!\p"
	.string "What is your favorite kind of Trainer?\n"
	.string "Can you tell me?$"

OreburghCityPokemonCenter1F_EventScript_MultiChoice_Text_0:
	.string "Which kind of Trainer would you like\n"
	.string "to be?$"

OreburghCityPokemonCenter1F_EventScript_Exit_Multichoice_Text_0:
	.string "OK, then I'll just talk to you later!$"

OreburghCityPokemonCenter1F_EventScript_Player_Choose_Ruin_Maniac_Text_0:
	.string "Ruin Maniac is the kind of Trainer\n"
	.string "you want to be?$"

OreburghCityPokemonCenter1F_EventScript_Players_Will_See_You_Ruin_Maniac_Text_0:
	.string "I see! So Ruin Maniac is the kind\n"
	.string "of Trainer you like.\p"
	.string "If that's the case, others may come\n"
	.string "to see you in the same way.$"

OreburghCityPokemonCenter1F_EventScript_Player_Choose_Bug_Catcher_Text_0:
	.string "Bug Catcher is the kind of Trainer\n"
	.string "you want to be?$"

OreburghCityPokemonCenter1F_EventScript_Players_Will_See_You_Bug_Catcher_Text_0:
	.string "I see! So Bug Catcher is the kind\n"
	.string "of Trainer you like.\p"
	.string "If that's the case, others may come\n"
	.string "to see you in the same way.$"

OreburghCityPokemonCenter1F_EventScript_Player_Choose_Ace_Trainer_Text_0:
	.string "Ace Trainer is the kind of Trainer\n"
	.string "you want to be?$"

OreburghCityPokemonCenter1F_EventScript_Players_Will_See_You_Ace_Trainer_Text_0:
	.string "I see! So Ace Trainer is the kind\n"
	.string "of Trainer you like.\p"
	.string "If that's the case, others may come\n"
	.string "to see you in the same way.$"

OreburghCityPokemonCenter1F_EventScript_Player_Choose_Psychic_Text_0:
	.string "Psychic is the kind of Trainer\n"
	.string "you want to be?$"

OreburghCityPokemonCenter1F_EventScript_Players_Will_See_You_Psychic_Text_0:
	.string "I see! So Psychic is the kind\n"
	.string "of Trainer you like.\p"
	.string "If that's the case, others may come\n"
	.string "to see you in the same way.$"
