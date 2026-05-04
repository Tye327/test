PlayerHome_MapScripts::
	.byte 0

PlayerHome_EventScript_Mom::
	lock
	faceplayer
	goto PlayerHome_EventScript_MomHeal
	release
	end

PlayerHome_EventScript_MomHeal::
	msgbox PlayerHome_Text_YouShouldTakeQuickRest
	closemessage
	call Common_EventScript_OutOfCenterPartyHeal
	msgbox PlayerHome_Text_LookingGreatTakeCare
	release
	end

PlayerHome_EventScript_Yukari::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_CYNDAQUIL, CRY_MODE_NORMAL
	msgbox PlayerHome_Text_Yukari, MSGBOX_DEFAULT
	waitmoncry
	release
	end

PlayerHome_Movement_MomApproach:
	walk_right
	walk_right
	walk_up
	step_end

PlayerHome_Text_YouShouldTakeQuickRest::
	.string "MOM: {PLAYER}!\n"
	.string "You should take a quick rest.$"

PlayerHome_Text_LookingGreatTakeCare::
	.string "MOM: Oh, good! You and your\n"
	.string "POKéMON are looking great.\l"
	.string "Take care now!$"

PlayerHome_Text_DontPushYourselfTooHard:
	.string "Don't push yourself too hard, dear.\n"
	.string "You can always come home.\p"
	.string "Go for it, honey!$"

PlayerHome_Text_Yukari:
	.string "Yu!$"
