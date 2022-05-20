Underwater_Route124_MapScripts::
	map_script MAP_SCRIPT_ON_RESUME, Underwater_Route124_OnResume
	map_script MAP_SCRIPT_ON_TRANSITION, Underwater_Route124_OnTransition
	.byte 0

Underwater_Route124_OnTransition:
	call Common_EventScript_GetDayOrNight
	end

Underwater_Route124_OnResume:
	call Common_EventScript_GetDayOrNight
	end

