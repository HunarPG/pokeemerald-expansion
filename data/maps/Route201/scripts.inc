Route201_MapScripts::
	.byte 0

Route201_EventScript_Location_Sign::
	msgbox Route201_Text_Location_Sign, MSGBOX_SIGN
	end

Route201_EventScript_Trianer_Tips::
	msgbox Route201_Text_Trianer_Tips, MSGBOX_SIGN
	end

Route201_EventScript_Location_Sign_1::
	msgbox Route201_Text_Location_Sign_1, MSGBOX_SIGN
	end

Route201_Text_Location_Sign:
    .string "Rt. 201\n"
    .string "Sandgem Town$"

Route201_Text_Trianer_Tips:
    .string "Trainer Tips\p"
    .string "Don't be shy! Talk to anyone and\n"
    .string "everyone you happen to see.\p"
    .string "By talking to people, you will get\n"
    .string "invalueable information and advice.$"

Route201_Text_Location_Sign_1:
    .string "Rt. 201\n"
    .string "Twinleaf Town$"
