SandgemTown_Professor_Rowans_Lab_MapScripts::
   map_script MAP_SCRIPT_ON_TRANSITION, SandgemTown_Professor_Rowans_Lab_On_Transition
   map_script MAP_SCRIPT_ON_FRAME_TABLE, SandgemTown_Professor_Rowans_Lab_On_Frame
   .2byte 0

SandgemTown_Professor_Rowans_Lab_On_Transition::
	call_if_unset FLAG_VISITED_SANDGEM_TOWN_ROWANS_LAB, SandgemTown_Professor_Rowans_Lab_EventScript_Reached_First_Time
	end

SandgemTown_Professor_Rowans_Lab_On_Frame:
	map_script_2 VAR_ROWANS_LAB_STATE, 0, SandgemTown_Professor_Rowans_Lab_EventScript_Reached_First_Time_Event
	.2byte 0

SandgemTown_Professor_Rowans_Lab_EventScript_Reached_First_Time::
	checkplayergender
	goto_if_eq VAR_RESULT, MALE, SandgemTown_Professor_Rowans_Lab_EventScript_Hide_Lucas
	goto_if_eq VAR_RESULT, FEMALE, SandgemTown_Professor_Rowans_Lab_EventScript_Hide_Dawn
	end

SandgemTown_Professor_Rowans_Lab_EventScript_Reached_First_Time_Event::
	checkplayergender
	goto_if_eq VAR_RESULT, MALE, SandgemTown_Professor_Rowans_Lab_EventScript_Lucas_Do_Script
	goto_if_eq VAR_RESULT, FEMALE, SandgemTown_Professor_Rowans_Lab_EventScript_Dawn_Do_Script
	end

SandgemTown_Professor_Rowans_Lab_EventScript_Hide_Lucas::
   setflag FLAG_HIDE_LUCAS_IN_SANDGEM_LAB
   end

SandgemTown_Professor_Rowans_Lab_EventScript_Hide_Dawn::
   setflag FLAG_HIDE_DAWN_IN_SANDGEM_LAB
   end

SandgemTown_Professor_Rowans_Lab_EventScript_Lucas_Do_Script::
   applymovement 2, Common_Movement_Delay32
   waitmovement 0
   applymovement 2, SandgemTown_Professor_Rowans_Lab_Movement_Rival_Goes_Near_Rowan
   applymovement OBJ_EVENT_ID_PLAYER, SandgemTown_Professor_Rowans_Lab_Movement_Player_Goes_Near_Rowan
   waitmovement 0
   setvar VAR_ROWANS_LAB_STATE, 1
   end

SandgemTown_Professor_Rowans_Lab_EventScript_Dawn_Do_Script::
   applymovement 1, Common_Movement_Delay32
   waitmovement 0
   applymovement 1, SandgemTown_Professor_Rowans_Lab_Movement_Rival_Goes_Near_Rowan
   applymovement OBJ_EVENT_ID_PLAYER, SandgemTown_Professor_Rowans_Lab_Movement_Player_Goes_Near_Rowan
   waitmovement 0
   setvar VAR_ROWANS_LAB_STATE, 1
   end

SandgemTown_Professor_Rowans_Lab_Movement_Rival_Goes_Near_Rowan:
   walk_up
   walk_up
   walk_up
   walk_up
   walk_up
   walk_up
   walk_up
   walk_up
   walk_right
   face_left
   step_end

SandgemTown_Professor_Rowans_Lab_Movement_Player_Goes_Near_Rowan:
   walk_up
   walk_up
   walk_up
   walk_up
   walk_up
   walk_up
   walk_up
   walk_up
   walk_up
   step_end
