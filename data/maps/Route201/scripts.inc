.set LOCALID_ROWANS_BAG, 9

Route201_MapScripts::
	.byte 0

Route201_EventScript_Starter_Cutscene_1::
    lock
	applymovement 5, Movement_Rival_Faces_Down
	waitmovement 0
    playse SE_PIN
    applymovement 5, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement 5, Common_Movement_Delay48
	waitmovement 0
    msgbox Route201_Text_TooSlow, MSGBOX_SIGN
	applymovement 5, Movement_Rival_Comes_To_You_1
	waitmovement 0
    msgbox Route201_Text_Rival_Mentions_Idea, MSGBOX_SIGN
	applymovement 5, Movement_Rival_Goes_Near_Grass
    applymovement OBJ_EVENT_ID_PLAYER, Movement_Player_Goes_Near_Grass
	waitmovement 0
    msgbox Route201_Text_Rival_Explains_Its_Fine, MSGBOX_SIGN
	applymovement 5, Movement_Rival_Comes_Closer
	waitmovement 0
	applymovement 5, Movement_Rival_Faces_Down
    applymovement OBJ_EVENT_ID_PLAYER, Movement_Player_Faces_Up
	waitmovement 0
    msgbox Route201_Text_Rival_Explains_More, MSGBOX_SIGN
	applymovement 5, Movement_Rival_Gets_Ready
	waitmovement 0
    msgbox Route201_Text_Rival_Talk_Before_Running, MSGBOX_SIGN
	applymovement 5, Movement_Rival_Almost_Walk_In_Grass
	waitmovement 0
    msgbox Route201_Text_Rowan_Says_Hold, MSGBOX_SIGN
    playse SE_PIN
    applymovement 5, Common_Movement_ExclamationMark
	waitmovement 0
    applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement 5, Common_Movement_Delay48
	waitmovement 0
    playbgm MUS_DP_ROWAN FALSE
    addobject 6
	applymovement 6, Movement_Rowan_Walks_In
	applymovement 5, Movement_Rival_Faces_Left
	waitmovement 0
    msgbox Route201_Text_Rowan_Tells_We_Are_Fools, MSGBOX_SIGN
	applymovement 5, Movement_Rival_Faces_Down
	waitmovement 0
    msgbox Route201_Text_Rival_Realize_Its_Rowan MSGBOX_SIGN
	applymovement 6, Movement_Rowan_Walks_Left
	waitmovement 0
    msgbox Route201_Text_Rowan_Thinks MSGBOX_SIGN
	applymovement 6, Movement_Rowan_Walks_Back
	waitmovement 0
    msgbox Route201_Text_Rowan_Asks, MSGBOX_YESNO
	call_if_eq VAR_RESULT, YES, Route201_EventScript_Discussion_Continues_On
	call_if_eq VAR_RESULT, NO, Route201_EventScript_Barry_Forces_Yes
    end

Route201_EventScript_Barry_Forces_Yes::
	applymovement 5, Movement_Rival_Faces_Down
	waitmovement 0
	msgbox Route201_Text_Barry_Tells_You_Arent_Making_Sense, MSGBOX_SIGN
	applymovement 5, Movement_Rival_Faces_Left
	waitmovement 0
	msgbox Route201_Text_Rowan_Says_He_Didnt_Listen, MSGBOX_SIGN
	end

Route201_EventScript_Discussion_Continues_On::
	msgbox Route201_Text_Rival_Also_Says_Yes, MSGBOX_SIGN
    msgbox Route201_Text_Rival_Continues_And_Asks, MSGBOX_YESNO
	call_if_eq VAR_RESULT, YES, Route201_EventScript_Discussion_Continues_On_Again
	call_if_eq VAR_RESULT, NO, Route201_EventScript_Barry_Forces_Yes_Again
    end

Route201_EventScript_Barry_Forces_Yes_Again::
	msgbox Route201_Text_Joke_Is_Getting_Old, MSGBOX_SIGN
    end

