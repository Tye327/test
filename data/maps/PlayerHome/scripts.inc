PlayerHome_MapScripts::
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, PlayerHome_OnWarp
	.byte 0

PlayerHome_EventScript_OnWarp::
	goto_if_eq VAR_MAP_SCENE_WONDROUS_LAB, 0, PlayerHome_EventScript_MomStarter
	end

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

PlayerHome_EventScript_MomStarter::
	msgbox PlayerHome_Text_TodaysTheDay
	applymovement LOCAL_ID_PLAYER_HOME_MOM, PlayerHome_Movement_MomApproach
	msgbox PlayerHome_Text_LetsGo
	warp MAP_WONDROUS_LAB, 8, 5
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
	.string "Puppets are looking great.\l"
	.string "Take care, honey!$"

PlayerHome_Text_DontPushYourselfTooHard:
	.string "Don't push yourself too hard, dear.\n"
	.string "You can always come home.\p"
	.string "Go for it, honey!$"

PlayerHome_Text_TodaysTheDay::
	.string "MOM: {PLAYER}!\p"
	.string "Today's the day you get to\n"
	.string "choose your starter Puppet!$"

PlayerHome_Text_LetsGo::
	.string "MOM: Let's go!\n$"

PlayerHome_Text_Yukari:
	.string "Yu!$"
