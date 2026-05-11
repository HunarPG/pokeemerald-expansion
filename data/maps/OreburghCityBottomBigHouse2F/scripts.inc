OreburghCityBottomBigHouse2F_MapScripts::
	.byte 0


OreburghCityBottomBigHouse2F_EventScript_Youngster::
	goto_if_unset FLAG_RECEIVED_GREAT_BALL_OREBURGH, OreburghCityBottomBigHouse2F_EventScript_Youngster_1
	goto OreburghCityBottomBigHouse2F_EventScript_Great_Ball_Youngster_Already_Gave_Great_Ball
	return

OreburghCityBottomBigHouse2F_EventScript_Youngster_1:
	goto OreburghCityBottomBigHouse2F_EventScript_Great_Ball_Youngster_Give_Great_Ball
	return


OreburghCityBottomBigHouse2F_EventScript_Great_Ball_Youngster_Give_Great_Ball::
	msgbox OreburghCityBottomBigHouse2F_EventScript_Great_Ball_Youngster_Give_Great_Ball_Text_0, MSGBOX_NPC
	lockall
	giveitem ITEM_GREAT_BALL
	goto_if_eq VAR_RESULT, FALSE, OreburghCityBottomBigHouse2F_EventScript_Bag_Is_Full
	setflag FLAG_RECEIVED_GREAT_BALL_OREBURGH
	closemessage
	releaseall
	goto OreburghCityBottomBigHouse2F_EventScript_Great_Ball_Youngster_Already_Gave_Great_Ball
	end


OreburghCityBottomBigHouse2F_EventScript_Great_Ball_Youngster_Already_Gave_Great_Ball::
	msgbox OreburghCityBottomBigHouse2F_EventScript_Great_Ball_Youngster_Already_Gave_Great_Ball_Text_0, MSGBOX_NPC
	end


OreburghCityBottomBigHouse2F_EventScript_Bag_Is_Full::
	msgbox gText_TooBadBagIsFull, MSGBOX_NPC
	end


OreburghCityBottomBigHouse2F_EventScript_Maniac::
	msgbox OreburghCityBottomBigHouse2F_EventScript_Maniac_Text_0, MSGBOX_NPC
	end


OreburghCityBottomBigHouse2F_EventScript_Man::
	msgbox OreburghCityBottomBigHouse2F_EventScript_Man_Text_0, MSGBOX_NPC
	end


OreburghCityBottomBigHouse2F_EventScript_Great_Ball_Youngster_Give_Great_Ball_Text_0:
	.string "Wow... Your Pokémon's eyes are\n"
	.string "twinkling brightly!\p"
	.string "Seeing that makes me happy!\n"
	.string "Here, I want you to have this!$"

OreburghCityBottomBigHouse2F_EventScript_Great_Ball_Youngster_Already_Gave_Great_Ball_Text_0:
	.string "You know how Pokémon stay inside\n"
	.string "their Poké Balls?\p"
	.string "I try to think about what would be\n"
	.string "the best Poké Balls for them.$"

OreburghCityBottomBigHouse2F_EventScript_Maniac_Text_0:
	.string "Coal is carried out of Oreburgh Mine on\n"
	.string "a fully automated system.\p"
	.string "Machines do all the work automatically.\n"
	.string "So, it's all very easy.$"

OreburghCityBottomBigHouse2F_EventScript_Man_Text_0:
	.string "The Oreburgh Mine is operated\n"
	.string "with the utmost care.\p"
	.string "We avoid causing any damage to\n"
	.string "the natural habitats of Pokémon.$"
