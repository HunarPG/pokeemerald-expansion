Jubilife_City_East_Entrance_MapScripts::
	.byte 0


Jubilife_City_East_Entrance_EventScripts_Policeman::
	msgbox Jubilife_City_East_Entrance_EventScripts_Policeman_Text, MSGBOX_NPC
	end


Jubilife_City_East_Entrance_EventScripts_Fisherman::
	goto_if_unset FLAG_RECEIVED_OLD_ROD, Jubilife_City_East_Entrance_EventScripts_Fisherman_1
	goto Jubilife_City_East_Entrance_EventScripts_Fisherman_Already_Have_Old_Rod
	return

Jubilife_City_East_Entrance_EventScripts_Fisherman_1:
	goto Jubilife_City_East_Entrance_EventScripts_Fisherman_Ask_About_Old_Rod
	return


Jubilife_City_East_Entrance_EventScripts_Fisherman_Ask_About_Old_Rod::
	lockall
	faceplayer
	msgbox Jubilife_City_East_Entrance_EventScripts_Fisherman_Ask_If_Player_Like_Old_Rod, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, TRUE, Jubilife_City_East_Entrance_EventScripts_Fisherman_Gives_Old_Rod
	goto_if_eq VAR_RESULT, FALSE, Jubilife_City_East_Entrance_EventScripts_Fisherman_Player_Dont_Like_Fishing
	return


Jubilife_City_East_Entrance_EventScripts_Fisherman_Already_Have_Old_Rod::
	faceplayer
	msgbox Jubilife_City_East_Entrance_EventScripts_Fisherman_Do_You_Need_Tips, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, TRUE, Jubilife_City_East_Entrance_EventScripts_Fisherman_Give_Tips
	goto_if_eq VAR_RESULT, FALSE, Jubilife_City_East_Entrance_EventScripts_Fisherman_Donnt_Give_Tips
	return


Jubilife_City_East_Entrance_EventScripts_Fisherman_Gives_Old_Rod::
	msgbox Jubilife_City_East_Entrance_EventScripts_Fisherman_We_Can_Be_Friends, MSGBOX_SIGN
	giveitem ITEM_OLD_ROD
	setflag FLAG_RECEIVED_OLD_ROD
	msgbox Jubilife_City_East_Entrance_EventScripts_Fisherman_Do_You_Need_Tips, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, TRUE, Jubilife_City_East_Entrance_EventScripts_Fisherman_Give_Tips
	goto_if_eq VAR_RESULT, FALSE, Jubilife_City_East_Entrance_EventScripts_Fisherman_Donnt_Give_Tips
	return


Jubilife_City_East_Entrance_EventScripts_Fisherman_Give_Tips::
	msgbox Jubilife_City_East_Entrance_EventScripts_Fisherman_Give_Tips_Text, MSGBOX_SIGN
	releaseall
	end


Jubilife_City_East_Entrance_EventScripts_Fisherman_Donnt_Give_Tips::
	msgbox Jubilife_City_East_Entrance_EventScripts_Fisherman_Donnt_Give_Tips_Text, MSGBOX_SIGN
	releaseall
	end


Jubilife_City_East_Entrance_EventScripts_Fisherman_Player_Dont_Like_Fishing::
	msgbox Jubilife_City_East_Entrance_EventScripts_Fisherman_Player_Dont_Like_Fishing_Text, MSGBOX_SIGN
	releaseall
	end


Jubilife_City_East_Entrance_EventScripts_Policeman_Text::
	.string "Route 218 up ahead is a great fishing\n"
	.string "hole that’s almost unknown to people.$"

Jubilife_City_East_Entrance_EventScripts_Fisherman_Ask_If_Player_Like_Old_Rod::
	.string "Yes, sir!\n"
	.string "An Old Rod is a good thing!\p"
	.string "You think so too, am I right?$"

Jubilife_City_East_Entrance_EventScripts_Fisherman_Player_Dont_Like_Fishing_Text::
	.string "Oh, really?\n"
	.string "You don’t like to fish?$"

Jubilife_City_East_Entrance_EventScripts_Fisherman_We_Can_Be_Friends::
	.string "Yes! Good answer!\n"
	.string "We can be friends!\p"
	.string "Here you go.\n"
	.string "That’s my Old Rod!$"

Jubilife_City_East_Entrance_EventScripts_Fisherman_Do_You_Need_Tips::
	.string "You should fish wherever there is\n"
	.string "a body of water.\p"
	.string "Oh, and by the way, did you need\n"
	.string "any tips on using that fishing rod?$"

Jubilife_City_East_Entrance_EventScripts_Fisherman_Give_Tips_Text::
	.string "First, you face any body of water,\n"
	.string "then you use your fishing rod.\p"
	.string "Next, you focus!\n"
	.string "If a Pokémon bites, “!” appears.\l"
	.string "That’s your cue to reel it in!$"

Jubilife_City_East_Entrance_EventScripts_Fisherman_Donnt_Give_Tips_Text::
	.string "When you’re fishing for Pokémon,\n"
	.string "the first hurdle is getting a bite.\p"
	.string "When you reel the Pokémon in, you’ve\n"
	.string "got to battle it.\p"
	.string "So, fishing gives you twice the fun!$"
