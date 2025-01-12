Rivals_House_1F_MapScripts::
	.byte 0


Rivals_House_2F_EventScript_Barrys_MOM::
	switch VAR_RIVAL_MOM_TEXT
	case 0, Rivals_House_2F_EventScript_Barrys_MOM_2
	case 1, Rivals_House_2F_EventScript_Barrys_MOM_3
	return

Rivals_House_2F_EventScript_Barrys_MOM_2:
	goto RivalsHouse2F_EventScript_Barrys_MOM_Before_Meeting_Barry_Upstaris
	return

Rivals_House_2F_EventScript_Barrys_MOM_3:
	goto RivalsHouse2F_EventScript_Barrys_MOM_After_Meeting_Barry_Upstaris
	return


RivalsHouse2F_EventScript_Barrys_MOM_Before_Meeting_Barry_Upstaris::
	msgbox RivalsHouse2F_EventScript_Barrys_MOM_Before_Meeting_Barry_Upstaris_Text, MSGBOX_NPC
	return


RivalsHouse2F_EventScript_Barrys_MOM_After_Meeting_Barry_Upstaris::
	msgbox RivalsHouse2F_EventScript_Barrys_MOM_After_Meeting_Barry_Upstaris_Text, MSGBOX_NPC
	return


RivalsHouse2F_EventScript_Barrys_MOM_Before_Meeting_Barry_Upstaris_Text::
	.string "Barry's mom: Oh, hi,\n"
	.string "{PLAYER}.\p"
	.string "Did you come calling on Barry?\p"
	.string "He has gone for a second, but then\n"
	.string "he came running right back home.\p"
	.string "He just can't sit still, that boy.\n"
	.string "I wonder who he takes after?$"

RivalsHouse2F_EventScript_Barrys_MOM_After_Meeting_Barry_Upstaris_Text::
	.string "Barry's mom: That kid rocketed\n"
	.string "off again as usual.\p"
	.string "I'd guess he would be out on\n"
	.string "Route 201 by now?\p"
	.string "He just can't sit still, that boy.\n"
	.string "I wonder who he takes after?$"
