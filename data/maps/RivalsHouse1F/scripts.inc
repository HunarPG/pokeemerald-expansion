RivalsHouse1F_MapScripts::
	.byte 0


RivalsHouse2F_EventScript_Barrys_MOM::
	lock
	faceplayer
	goto_if_unset FLAG_DID_NOT_GO_RIVAL_HOUSE_UPSTAIRS, RivalsHouse2F_EventScript_Barrys_MOM_2
	goto_if_set FLAG_DID_NOT_GO_RIVAL_HOUSE_UPSTAIRS, RivalsHouse2F_EventScript_Barrys_MOM_3
RivalsHouse2F_EventScript_Barrys_MOM_1:
	release
	return

RivalsHouse2F_EventScript_Barrys_MOM_2:
	msgbox RivalsHouse2F_EventScript_Barrys_MOM_Text_0
	goto RivalsHouse2F_EventScript_Barrys_MOM_1

RivalsHouse2F_EventScript_Barrys_MOM_3:
	msgbox RivalsHouse2F_EventScript_Barrys_MOM_Text_1
	goto RivalsHouse2F_EventScript_Barrys_MOM_1


RivalsHouse2F_EventScript_Barrys_MOM_Text_0:
	.string "Barry's mom: Oh, hi, \n{PLAYER}. \pDid you come calling on Barry? \pHe has gone for a second, but then \nhe came running right back home. \pHe just can't sit still, that boy. \nI wonder who he takes after?$"

RivalsHouse2F_EventScript_Barrys_MOM_Text_1:
	.string "Barry's mom: That kid rocketed \noff again as usual. \pI'd guess he would be out on \nRoute 201 by now? \pHe just can't sit still, that boy. \nI wonder who he takes after?$"
