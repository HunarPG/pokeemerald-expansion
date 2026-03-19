JubilifeCityCondominiums1F_MapScripts::
	.byte 0


JubilifeCityCondominiums1F_EvenetScripts_Woman::
	goto_if_set FLAG_ITEM_JUBILIFE_CITY_QUICK_CLAW, JubilifeCityCondominiums1F_EvenetScripts_Woman_2
	msgbox JubilifeCityCondominiums1F_EvenetScripts_Woman_Text_1, MSGBOX_NPC
	giveitem ITEM_QUICK_CLAW
	setflag FLAG_ITEM_JUBILIFE_CITY_QUICK_CLAW
	closemessage
JubilifeCityCondominiums1F_EvenetScripts_Woman_1:
	end

JubilifeCityCondominiums1F_EvenetScripts_Woman_2:
	msgbox JubilifeCityCondominiums1F_EvenetScripts_Woman_Text_0, MSGBOX_NPC
	goto JubilifeCityCondominiums1F_EvenetScripts_Woman_1


JubilifeCityCondominiums1F_EvenetScripts_Pachirisu::
	msgbox JubilifeCityCondominiums1F_EvenetScripts_Pachirisu_Text_0, MSGBOX_NPC
	end


JubilifeCityCondominiums1F_EvenetScripts_Pikachu::
	msgbox JubilifeCityCondominiums1F_EvenetScripts_Pikachu_Text_0, MSGBOX_NPC
	end


JubilifeCityCondominiums1F_EvenetScripts_Old_Woman::
	msgbox JubilifeCityCondominiums1F_EvenetScripts_Old_Woman_Text_0, MSGBOX_NPC
	end


JubilifeCityCondominiums1F_EventScripts_Books::
	msgbox JubilifeCityCondominiums1F_EventScripts_Books_Text_0, MSGBOX_SIGN
	end


JubilifeCityCondominiums1F_EvenetScripts_Woman_Text_0:
	.string "A Pokémon holding that Quick Claw can\n"
	.string "sometimes attack first, even if it is\l"
	.string "normally a little bit slow.\p"
	.string "There are other items that are only\n"
	.string "useful when given to a Pokémon.\p"
	.string "Try finding other items that you can\n"
	.string "make your Pokémon hold.\p"
	.string "...I sound like I’m a teacher or\n"
	.string "something.$"

JubilifeCityCondominiums1F_EvenetScripts_Woman_Text_1:
	.string "Oh, your Pokémon is quite adorable!\p"
	.string "Here, try making it hold this\n"
	.string "Quick Claw.$"

JubilifeCityCondominiums1F_EvenetScripts_Pachirisu_Text_0:
	.string "PACHIRISU: Pachipachii?$"

JubilifeCityCondominiums1F_EvenetScripts_Pikachu_Text_0:
	.string "PIKACHU: Piika pi!$"

JubilifeCityCondominiums1F_EvenetScripts_Old_Woman_Text_0:
	.string "Oh, hello, darlings.\n"
	.string "Isn’t my Pokétch quite fetching?\p"
	.string "It’s the latest design that just came\n"
	.string "out. I obtained it instantly, of course.\p"
	.string "A Trainer would be simply lost without\n"
	.string "a Pokétch, after all.$"

JubilifeCityCondominiums1F_EventScripts_Books_Text_0:
	.string "It's chock-full of Pokémon books and\n"
	.string "photo collections.$"
