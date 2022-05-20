Route107_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route107_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, Route107_OnResume
	.byte 0

Route107_OnTransition:
	call Common_EventScript_GetDayOrNight
	end

Route107_OnResume:
	call Common_EventScript_GetDayOrNight
	end

Route107_EventScript_Darrin::
	trainerbattle_single TRAINER_DARRIN, Route107_Text_DarrinIntro, Route107_Text_DarrinDefeated
	msgbox Route107_Text_DarrinPostBattle, MSGBOX_AUTOCLOSE
	end

Route107_EventScript_Tony::
	trainerbattle_single TRAINER_TONY_1, Route107_Text_TonyIntro, Route107_Text_TonyDefeated, Route107_EventScript_TonyRegisterMatchCallAfterBattle
	specialvar VAR_RESULT, ShouldTryRematchBattle
	goto_if_eq VAR_RESULT, TRUE, Route107_EventScript_TonyRematch
	msgbox Route107_Text_TonyPostBattle, MSGBOX_DEFAULT
	release
	end

Route107_EventScript_TonyRegisterMatchCallAfterBattle::
	special PlayerFaceTrainerAfterBattle
	waitmovement 0
	msgbox Route107_Text_TonyRegister, MSGBOX_DEFAULT
	register_matchcall TRAINER_TONY_1
	release
	end

Route107_EventScript_TonyRematch::
	trainerbattle_rematch TRAINER_TONY_1, Route107_Text_TonyRematchIntro, Route107_Text_TonyRematchDefeated
	msgbox Route107_Text_TonyRematchPostBattle, MSGBOX_AUTOCLOSE
	end

Route107_EventScript_Denise::
	trainerbattle_single TRAINER_DENISE, Route107_Text_DeniseIntro, Route107_Text_DeniseDefeated
	msgbox Route107_Text_DenisePostBattle, MSGBOX_AUTOCLOSE
	end

Route107_EventScript_Beth::
	trainerbattle_single TRAINER_BETH, Route107_Text_BethIntro, Route107_Text_BethDefeated
	msgbox Route107_Text_BethPostBattle, MSGBOX_AUTOCLOSE
	end

Route107_EventScript_Lisa::
	trainerbattle_double TRAINER_LISA_AND_RAY, Route107_Text_LisaIntro, Route107_Text_LisaDefeated, Route107_Text_LisaNotEnoughPokemon
	msgbox Route107_Text_LisaPostBattle, MSGBOX_AUTOCLOSE
	end

Route107_EventScript_Ray::
	trainerbattle_double TRAINER_LISA_AND_RAY, Route107_Text_RayIntro, Route107_Text_RayDefeated, Route107_Text_RayNotEnoughPokemon
	msgbox Route107_Text_RayPostBattle, MSGBOX_AUTOCLOSE
	end

Route107_EventScript_Camron::
	trainerbattle_single TRAINER_CAMRON, Route107_Text_CamronIntro, Route107_Text_CamronDefeated
	msgbox Route107_Text_CamronPostBattle, MSGBOX_AUTOCLOSE
	end


Route107_EventScript_EggGiver::
	lock
	faceplayer
	goto_if_set FLAG_DAILY_JOHTO_EGG, Route107_EventScript_ReceivedEgg
	msgbox Route107_Text_HaveEggWillYouTakeIt, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, Route107_EventScript_DeclineEgg
	getpartysize
	goto_if_eq VAR_RESULT, PARTY_SIZE, Route107_EventScript_NoRoomForEgg
	msgbox Route107_Text_HopeYoullWalkPlentyWithEgg, MSGBOX_DEFAULT
	setflag FLAG_DAILY_JOHTO_EGG
	playfanfare MUS_OBTAIN_ITEM
	message Route107_Text_ReceivedTheEgg
	waitfanfare
	random 8
	goto_if_eq VAR_RESULT, 1, Route107_EventScript_TogepiEgg
	goto_if_eq VAR_RESULT, 2, Route107_EventScript_PichuEgg
	goto_if_eq VAR_RESULT, 3, Route107_EventScript_MagbyEgg
	goto_if_eq VAR_RESULT, 4, Route107_EventScript_ElekidEgg
	goto_if_eq VAR_RESULT, 5, Route107_EventScript_CleffaEgg
	goto_if_eq VAR_RESULT, 6, Route107_EventScript_IgglybuffEgg
	goto_if_eq VAR_RESULT, 7, Route107_EventScript_SmoochumEgg
	goto_if_eq VAR_RESULT, 8, Route107_EventScript_TyrogueEgg
	end

Route107_EventScript_TogepiEgg::
	giveegg SPECIES_TOGEPI
	release
	end

Route107_EventScript_TyrogueEgg::
	giveegg SPECIES_TYROGUE
	release
	end

Route107_EventScript_PichuEgg::
	giveegg SPECIES_PICHU
	release
	end

Route107_EventScript_MagbyEgg::
	giveegg SPECIES_MAGBY
	release
	end

Route107_EventScript_ElekidEgg::
	giveegg SPECIES_ELEKID
	release
	end

Route107_EventScript_CleffaEgg::
	giveegg SPECIES_CLEFFA
	release
	end

Route107_EventScript_IgglybuffEgg::
	giveegg SPECIES_IGGLYBUFF
	release
	end

Route107_EventScript_SmoochumEgg::
	giveegg SPECIES_SMOOCHUM
	release
	end

Route107_EventScript_ReceivedEgg::
	msgbox Route107_Text_ThatsTheRumor, MSGBOX_DEFAULT
	release
	end

Route107_EventScript_NoRoomForEgg::
	msgbox Route107_Text_NoRoomForThisEgg, MSGBOX_DEFAULT
	release
	end

Route107_EventScript_DeclineEgg::
	msgbox Route107_Text_AsYouWishThen, MSGBOX_DEFAULT
	release
	end

Route107_Text_HaveEggWillYouTakeIt:
	.string "I was walking along the beach and came\n"
	.string "across this strange Egg.\p"
	.string "I've heard that keeping an Egg with you\n"
	.string "as you travel is a good way to hatch a\l"
	.string "Pokémon.\p"
	.string "You are a Trainer, right?\n"
	.string "You probably travel all over Hoenn.\p"
	.string "Hey, I've got an idea!\n"
	.string "Why don't you take this Egg to hatch?$"

Route107_Text_HopeYoullWalkPlentyWithEgg:
	.string "Good! I hope you'll enjoy your\n"
	.string "travels with this Egg!$"

Route107_Text_ReceivedTheEgg:
	.string "{PLAYER} received the Egg.$"

Route107_Text_NoRoomForThisEgg:
	.string "Oh? You've too many Pokémon.\n"
	.string "There's no room for this Egg…$"

Route107_Text_AsYouWishThen:
	.string "As you wish, then…\p"
	.string "If you have a change of heart about\n"
	.string "hatching this Egg, I will be here.$"

Route107_Text_ThatsTheRumor:
	.string "Somewhere there is an island full of\n"
	.string "baby Pokémon.\p"
	.string "Or at least that's how the rumor goes.$"

