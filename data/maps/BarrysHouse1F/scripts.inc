BarrysHouse1F_MapScripts::
	.byte 0


BarrysHouse1F_EventScript_Barrys_MOM::
	goto_if_set FLAG_SYS_POKEDEX_GET, BarrysHouse1F_EventScript_Barrys_MOM_1
	compare VAR_LAKE_EVENT, 1
	goto_if_eq BarrysHouse1F_EventScript_Barrys_MOM_2
	compare VAR_RIVAL_MOM_TEXT, 2
	goto_if_eq BarrysHouse1F_EventScript_Barrys_MOM_3
	compare VAR_RIVAL_MOM_TEXT, 1
	goto_if_eq BarrysHouse1F_EventScript_Barrys_MOM_4
	checkplayergender
	compare VAR_RESULT, MALE
	goto_if_eq BarrysHouse1F_EventScript_Barrys_MOM_10
	compare VAR_RESULT, FEMALE
	goto_if_eq BarrysHouse1F_EventScript_Barrys_MOM_11
	return

BarrysHouse1F_EventScript_Barrys_MOM_1:
	goto BarrysHouse1F_EventScript_Barrys_MOM_After_Getting_Pokedex
	return

BarrysHouse1F_EventScript_Barrys_MOM_2:
	goto BarrysHouse1F_EventScript_Barrys_MOM_After_Meeting_Barry_At_Lake
	return

BarrysHouse1F_EventScript_Barrys_MOM_3:
	goto BarrysHouse1F_EventScript_Barrys_MOM_After_Meeting_Barry_Upstaris_And_Talking_To_Barry_Mom
	return

BarrysHouse1F_EventScript_Barrys_MOM_4:
	goto BarrysHouse1F_EventScript_Barrys_MOM_After_Meeting_Barry_Upstaris
	return

BarrysHouse1F_EventScript_Barrys_MOM_10:
	goto BarrysHouse1F_EventScript_Barrys_MOM_Before_Meeting_Barry_Upstaris_Male
	return

BarrysHouse1F_EventScript_Barrys_MOM_11:
	goto BarrysHouse1F_EventScript_Barrys_MOM_Before_Meeting_Barry_Upstaris_Female
	return


BarrysHouse1F_EventScript_Barrys_MOM_Before_Meeting_Barry_Upstaris_Male::
	msgbox BarrysHouse1F_EventScript_Barrys_MOM_Before_Meeting_Barry_Upstaris_Male_Text_0, MSGBOX_NPC
	end


BarrysHouse1F_EventScript_Barrys_MOM_Before_Meeting_Barry_Upstaris_Female::
	msgbox BarrysHouse1F_EventScript_Barrys_MOM_Before_Meeting_Barry_Upstaris_Female_Text_0, MSGBOX_NPC
	end


BarrysHouse1F_EventScript_Barrys_MOM_After_Meeting_Barry_Upstaris::
	setvar VAR_RIVAL_MOM_TEXT, 2
	msgbox BarrysHouse1F_EventScript_Barrys_MOM_After_Meeting_Barry_Upstaris_Text_0, MSGBOX_NPC
	end


BarrysHouse1F_EventScript_Barrys_MOM_After_Meeting_Barry_Upstaris_And_Talking_To_Barry_Mom::
	msgbox BarrysHouse1F_EventScript_Barrys_MOM_After_Meeting_Barry_Upstaris_And_Talking_To_Barry_Mom_Text_0, MSGBOX_NPC
	end


BarrysHouse1F_EventScript_Barrys_MOM_After_Meeting_Barry_At_Lake::
	msgbox BarrysHouse1F_EventScript_Barrys_MOM_After_Meeting_Barry_At_Lake_Text_0, MSGBOX_NPC
	end


BarrysHouse1F_EventScript_Barrys_MOM_After_Getting_Pokedex::
	msgbox BarrysHouse1F_EventScript_Barrys_MOM_After_Getting_Pokedex_Text_0, MSGBOX_NPC
	end


BarrysHouse1F_EventScript_Barrys_MOM_Before_Meeting_Barry_Upstaris_Male_Text_0:
	.string "{RIVAL}'s mom: Oh, hi,\n"
	.string "{PLAYER}.\p"
	.string "Are you looking for {RIVAL}?\p"
	.string "He was gone for a second, but then\n"
	.string "he came running right back home.\p"
	.string "He just can't sit still, that boy.\n"
	.string "I wonder who he takes after?$"

BarrysHouse1F_EventScript_Barrys_MOM_Before_Meeting_Barry_Upstaris_Female_Text_0:
	.string "{RIVAL}'s mom: Oh, hi,\n"
	.string "{PLAYER}.\p"
	.string "Did you come calling on {RIVAL}?\p"
	.string "He was gone for a second, but then\n"
	.string "he came running right back home.\p"
	.string "He just can't sit still, that boy.\n"
	.string "I wonder who he takes after?$"

BarrysHouse1F_EventScript_Barrys_MOM_After_Meeting_Barry_Upstaris_Text_0:
	.string "{RIVAL}'s mom: That kid rocketed\n"
	.string "off again like usual.\p"
	.string "I'd guess he would be out on\n"
	.string "Route 201 by now?\p"
	.string "He just can't sit still, that boy.\n"
	.string "I wonder who he takes after?$"

BarrysHouse1F_EventScript_Barrys_MOM_After_Meeting_Barry_Upstaris_And_Talking_To_Barry_Mom_Text_0:
	.string "{RIVAL}'s mom: My {RIVAL}\n"
	.string "should be out on Route 201 by now.\p"
	.string "He just can't sit still, that boy.\n"
	.string "I wonder who he takes after?$"

BarrysHouse1F_EventScript_Barrys_MOM_After_Meeting_Barry_At_Lake_Text_0:
	.string "{RIVAL}'s mom: Oh, you've\n"
	.string "become friends with a Pokémon, too.$"

BarrysHouse1F_EventScript_Barrys_MOM_After_Getting_Pokedex_Text_0:
	.string "{RIVAL}'s mom: My {RIVAL}\n"
	.string "took off like a rocket as usual.\p"
	.string "He was shouting something about\n"
	.string "becoming the greatest Trainer ever...\p"
	.string "He just can;t sit still, that boy.\n"
	.string "I wonder who he takes after?$"
