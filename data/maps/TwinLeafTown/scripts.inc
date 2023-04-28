TwinLeafTown_MapScripts::
	.byte 0

TwinLeafTown_EventScript_Fat_MAN::
	msgbox TwinLeafTown_EventScript_Fat_MAN_Text, MSGBOX_NPC
	end

TwinLeafTown_EventScript_LADY::
	msgbox TwinLeafTown_EventScript_LADY_Text, MSGBOX_NPC
	end

TwinLeafTown_EventScript_Sign::
	msgbox TwinLeafTown_EventScript_Sign_Text, MSGBOX_SIGN
	end

TwinLeafTown_EventScript_Guy::
	compare VAR_RIVAL_MOM_TEXT, 0 
	goto_if_eq TwinLeafTown_EventScript_Guy_1
	compare VAR_RIVAL_MOM_TEXT, 1
	goto_if_eq TwinLeafTown_EventScript_Guy_2

TwinLeafTown_EventScript_Guy_1:
	msgbox TwinLeafTown_EventScript_Guy_Text_0, MSGBOX_NPC
	end

TwinLeafTown_EventScript_Guy_2:
	msgbox TwinLeafTown_EventScript_Guy_Text_1, MSGBOX_NPC
	end

TwinLeafTown_EventScript_Players_House_Sign::
	msgbox TwinLeafTown_EventScript_Players_House_Sign_Text, MSGBOX_SIGN
	end

TwinLeafTown_EventScript_Barrys_House_Sign::
	msgbox TwinLeafTown_EventScript_Players_House_Sign_Text, MSGBOX_SIGN
	end

TwinLeafTown_EventScript_Fat_MAN_Text:
	.string "Technology just blows me away!\p"
	.string "I mean, now you can play with people\n"
	.string "around the world...wirelessly!$"

TwinLeafTown_EventScript_LADY_Text:
	.string "It's true that wild Pokdmon do attack\n"
	.string "people sometimes...\p"
	.string "But, Pokemon also open their hearts\n"
	.string "to you, so you can become friends.$"

TwinLeafTown_EventScript_Sign_Text:
	.string "Twinleaf Town\n"
    .string "Fresh and Free!$"

TwinLeafTown_EventScript_Guy_Text_0:
	.string "Hiya, {PLAYER}.\n"
	.string "Barry was looking for you.\p"
	.string "I think he's home now.\n"
	.string "Why don't you go check it out?$"

TwinLeafTown_EventScript_Guy_Text_1:
	.string "Hiya, {PLAYER}.\n"
	.string "You are looking for Barry?\p"
	.string "He just went tearing of a little\n"
	.string "while ago.\p"
	.string "He's probably not gone too far.\n"
	.string "Why not go chase after him?$"

TwinLeafTown_EventScript_Players_House_Sign_Text:
    .string "{PLAYER}'s House$"

TwinLeafTown_EventScript_Barrys_House_Sign_Text:
    .string "{RIVAL}'s House$"
