RivalsHouse2F_MapScripts::
	.byte 0


RivalsHouse2F_EventScript_Switch::
	lockall
	msgbox RivalsHouse2F_EventScript_Switch_Text_0
	releaseall
	return


RivalsHouse_2F_EventScript_PC::
	lockall
	msgbox RivalsHouse_2F_EventScript_PC_Text_0
	releaseall
	return


RivalsHouse2F_EventScript_Switch_Text_0:
	.string "It's a Switch! \nIt's controlled by the Joycons!$"

RivalsHouse_2F_EventScript_PC_Text_0:
	.string "{PLAYER} checked the PC screen \pAdventure Rule No. 1 \nThe X Button opens the menu! \pAdventure Rule No. 2 \nRecord your progress with SAVE. \pThere is nothing else on here...$"