Route201_EventScript_Discussion_Continues_On_Again::
    msgbox Route201_Text_Rowan_Is_Worried, MSGBOX_SIGN
	applymovement 5, Movement_Rival_Faces_Left
	waitmovement 0
	msgbox Route201_Text_Rowan_Agress_To_Give_Pokemon MSGBOX_SIGN
	applymovement 6, Movement_Rowan_Faces_Left_And_Back_Right
	waitmovement 0
	checkplayergender
	call_if_eq VAR_RESULT, MALE, SandgemTown_EventScript_Dawn_Comes_In
	call_if_eq VAR_RESULT, FEMALE, SandgemTown_EventScript_Lucas_Comes_In
    end

SandgemTown_EventScript_Dawn_Comes_In::
    playbgm MUS_DP_DAWN FALSE
    addobject 8
    applymovement 8, Movement_Rival_2_Walks_In
    waitmovement 0
	addobject 9
	msgbox Route201_Text_Dawn_Comes_And_Talks MSGBOX_SIGN
    applymovement 6, Movement_Rowan_Faces_Left
    waitmovement 0
    msgbox Route201_Text_Rowan_Talks_To_Dawn MSGBOX_SIGN
    applymovement 6, Movement_Rowan_Faces_Right
    waitmovement 0
    msgbox Route201_Text_Rowan_Gives_Permission MSGBOX_SIGN
    applymovement 5, Movement_Rival_Faces_Down
    waitmovement 0
    msgbox Route201_Text_Rival_Says_You_To_Pick_First MSGBOX_SIGN
    applymovement 5, Movement_Rival_Faces_Left
    waitmovement 0
    end

SandgemTown_EventScript_Lucas_Comes_In::
    playbgm MUS_DP_LUCAS FALSE
    addobject 7
    applymovement 7, Movement_Rival_2_Walks_In
    waitmovement 0
    addobject 9 
	msgbox Route201_Text_Lucas_Comes_And_Talks MSGBOX_SIGN
    applymovement 6, Movement_Rowan_Faces_Left
    waitmovement 0
	msgbox Route201_Text_Rowan_Talks_To_Lucas MSGBOX_SIGN
    applymovement 6, Movement_Rowan_Faces_Right
    waitmovement 0
    msgbox Route201_Text_Rowan_Gives_Permission MSGBOX_SIGN
    applymovement 5, Movement_Rival_Faces_Down
    waitmovement 0
    msgbox Route201_Text_Rival_Says_You_To_Pick_First MSGBOX_SIGN
    applymovement 5, Movement_Rival_Faces_Left
    waitmovement 0
    end

Route201_EventScript_RowansBag::
	lock
	faceplayer
	setflag FLAG_SYS_POKEMON_GET
    setvar VAR_GOT_STARTER 1
	fadescreen FADE_TO_BLACK
	removeobject LOCALID_ROWANS_BAG
	setobjectxy OBJ_EVENT_ID_PLAYER, 18, 19
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
	waitmovement 0
	special ChooseStarter
	waitstate
	setflag FLAG_HIDE_ROUTE_201_ROWANS_BAG
	release
    end

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
    playfanfare MUS_OBTAIN_ITEM
    waitfanfare
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

Route201_Text_TooSlow:
    .string "Too slow!$"

Route201_Text_Rival_Mentions_Idea:
    .string "{B_RIVAL_NAME}: All right!\n"
    .string "Let's get moving to Prof. Rowan's lab.$"

Route201_Text_Rival_Explains_Its_Fine:
    .string "{B_RIVAL_NAME}: ...\n"
    .string "...\p"
    .string "What?\n"
    .string "Don't go into grass, right?\l"
    .string "No worries! No problem!\p"
    .string "It doesn't matter that we don't have\n"
    .string "any Pokemon.\p"
    .string "Trust me on this one.\n"
    .string "I've got an idea!\p"
    .string "Now listen. You know how wild Pokemon\n"
    .string "jump out when you go into tall grass?$"

Route201_Text_Rival_Explains_More:
    .string "So, what you do is, you scoot over to\n"
    .string "the next patch of grass before any\l"
    .string "wild Pokemon can appear!\p"
    .string "If we just keep dashing, we can get to\n"
    .string "Sandgem Town without running into\l"
    .string "wild Pokemon!\p"
    .string "Ok, stick with me!$"

