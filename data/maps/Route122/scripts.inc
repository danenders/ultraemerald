Route122_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route122_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, Route122_OnResume
	.byte 0

Route122_OnTransition:
	call Common_EventScript_GetDayOrNight
	end

Route122_OnResume:
	call Common_EventScript_GetDayOrNight
	end

