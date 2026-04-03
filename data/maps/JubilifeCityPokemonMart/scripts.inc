JubilifeCityPokemonMart_MapScripts::
	.byte 0


JubilifeCityPokemonMart_EventScript_Woman::
	msgbox JubilifeCityPokemonMart_EventScript_Woman_Text_0, MSGBOX_NPC
	return


JubilifeCityPokemonMart_EventScript_Man::
	msgbox JubilifeCityPokemonMart_EventScript_Man_Text_0, MSGBOX_NPC
	return


JubilifeCityPokemonMart_EventScript_Lady::
	msgbox JubilifeCityPokemonMart_EventScript_Lady_Text_0, MSGBOX_NPC
	return


Jubilife_City_Pokemon_Mart_EventScript_Goods::
	msgbox Jubilife_City_Pokemon_Mart_EventScript_Goods_Text_0, MSGBOX_SIGN
	return


Jubilife_City_Pokemon_Mart_EventScript_Employee::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end


Jubilife_City_Pokemon_Mart_EventScript_Employee_1::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart JubilifeCityPokemonMart_Pokemart
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end


	.align 2
JubilifeCityPokemonMart_Pokemart:
	.2byte ITEM_WAVE_MAIL
	.2byte ITEM_HEAL_BALL
	.2byte ITEM_NONE

JubilifeCityPokemonMart_EventScript_Woman_Text_0:
	.string "Potions are important, but sometimes,\n"
	.string "it's better to simply avoid battles.\p"
	.string "If you want to avoid wild Pokémon for a\n"
	.string "while, just use a Repel.\p"
	.string "After all, if you don't battle, your\n"
	.string "Pokémon can't lose HP.$"

JubilifeCityPokemonMart_EventScript_Man_Text_0:
	.string "Aww, man.\n"
	.string "I wasted money on some Poké Balls.\p"
	.string "I should've lowered the HP of wild\n"
	.string "Pokémon more before throwing them.$"

JubilifeCityPokemonMart_EventScript_Lady_Text_0:
	.string "The one thing you must remember is to\n"
	.string "pack some Potions.\p"
	.string "If all your Pokémon faint, it'll be\n"
	.string "lights out for you, too!$"

Jubilife_City_Pokemon_Mart_EventScript_Goods_Text_0:
	.string "The shelves are jammed with colorful\n"
	.string "Pokémon goods.$"
