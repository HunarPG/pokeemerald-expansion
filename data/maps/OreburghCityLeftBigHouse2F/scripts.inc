OreburghCityLeftBigHouse2F_MapScripts::
	.byte 0


OreburghCityLeftBigHouse2F_EventScript_Dusk_Ball_Woman::
	goto_if_unset FLAG_RECEIVED_DUSK_BALL_OREBURGH, OreburghCityLeftBigHouse2F_EventScript_Dusk_Ball_Woman_1
	goto OreburghCityLeftBigHouse2F_EventScript_Dusk_Ball_Woman_Already_Gave_Dusk_Ball
	return

OreburghCityLeftBigHouse2F_EventScript_Dusk_Ball_Woman_1:
	goto OreburghCityLeftBigHouse2F_EventScript_Dusk_Ball_Woman_Give_Dusk_Ball
	return


OreburghCityLeftBigHouse2F_EventScript_Dusk_Ball_Woman_Give_Dusk_Ball::
	msgbox OreburghCityLeftBigHouse2F_EventScript_Dusk_Ball_Woman_Give_Dusk_Ball_Text_0, MSGBOX_NPC
	lockall
	giveitem ITEM_DUSK_BALL
	goto_if_eq VAR_RESULT, FALSE, OreburghCityLeftBigHouse2F_EventScript_Bag_Is_Full
	setflag FLAG_RECEIVED_DUSK_BALL_OREBURGH
	closemessage
	releaseall
	end


OreburghCityLeftBigHouse2F_EventScript_Dusk_Ball_Woman_Already_Gave_Dusk_Ball::
	msgbox OreburghCityLeftBigHouse2F_EventScript_Dusk_Ball_Woman_Already_Gave_Dusk_Ball_Text_0, MSGBOX_NPC
	end


OreburghCityLeftBigHouse2F_EventScript_Bag_Is_Full::
	msgbox gText_TooBadBagIsFull, MSGBOX_NPC
	end


OreburghCityLeftBigHouse2F_EventScript_Worker::
	msgbox OreburghCityLeftBigHouse2F_EventScript_Worker_Text_0, MSGBOX_NPC
	end


OreburghCityLeftBigHouse2F_EventScript_Girl::
	msgbox OreburghCityLeftBigHouse2F_EventScript_Girl_Text_0, MSGBOX_NPC
	end


OreburghCityLeftBigHouse2F_EventScript_Psyduck::
	msgbox OreburghCityLeftBigHouse2F_EventScript_Psyduck_Text_0, MSGBOX_NPC
	end


OreburghCityLeftBigHouse2F_EventScript_Dusk_Ball_Woman_Give_Dusk_Ball_Text_0:
	.string "Are you catching Pokémon?\n"
	.string "Here, take this if you'd like.$"

OreburghCityLeftBigHouse2F_EventScript_Dusk_Ball_Woman_Already_Gave_Dusk_Ball_Text_0:
	.string "The Dusk Ball is a Poké Ball designed\n"
	.string "for use in darkness.\p"
	.string "It works better if you use it at\n"
	.string "night or in a cave.$"

OreburghCityLeftBigHouse2F_EventScript_Worker_Text_0:
	.string "Giving nicknames to Pokémon is\n"
	.string "the way to go.\p"
	.string "It makes you feel as if they're your\n"
	.string "very own.$"

OreburghCityLeftBigHouse2F_EventScript_Girl_Text_0:
	.string "But he named our Psyduck “Yellow”\n"
	.string "just because of its color...\p"
	.string "I don't understand the logic behind\n"
	.string "that at all.$"

OreburghCityLeftBigHouse2F_EventScript_Psyduck_Text_0:
	.string "Yellow: Duuuck?$"
