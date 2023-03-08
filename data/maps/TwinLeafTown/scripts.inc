 
TwinLeafTown_EventScript_Challenge::
	message TwinLeafTown_Text_Challenge
	waitmessage
	switch VAR_DIFFICULTY
	case 0, TwinLeafTown_EventScript_DefaultNormal
	case 1, TwinLeafTown_EventScript_DefaultHard
	case 2, TwinLeafTown_EventScript_DefaultChallenge

TwinLeafTown_EventScript_DefaultNormal:
	multichoicedefault 21, 6, MULTI_TAG_DIFFICULTY, 1, FALSE
	goto TwinLeafTown_EventScript_ChallengeSelect

TwinLeafTown_EventScript_DefaultHard:
	multichoicedefault 21, 6, MULTI_TAG_DIFFICULTY, 2, FALSE
	goto TwinLeafTown_EventScript_ChallengeSelect

TwinLeafTown_EventScript_DefaultChallenge:
	multichoicedefault 21, 6, MULTI_TAG_DIFFICULTY, 0, FALSE
	goto TwinLeafTown_EventScript_ChallengeSelect

TwinLeafTown_EventScript_ChallengeSelect:
	switch VAR_RESULT
	case 0, TwinLeafTown_EventScript_SelectedNormal
	case 2, TwinLeafTown_EventScript_SelectedChallenge
	case 1, TwinLeafTown_EventScript_SelectedHard
	case MULTI_B_PRESSED, TwinLeafTown_EventScript_SelectedCancel
	end

TwinLeafTown_EventScript_SelectedNormal:
	msgbox TwinLeafTown_Text_SelectedNormal, MSGBOX_DEFAULT
	setvar VAR_DIFFICULTY, 0
	closemessage
	end

TwinLeafTown_EventScript_SelectedHard:
	msgbox TwinLeafTown_Text_SelectedHard, MSGBOX_DEFAULT
	setvar VAR_DIFFICULTY, 1
	closemessage
	end

TwinLeafTown_EventScript_SelectedChallenge:
	msgbox TwinLeafTown_Text_SelectedChallenge, MSGBOX_DEFAULT
	setvar VAR_DIFFICULTY, 2
	closemessage
	end

TwinLeafTown_EventScript_SelectedCancel:
	msgbox TwinLeafTown_Text_SelectedCancel, MSGBOX_DEFAULT
	closemessage
	end

TwinLeafTown_Text_Challenge:
	.string "What difficulty would\n"
	.string "you like to play at?$"

TwinLeafTown_Text_SelectedChallenge:
	.string "Challenge difficulty\n"
	.string "was chosen.$"

TwinLeafTown_Text_SelectedNormal:
	.string "Normal difficulty\n"
	.string "was chosen.$"

TwinLeafTown_Text_SelectedHard:
	.string "Hard difficulty\n"
	.string "was chosen.$"

TwinLeafTown_Text_SelectedCancel:
	.string "Difficulty is\n"
	.string "unchanged.$"

TwinLeafTown_MapScripts::
	.byte 0

