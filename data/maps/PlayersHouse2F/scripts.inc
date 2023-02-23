PlayersHouse2F_MapScripts::
	.byte 0


PlayersHouse2F_EventScript_Switch::
	lockall
	msgbox PlayersHouse2F_EventScript_Switch_Text_0
	releaseall
	return


PlayersHouse2F_EventScript_TV::
	lockall
	msgbox PlayersHouse2F_EventScript_TV_Text_0
	releaseall
	return


PlayersHouse2F_EventScript_Tutorial::
	lockall
	msgbox PlayersHouse2F_EventScript_Tutorial_Text_0
	releaseall
	return


PlayersHouse2F_EventScript_PC::
	lockall
	msgbox PlayersHouse2F_EventScript_PC_Text_0
	releaseall
	return


PlayersHouse2F_EventScript_Switch_Text_0:
	.string "It's a Switch! \nIt's controlled by the Joycons!$"

PlayersHouse2F_EventScript_TV_Text_0:
	.string "Mom bought this TV as a gift.$"

PlayersHouse2F_EventScript_Tutorial_Text_0:
	.string "The X Button \nopens the menu!$"

PlayersHouse2F_EventScript_PC_Text_0:
	.string "{PLAYER} checked the PC.\pPokemon Basics... \pPeople live alongside Pokemon in \nthis world. \pThe people that battle Pokemon are \ncalled Pokemon Trainers.$"
