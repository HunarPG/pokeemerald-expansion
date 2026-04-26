JubilifeCityPokemonCenter1F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, JubilifeCityPokemonCenter1F_On_Transition
	.byte 0


JubilifeCityPokemonCenter1F_On_Transition::
	setrespawn HEAL_LOCATION_JUBILIFE_CITY
	end


JubilifeCityPokemonCenter1F_EventScript_Nurse_Blocking_B1F::
	msgbox JubilifeCityPokemonCenter1F_EventScript_Nurse_Blocking_B1F_Text_0, MSGBOX_NPC
	end


JubilifeCityPokemonCenter1F_EventScript_Little_Girl::
	msgbox JubilifeCityPokemonCenter1F_EventScript_Little_Girl_Text_0, MSGBOX_NPC
	end


JubilifeCityPokemonCenter1F_EventScript_School_Boy::
	msgbox JubilifeCityPokemonCenter1F_EventScript_School_Boy_Text_0, MSGBOX_NPC
	end


JubilifeCityPokemonCenter1F_EventScript_Lady::
	msgbox JubilifeCityPokemonCenter1F_EventScript_Lady_Text_0, MSGBOX_NPC
	end


JubilifeCityPokemonCenter1F_EventScript_Nurse::
	setvar VAR_0x800B, LOCALID_NURSE_JUBILIFE_CITY_POKEMON_CENTER
	call Common_EventScript_PkmnCenterNurse
	waitmessage
	waitbuttonpress
	release
	end


JubilifeCityPokemonCenter1F_EventScript_Nurse_Blocking_B1F_Text_0:
	.string "I'm very sorry.\p"
	.string "We are working underground right now.\n"
	.string "It's off-limits to the public.\p"
	.string "Please try later on.$"

JubilifeCityPokemonCenter1F_EventScript_Little_Girl_Text_0:
	.string "You know how Pokémon have types like\n"
	.string "Water, Fire, and Grass?\p"
	.string "Well, all types have strengths and\n"
	.string "weaknesses against other types.$"

JubilifeCityPokemonCenter1F_EventScript_School_Boy_Text_0:
	.string "In the Union Room upstairs, you can\n"
	.string "chat and trade with other people.\p"
	.string "And that's not all you can do.\n"
	.string "Check it out!$"

JubilifeCityPokemonCenter1F_EventScript_Lady_Text_0:
	.string "You can still catch a Pokémon if you\n"
	.string "already have six traveling with you.\p"
	.string "It automatically gets sent to the PC\n"
	.string "network in Pokémon Centers.\p"
	.string "Knowing that, I can keep on catching\n"
	.string "more and more Pokémon!\p"
	.string "It'll make it more fun to check\n"
	.string "the PC in any Pokémon Center!$"
