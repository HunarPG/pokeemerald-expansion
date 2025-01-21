Jubilife_City_Condominiums_1F_MapScripts::
	.byte 0


Jubilife_City_Condominiums_1F_EvenetScripts_Woman::
	goto_if_set FLAG_ITEM_JUBILIFE_CITY_QUICK_CLAW, Jubilife_City_Condominiums_1F_EvenetScripts_Woman_2
	msgbox Jubilife_City_Condominiums_1F_EvenetScripts_Woman_Do_Not_Have_Quick_Claw_Text, MSGBOX_NPC
	giveitem ITEM_QUICK_CLAW
	setflag FLAG_ITEM_JUBILIFE_CITY_QUICK_CLAW
	closemessage
Jubilife_City_Condominiums_1F_EvenetScripts_Woman_1:
	end

Jubilife_City_Condominiums_1F_EvenetScripts_Woman_2:
	msgbox Jubilife_City_Condominiums_1F_EvenetScripts_Woman_Have_Quick_Claw_Text, MSGBOX_NPC
	goto Jubilife_City_Condominiums_1F_EvenetScripts_Woman_1


Jubilife_City_Condominiums_1F_EvenetScripts_Pachirisu::
	msgbox Jubilife_City_Condominiums_1F_EvenetScripts_Pachirisu_Text, MSGBOX_NPC
	end


Jubilife_City_Condominiums_1F_EvenetScripts_Pikachu::
	msgbox Jubilife_City_Condominiums_1F_EvenetScripts_Pikachu_Text, MSGBOX_NPC
	end


Jubilife_City_Condominiums_1F_EvenetScripts_Old_Woman::
	msgbox Jubilife_City_Condominiums_1F_EvenetScripts_Old_Woman_Text, MSGBOX_NPC
	end


Jubilife_City_Condominiums_1F_EventScripts_Books::
	msgbox Jubilife_City_Condominiums_1F_EventScripts_Books_Text, MSGBOX_SIGN
	end


Jubilife_City_Condominiums_1F_EvenetScripts_Woman_Have_Quick_Claw_Text::
	.string "A Pokémon holding that Quick Claw can\n"
	.string "sometimes attack first, even if it is\l"
	.string "normally a little bit slow.\p"
	.string "There are other items that are only\n"
	.string "useful when given to a Pokémon.\p"
	.string "Try finding other items that you can\n"
	.string "make your Pokémon hold.\p"
	.string "...I sound like I’m a teacher or\n"
	.string "something.$"

Jubilife_City_Condominiums_1F_EvenetScripts_Woman_Do_Not_Have_Quick_Claw_Text::
	.string "Oh, your Pokémon is quite adorable!\p"
	.string "Here, try making it hold this\n"
	.string "Quick Claw.$"

Jubilife_City_Condominiums_1F_EvenetScripts_Pachirisu_Text::
	.string "PACHIRISU: Pachipachii?$"

Jubilife_City_Condominiums_1F_EvenetScripts_Pikachu_Text::
	.string "PIKACHU: Piika pi!$"

Jubilife_City_Condominiums_1F_EvenetScripts_Old_Woman_Text::
	.string "Oh, hello, darlings.\n"
	.string "Isn’t my Pokétch quite fetching?\p"
	.string "It’s the latest design that just came\n"
	.string "out. I obtained it instantly, of course.\p"
	.string "A Trainer would be simply lost without\n"
	.string "a Pokétch, after all.$"

Jubilife_City_Condominiums_1F_EventScripts_Books_Text::
	.string "It's chock-full of Pokémon books and\n"
	.string "photo collections.$"
