SandgemTownRivalsHouse1F_MapScripts::
	.byte 0


SandgemTownRivalsHouse1F_EventScript_Old_Man::
	msgbox SandgemTownRivalsHouse1F_EventScript_Old_Man_Text_0, MSGBOX_NPC
	return


SandgemTownRivalsHouse1F_EventScript_Little_Girl::
	checkplayergender
	goto_if_eq VAR_RESULT, MALE, SandgemTownRivalsHouse1F_EventScript_Little_Girl_Sister
	goto_if_eq VAR_RESULT, FEMALE, SandgemTownRivalsHouse1F_EventScript_Little_Girl_Brother
	return


SandgemTownRivalsHouse1F_EventScript_Little_Girl_Sister::
	msgbox SandgemTownRivalsHouse1F_EventScript_Little_Girl_Sister_Text_0, MSGBOX_NPC
	return


SandgemTownRivalsHouse1F_EventScript_Little_Girl_Brother::
	msgbox SandgemTownRivalsHouse1F_EventScript_Little_Girl_Brother_Text_0, MSGBOX_NPC
	return


SandgemTownRivalsHouse1F_Almirah::
	msgbox SandgemTownRivalsHouse1F_Almirah_Text_0, MSGBOX_SIGN
	return


SandgemTownRivalsHouse1F_EventScript_Old_Man_Text_0:
	.string "Ah so that Rowan fellow is back?\n"
	.string "He's quite the remarkable man.\p"
	.string "He's been studying Pokémon since way,\n"
	.string "way back\p"
	.string "My son and grandchild help Rowan\n"
	.string "with his studies now.$"

SandgemTownRivalsHouse1F_EventScript_Little_Girl_Sister_Text_0:
	.string "Who are you?\p"
	.string "...\p"
	.string "Oh...\n"
	.string "You're {PLAYER}??\p"
	.string "Hey you are doing that Pokedex thingy\n"
	.string "for the professor!\p"
	.string "Wow! That's the same as my big\n"
	.string "sister! Go for it!$"

SandgemTownRivalsHouse1F_EventScript_Little_Girl_Brother_Text_0:
	.string "Who are you?\p"
	.string "...\p"
	.string "Oh...\n"
	.string "You're {PLAYER}??\p"
	.string "Hey you are doing that Pokedex thingy\n"
	.string "for the professor!\p"
	.string "Wow! That's the same as my big\n"
	.string "brother! Go for it!$"

SandgemTownRivalsHouse1F_Almirah_Text_0:
	.string "It's lined with Pokémon picture books.$"