Route201_Text_Rival_Talk_Before_Running:
    .string "Ok, here goes!\p"
    .string "On your marks...$"

Route201_Text_Rowan_Says_Hold:
    .string "Hold it!$"

Route201_Text_Rowan_Tells_We_Are_Fools:
    .string "Professor: You two don't seem to have\n"
    .string "any Pokemon between you?\p"
    .string "Then, what is the meaning of going into\n"
    .string "the tall grass?!\p"
    .string "{PLAYER}: ...\n"
    .string "...\p"
    .string "Professor: ...\n"
    .string "...\p"
    .string "...\n"
    .string "...$"

Route201_Text_Rival_Realize_Its_Rowan:
    .string "{B_RIVAL_NAME}: Hey, {PLAYER}.\n"
    .string "This old guy...\p"
    .string "It's Prof. Rowan isn't it?\n"
    .string "What's he doing here...?$"

Route201_Text_Rowan_Thinks:
    .string "Professor: ...\n"
    .string "...\p"
    .string "They tried to go into the tall grass\n"
    .string "because they wanted Pokemon...\p"
    .string "Hmm...\n"
    .string "What to do...?\p"
    .string "Their world would surely change if\n"
    .string "they were to meet Pokemon...\p"
    .string "Is it right for me to put them on that\n"
    .string "path...?\p"
    .string "...\n"
    .string "...$"

Route201_Text_Rowan_Says_He_Didnt_Listen:
    .string "Professor: Er-hem!\p"
    .string "I didn't quite catch that, so I will\n"
    .string "ask you again$"

Route201_Text_Rowan_Asks:
    .string "You two.\n"
    .string "You truly love Pokemon, do you?$"

Route201_Text_Barry_Tells_You_Arent_Making_Sense:
    .string "{B_RIVAL_NAME}: Whoa, hold\n"
    .string "You truly love Pokemon, do you?$"

Route201_Text_Rival_Also_Says_Yes:
    .string "{B_RIVAL_NAME}: Me too!\n"
    .string "I love Pokemon, too!?\p"
    .string "Professor: I will ask you once again\p"
    .string "You two.\n"
    .string "You truly love Pokemon, do you?$"

Route201_Text_Rival_Continues_And_Asks:
    .string "{B_RIVAL_NAME}: What?!\n"
    .string "You can ask a hundred times!\l"
    .string "The answer will never cange!\p"
    .string "We'll both answer a hundred times,\n"
    .string "we love Pokemon!\p"
    .string "Right, {PLAYER}?$"

Route201_Text_Joke_Is_Getting_Old:
    .string "{B_RIVAL_NAME}: ...\n"
    .string "That joke's getting old!$"

Route201_Text_Rowan_Is_Worried:
    .string "Professor: ...A Pair of reckless kids\n"
    .string "who foolishly try to enter tall grass\l"
    .string "without Pokemon of thier own...?\p"
    .string "It worries me what people like that\n"
    .string "would do with Pokemon.$"

Route201_Text_Rowan_Agress_To_Give_Pokemon:
    .string "{B_RIVAL_NAME}: ...Uh...\n"
    .string "Well, I, uh...\p"
    .string "...\n"
    .string "...\p"
    .string "Well, then forget about me, but give\n"
    .string "a Pokemon to my friend here!\p"
    .string "I mean, it was me who tried to go into\n"
    .string "the tall grass and all...\p"
    .string "Professor: !\p"
    .string "How big of you...\p"
    .string "Very, well, then!\n"
    .string "I will entrust you two with Pokemon!\p"
    .string "I apologize for putting you through\n"
    .string "that exercise.\p"
    .string "However!\p"
    .string "You must promise me that you will never\n"
    .string "recklessly endanger yourself again.\p"
    .string "Now, then...\p"
    .string "Hm?\n"
    .string "Now, where...?$"

Route201_Text_Lucas_Comes_And_Talks:
    .string "Lucas: Professor Rowan!\p"
    .string "You left your briefcase behind at\n"
    .string "the lake.$"

