PlayersHouse1F_MapScripts::
	.byte 0


PlayersHouse1F_EventScript_Sink::
	msgbox PlayersHouse1F_EventScript_Sink_Text, MSGBOX_SIGN
	end


PlayersHouse1F_EventScript_TV::
	msgbox PlayersHouse1F_EventScript_TV_Text, MSGBOX_SIGN
	end


PlayersHouse1F_EventScript_Sink_Text:
	.string "Mom's kitchen is spotless!\n"
	.string "You can see you face on the floor!$"

PlayersHouse1F_EventScript_TV_Text:
	.string "MC: Here we are!\n"
	.string "It's the Contest Digest!\p"
	.string "The winner of today's Normal Rank\n"
    .string "Smart Contest is...\p"
    .string "Westley, who won with his bright spark \n"
	.string "of a Pokemon!\p"
	.string "That's all the time we have today!\n"
	.string "Let's meet again!$"
