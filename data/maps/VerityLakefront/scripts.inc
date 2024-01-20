VerityLakefront_MapScripts::
	.byte 0

VerityLakefront_EventScript_Sign::
	msgbox VerityLakefront_Text_Sign, MSGBOX_SIGN
	end

Route201_EventScript_You_And_Barry_Make_It_To_Lake::
    setvar VAR_VISITED_LAKE, 1
    applymovement OBJ_EVENT_ID_PLAYER, Movement_Player_Faces_Down
    msgbox VerityLakefront_Text_Barry_Tells_We_Are_At_Lake, MSGBOX_NPC
    applymovement OBJ_EVENT_ID_PLAYER, Movement_Player_Faces_Up
    waitmovement 0
    warp MAP_LAKE_VERITY, 0
    end

VerityLakefront_Text_Sign:
    .string "Lake Verity Ahead\p"
    .string "According to legend, this lake is home\n"
    .string "to the Pokemon said to be The Being of\l"
    .string "Emotion.\p"
    .string "It is because of this Pokemon that \n"
    .string "people can experience sorrow and joy.$"

VerityLakefront_Text_Barry_Tells_We_Are_At_Lake:
    .string "{B_RIVAL_NAME}: All right!\n"
    .string "We are at the lake!\p"
    .string "Get ready, because we're capturing\n"
    .string "that Legendary Pokemon.\p"
    .string "Trust me on this one. It's here.\n"
    .string "It even says on the sign!$"

Movement_Player_Faces_Down:
    face_down
    step_end
