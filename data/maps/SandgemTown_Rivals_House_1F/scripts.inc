SandgemTown_Rivals_House_1F_MapScripts::
	.byte 0

SandgemTown_Rivals_House_1F_EventScript_Old_Man::
	msgbox SandgemTown_Rivals_House_1F_Text_Old_Man, MSGBOX_NPC
	end

SandgemTown_Rivals_House_1F_EventScript_Little_Girl::
	checkplayergender
	call_if_eq VAR_RESULT, MALE, SandgemTown_Rivals_House_1F_EventScript_Little_Girl_Sister
	call_if_eq VAR_RESULT, FEMALE, SandgemTown_Rivals_House_1F_EventScript_Little_Girl_Brother
	end

SandgemTown_Rivals_House_1F_EventScript_Little_Girl_Sister::
	msgbox SandgemTown_Rivals_House_1F_Text_Little_Girl_Sister, MSGBOX_NPC
	end

SandgemTown_Rivals_House_1F_EventScript_Little_Girl_Brother::
	msgbox SandgemTown_Rivals_House_1F_Text_Little_Girl_Brother, MSGBOX_NPC
	end

SandgemTown_Rivals_House_1F_Text_Old_Man:
   .string "Ah so that Rowan fellow is back?\n"
   .string "He's quite the remarkable man.\p"
   .string "He's been studying Pokemon since way,\n"
   .string "way back\p"
   .string "My son and grandchild help Rowan\n"
   .string "with his studies now.$"

SandgemTown_Rivals_House_1F_Text_Little_Girl_Sister:
   .string "Who are you?\p"
   .string "...\p"
   .string "Oh...\n"
   .string "You're {PLAYER}??\p"
   .string "Hey you are doing that Pokedex thingy\n"
   .string "for the professor!\p"
   .string "Wow! That's the same as my big\n"
   .string "sister! Go for it!$"

SandgemTown_Rivals_House_1F_Text_Little_Girl_Brother:
   .string "Who are you?\p"
   .string "...\p"
   .string "Oh...\n"
   .string "You're {PLAYER}??\p"
   .string "Hey you are doing that Pokedex thingy\n"
   .string "for the professor!\p"
   .string "Wow! That's the same as my big\n"
   .string "brother! Go for it!$"
	
