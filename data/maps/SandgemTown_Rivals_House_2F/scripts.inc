SandgemTown_Rivals_House_2F_MapScripts::
	.byte 0

SandgemTown_Rivals_House_2F_EventScript_Shelf_Sign::
	msgbox SandgemTown_Rivals_House_2F_Text_Shelf_Sign MSGBOX_SIGN
	end

SandgemTown_Rivals_House_2F_EventScript_PC::
	msgbox SandgemTown_Rivals_House_2F_Text_PC MSGBOX_SIGN
	end

SandgemTown_Rivals_House_2F_Text_Shelf_Sign:
   .string "It's chock full of Pokemon books\n"
   .string "photo collections.$"

SandgemTown_Rivals_House_2F_Text_PC:
   .string "{PLAYER} checked the PC screen.\p"
   .string "Adventure Rule No. 1\n"
   .string "The X Button opens the menu!\p"
   .string "Adventure Rule No. 2\n"
   .string "Record your progress with SAVE.\p"
   .string "There is nothing else here...$"
	
