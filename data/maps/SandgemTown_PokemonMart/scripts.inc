SandgemTown_PokemonMart_MapScripts::
	.byte 0

SandgemTown_PokemonMart_EventScript_Clerk::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart 0
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

SandgemTown_PokemonMart_EventScript_Goods::
	msgbox SandgemTown_PokemonMart_Text_EventScript_Goods, MSGBOX_SIGN
	end

SandgemTown_PokemonMart_EventScript_School_Boy::
	msgbox SandgemTown_PokemonMart_Text_School_Boy, MSGBOX_NPC
	end

SandgemTown_PokemonMart_EventScript_Boy::
	msgbox SandgemTown_PokemonMart_Text_Boy, MSGBOX_NPC
	end

SandgemTown_PokemonMart_Text_EventScript_Goods:
    .string "The shelves are jammed with colorful\n"
    .string "Pokemon goods.$"

SandgemTown_PokemonMart_Text_School_Boy:
    .string "If you come across a Pokemon you've\n"
    .string "just gotta have, toss a Pokeball!\p"
    .string "Never leave home without one!$"

SandgemTown_PokemonMart_Text_Boy:
    .string "If a Pokemon loses all its HP,\n"
    .string "it can't battle anymore.\p"
    .string "I'm buying lots of Potions to avoid\n"
    .string "having that happen!$"
