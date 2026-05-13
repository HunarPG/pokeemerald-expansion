JubilifeCityEastEntrance_MapScripts::
	.byte 0


JubilifeCityEastEntrance_EventScripts_Policeman::
	msgbox JubilifeCityEastEntrance_EventScripts_Policeman_Text_0, MSGBOX_NPC
	end


JubilifeCityEastEntrance_EventScripts_Fisherman::
	goto_if_unset FLAG_RECEIVED_OLD_ROD, JubilifeCityEastEntrance_EventScripts_Fisherman_1
	goto JubilifeCityEastEntrance_EventScripts_Fisherman_Already_Have_Old_Rod
	return

JubilifeCityEastEntrance_EventScripts_Fisherman_1:
	goto JubilifeCityEastEntrance_EventScripts_Fisherman_Ask_About_Old_Rod
	return


JubilifeCityEastEntrance_EventScripts_Fisherman_Ask_About_Old_Rod::
	lockall
	faceplayer
	msgbox JubilifeCityEastEntrance_EventScripts_Fisherman_Ask_About_Old_Rod_Text_0, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, TRUE, JubilifeCityEastEntrance_EventScripts_Fisherman_Gives_Old_Rod
	goto_if_eq VAR_RESULT, FALSE, JubilifeCityEastEntrance_EventScripts_Fisherman_Player_Dont_Like_Fishing
	return


JubilifeCityEastEntrance_EventScripts_Fisherman_Already_Have_Old_Rod::
	faceplayer
	msgbox JubilifeCityEastEntrance_EventScripts_Fisherman_Already_Have_Old_Rod_Text_0, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, TRUE, JubilifeCityEastEntrance_EventScripts_Fisherman_Give_Tips
	goto_if_eq VAR_RESULT, FALSE, JubilifeCityEastEntrance_EventScripts_Fisherman_Donnt_Give_Tips
	return


JubilifeCityEastEntrance_EventScripts_Fisherman_Gives_Old_Rod::
	msgbox JubilifeCityEastEntrance_EventScripts_Fisherman_Gives_Old_Rod_Text_0, MSGBOX_SIGN
	giveitem ITEM_OLD_ROD
	setflag FLAG_RECEIVED_OLD_ROD
	msgbox JubilifeCityEastEntrance_EventScripts_Fisherman_Already_Have_Old_Rod_Text_0, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, TRUE, JubilifeCityEastEntrance_EventScripts_Fisherman_Give_Tips
	goto_if_eq VAR_RESULT, FALSE, JubilifeCityEastEntrance_EventScripts_Fisherman_Donnt_Give_Tips
	return


JubilifeCityEastEntrance_EventScripts_Fisherman_Give_Tips::
	msgbox JubilifeCityEastEntrance_EventScripts_Fisherman_Give_Tips_Text_0, MSGBOX_SIGN
	releaseall
	end


JubilifeCityEastEntrance_EventScripts_Fisherman_Donnt_Give_Tips::
	msgbox JubilifeCityEastEntrance_EventScripts_Fisherman_Donnt_Give_Tips_Text_0, MSGBOX_SIGN
	releaseall
	end


JubilifeCityEastEntrance_EventScripts_Fisherman_Player_Dont_Like_Fishing::
	msgbox JubilifeCityEastEntrance_EventScripts_Fisherman_Player_Dont_Like_Fishing_Text_0, MSGBOX_SIGN
	releaseall
	end


JubilifeCityEastEntrance_EventScripts_Policeman_Text_0:
	.string "Route 218 up ahead is a great fishing\n"
	.string "hole that's almost unknown to people.$"

JubilifeCityEastEntrance_EventScripts_Fisherman_Ask_About_Old_Rod_Text_0:
	.string "Yes, sir!\n"
	.string "An Old Rod is a good thing!\p"
	.string "You think so too, am I right?$"

JubilifeCityEastEntrance_EventScripts_Fisherman_Already_Have_Old_Rod_Text_0:
	.string "You should fish wherever there is\n"
	.string "a body of water.\p"
	.string "Oh, and by the way, did you need\n"
	.string "any tips on using that fishing rod?$"

JubilifeCityEastEntrance_EventScripts_Fisherman_Gives_Old_Rod_Text_0:
	.string "Yes! Good answer!\n"
	.string "We can be friends!\p"
	.string "Here you go.\n"
	.string "That's my Old Rod!$"

JubilifeCityEastEntrance_EventScripts_Fisherman_Give_Tips_Text_0:
	.string "First, you face any body of water,\n"
	.string "then you use your fishing rod.\p"
	.string "Next, you focus!\n"
	.string "If a Pokémon bites, “!” appears.\l"
	.string "That's your cue to reel it in!$"

JubilifeCityEastEntrance_EventScripts_Fisherman_Donnt_Give_Tips_Text_0:
	.string "When you're fishing for Pokémon,\n"
	.string "the first hurdle is getting a bite.\p"
	.string "When you reel the Pokémon in, you've\n"
	.string "got to battle it.\p"
	.string "So, fishing gives you twice the fun!$"

JubilifeCityEastEntrance_EventScripts_Fisherman_Player_Dont_Like_Fishing_Text_0:
	.string "Oh, really?\n"
	.string "You don't like to fish?$"
