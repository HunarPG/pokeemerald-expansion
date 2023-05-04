SandgemTown_MapScripts::
	.byte 0

SandgemTown_EventScript_Sign::
	msgbox SandgemTown_Text_Sign, MSGBOX_SIGN
	end

SandgemTown_EventScript_Pokemon_Mart_Sign::
	msgbox SandgemTown_Text_Pokemon_Mart_Sign, MSGBOX_SIGN
	end

SandgemTown_EventScript_Pokemon_Center_Sign::
	msgbox SandgemTown_Text_Pokemon_Center_Sign, MSGBOX_SIGN
	end

SandgemTown_EventScript_Rival2_House_Sign::
	checkplayergender
	call_if_eq VAR_RESULT, MALE, SandgemTown_EventScript_Dawn_House_Sign
	call_if_eq VAR_RESULT, FEMALE, SandgemTown_EventScript_Lucas_House_Sign
	end

SandgemTown_EventScript_Dawn_House_Sign::
	msgbox SandgemTown_Text_Dawn_House_Sign, MSGBOX_SIGN
	end

SandgemTown_EventScript_Lucas_House_Sign::
	msgbox SandgemTown_Text_Lucas_House_Sign, MSGBOX_SIGN
	end

SandgemTown_Text_Sign:
    .string "Sandgem Town\n"
    .string "Town of Sand!$"

SandgemTown_Text_Pokemon_Mart_Sign:
    .string "All Your Item Needs Fulfilled!\n"
    .string "Pokemon Mart$"

SandgemTown_Text_Pokemon_Center_Sign:
    .string "Heal Your Pokemon!\n"
    .string "Pokemon Center$"

SandgemTown_Text_Dawn_House_Sign:
   .string "Dawn's House$"

SandgemTown_Text_Lucas_House_Sign:
   .string "Lucas's House$"

