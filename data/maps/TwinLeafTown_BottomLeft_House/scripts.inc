TwinLeafTown_BottomLeft_House_MapScripts::
	.byte 0


TwinLeafTown_BottomLeft_House_EventScript_Old_Lady::
	faceplayer
	lockall
	msgbox TwinLeafTown_BottomLeft_House_EventScript_Old_Lady_Text_0
	release
	return


TwinLeafTown_BottomLeft_House_EventScript_Little_Girl::
	faceplayer
	lockall
	msgbox TwinLeafTown_BottomLeft_House_EventScript_Little_Girl_Text_0
	release
	return


TwinLeafTown_BottomLeft_House_EventScript_Old_Lady_Text_0:
	.string "Did you hear? \pThe Pokemon Professor returned \nto the next town over. \pThey say he was gone for four long \nyears. \pI wonder if he found some amazing \nPokemon while he was gone?$"

TwinLeafTown_BottomLeft_House_EventScript_Little_Girl_Text_0:
	.string "Listen, listen, {PLAYER}. \pI want a cute Pokemon!$"
