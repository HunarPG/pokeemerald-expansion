RivalsHouse2F_MapScripts::
	.byte 0


RivalsHouse2F_EventScript_Switch::
	msgbox RivalsHouse2F_EventScript_Switch_Text_0, MSGBOX_SIGN
	end


RivalsHouse_2F_EventScript_PC::
	msgbox RivalsHouse_2F_EventScript_PC_Text_0, MSGBOX_SIGN
	end


RivalsHouse2F_EventScript_Switch_Text_0:
	.string "It's a Switch!\n"
	.string "It's controlled by the Joycons!$"

RivalsHouse_2F_EventScript_PC_Text_0:
	.string "{PLAYER} checked the PC screen\p"
	.string "Adventure Rule No. 1\n"
	.string "The X Button opens the menu!\p"
	.string "Adventure Rule No. 2\n"
	.string "Record your progress with SAVE.\p"
	.string "There is nothing else on here...$"
