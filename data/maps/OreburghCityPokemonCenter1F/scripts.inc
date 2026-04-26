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
	multichoice 0, 0, MULTI_TRAINER_TYPE, FALSE
	end


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
	.string "Can you tell me?\p"
	.string "Which kind of Trainer would you like\n"
	.string "to be?$"
