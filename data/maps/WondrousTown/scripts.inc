WondrousTown_MapScripts::
	.byte 0

WondrousTown_EventScript_BirchsBag::
	lock
	faceplayer
	setflag FLAG_SYS_POKEMON_GET
	setflag FLAG_RESCUED_BIRCH
	fadescreen FADE_TO_BLACK
	waitmovement 0
	special ChooseStarter
	waitstate
	special HealPlayerParty
	setflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
	release
	end
