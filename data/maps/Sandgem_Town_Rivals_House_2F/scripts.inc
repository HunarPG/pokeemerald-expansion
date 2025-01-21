Sandgem_Town_Rivals_House_2F_MapScripts::
	.byte 0


Sandgem_Town_Rivals_House_2F_EventScript_PC::
	msgbox Sandgem_Town_Rivals_House_2F_EventScript_PC_Text, MSGBOX_NPC
	return


Sandgem_Town_Rivals_House_2F_EventScript_Book_Shelf::
	msgbox Sandgem_Town_Rivals_House_2F_EventScript_Book_Shelf_Text, MSGBOX_NPC
	return


Sandgem_Town_Rivals_House_2F_EventScript_PC_Text::
	.string "{PLAYER} checked the PC screen.\p"
	.string "Adventure Rule No. 1\n"
	.string "The X Button opens the menu!\p"
	.string "Adventure Rule No. 2\n"
	.string "Record your progress with SAVE.\p"
	.string "There is nothing else here...$"

Sandgem_Town_Rivals_House_2F_EventScript_Book_Shelf_Text::
	.string "It's chock full of Pokémon books\n"
	.string "photo collections.$"
