RivalsHouse1F_MapScripts::
	.byte 0


RivalsHouse2F_EventScript_Barrys_MOM::
	compare VAR_RIVAL_MOM_TEXT, 0 
	goto_if_eq RivalsHouse2F_EventScript_Barrys_MOM_1
	compare VAR_RIVAL_MOM_TEXT, 1
	goto_if_eq RivalsHouse2F_EventScript_Barrys_MOM_2

RivalsHouse2F_EventScript_Barrys_MOM_1:
	msgbox RivalsHouse2F_EventScript_Barrys_MOM_Text_0, MSGBOX_NPC
	end

RivalsHouse2F_EventScript_Barrys_MOM_2:
	msgbox RivalsHouse2F_EventScript_Barrys_MOM_Text_1, MSGBOX_NPC
	end


RivalsHouse2F_EventScript_Barrys_MOM_Text_0:
	.string "Barry's mom: Oh, hi,\n"
	.string "{PLAYER}.\p"
	.string "Did you come calling on Barry?\p"
	.string "He has gone for a second, but then\n"
	.string "he came running right back home.\p"
	.string "He just can't sit still, that boy.\n"
	.string "I wonder who he takes after?$"

RivalsHouse2F_EventScript_Barrys_MOM_Text_1:
	.string "Barry's mom: That kid rocketed\n"
	.string "off again as usual.\p"
	.string "I'd guess he would be out on\n"
	.string "Route 201 by now?\p"
	.string "He just can't sit still, that boy.\n"
	.string "I wonder who he takes after?$"
