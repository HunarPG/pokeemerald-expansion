Jubilife_City_School_MapScripts::
	.byte 0


Jubilife_City_School_EventScripts_Barry::
	lock
	faceplayer
	msgbox Jubilife_City_School_EventScripts_Barry_Text_0, MSGBOX_SIGN
	playfanfare MUS_DP_OBTAIN_ITEM
	removeitem ITEM_PARCEL
	msgbox Jubilife_City_School_EventScripts_Barry_Text_1, MSGBOX_SIGN
	msgbox Jubilife_City_School_EventScripts_Barry_Text_2, MSGBOX_SIGN
	giveitem ITEM_TOWN_MAP
	msgbox Jubilife_City_School_EventScripts_Barry_Text_3, MSGBOX_SIGN
	specialvar VAR_RESULT, GetPlayerFacingDirection
	switch VAR_RESULT
	case DIR_EAST, Jubilife_City_School_EventScripts_Barry_3
	case DIR_WEST, Jubilife_City_School_EventScripts_Barry_3
	case DIR_NORTH, Jubilife_City_School_EventScripts_Barry_4
Jubilife_City_School_EventScripts_Barry_1:
	playse SE_EXIT
	removeobject LOCALID_BARRY_SCHOOL
	setflag FLAG_HIDE_BARRY_IN_SCHOOL
	clearflag FLAG_HIDE_JOKER_1
	clearflag FLAG_HIDE_JOKER_2
	setvar VAR_JUBILIFE_CITY_STATE, 2
	clearflag FLAG_HIDE_POKETCH_EMPLOYEE
	release
	end

Jubilife_City_School_EventScripts_Barry_3:
	applymovement LOCALID_BARRY_SCHOOL, Jubilife_City_School_EventScripts_Barry_Movement_0
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Jubilife_City_School_EventScripts_Barry_Movement_1
	applymovement LOCALID_BARRY_SCHOOL, Jubilife_City_School_EventScripts_Barry_Movement_2
	waitmovement 0
	applymovement LOCALID_BARRY_SCHOOL, Jubilife_City_School_EventScripts_Barry_Movement_0
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Jubilife_City_School_EventScripts_Barry_Movement_1
	applymovement LOCALID_BARRY_SCHOOL, Jubilife_City_School_EventScripts_Barry_Movement_2
	waitmovement 0
	goto Jubilife_City_School_EventScripts_Barry_1

Jubilife_City_School_EventScripts_Barry_4:
	applymovement LOCALID_BARRY_SCHOOL, Jubilife_City_School_EventScripts_Barry_Movement_3
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Jubilife_City_School_EventScripts_Barry_Movement_1
	applymovement LOCALID_BARRY_SCHOOL, Jubilife_City_School_EventScripts_Barry_Movement_4
	waitmovement 0
	goto Jubilife_City_School_EventScripts_Barry_1


Jubilife_City_School_EventScripts_Youngster_Near_Book::
	msgbox Jubilife_City_School_EventScripts_Youngster_Near_Book_Text_0, MSGBOX_NPC
	end


Jubilife_City_School_EventScripts_Lady_Near_Book::
	msgbox Jubilife_City_School_EventScripts_Lady_Near_Book_Text_0, MSGBOX_NPC
	end


Jubilife_City_School_EventScripts_Lady_Near_Board::
	msgbox Jubilife_City_School_EventScripts_Lady_Near_Board_Text_0, MSGBOX_NPC
	end


Jubilife_City_School_EventScripts_Youngster_Near_Pc::
	msgbox Jubilife_City_School_EventScripts_Youngster_Near_Pc_Text_0, MSGBOX_NPC
	end


Jubilife_City_School_EventScripts_School_Boy::
	goto_if_set FLAG_JUBILIFE_SCHOOL_DEFEATED_BOY, Jubilife_City_School_EventScripts_School_Boy_1
	msgbox Jubilife_City_School_EventScripts_School_Boy_Text_3, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, Jubilife_City_School_EventScripts_School_Boy_Battle_Accepted
	goto_if_eq VAR_RESULT, NO, Jubilife_City_School_EventScripts_School_Boy_Battle_Denied
	return

Jubilife_City_School_EventScripts_School_Boy_1:
	goto_if_set FLAG_RECEIVED_POTION_JUBILIFE_SCHOOL, Jubilife_City_School_EventScripts_School_Boy_5
	goto_if_set FLAG_JUBILIFE_SCHOOL_DEFEATED_GIRL, Jubilife_City_School_EventScripts_School_Boy_8
	msgbox Jubilife_City_School_EventScripts_School_Boy_Text_2, MSGBOX_SIGN
