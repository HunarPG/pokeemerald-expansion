PlayersHouse2F_MapScripts::
	.byte 0


PlayersHouse2F_EventScript_Switch::
	msgbox PlayersHouse2F_EventScript_Switch_Text, MSGBOX_SIGN
	return


PlayersHouse2F_EventScript_TV::
	msgbox PlayersHouse2F_EventScript_TV_Text, MSGBOX_SIGN
	return


PlayersHouse2F_EventScript_Tutorial::
	msgbox PlayersHouse2F_EventScript_Tutorial_Text, MSGBOX_SIGN
	return


PlayersHouse2F_EventScript_PC::
	msgbox PlayersHouse2F_EventScript_PC_Text, MSGBOX_SIGN
	return


PlayersHouse2F_EventScript_Switch_Text:
	.string "It's a Switch!\n"
	.string "It's controlled by the Joycons!$"

PlayersHouse2F_EventScript_TV_Text:
	.string "Mom bought this TV as a gift.$"

PlayersHouse2F_EventScript_Tutorial_Text:
	.string "The X Button\n"
	.string "opens the menu!$"

PlayersHouse2F_EventScript_PC_Text:
	.string "{PLAYER} checked the PC.\p"
	.string "Pokemon Basics...\p"
	.string "People live alongside Pokemon in\n"
	.string "this world.\p"
	.string "The people that battle Pokemon are\n"
	.string "called Pokemon Trainers.$"
