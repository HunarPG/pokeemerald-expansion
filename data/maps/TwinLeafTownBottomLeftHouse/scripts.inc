TwinLeafTownBottomLeftHouse_MapScripts::
	.byte 0


TwinLeafTownBottomLeftHouse_EventScript_Old_Lady::
	goto_if_set FLAG_SYS_POKEDEX_GET, TwinLeafTownBottomLeftHouse_EventScript_Old_Lady_2
	msgbox TwinLeafTownBottomLeftHouse_EventScript_Old_Lady_Text_1, MSGBOX_NPC
TwinLeafTownBottomLeftHouse_EventScript_Old_Lady_1:
	end

TwinLeafTownBottomLeftHouse_EventScript_Old_Lady_2:
	msgbox TwinLeafTownBottomLeftHouse_EventScript_Old_Lady_Text_0, MSGBOX_NPC
	goto TwinLeafTownBottomLeftHouse_EventScript_Old_Lady_1


TwinLeafTownBottomLeftHouse_EventScript_Little_Girl::
	goto_if_set FLAG_SYS_POKEDEX_GET, TwinLeafTownBottomLeftHouse_EventScript_Little_Girl_2
	msgbox TwinLeafTownBottomLeftHouse_EventScript_Little_Girl_Text_1, MSGBOX_NPC
TwinLeafTownBottomLeftHouse_EventScript_Little_Girl_1:
	end

TwinLeafTownBottomLeftHouse_EventScript_Little_Girl_2:
	msgbox TwinLeafTownBottomLeftHouse_EventScript_Little_Girl_Text_0, MSGBOX_NPC
	goto TwinLeafTownBottomLeftHouse_EventScript_Little_Girl_1


TwinLeafTownBottomLeftHouse_EventScript_Old_Lady_Text_0:
	.string "Well! Professor Rowan gave you a\n"
	.string "Pokédex, did he?$"

TwinLeafTownBottomLeftHouse_EventScript_Old_Lady_Text_1:
	.string "Did you hear?\p"
	.string "The Pokémon Professor returned\n"
	.string "to the next town over.\p"
	.string "They say he was gone for four long\n"
	.string "years.\p"
	.string "I wonder if he found some amazing\n"
	.string "Pokémon while he was gone?$"

TwinLeafTownBottomLeftHouse_EventScript_Little_Girl_Text_0:
	.string "Listen, listen, {PLAYER}.\n"
	.string "I want a cute Pokémon!$"

TwinLeafTownBottomLeftHouse_EventScript_Little_Girl_Text_1:
	.string "Listen, listen, {PLAYER}.\p"
	.string "Do you think I can be friends with\n"
	.string "Pokémon like you are?$"
