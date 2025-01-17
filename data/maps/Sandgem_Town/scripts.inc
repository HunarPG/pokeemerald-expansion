Sandgem_Town_MapScripts::
	.byte 0


Sandgem_Town_EventScript_We_Meet_Rival_1::
	return


Sandgem_Town_EventScript_We_Meet_Rival_2::
	return


Sandgem_Town_EventScript_We_Meet_Rival_3::
	return


Sandgem_Town_EventScript_Rival_2_House_Sign::
	checkplayergender
	goto_if_eq VAR_RESULT, MALE, Sandgem_Town_EventScript_Dawn_House_Sign
	goto_if_eq VAR_RESULT, FEMALE, Sandgem_Town_EventScript_Lucas_House_Sign
	return


Sandgem_Town_EventScript_Rowans_Lab_Sign::
	msgbox Sandgem_Town_EventScript_Rowans_Lab_Sign_Text, MSGBOX_SIGN
	return


Sandgem_Town_EventScript_Dawn_House_Sign::
	msgbox Sandgem_Town_EventScript_Dawn_House_Sign_Text, MSGBOX_SIGN
	return


Sandgem_Town_EventScript_Lucas_House_Sign::
	msgbox Sandgem_Town_EventScript_Lucas_House_Sign_Text, MSGBOX_SIGN
	return


Sandgem_Town_EventScript_Pokemon_Center_Sign::
	msgbox Sandgem_Town_EventScript_Pokemon_Center_Sign_Text, MSGBOX_SIGN
	return


Sandgem_Town_EventScript_Pokemon_Mart_Sign::
	msgbox Sandgem_Town_EventScript_Pokemon_Mart_Sign_Text, MSGBOX_SIGN
	return


Sandgem_Town_EventScript_Sign::
	msgbox Sandgem_Town_EventScript_Sign_Text, MSGBOX_SIGN
	return


Sandgem_Town_EventScript_Boy::
	msgbox Sandgem_Town_EventScript_Boy_Text, MSGBOX_SIGN
	return


Sandgem_Town_EventScript_Girl::
	msgbox Sandgem_Town_EventScript_Girl_Text, MSGBOX_SIGN
	return


Sandgem_Town_EventScript_Youngster::
	msgbox Sandgem_Town_EventScript_Youngster_Text, MSGBOX_SIGN
	return


Sandgem_Town_EventScript_Dawn_House_Sign_Text::
	.string "Dawn's House$"

Sandgem_Town_EventScript_Lucas_House_Sign_Text::
	.string "Lucas's House$"

Sandgem_Town_EventScript_Pokemon_Center_Sign_Text::
	.string "Heal Your Pokemon!\n"
	.string "Pokemon Center$"

Sandgem_Town_EventScript_Pokemon_Mart_Sign_Text::
	.string "All Your Item Needs Fulfilled!\n"
	.string "Pokemon Mart$"

Sandgem_Town_EventScript_Sign_Text::
	.string "Sandgem Town\n"
	.string "Town of Sand!$"

Sandgem_Town_EventScript_Boy_Text::
	.string "That thing you have!\p"
	.string "It's a Pokedex, isn't it?!\p"
	.string "You are off to see all kinds of\n"
	.string "Pokemon now! Lucky you!$"

Sandgem_Town_EventScript_Girl_Text::
	.string "So I don't forget what's happened,\n"
	.string "till now, I'd better save this...\p"
	.string "There!\n"
	.string "Now I can take a break.$"

Sandgem_Town_EventScript_Youngster_Text::
	.string "Oh, wow!\n"
	.string "Pokemon are so cool!\p"
	.string "You can make yours battle and make\n"
	.string "them stronger!\p"
	.string "I wish I had some!\n"
	.string "It's so cool!$"

Sandgem_Town_EventScript_Rowans_Lab_Sign_Text::
	.string "Pokemon Research Lab$"
