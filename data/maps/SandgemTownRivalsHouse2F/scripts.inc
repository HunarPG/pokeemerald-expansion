SandgemTownRivalsHouse2F_MapScripts::
	.byte 0


SandgemTownRivalsHouse2F_EventScript_PC::
	msgbox SandgemTownRivalsHouse2F_EventScript_PC_Text_0, MSGBOX_NPC
	end


SandgemTownRivalsHouse2F_EventScript_Book_Shelf::
	msgbox SandgemTownRivalsHouse2F_EventScript_Book_Shelf_Text_0, MSGBOX_NPC
	end


SandgemTownRivalsHouse2F_EventScript_PC_Text_0:
	.string "{PLAYER} checked the PC screen.\p"
	.string "Adventure Rule No. 1\n"
	.string "The X Button opens the menu!\p"
	.string "Adventure Rule No. 2\n"
	.string "Record your progress with SAVE.\p"
	.string "There is nothing else here...$"

SandgemTownRivalsHouse2F_EventScript_Book_Shelf_Text_0:
	.string "It's chock full of Pokémon books\n"
	.string "photo collections.$"
