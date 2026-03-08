BarrysHouse1F_MapScripts::
	.byte 0


BarrysHouse1F_EventScript_Barrys_MOM::
# 5 "data/maps/BarrysHouse1F/scripts.pory"
	switch VAR_RIVAL_MOM_TEXT
# 7 "data/maps/BarrysHouse1F/scripts.pory"
	case 0, BarrysHouse1F_EventScript_Barrys_MOM_2
# 8 "data/maps/BarrysHouse1F/scripts.pory"
	case 1, BarrysHouse1F_EventScript_Barrys_MOM_3
	return

BarrysHouse1F_EventScript_Barrys_MOM_2:
# 7 "data/maps/BarrysHouse1F/scripts.pory"
	goto BarrysHouse1F_EventScript_Barrys_MOM_Before_Meeting_Barry_Upstaris
	return

BarrysHouse1F_EventScript_Barrys_MOM_3:
# 8 "data/maps/BarrysHouse1F/scripts.pory"
	goto BarrysHouse1F_EventScript_Barrys_MOM_After_Meeting_Barry_Upstaris
	return


BarrysHouse1F_EventScript_Barrys_MOM_Before_Meeting_Barry_Upstaris::
# 14 "data/maps/BarrysHouse1F/scripts.pory"
	msgbox BarrysHouse1F_EventScript_Barrys_MOM_Before_Meeting_Barry_Upstaris_Text_0, MSGBOX_NPC
	end


BarrysHouse1F_EventScript_Barrys_MOM_After_Meeting_Barry_Upstaris::
# 26 "data/maps/BarrysHouse1F/scripts.pory"
	msgbox BarrysHouse1F_EventScript_Barrys_MOM_After_Meeting_Barry_Upstaris_Text_0, MSGBOX_NPC
	end


BarrysHouse1F_EventScript_Barrys_MOM_Before_Meeting_Barry_Upstaris_Text_0:
# 14 "data/maps/BarrysHouse1F/scripts.pory"
	.string "Barry's mom: Oh, hi,\n"
	.string "{PLAYER}.\p"
	.string "Did you come calling on Barry?\p"
	.string "He has gone for a second, but then\n"
	.string "he came running right back home.\p"
	.string "He just can't sit still, that boy.\n"
	.string "I wonder who he takes after?$"

BarrysHouse1F_EventScript_Barrys_MOM_After_Meeting_Barry_Upstaris_Text_0:
# 26 "data/maps/BarrysHouse1F/scripts.pory"
	.string "Barry's mom: That kid rocketed\n"
	.string "off again as usual.\p"
	.string "I'd guess he would be out on\n"
	.string "Route 201 by now?\p"
	.string "He just can't sit still, that boy.\n"
	.string "I wonder who he takes after?$"
