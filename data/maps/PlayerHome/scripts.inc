PlayerHome_MapScripts::
	.byte 0

PlayerHome_EventScript_Mom::
	lock
	faceplayer
	goto_if_eq VAR_LITTLEROOT_HOUSES_STATE_MAY, 4, PlayerHome_EventScript_DontPushYourselfTooHard
	goto_if_eq VAR_LITTLEROOT_HOUSES_STATE_BRENDAN, 4, PlayerHome_EventScript_DontPushYourselfTooHard
	goto_if_set FLAG_RESCUED_BIRCH, PlayerHome_EventScript_MomHealsParty
	goto_if_eq VAR_TEMP_1, 1, PlayerHome_EventScript_SeeYouHoney
	goto_if_eq VAR_LITTLEROOT_INTRO_STATE, 7, PlayerHome_EventScript_DidYouMeetProfBirch
	msgbox PlayerHome_Text_IsntItNiceInHere, MSGBOX_DEFAULT
	release
	end

PlayerHome_EventScript_DontPushYourselfTooHard::
	msgbox PlayerHome_Text_DontPushYourselfTooHard, MSGBOX_DEFAULT
	release
	end

PlayerHome_EventScript_MomHealsParty::
	msgbox PlayerHome_Text_YouShouldRestABit, MSGBOX_DEFAULT
	goto PlayerHome_EventScript_HealParty
	end

PlayerHome_EventScript_SeeYouHoney::
	msgbox PlayerHome_Text_SeeYouHoney, MSGBOX_DEFAULT
	release
	end

PlayerHome_EventScript_HealParty::
	closemessage
	call Common_EventScript_OutOfCenterPartyHeal
	incrementgamestat GAME_STAT_RESTED_AT_HOME
	msgbox PlayerHome_Text_TakeCareHoney, MSGBOX_DEFAULT
	release
	end

PlayerHome_EventScript_Yukari::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_VIGOROTH, CRY_MODE_NORMAL
	msgbox PlayerHome_Text_Yukari, MSGBOX_DEFAULT
	waitmoncry
	release
	end

PlayerHome_Movement_MomApproach:
	walk_right
	walk_right
	walk_right
	walk_right
	walk_up
	walk_up
	walk_up
	step_end

PlayerHome_Text_YouShouldRestABit:
	.string "MOM: How are you doing, {PLAYER}?\n"
	.string "You look a little tired.\p"
	.string "I think you should rest a bit.$"

PlayerHome_Text_SeeYouHoney:
	.string "MOM: See you, honey!$"

PlayerHome_Text_TakeCareHoney:
	.string "MOM: Take care, honey!$"

PlayerHome_Text_DontPushYourselfTooHard:
	.string "Don't push yourself too hard, dear.\n"
	.string "You can always come home.\p"
	.string "Go for it, honey!$"

PlayerHome_Text_Yukari:
	.string "Yu!$"