Jubilife_City_School_EventScripts_School_Boy_4:
	end

Jubilife_City_School_EventScripts_School_Boy_5:
	msgbox Jubilife_City_School_EventScripts_School_Boy_Text_0, MSGBOX_NPC
	goto Jubilife_City_School_EventScripts_School_Boy_4

Jubilife_City_School_EventScripts_School_Boy_8:
	msgbox Jubilife_City_School_EventScripts_School_Boy_Text_1, MSGBOX_SIGN
	giveitem ITEM_POTION
	setflag FLAG_RECEIVED_POTION_JUBILIFE_SCHOOL
	msgbox Jubilife_City_School_EventScripts_School_Boy_Text_0, MSGBOX_SIGN
	goto Jubilife_City_School_EventScripts_School_Boy_4


Jubilife_City_School_EventScripts_School_Boy_Battle_Accepted::
	msgbox Jubilife_City_School_EventScripts_School_Boy_Battle_Accepted_Text_0, MSGBOX_SIGN
	trainerbattle_no_intro TRAINER_HARRISON, Jubilife_City_School_EventScripts_School_Boy_Battle_Accepted_Text_1
	setflag FLAG_JUBILIFE_SCHOOL_DEFEATED_BOY
	goto_if_set FLAG_JUBILIFE_SCHOOL_DEFEATED_GIRL, Jubilife_City_School_EventScripts_School_Boy_Battle_Accepted_2
	msgbox Jubilife_City_School_EventScripts_School_Boy_Text_2, MSGBOX_SIGN
Jubilife_City_School_EventScripts_School_Boy_Battle_Accepted_1:
	end

Jubilife_City_School_EventScripts_School_Boy_Battle_Accepted_2:
	msgbox Jubilife_City_School_EventScripts_School_Boy_Text_1, MSGBOX_SIGN
	giveitem ITEM_POTION
	setflag FLAG_RECEIVED_POTION_JUBILIFE_SCHOOL
	goto Jubilife_City_School_EventScripts_School_Boy_Battle_Accepted_1


Jubilife_City_School_EventScripts_School_Boy_Battle_Denied::
	msgbox Jubilife_City_School_EventScripts_School_Boy_Battle_Denied_Text_0, MSGBOX_SIGN
	end


Jubilife_City_School_EventScripts_School_Girl::
	goto_if_set FLAG_JUBILIFE_SCHOOL_DEFEATED_GIRL, Jubilife_City_School_EventScripts_School_Girl_1
	msgbox Jubilife_City_School_EventScripts_School_Girl_Text_2, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, Jubilife_City_School_EventScripts_School_Girl_Battle_Accepted
	goto_if_eq VAR_RESULT, NO, Jubilife_City_School_EventScripts_School_Girl_Battle_Denied
	return

Jubilife_City_School_EventScripts_School_Girl_1:
	goto_if_set FLAG_RECEIVED_POTION_JUBILIFE_SCHOOL, Jubilife_City_School_EventScripts_School_Girl_5
	goto_if_set FLAG_JUBILIFE_SCHOOL_DEFEATED_BOY, Jubilife_City_School_EventScripts_School_Girl_8
	msgbox Jubilife_City_School_EventScripts_School_Girl_Text_0, MSGBOX_NPC
Jubilife_City_School_EventScripts_School_Girl_4:
	end

Jubilife_City_School_EventScripts_School_Girl_5:
	msgbox Jubilife_City_School_EventScripts_School_Girl_Text_0, MSGBOX_NPC
	goto Jubilife_City_School_EventScripts_School_Girl_4

Jubilife_City_School_EventScripts_School_Girl_8:
	msgbox Jubilife_City_School_EventScripts_School_Girl_Text_1, MSGBOX_SIGN
	goto Jubilife_City_School_EventScripts_School_Girl_4


Jubilife_City_School_EventScripts_School_Girl_Battle_Accepted::
	msgbox Jubilife_City_School_EventScripts_School_Girl_Battle_Accepted_Text_0, MSGBOX_SIGN
	trainerbattle_no_intro TRAINER_CHRISTINE, Jubilife_City_School_EventScripts_School_Girl_Battle_Accepted_Text_1
	setflag FLAG_JUBILIFE_SCHOOL_DEFEATED_GIRL
	goto_if_set FLAG_JUBILIFE_SCHOOL_DEFEATED_BOY, Jubilife_City_School_EventScripts_School_Girl_Battle_Accepted_2
	msgbox Jubilife_City_School_EventScripts_School_Girl_Text_0, MSGBOX_SIGN
