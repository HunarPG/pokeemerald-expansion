Verity_Lakefront_MapScripts::
	.byte 0


Verity_Lakefront_EventScript_Sign::
	msgbox Verity_Lakefront_EventScript_Sign_Text_0, MSGBOX_SIGN
	return


Verity_Lakefront_EventScript_You_And_Barry_Make_It_To_Lake::
	setvar VAR_VISITED_LAKE, 1
	setvar VAR_GOT_STARTER, 3
	applymovement OBJ_EVENT_ID_PLAYER, Verity_Lakefront_EventScript_You_And_Barry_Make_It_To_Lake_Movement_0
	msgbox Verity_Lakefront_EventScript_You_And_Barry_Make_It_To_Lake_Text_0, MSGBOX_NPC
	applymovement OBJ_EVENT_ID_PLAYER, Verity_Lakefront_EventScript_You_And_Barry_Make_It_To_Lake_Movement_1
	waitmovement 0
	warp MAP_LAKE_VERITY, 0
	end


Verity_Lakefront_EventScript_You_And_Barry_Make_It_To_Lake_Movement_0:
	face_down
	step_end

Verity_Lakefront_EventScript_You_And_Barry_Make_It_To_Lake_Movement_1:
	face_up
	step_end

Verity_Lakefront_EventScript_Sign_Text_0:
	.string "Lake Verity Ahead\p"
	.string "According to legend, this lake is home\n"
	.string "to the Pokémon said to be The Being of\l"
	.string "Emotion.\p"
	.string "It is because of this Pokémon that \n"
	.string "people can experience sorrow and joy.$"

Verity_Lakefront_EventScript_You_And_Barry_Make_It_To_Lake_Text_0:
	.string "{RIVAL}: All right!\n"
	.string "We are at the lake!\p"
	.string "Get ready, because we're capturing\n"
	.string "that Legendary Pokémon.\p"
	.string "Trust me on this one. It's here.\n"
	.string "It even says on the sign!$"
