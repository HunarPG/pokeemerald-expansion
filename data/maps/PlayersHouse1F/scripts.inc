PlayersHouse1F_MapScripts::
	.byte 0


PlayersHouse1F_EventScript_Sink::
	lockall
	msgbox PlayersHouse1F_EventScript_Sink_Text_0
	releaseall
	return


PlayersHouse1F_EventScript_TV::
	lockall
	msgbox PlayersHouse1F_EventScript_TV_Text_0
	releaseall
	return


PlayersHouse1F_EventScript_Sink_Text_0:
	.string "Mom's kitchen is spotless! \nYou can see you face on the floor!$"

PlayersHouse1F_EventScript_TV_Text_0:
	.string "MC: Here we are! \nIt's the Contest Digest! \pThe winner of today's Normal Rank \nSmart Contest is... \pWestley, who won with his bright spark \n of a Pokemon! \pThat's all the time we have today! \nLet's meet again!$"
