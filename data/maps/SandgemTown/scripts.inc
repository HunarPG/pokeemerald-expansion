SandgemTown_MapScripts::
	.byte 0

SandgemTown_EventScript_Sign::
	msgbox SandgemTown_Text_Sign, MSGBOX_SIGN
	end

SandgemTown_EventScript_Pokemon_Mart_Sign::
	msgbox SandgemTown_Text_Pokemon_Mart_Sign, MSGBOX_SIGN
	end

SandgemTown_EventScript_Pokemon_Center_Sign::
	msgbox SandgemTown_Text_Pokemon_Center_Sign, MSGBOX_SIGN
	end

SandgemTown_EventScript_Rival2_House_Sign::
	checkplayergender
	call_if_eq VAR_RESULT, MALE, SandgemTown_EventScript_Dawn_House_Sign
	call_if_eq VAR_RESULT, FEMALE, SandgemTown_EventScript_Lucas_House_Sign
	end

SandgemTown_EventScript_Dawn_House_Sign::
	msgbox SandgemTown_Text_Dawn_House_Sign, MSGBOX_SIGN
	end

SandgemTown_EventScript_Lucas_House_Sign::
	msgbox SandgemTown_Text_Lucas_House_Sign, MSGBOX_SIGN
	end

SandgemTown_EventScript_Boy::
	msgbox SandgemTown_Text_Boy, MSGBOX_NPC
	end

SandgemTown_EventScript_Youngster::
	msgbox SandgemTown_Text_Youngster, MSGBOX_NPC
	end

SandgemTown_EventScript_Girl::
	msgbox SandgemTown_Text_Girl, MSGBOX_NPC
	end

SandgemTown_Text_Sign:
    .string "Sandgem Town\n"
    .string "Town of Sand!$"

SandgemTown_Text_Pokemon_Mart_Sign:
    .string "All Your Item Needs Fulfilled!\n"
    .string "Pokemon Mart$"

SandgemTown_Text_Pokemon_Center_Sign:
    .string "Heal Your Pokemon!\n"
    .string "Pokemon Center$"

SandgemTown_Text_Dawn_House_Sign:
   .string "Dawn's House$"

SandgemTown_Text_Lucas_House_Sign:
   .string "Lucas's House$"

SandgemTown_Text_Boy:
   .string "That thing you have!\p"
   .string "It's a Pokedex, isn't it?!\p"
   .string "You are off to see all kinds of\n"
   .string "Pokemon now! Lucky you!$"

SandgemTown_Text_Youngster:
   .string "Oh, wow!\n"
   .string "Pokemon are so cool!\p"
   .string "You can make yours battle and make\n"
   .string "them stronger!\p"
   .string "I wish I had some!\n"
   .string "It's so cool!$"

SandgemTown_Text_Girl:
   .string "So I don't forget what's happened,\n"
   .string "till now, I'd better save this...\p"
   .string "There!\n"
   .string "Now I can take a break.$"

