WondrousTown_MapScripts::
	.byte 0

WondrousTown_EventScript_BirchsBag::
	givemon SPECIES_CYNDAQUIL, 5
	call Common_EventScript_GetGiftMonPartySlot
	call Common_EventScript_NameReceivedPartyMon
	setflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
	end
