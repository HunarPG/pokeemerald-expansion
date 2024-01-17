SandgemTown_BottomLeft_House_MapScripts::
	.byte 0

SandgemTown_BottomLeft_House_EventScript_Boy::
	msgbox SandgemTown_BottomLeft_House_Text_Boy, MSGBOX_NPC
	end

SandgemTown_BottomLeft_House_EventScript_Girl::
	msgbox SandgemTown_BottomLeft_House_Text_Girl, MSGBOX_NPC
	end

SandgemTown_BottomLeft_House_Text_Boy:
   .string "Pokemon grwo steadily stronger from\n"
   .string "battling against other Pokemon.\p"
   .string "At first, you should take it easy,\n"
   .string "though.\p"
   .string "Heal your Pokemon regularly at Pokemon\n"
   .string "Centers while you're leveling them up.$"

SandgemTown_BottomLeft_House_Text_Girl:
   .string "A good trainer is one that takes care\n"
   .string "not to let thier pokemon faint from\l"
   .string "losing HP.$"
   