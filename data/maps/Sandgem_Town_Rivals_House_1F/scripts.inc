Sandgem_Town_Rivals_House_1F_MapScripts::
	.byte 0


Sandgem_Town_Rivals_House_1F_EventScript_Old_Man::
	msgbox Sandgem_Town_Rivals_House_1F_EventScript_Old_Man_Text, MSGBOX_NPC
	return


Sandgem_Town_Rivals_House_1F_EventScript_Little_Girl::
	checkplayergender
	goto_if_eq VAR_RESULT, MALE, Sandgem_Town_Rivals_House_1F_EventScript_Little_Girl_Sister
	goto_if_eq VAR_RESULT, FEMALE, Sandgem_Town_Rivals_House_1F_EventScript_Little_Girl_Brother
	return


Sandgem_Town_Rivals_House_1F_EventScript_Little_Girl_Sister::
	msgbox Sandgem_Town_Rivals_House_1F_EventScript_Little_Girl_Sister_Text, MSGBOX_NPC
	return


Sandgem_Town_Rivals_House_1F_EventScript_Little_Girl_Brother::
	msgbox Sandgem_Town_Rivals_House_1F_EventScript_Little_Girl_Brother_Text, MSGBOX_NPC
	return


Sandgem_Town_Rivals_House_1F_Almirah::
	msgbox Sandgem_Town_Rivals_House_1F_Almirah_Text, MSGBOX_SIGN
	return


Sandgem_Town_Rivals_House_1F_EventScript_Old_Man_Text::
	.string "Ah so that Rowan fellow is back?\n"
	.string "He's quite the remarkable man.\p"
	.string "He's been studying Pokemon since way,\n"
	.string "way back\p"
	.string "My son and grandchild help Rowan\n"
	.string "with his studies now.$"

Sandgem_Town_Rivals_House_1F_EventScript_Little_Girl_Sister_Text::
	.string "Who are you?\p"
	.string "...\p"
	.string "Oh...\n"
	.string "You're {PLAYER}??\p"
	.string "Hey you are doing that Pokedex thingy\n"
	.string "for the professor!\p"
	.string "Wow! That's the same as my big\n"
	.string "sister! Go for it!$"

Sandgem_Town_Rivals_House_1F_EventScript_Little_Girl_Brother_Text::
	.string "Who are you?\p"
	.string "...\p"
	.string "Oh...\n"
	.string "You're {PLAYER}??\p"
	.string "Hey you are doing that Pokedex thingy\n"
	.string "for the professor!\p"
	.string "Wow! That's the same as my big\n"
	.string "brother! Go for it!$"

Sandgem_Town_Rivals_House_1F_Almirah_Text::
	.string "It's lined with Pokemon picture books.$"
