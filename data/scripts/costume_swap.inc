EventScript_CostumeSwap_Costume0::
	lockall
	fadescreen FADE_TO_BLACK
	setvar VAR_TEMP_1, DEFAULT_COSTUME
	special SwapPlayersCostume
	fadescreen FADE_FROM_BLACK
	releaseall
	end

EventScript_CostumeSwap_Costume1::
	lockall
	fadescreen FADE_TO_BLACK
	setvar VAR_TEMP_1, COSTUME_1
	special SwapPlayersCostume
	fadescreen FADE_FROM_BLACK
	releaseall
	end
