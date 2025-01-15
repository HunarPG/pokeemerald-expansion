Sandgem_Town_Pokemon_Mart_MapScripts::
	.byte 0


Sandgem_Town_Pokemon_Mart_EventScript_Goods::
	msgbox Sandgem_Town_Pokemon_Mart_EventScript_Goods_Text, MSGBOX_SIGN
	end


Sandgem_Town_Pokemon_Mart_EventScript_School_Boy::
	msgbox Sandgem_Town_Pokemon_Mart_EventScript_School_Boy_Text, MSGBOX_NPC
	end


Sandgem_Town_Pokemon_Mart_EventScript_Boy::
	msgbox Sandgem_Town_Pokemon_Mart_EventScript_Boy_Text, MSGBOX_NPC
	end


Sandgem_Town_Pokemon_Mart_EventScript_Employee::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart 0
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end


Sandgem_Town_Pokemon_Mart_EventScript_Goods_Text::
	.string "The shelves are jammed with colorful\n"
	.string "Pokemon goods.$"

Sandgem_Town_Pokemon_Mart_EventScript_School_Boy_Text::
	.string "If you come across a Pokemon you've\n"
	.string "just gotta have, toss a Pokeball!\p"
	.string "Never leave home without one!$"

Sandgem_Town_Pokemon_Mart_EventScript_Boy_Text::
	.string "If a Pokemon loses all its HP,\n"
	.string "it can't battle anymore.\p"
	.string "I'm buying lots of Potions to avoid\n"
	.string "having that happen!$"
