Jubilife_City_Pokemon_Center_1F_MapScripts::
	.byte 0


Jubilife_City_Pokemon_Center_1F_EventScript_Nurse_Blocking_B1F::
	msgbox Jubilife_City_Pokemon_Center_1F_EventScript_Nurse_Blocking_B1F_Text, MSGBOX_NPC
	end


Jubilife_City_Pokemon_Center_1F_EventScript_Little_Girl::
	msgbox Jubilife_City_Pokemon_Center_1F_EventScript_Little_Girl_Text, MSGBOX_NPC
	end


Jubilife_City_Pokemon_Center_1F_EventScript_School_Boy::
	msgbox Jubilife_City_Pokemon_Center_1F_EventScript_School_Boy_Text, MSGBOX_NPC
	end


Jubilife_City_Pokemon_Center_1F_EventScript_Lady::
	msgbox Jubilife_City_Pokemon_Center_1F_EventScript_Lady_Text, MSGBOX_NPC
	end


Jubilife_City_Pokemon_Center_1F_EventScript_Nurse::
	setvar VAR_0x800B, 5
	call Common_EventScript_PkmnCenterNurse
	waitmessage
	waitbuttonpress
	release
	end


Jubilife_City_Pokemon_Center_1F_EventScript_Nurse_Blocking_B1F_Text::
	.string "I'm very sorry.\p"
	.string "We are working underground right now.\n"
	.string "It's off-limits to the public.\p"
	.string "Please try later on.$"

Jubilife_City_Pokemon_Center_1F_EventScript_Little_Girl_Text::
	.string "You know how Pokémon have types like\n"
	.string "Water, Fire, and Grass?\p"
	.string "Well, all types have strengths and\n"
	.string "weaknesses against other types.$"

Jubilife_City_Pokemon_Center_1F_EventScript_School_Boy_Text::
	.string "In the Union Room upstairs, you can\n"
	.string "chat and trade with other people.\p"
	.string "And that's not all you can do.\n"
	.string "Check it out!$"

Jubilife_City_Pokemon_Center_1F_EventScript_Lady_Text::
	.string "You can still catch a Pokémon if you\n"
	.string "already have six traveling with you.\p"
	.string "It automatically gets sent to the PC\n"
	.string "network in Pokémon Centers.\p"
	.string "Knowing that, I can keep on catching\n"
	.string "more and more Pokémon!\p"
	.string "It'll make it more fun to check\n"
	.string "the PC in any Pokémon Center!$"