Jubilife_City_School_EventScripts_School_Girl_Battle_Accepted_1:
	end

Jubilife_City_School_EventScripts_School_Girl_Battle_Accepted_2:
	msgbox Jubilife_City_School_EventScripts_School_Girl_Text_1, MSGBOX_SIGN
	goto Jubilife_City_School_EventScripts_School_Girl_Battle_Accepted_1


Jubilife_City_School_EventScripts_School_Girl_Battle_Denied::
	msgbox Jubilife_City_School_EventScripts_School_Girl_Battle_Denied_Text_0, MSGBOX_SIGN
	end


Jubilife_City_School_EventScripts_Blackboard::
	lockall
	msgbox Jubilife_City_School_EventScripts_Blackboard_Text_0, MSGBOX_SIGN
	goto Jubilife_City_School_EventScripts_Choose_Blackboard_Topic
	return


Jubilife_City_School_EventScripts_Choose_Blackboard_Topic::
	message Jubilife_City_School_EventScripts_Choose_Blackboard_Topic_Text_0
	waitmessage
	multichoicegrid 8, 1, MULTI_STATUS_INFO, 2, FALSE
	switch VAR_RESULT
	case 0, Jubilife_City_School_EventScripts_Choose_Blackboard_Topic_2
	case 1, Jubilife_City_School_EventScripts_Choose_Blackboard_Topic_3
	case 2, Jubilife_City_School_EventScripts_Choose_Blackboard_Topic_4
	case 3, Jubilife_City_School_EventScripts_Choose_Blackboard_Topic_5
	case 4, Jubilife_City_School_EventScripts_Choose_Blackboard_Topic_6
	case 5, Jubilife_City_School_EventScripts_Choose_Blackboard_Topic_7
	case MULTI_B_PRESSED, Jubilife_City_School_EventScripts_Choose_Blackboard_Topic_8
	return

Jubilife_City_School_EventScripts_Choose_Blackboard_Topic_2:
	goto Jubilife_City_School_EventScripts_Poison
	return

Jubilife_City_School_EventScripts_Choose_Blackboard_Topic_3:
	goto Jubilife_City_School_EventScripts_Burn
	return

Jubilife_City_School_EventScripts_Choose_Blackboard_Topic_4:
	goto Jubilife_City_School_EventScripts_Paralysis
	return

Jubilife_City_School_EventScripts_Choose_Blackboard_Topic_5:
	goto Jubilife_City_School_EventScripts_Freeze
	return

Jubilife_City_School_EventScripts_Choose_Blackboard_Topic_6:
	goto Jubilife_City_School_EventScripts_Sleep
	return

Jubilife_City_School_EventScripts_Choose_Blackboard_Topic_7:
	goto Jubilife_City_School_EventScripts_ExitTopicSelect
	return

Jubilife_City_School_EventScripts_Choose_Blackboard_Topic_8:
	goto Jubilife_City_School_EventScripts_ExitTopicSelect
	return


Jubilife_City_School_EventScripts_Poison::
	msgbox Jubilife_City_School_EventScripts_Poison_Text_0, MSGBOX_SIGN
	goto Jubilife_City_School_EventScripts_Choose_Blackboard_Topic
	return


Jubilife_City_School_EventScripts_Paralysis::
	msgbox Jubilife_City_School_EventScripts_Paralysis_Text_0, MSGBOX_SIGN
	goto Jubilife_City_School_EventScripts_Choose_Blackboard_Topic
	return


Jubilife_City_School_EventScripts_Sleep::
	msgbox Jubilife_City_School_EventScripts_Sleep_Text_0, MSGBOX_SIGN
	goto Jubilife_City_School_EventScripts_Choose_Blackboard_Topic
	return


Jubilife_City_School_EventScripts_Burn::
	msgbox Jubilife_City_School_EventScripts_Burn_Text_0, MSGBOX_SIGN
	goto Jubilife_City_School_EventScripts_Choose_Blackboard_Topic
	return


Jubilife_City_School_EventScripts_Freeze::
	msgbox Jubilife_City_School_EventScripts_Freeze_Text_0, MSGBOX_SIGN
	goto Jubilife_City_School_EventScripts_Choose_Blackboard_Topic
	return


Jubilife_City_School_EventScripts_ExitTopicSelect::
	releaseall
	end


Jubilife_City_School_EventScripts_Book::
	msgbox Jubilife_City_School_EventScripts_Book_Text_0, MSGBOX_SIGN
	end


Jubilife_City_School_EventScripts_Big_Book_Shelf::
	msgbox Jubilife_City_School_EventScripts_Big_Book_Shelf_Text_0, MSGBOX_SIGN
	end


