SandgemTown_PokemonCenter_1F_MapScripts::
	.byte 0

SandgemTown_PokemonCenter_1F_EventScript_Girl::
	msgbox SandgemTown_PokemonCenter_1F_Text_Girl, MSGBOX_NPC
	end

SandgemTown_PokemonCenter_1F_EventScript_Nurse_Blocking_1F::
	msgbox SandgemTown_PokemonCenter_1F_Nurse_Blocking_1F, MSGBOX_NPC
	end

SandgemTown_PokemonCenter_1F_EventScript_Boy::
	msgbox SandgemTown_PokemonCenter_1F_Text_Boy, MSGBOX_NPC
	end

SandgemTown_PokemonCenter_1F_EventScript_Old_Man::
	msgbox SandgemTown_PokemonCenter_1F_Text_Old_Man, MSGBOX_NPC
	end

SandgemTown_PokemonCenter_1F_Text_Girl:
    .string "The top floor of any Pokemon Center\n"
    .string "is the Pokemon Communication Club.\p"
    .string "There, you can have all sorts of fun\n"
    .string "with your friends.$"

SandgemTown_PokemonCenter_1F_Nurse_Blocking_1F:
    .string "I'm very sorry.\p"
    .string "We are working underground right now.\n"
    .string "It's off-limits to the public.\p"
    .string "Please try later on.$"

SandgemTown_PokemonCenter_1F_Text_Boy:
    .string "Talk to that nice lady at the counter\n"
    .string "and hand her your Pokemon.\p"
    .string "She'll heal your Pokemon to perfect\n"
    .string "health in no time at all!$"

SandgemTown_PokemonCenter_1F_Text_Old_Man:
    .string "Do you see that PC over there?\n"
    .string "That fancy Grey one?\p"
    .string "If you've got Pokemon with you,\n"
    .string "it's free to use.$"