Route_201_MapScripts::
	.byte 0


Route_201_EventScript_Location_Sign_Near_Twin_Leaf::
	msgbox Route_201_EventScript_Location_Sign_Near_Twin_Leaf_Text, MSGBOX_SIGN
	return


Route_201_EventScript_Boy::
	msgbox Route_201_EventScript_Boy_Text, MSGBOX_NPC
	return


Route_201_EventScript_Trainer_Tips::
	msgbox Route_201_EventScript_Trainer_Tips_Text, MSGBOX_SIGN
	return


Route_201_EventScript_Girl::
	msgbox Route_201_EventScript_Girl_Text, MSGBOX_NPC
	return


Route_201_EventScript_Mart_Guy::
	goto_if_unset FLAG_RECEIVED_POTION_Route_201, Route_201_EventScript_Mart_Guy_1
	goto Route201_EventScript_Mart_Guy_Already_Gave_Potion
	return

Route_201_EventScript_Mart_Guy_1:
	goto Route_201_EventScript_Mart_Guy_Give_Potion
	return


Route_201_EventScript_Mart_Guy_Give_Potion::
	msgbox Route_201_EventScript_Mart_Guy_Give_Potion_Text, MSGBOX_NPC
	giveitem ITEM_POTION
	playfanfare MUS_OBTAIN_ITEM
	waitfanfare
	goto_if_eq VAR_RESULT, FALSE, Route_201_EventScript_Bag_Is_Full
	setflag FLAG_RECEIVED_POTION_Route_201
	return


Route201_EventScript_Mart_Guy_Already_Gave_Potion::
	msgbox Route201_EventScript_Mart_Guy_Already_Gave_Potion_Text, MSGBOX_NPC
	return


Route_201_EventScript_Bag_Is_Full::
	msgbox gText_TooBadBagIsFull, MSGBOX_NPC
	return


Route_201_EventScript_School_Kid::
	msgbox Route_201_EventScript_School_Kid_Text, MSGBOX_NPC
	return


Route_201_EventScript_Location_Sign_Near_Sandgem::
	msgbox Route_201_EventScript_Location_Sign_Near_Sandgem_Text, MSGBOX_SIGN
	return


Route_201_EventScript_Location_Sign_Near_Twin_Leaf_Text::
	.string "Rt. 201\n"
	.string "Twinleaf Town$"

Route_201_EventScript_Boy_Text::
	.string "Wild Pokemon lurk in tall grass. They\n"
	.string "can come bursting out at any time.\p"
	.string "So, if you're wanting to battle wild\n"
	.string "Pokemon, just walk in tall grass.\p"
	.string "If you want to avoid wild Pokemon\n"
	.string "then stay out of tall grass.$"

Route_201_EventScript_Trainer_Tips_Text::
	.string "Trainer Tips\p"
	.string "Don't be shy! Talk to anyone and\n"
	.string "everyone you happen to see.\p"
	.string "By talking to people, you will get\n"
	.string "invalueable information and advice.$"

Route_201_EventScript_Girl_Text::
	.string "If your Pokemon's health--that's its\n"
	.string "HP--is getting low, you should go\l"
	.string "home and get some rest.$"

Route_201_EventScript_Mart_Guy_Give_Potion_Text::
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

Route201_EventScript_Mart_Guy_Already_Gave_Potion_Text::
	.string "You can find a Pokemon mart in cities\n"
	.string "and most major towns.$"

Route_201_EventScript_School_Kid_Text::
	.string "That ledge is one way. Jump down\n"
	.string "for a shortcut to Twinleaf Town!$"

Route_201_EventScript_Location_Sign_Near_Sandgem_Text::
	.string "Rt. 201\n"
	.string "Sandgem Town$"