Jubilife_City_School_EventScripts_Small_Book_Shelf::
	msgbox Jubilife_City_School_EventScripts_Small_Book_Shelf_Text_0, MSGBOX_SIGN
	end


Jubilife_City_School_EventScripts_Barry_Movement_0:
	walk_fast_down
	walk_fast_down
	walk_fast_down
	step_end

Jubilife_City_School_EventScripts_Barry_Movement_1:
	face_down
	step_end

Jubilife_City_School_EventScripts_Barry_Movement_2:
	walk_fast_right
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	step_end

Jubilife_City_School_EventScripts_Barry_Movement_3:
	walk_fast_right
	walk_fast_down
	step_end

Jubilife_City_School_EventScripts_Barry_Movement_4:
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	step_end

Jubilife_City_School_EventScripts_Barry_Text_0:
	.string "{RIVAL}: Hey, {PLAYER}!\n"
	.string "Did you come to study, too?\p"
	.string "I went ahead and memorized everything\n"
	.string "that was up on the blackboard.\p"
	.string "After all, it’s the Trainer’s job to\n"
	.string "avoid having their precious Pokémon\l"
	.string "hurt in battle, right?\p"
	.string "So, {PLAYER}, what brings you?\n"
	.string "Huh?\l"
	.string "You’ve got something for me?$"

Jubilife_City_School_EventScripts_Barry_Text_1:
	.string "{PLAYER} delivered the Parcel.$"

Jubilife_City_School_EventScripts_Barry_Text_2:
	.string "{RIVAL}: So, what is this...?\p"
	.string "Score!\n"
	.string "It’s a Town Map!\p"
	.string "Huh?!\n"
	.string "Why are there two in here?\p"
	.string "I like it a lot, but I don’t need two.\n"
	.string "Here, {PLAYER}, you take one!$"

Jubilife_City_School_EventScripts_Barry_Text_3:
	.string "{RIVAL}: Hmm...\p"
	.string "Well, according to the Town Map,\n"
	.string "I guess Oreburgh City is where\l"
	.string "I should be going next.\p"
	.string "There’s a Gym, so it’d be perfect for\n"
	.string "raising the Pokémon I just caught.\p"
	.string "Well, I’m on the road to becoming\n"
	.string "the greatest Trainer of all time!\p"
	.string "See you around!$"

Jubilife_City_School_EventScripts_Youngster_Near_Book_Text_0:
	.string "I wrote an essay in my notebook on \n"
	.string "what makes a true Pokémon Trainer.$"

Jubilife_City_School_EventScripts_Lady_Near_Book_Text_0:
	.string "Pokémon are smart enough to use\n"
	.string "items they’re holding.\p"
	.string "But they won’t know what to do with\n"
	.string "man-made items like Potions and\l"
	.string "Antidotes.$"

Jubilife_City_School_EventScripts_Lady_Near_Board_Text_0:
	.string "It’s perfectly fine for Trainers and\n"
	.string "Pokémon to develop at their own pace.\p"
	.string "If there is anything you’re not familiar\n"
	.string "with, you can look it up here.$"

Jubilife_City_School_EventScripts_Youngster_Near_Pc_Text_0:
	.string "We learned about Pokémon types\n"
	.string "today. Umm...\p"
	.string "Grass is weak to Fire,\p"
	.string "Fire is weak to Water,\p"
	.string "and Water is weak to Grass!$"

Jubilife_City_School_EventScripts_School_Boy_Text_0:
	.string "When a Potion is used, it restores the\n"
	.string "HP, the health, of a Pokémon.\p"
	.string "Being a good Trainer isn’t only about\n"
	.string "ordering your Pokémon around.\p"
	.string "A superior Trainer knows how to use\n"
	.string "items to the full advantage!$"

Jubilife_City_School_EventScripts_School_Boy_Text_1:
	.string "Whew! You’re really good!\p"
	.string "We’ve been studying every day, but\n"
	.string "we were no match for you at all!\p"
	.string "You’d be able to use this Potion\n"
	.string "properly. Here you go!$"

Jubilife_City_School_EventScripts_School_Boy_Text_2:
	.string "It’s hard to win if you don’t have\n"
	.string "some Pokémon to choose from.$"

Jubilife_City_School_EventScripts_School_Boy_Text_3:
	.string "Doing it is the best way to learn!\n"
	.string "Can we get a battle with you?$"

Jubilife_City_School_EventScripts_School_Boy_Battle_Accepted_Text_0:
	.string "Go!\n"
	.string "My Pokémon, go!$"

