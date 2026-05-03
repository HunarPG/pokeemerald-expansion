OreburghCityPokemonMart_MapScripts::
	.byte 0


OreburghCityPokemonMart_EventScript_Goods::
	msgbox OreburghCityPokemonMart_EventScript_Goods_Text_0, MSGBOX_SIGN
	return


OreburghCityPokemonMart_EventScript_Hiker::
	msgbox OreburghCityPokemonMart_EventScript_Hiker_Text_0, MSGBOX_NPC
	return


OreburghCityPokemonMart_EventScript_Fat_Man::
	msgbox OreburghCityPokemonMart_EventScript_Fat_Man_Text_0, MSGBOX_NPC
	return


OreburghCityPokemonMart_EventScript_Employee::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end


OreburghCityPokemonMart_EventScript_Employee_1::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart OreburghCityPokemonMart_Pokemart
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end


	.align 2
OreburghCityPokemonMart_Pokemart:
	.2byte ITEM_HEAL_BALL
	.2byte ITEM_NET_BALL
	.2byte ITEM_NONE

OreburghCityPokemonMart_EventScript_Goods_Text_0:
	.string "The shelves are jammed with colorful\n"
	.string "Pokémon goods.$"

OreburghCityPokemonMart_EventScript_Hiker_Text_0:
	.string "The Badges that Pokémon Gyms give you\n"
	.string "are a measure of a Trainer's worth.\p"
	.string "By getting more Badges, you get to\n"
	.string "buy more items in Poké Marts.$"

OreburghCityPokemonMart_EventScript_Fat_Man_Text_0:
	.string "The Poké Mart is staffed by a lady and\n"
	.string "a young fellow.\p"
	.string "They offer different kinds of\n"
	.string "merchandise. Did you know?$"
