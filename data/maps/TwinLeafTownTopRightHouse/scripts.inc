TwinLeafTownTopRightHouse_MapScripts::
	.byte 0


TwinLeafTownTopRightHouse_EventScript_Man::
	compare VAR_LAKE_EVENT, 1
	goto_if_ge TwinLeafTownTopRightHouse_EventScript_Man_2
	msgbox TwinLeafTownTopRightHouse_EventScript_Man_Text_1, MSGBOX_NPC
TwinLeafTownTopRightHouse_EventScript_Man_1:
	end

TwinLeafTownTopRightHouse_EventScript_Man_2:
	msgbox TwinLeafTownTopRightHouse_EventScript_Man_Text_0, MSGBOX_NPC
	goto TwinLeafTownTopRightHouse_EventScript_Man_1


TwinLeafTownTopRightHouse_EventScript_Man_Text_0:
	.string "I went on an adventure with some\n"
	.string "Pokémon a long time ago\p"
	.string "It was only to Sandgem, the next town\n"
	.string "over, though. Yeah, good times...$"

TwinLeafTownTopRightHouse_EventScript_Man_Text_1:
	.string "You're off to hang with {RIVAL}\n"
	.string "again, right? You two sure are tight!$"
