PacifidlogTown_House5_MapScripts::
	.byte 0

PacifidlogTown_House5_EventScript_MirageIslandWatcher::
	lock
	faceplayer
	specialvar VAR_RESULT, IsMirageIslandPresent
	goto_if_eq VAR_RESULT, TRUE, PacifidlogTown_House5_EventScript_MirageIslandPresent
	msgbox PacifidlogTown_House5_Text_CantSeeMirageIslandToday, MSGBOX_DEFAULT
	release
	end

PacifidlogTown_House5_EventScript_MirageIslandPresent::
	msgbox PacifidlogTown_House5_Text_CanSeeMirageIslandToday, MSGBOX_DEFAULT
	release
	end

PacifidlogTown_House5_EventScript_Gentleman::
	msgbox PacifidlogTown_House5_Text_MirageIslandAppearDependingOnWeather, MSGBOX_NPC
	end

PacifidlogTown_House5_Text_CantSeeMirageIslandToday:
	.string "I can't see Mirage Island today…$"

PacifidlogTown_House5_Text_CanSeeMirageIslandToday:
	.string "Oh! Oh my!\n"
	.string "I can see Mirage Island today!$"

PacifidlogTown_House5_Text_MirageIslandAppearDependingOnWeather:
	.string "Mirage Island…\p"
	.string "It must become visible and invisible\n"
	.string "depending on the weather conditions\l"
	.string "that make mirages appear.\p"
	.string "Or is it really appearing and\n"
	.string "disappearing?$"

PacifidlogTown_House5_EventScript_EggGiver::
	lock
	faceplayer
	goto_if_set FLAG_DAILY_SINNOH_EGG, PacifidlogTown_House5_EventScript_ReceivedEgg
	msgbox PacifidlogTown_House5_Text_HaveEggWillYouTakeIt, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, PacifidlogTown_House5_EventScript_DeclineEgg
	getpartysize
	goto_if_eq VAR_RESULT, PARTY_SIZE, PacifidlogTown_House5_EventScript_NoRoomForEgg
	msgbox PacifidlogTown_House5_Text_HopeYoullWalkPlentyWithEgg, MSGBOX_DEFAULT
	setflag FLAG_DAILY_SINNOH_EGG
	playfanfare MUS_OBTAIN_ITEM
	message PacifidlogTown_House5_Text_ReceivedTheEgg
	waitfanfare
	random 7
	goto_if_eq VAR_RESULT, 1, PacifidlogTown_House5_EventScript_BudewEgg
	goto_if_eq VAR_RESULT, 2, PacifidlogTown_House5_EventScript_BonslyEgg
	goto_if_eq VAR_RESULT, 3, PacifidlogTown_House5_EventScript_MimeJrEgg
	goto_if_eq VAR_RESULT, 4, PacifidlogTown_House5_EventScript_HappinyEgg
	goto_if_eq VAR_RESULT, 5, PacifidlogTown_House5_EventScript_ChinglingEgg
	goto_if_eq VAR_RESULT, 6, PacifidlogTown_House5_EventScript_MunchlaxEgg
	goto_if_eq VAR_RESULT, 7, PacifidlogTown_House5_EventScript_MantykeEgg
	end

PacifidlogTown_House5_EventScript_BudewEgg::
	giveegg SPECIES_BUDEW
	release
	end

PacifidlogTown_House5_EventScript_BonslyEgg::
	giveegg SPECIES_BONSLY
	release
	end

PacifidlogTown_House5_EventScript_MimeJrEgg::
	giveegg SPECIES_MIME_JR
	release
	end

PacifidlogTown_House5_EventScript_HappinyEgg::
	giveegg SPECIES_HAPPINY
	release
	end

PacifidlogTown_House5_EventScript_ChinglingEgg::
	giveegg SPECIES_CHINGLING
	release
	end

PacifidlogTown_House5_EventScript_MunchlaxEgg::
	giveegg SPECIES_MUNCHLAX
	release
	end

PacifidlogTown_House5_EventScript_MantykeEgg::
	giveegg SPECIES_MANTYKE
	release
	end


PacifidlogTown_House5_EventScript_ReceivedEgg::
	msgbox PacifidlogTown_House5_Text_ThatsTheRumor, MSGBOX_DEFAULT
	release
	end

PacifidlogTown_House5_EventScript_NoRoomForEgg::
	msgbox PacifidlogTown_House5_Text_NoRoomForThisEgg, MSGBOX_DEFAULT
	release
	end

PacifidlogTown_House5_EventScript_DeclineEgg::
	msgbox PacifidlogTown_House5_Text_AsYouWishThen, MSGBOX_DEFAULT
	release
	end

PacifidlogTown_House5_Text_HaveEggWillYouTakeIt:
	.string "My grampa is obsessed with Baby Pokémon!\p"
	.string "He found this Egg while he was\n"
	.string "searching for Mirage Island...\p"
	.string "I don't know what that means...\p"
	.string "But you're a Trainer, right?\p"
	.string "Maybe you could take this egg and\n"
	.string "bring it to that island some day...\p"
	.string "Would you do that for me?$"

PacifidlogTown_House5_Text_HopeYoullWalkPlentyWithEgg:
	.string "Good! I knew you would be the right\n"
	.string "trainer for this Egg!$"

PacifidlogTown_House5_Text_ReceivedTheEgg:
	.string "{PLAYER} received the Egg.$"

PacifidlogTown_House5_Text_NoRoomForThisEgg:
	.string "Oh? You've too many Pokémon.\n"
	.string "There's no room for this Egg…$"

PacifidlogTown_House5_Text_AsYouWishThen:
	.string "Okey-dokey, then…\p"
	.string "If you ever change your mind about\n"
	.string "hatching this Egg, I'll be here!$"

PacifidlogTown_House5_Text_ThatsTheRumor:
	.string "Baby Pokémon like long walks on the\n"
	.string "beach.\p"
	.string "Or at least that's how the rumor goes.$"