Jubilife_City_School_EventScripts_School_Boy_Battle_Accepted_Text_1:
	.string "Ugh...\n"
	.string "I didn’t use items effectively.$"

Jubilife_City_School_EventScripts_School_Boy_Battle_Denied_Text_0:
	.string "Aww! But battling is the best way\n"
	.string "to learn about Pokémon!$"

Jubilife_City_School_EventScripts_School_Girl_Text_0:
	.string "I wonder if we could have done better\n"
	.string "gainst you?\p"
	.string "Like if I used Potions right when we\n"
	.string "needed to.$"

Jubilife_City_School_EventScripts_School_Girl_Text_1:
	.string "We were actually confident that we\n"
	.string "would do pretty good.\p"
	.string "But I’m completely impressed by how\n"
	.string "tough you are.\p"
	.string "If you’d like, talk to my friend and\n"
	.string "get a nice item from him.$"

Jubilife_City_School_EventScripts_School_Girl_Text_2:
	.string "I just became friends with my\n"
	.string "Pokémon.\p"
	.string "I’m not sure if we can do this\n"
	.string "properly, but may we battle?$"

Jubilife_City_School_EventScripts_School_Girl_Battle_Accepted_Text_0:
	.string "I need to try the things I learned\n"
	.string "before I forget them!$"

Jubilife_City_School_EventScripts_School_Girl_Battle_Accepted_Text_1:
	.string "I like to study a lot...\n"
	.string "I thought I could win...$"

Jubilife_City_School_EventScripts_School_Girl_Battle_Denied_Text_0:
	.string "Boo!\n"
	.string "Where’s your sense of adventure?\p"
	.string "Don’t be shy about talking to people\n"
	.string "and getting into battles!$"

Jubilife_City_School_EventScripts_Blackboard_Text_0:
	.string "The blackboard lists status changes\n"
	.string "that may affect PoKémon in battle.$"

Jubilife_City_School_EventScripts_Choose_Blackboard_Topic_Text_0:
	.string "Which would you like to read about?$"

Jubilife_City_School_EventScripts_Poison_Text_0:
	.string "If a PoKémon is poisoned, it will\n"
	.string "steadily lose HP.\p"
	.string "The effects of poison remain after\n"
	.string "a battle.\p"
	.string "Heal a poisoning using an Antidote.$"

Jubilife_City_School_EventScripts_Paralysis_Text_0:
	.string "If a PoKémon becomes paralyzed,\n"
	.string "its Speed stat drops.\p"
	.string "In addition, it may not be able to\n"
	.string "move while it is in battle.\p"
	.string "Paralysis remains after battle.\n"
	.string "Cure it using a Paralyze Heal.$"

Jubilife_City_School_EventScripts_Sleep_Text_0:
	.string "If a PoKémon falls asleep, it will be\n"
	.string "unable to attack.\p"
	.string "A PoKémon may wake up on its own,\n"
	.string "but if a battle ends while it is\l"
	.string "sleeping, it will stay asleep.\p"
	.string "Wake it up using an Awakening.$"

Jubilife_City_School_EventScripts_Burn_Text_0:
	.string "A burn reduces the Attack power stat and\n"
	.string "steadily reduces the victim's HP.\p"
	.string "A burn lingers after battle.\n"
	.string "Cure a burn using a BURN HEAL.$"

Jubilife_City_School_EventScripts_Freeze_Text_0:
	.string "If a PoKémon is frozen, it becomes\n"
	.string "completely helpless.\p"
	.string "The PoKémon may thaw out on it's own\n"
	.string "but if a battle ends while it is\l"
	.string "frozen, it may stay frozen\n"
	.string "Thaw it out using an Ice Heal.$"

Jubilife_City_School_EventScripts_Book_Text_0:
	.string "It’s a notebook filled with writing.\n"
	.string "Let’s see...\p"
	.string "Pokémon are to be caught using\n"
	.string "Poké Balls.\p"
	.string "Up to six Pokémon can accompany\n"
	.string "a Trainer.\p"
	.string "A Trainer is someone who catches\n"
	.string "Pokémon, raises them, and battles\l"
	.string "with them.\p"
	.string "A Trainer’s mission is to defeat the\n"
	.string "strong Trainers who await challengers\l"
	.string "in Pokémon Gyms.$"

Jubilife_City_School_EventScripts_Big_Book_Shelf_Text_0:
	.string "It’s chock-full of Pokémon books and\n"
	.string "photo collections.$"

Jubilife_City_School_EventScripts_Small_Book_Shelf_Text_0:
	.string "It’s lined with Pokémon picture books.$"
