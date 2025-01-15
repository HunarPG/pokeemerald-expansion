Sandgem_Town_Pokemon_Center_1F_MapScripts::
	.byte 0


Sandgem_Town_Pokemon_Center_1F_EventScript_Girl::
	msgbox Sandgem_Town_Pokemon_Center_1F_EventScript_Girl_Text, MSGBOX_NPC
	return


Sandgem_Town_Pokemon_Center_1F_EventScript_Nurse_Blocking_B1F::
	msgbox Sandgem_Town_Pokemon_Center_1F_EventScript_Nurse_Blocking_B1F_Text, MSGBOX_NPC
	return


Sandgem_Town_Pokemon_Center_1F_EventScript_Boy::
	msgbox Sandgem_Town_Pokemon_Center_1F_EventScript_Boy_Text, MSGBOX_NPC
	return


Sandgem_Town_Pokemon_Center_1F_EventScript_Old_Man::
	msgbox Sandgem_Town_Pokemon_Center_1F_EventScript_Old_Man_Text, MSGBOX_NPC
	return


Sandgem_Town_Pokemon_Center_1F_EventScript_Book_Shelf::
	msgbox Sandgem_Town_Pokemon_Center_1F_EventScript_Book_Shelf_Text, MSGBOX_SIGN
	return


Sandgem_Town_Pokemon_Center_1F_EventScript_Nurse::
	setvar VAR_0x800B, 5
	call Common_EventScript_PkmnCenterNurse
	closemessage
	waitbuttonpress
	return


Sandgem_Town_Pokemon_Center_1F_EventScript_Girl_Text::
	.string "The top floor of any Pokemon Center\n"
	.string "is the Pokemon Communication Club.\p"
	.string "There, you can have all sorts of fun\n"
	.string "with your friends.$"

Sandgem_Town_Pokemon_Center_1F_EventScript_Nurse_Blocking_B1F_Text::
	.string "I'm very sorry.\p"
	.string "We are working underground right now.\n"
	.string "It's off-limits to the public.\p"
	.string "Please try later on.$"

Sandgem_Town_Pokemon_Center_1F_EventScript_Boy_Text::
	.string "Talk to that nice lady at the counter\n"
	.string "and hand her your Pokemon.\p"
	.string "She'll heal your Pokemon to perfect\n"
	.string "health in no time at all!$"

Sandgem_Town_Pokemon_Center_1F_EventScript_Old_Man_Text::
	.string "Do you see that PC over there?\n"
	.string "That fancy Grey one?\p"
	.string "If you've got Pokemon with you,\n"
	.string "it's free to use.$"

Sandgem_Town_Pokemon_Center_1F_EventScript_Book_Shelf_Text::
	.string "It's chock-full of Pokemon books and\n"
	.string "photo collections.$"
