Jubilife_City_Pokemon_Mart_MapScripts::
	.byte 0


Jubilife_City_Mart_EventScript_Woman::
	msgbox Jubilife_City_Mart_EventScript_Woman_Text, MSGBOX_NPC
	return


Jubilife_City_Mart_EventScript_Man::
	msgbox Jubilife_City_Mart_EventScript_Man_Text, MSGBOX_NPC
	return


Jubilife_City_Mart_EventScript_Lady::
	msgbox Jubilife_City_Mart_EventScript_Lady_Text, MSGBOX_NPC
	return


Jubilife_City_Pokemon_Mart_EventScript_Goods::
	msgbox Jubilife_City_Pokemon_Mart_EventScript_Goods_Text, MSGBOX_SIGN
	return


Jubilife_City_Pokemon_Mart_EventScript_Employee::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart 0
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end


Jubilife_City_Pokemon_Mart_EventScript_Employee_1::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart Jubilife_City_Mart_Pokemart
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end


	.align 2
Jubilife_City_Mart_Pokemart:
	.2byte ITEM_WAVE_MAIL
	.2byte ITEM_HEAL_BALL
	.2byte ITEM_NONE

Jubilife_City_Mart_EventScript_Woman_Text::
	.string "Potions are important, but sometimes,\n"
	.string "it's better to simply avoid battles.\p"
	.string "If you want to avoid wild Pokémon for a\n"
	.string "while, just use a Repel.\p"
	.string "After all, if you don't battle, your\n"
	.string "Pokémon can't lose HP.$"

Jubilife_City_Mart_EventScript_Man_Text::
	.string "Aww, man.\n"
	.string "I wasted money on some Poké Balls.\p"
	.string "I should've lowered the HP of wild\n"
	.string "Pokémon more before throwing them.$"

Jubilife_City_Mart_EventScript_Lady_Text::
	.string "The one thing you must remember is to\n"
	.string "pack some Potions.\p"
	.string "If all your Pokémon faint, it'll be\n"
	.string "lights out for you, too!$"

Jubilife_City_Pokemon_Mart_EventScript_Goods_Text::
	.string "The shelves are jammed with colorful\n"
	.string "Pokemon goods.$"