Route201_Text_Dawn_Comes_And_Talks:
    .string "Dawn: Professor Rowan!\p"
    .string "You left your briefcase behind at\n"
    .string "the lake.$"

Route201_Text_Rowan_Talks_To_Lucas:
    .string "Is something wrong here?\p"
    .string "Rowan: Ah! There it is!\n"
    .string "Lucas, nice work.\p"
    .string "What I was about to do was to entrust\n"
    .string "these two with thier own Pokemon.\p"
    .string "Lucas: Wha...?!\p"
    .string "Those pokemon are crucial.\n"
    .string "You're giving them away?\p"
    .string "Rowan: Hm!\p"
    .string "We exist side by side with Pokemon.\p"
    .string "There comes a time when people should\n"
    .string "meet Pokemon.\p"
    .string "There is a world that should be\n"
    .string "explored together.\p"
    .string "For them, today is the time.\n"
    .string "The place, right here.$"

Route201_Text_Rowan_Talks_To_Dawn:
    .string "Is something wrong here?\p"
    .string "Rowan: Ah! There it is!\n"
    .string "Dawn, nice work.\p"
    .string "Rowan: Ah! There it is!\n"
    .string "What I was about to do was to entrust\n"
    .string "these two with thier own Pokemon.\p"
    .string "Dawn: Wha...?!\p"
    .string "Those pokemon are crucial.\n"
    .string "You're giving them away?\p"
    .string "Rowan: Hm!\p"
    .string "We exist side by side with Pokemon.\p"
    .string "There comes a time when people should\n"
    .string "meet Pokemon.\p"
    .string "There is a world that should be\n"
    .string "explored together.\p"
    .string "For them, today is the time.\n"
    .string "The place, right here.$"

Route201_Text_Rowan_Gives_Permission:
    .string "Go on! Open the briefcase and choose\n"
    .string "a Pokemon!\p"
    .string "{B_RIVAL_NAME}: Really?!\n"
    .string "Prof. Rowan!\p"
    .string "I can't believe it! I'm so happy now\n"
    .string "that I can't keep a straight face!$"

Route201_Text_Rival_Says_You_To_Pick_First:
    .string "Hey, {PLAYER}!\n"
    .string "You can choose first.\p"
    .string "Hey, I'm practically a grown-up.\n"
    .string "I have to show some class here.$"

Movement_Rival_Faces_Down:
	face_down
	step_end

Movement_Rival_Comes_To_You_1:
	walk_fast_down
	walk_fast_left
	walk_fast_left
    face_down
	step_end

Movement_Rival_Goes_Near_Grass:
    walk_up
    walk_right
    walk_right
    walk_right
    walk_right
    walk_up
    walk_up
    walk_right
	step_end

Movement_Player_Goes_Near_Grass:
    walk_up
    walk_up
    walk_right
    walk_right
    walk_right
    walk_up
    walk_right
	step_end

Movement_Rival_Comes_Closer:
    walk_left
    step_end

Movement_Player_Faces_Up:
    face_up
    step_end

Movement_Rival_Gets_Ready:
    walk_left
    walk_left
    walk_left
    face_right
    step_end

Movement_Rival_Almost_Walk_In_Grass:
    walk_fast_right
    walk_fast_right
    walk_fast_right
    step_end

Movement_Rowan_Walks_In:
    walk_fast_right
    walk_fast_right
    walk_fast_right
    walk_fast_right
    walk_fast_right
    walk_fast_right
    step_end

Movement_Rowan_Walks_Left:
    walk_left
    walk_left
    walk_left
    step_end

Movement_Rowan_Walks_Back:
    walk_fast_right
    walk_fast_right
    walk_fast_right
    step_end

Movement_Rival_Faces_Left:
    face_left
    step_end

Movement_Rowan_Faces_Left_And_Back_Right:
    face_left
    face_right
    step_end

Movement_Rival_2_Walks_In:
    walk_right
    walk_right
    walk_right
    walk_right
    walk_right
    step_end

Movement_Rowan_Faces_Left:
    face_left
    step_end

Movement_Rowan_Faces_Right:
    face_right
    step_end
