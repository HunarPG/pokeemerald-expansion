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

Route201_EventScript_Boy::
	msgbox Route201_Text_Boy, MSGBOX_NPC
	end

Route201_EventScript_Girl::
	msgbox Route201_Text_Girl, MSGBOX_NPC
	end

Route201_EventScript_School_Kid::
	msgbox Route201_Text_School_Kid, MSGBOX_NPC
	end

Route201_EventScript_Mart_Guy::
	call_if_unset FLAG_RECEIVED_POTION_Route_201, Route201_EventScript_Mart_Guy_Give_Potion
    call_if_set FLAG_RECEIVED_POTION_Route_201, Route201_EventScript_Mart_Guy_Already_Gave_Potion
	end

Route201_EventScript_Mart_Guy_Give_Potion:
	msgbox Route201_Text_Mart_Guy_Give_Potion, MSGBOX_NPC
	giveitem ITEM_POTION
	goto_if_eq VAR_RESULT, FALSE, Route_201_EventScript_BagIsFull
    setflag FLAG_RECEIVED_POTION_Route_201
    release
    end

Route201_EventScript_Mart_Guy_Already_Gave_Potion:
	msgbox Route201_Text_Mart_Already_Gave_Potion, MSGBOX_NPC
    release
    end

Route_201_EventScript_BagIsFull::
	msgbox gText_TooBadBagIsFull, MSGBOX_DEFAULT
	release
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

Route201_Text_Boy:
    .string "Wild Pokemon lurk in tall grass. They\n"
    .string "can come bursting out at any time.\p"
    .string "So, if you're wanting to battle wild\n"
    .string "Pokemon, just walk in tall grass.\p"
    .string "If you want to avoid wild Pokemon\n"
    .string "then stay out of tall grass.$"

Route201_Text_Girl:
    .string "If your Pokemon's health--that's its\n"
    .string "HP--is getting low, you should go\l"
    .string "home and get some rest.$"

Route201_Text_School_Kid:
    .string "That ledge is one way. Jump down\n"
    .string "for a shortcut to Twinleaf Town!$"

Route201_Text_Mart_Guy_Give_Potion:
    .string "Hi!\n"
    .string "I work at a Pokemon Mart.\p"
    .string "Did you know that a Pokemon's health\n"
    .string "is measured by Hit Points (HP)?\p"
    .string "If a Pokemon Runs out of HP, it\n"
    .string "faints and can't battle anymore.\p"
    .string "If a Pokemon's HP gets low, you\n"
    .string "should heal it with a Potion.\p"
    .string "Here, let me give you a Potion as\n"
    .string "a free sample. First one's free!\p"
    .string "It will automatically go in the\n"
    .string "Medicine Pocket of your Bag.$"

Route201_Text_Mart_Already_Gave_Potion:
    .string "You can find a Pokemon mart in cities\n"
    .string "and most major towns.$"
