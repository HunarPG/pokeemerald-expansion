SandgemTownPokemonCenter1F_MapScripts::
	.byte 0


SandgemTownPokemonCenter1F_EventScript_Girl::
	msgbox SandgemTownPokemonCenter1F_EventScript_Girl_Text_0, MSGBOX_NPC
	end


SandgemTownPokemonCenter1F_EventScript_Nurse_Blocking_B1F::
	msgbox SandgemTownPokemonCenter1F_EventScript_Nurse_Blocking_B1F_Text_0, MSGBOX_NPC
	end


SandgemTownPokemonCenter1F_EventScript_Boy::
	msgbox SandgemTownPokemonCenter1F_EventScript_Boy_Text_0, MSGBOX_NPC
	end


SandgemTownPokemonCenter1F_EventScript_Old_Man::
	msgbox SandgemTownPokemonCenter1F_EventScript_Old_Man_Text_0, MSGBOX_NPC
	end


SandgemTownPokemonCenter1F_EventScript_Book_Shelf::
	msgbox SandgemTownPokemonCenter1F_EventScript_Book_Shelf_Text_0, MSGBOX_SIGN
	end


SandgemTownPokemonCenter1F_EventScript_Nurse::
	setvar VAR_0x800B, LOCALID_NURSE_SANDGEM_TOWN_POKEMON_CENTER
	call Common_EventScript_PkmnCenterNurse
	waitmessage
	waitbuttonpress
	release
	end


SandgemTownPokemonCenter1F_EventScript_Girl_Text_0:
	.string "The top floor of any Pokémon Center\n"
	.string "is the Pokémon Communication Club.\p"
	.string "There, you can have all sorts of fun\n"
	.string "with your friends.$"

SandgemTownPokemonCenter1F_EventScript_Nurse_Blocking_B1F_Text_0:
	.string "I'm very sorry.\p"
	.string "We are working underground right now.\n"
	.string "It's off-limits to the public.\p"
	.string "Please try later on.$"

SandgemTownPokemonCenter1F_EventScript_Boy_Text_0:
	.string "Talk to that nice lady at the counter\n"
	.string "and hand her your Pokémon.\p"
	.string "She'll heal your Pokémon to perfect\n"
	.string "health in no time at all!$"

SandgemTownPokemonCenter1F_EventScript_Old_Man_Text_0:
	.string "Do you see that PC over there?\n"
	.string "That fancy Grey one?\p"
	.string "If you've got Pokémon with you,\n"
	.string "it's free to use.$"

SandgemTownPokemonCenter1F_EventScript_Book_Shelf_Text_0:
	.string "It's chock-full of Pokémon books and\n"
	.string "photo collections.$"
