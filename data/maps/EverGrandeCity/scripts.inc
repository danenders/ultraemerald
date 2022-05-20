EverGrandeCity_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, EverGrandeCity_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, EverGrandeCity_OnResume
	.byte 0

EverGrandeCity_OnTransition:
	call Common_EventScript_GetDayOrNight
	call_if_set FLAG_SYS_WEATHER_CTRL, Common_EventScript_SetAbnormalWeather
	end

EverGrandeCity_OnResume:
	call Common_EventScript_GetDayOrNight
	end

EverGrandeCity_EventScript_VictoryRoadSign::
	msgbox EverGrandeCity_Text_EnteringVictoryRoad, MSGBOX_SIGN
	end

EverGrandeCity_EventScript_CitySign::
	msgbox EverGrandeCity_Text_CitySign, MSGBOX_SIGN
	end

EverGrandeCity_EventScript_PokemonLeagueSign::
	msgbox EverGrandeCity_Text_EnteringPokemonLeague, MSGBOX_SIGN
	end

EverGrandeCity_EventScript_SetVisitedEverGrande::
	setflag FLAG_VISITED_EVER_GRANDE_CITY
	setvar VAR_TEMP_1, 1
	end

EverGrandeCity_Text_EnteringVictoryRoad:
	.string "Entering Victory Road$"

EverGrandeCity_Text_EnteringPokemonLeague:
	.string "Entering Pokémon League\n"
	.string "Center Gate$"

EverGrandeCity_Text_CitySign:
	.string "Ever Grande City\p"
	.string "“The paradise of flowers, the sea,\n"
	.string "and Pokémon.”$"

