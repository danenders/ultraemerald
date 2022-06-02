.set LOCALID_COLLECTOR, 5

Route109_SeashoreHouse_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route109_SeashoreHouse_OnTransition
	.byte 0

Route109_SeashoreHouse_OnTransition:
	setflag FLAG_LANDMARK_SEASHORE_HOUSE
	end

Route109_SeashoreHouse_EventScript_Owner::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_6_SODA_POP, Route109_SeashoreHouse_EventScript_AlreadyReceivedSodaPop
	goto_if_set FLAG_DEFEATED_SEASHORE_HOUSE, Route109_SeashoreHouse_EventScript_DefeatedTrainers
	goto_if_set FLAG_TEMP_2, Route109_SeashoreHouse_EventScript_AlreadyGaveIntroduction
	msgbox Route109_SeashoreHouse_Text_SeashoreHouseIntro, MSGBOX_DEFAULT
	setflag FLAG_TEMP_2
	release
	end

Route109_SeashoreHouse_EventScript_BottleCapCollector::
	lock
	faceplayer
	call_if_unset FLAG_MET_BOTTLE_CAP_COLLECTOR, Route109_SeashoreHouse_EventScript_CollectorIntroduction
	checkitem ITEM_BOTTLE_CAP
	goto_if_eq VAR_RESULT, FALSE, Route109_SeashoreHouse_EventScript_BringMeThoseCaps
	msgbox Route109_SeashoreHouse_Text_GotAnyCaps, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, Route109_SeashoreHouse_EventScript_BringMeThoseCaps
	applymovement LOCALID_COLLECTOR, Common_Movement_ExclamationMark
	msgbox Route109_SeashoreHouse_Text_ThatsARareOne, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, Route109_SeashoreHouse_EventScript_BottleCapTrade
	goto Route109_SeashoreHouse_EventScript_DeclineFeather
	end

Route109_SeashoreHouse_Text_ThatsARareOne:
	.string "Ooh! That's a rare one!\p"
	.string "Can I have it? I'll trade you\n"
	.string "a rare feather for it!$"

Route109_SeashoreHouse_EventScript_BottleCapTrade::
	message Route109_SeashoreHouse_Text_WhichFeather
	multichoice 0, 0, MULTI_BOTTLE_CAP_TRADE, FALSE
	switch VAR_RESULT
	case 0, Route109_SeashoreHouse_EventScript_HealthFeather
	case 1, Route109_SeashoreHouse_EventScript_MuscleFeather
	case 2, Route109_SeashoreHouse_EventScript_ResistFeather
	case 3, Route109_SeashoreHouse_EventScript_GeniusFeather
	case 4, Route109_SeashoreHouse_EventScript_CleverFeather
	case 5, Route109_SeashoreHouse_EventScript_SwiftFeather
	case MULTI_B_PRESSED, Route109_SeashoreHouse_EventScript_DeclineFeather
	end

Route109_SeashoreHouse_Text_WhichFeather:
	.string "Which Feather would you like?$"

Route109_SeashoreHouse_EventScript_HealthFeather::
	msgbox Route109_SeashoreHouse_Text_FeatherThanks, MSGBOX_DEFAULT
	giveitem ITEM_HEALTH_FEATHER
	removeitem ITEM_BOTTLE_CAP
	release
	end

Route109_SeashoreHouse_EventScript_MuscleFeather::
	msgbox Route109_SeashoreHouse_Text_FeatherThanks, MSGBOX_DEFAULT
	giveitem ITEM_MUSCLE_FEATHER
	removeitem ITEM_BOTTLE_CAP
	release
	end

Route109_SeashoreHouse_EventScript_ResistFeather::
	msgbox Route109_SeashoreHouse_Text_FeatherThanks, MSGBOX_DEFAULT
	giveitem ITEM_RESIST_FEATHER
	removeitem ITEM_BOTTLE_CAP
	release
	end

Route109_SeashoreHouse_EventScript_GeniusFeather::
	msgbox Route109_SeashoreHouse_Text_FeatherThanks, MSGBOX_DEFAULT
	giveitem ITEM_GENIUS_FEATHER
	removeitem ITEM_BOTTLE_CAP
	release
	end

Route109_SeashoreHouse_EventScript_CleverFeather::
	msgbox Route109_SeashoreHouse_Text_FeatherThanks, MSGBOX_DEFAULT
	giveitem ITEM_CLEVER_FEATHER
	removeitem ITEM_BOTTLE_CAP
	release
	end

Route109_SeashoreHouse_EventScript_SwiftFeather::
	msgbox Route109_SeashoreHouse_Text_FeatherThanks, MSGBOX_DEFAULT
	giveitem ITEM_SWIFT_FEATHER
	removeitem ITEM_BOTTLE_CAP
	release
	end

Route109_SeashoreHouse_Text_FeatherThanks:
	.string "Thanks! This will make a fine\n"
	.string "addition to my collection!$"

Route109_SeashoreHouse_EventScript_DeclineFeather::
	msgbox Route109_SeashoreHouse_Text_DeclineFeather, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, Route109_SeashoreHouse_EventScript_BottleCapTrade
	release
	end

Route109_SeashoreHouse_Text_DeclineFeather:
	.string "Are you sure?\n"
	.string "That Bottle Cap is useless to you!$"

Route109_SeashoreHouse_Text_GotAnyCaps:
	.string "Got any Bottle Caps for me?$"

Route109_SeashoreHouse_EventScript_BringMeThoseCaps::
	msgbox Route109_SeashoreHouse_Text_BringMeThoseCaps, MSGBOX_DEFAULT
	release
	end

Route109_SeashoreHouse_Text_BringMeThoseCaps:
	.string "I don't have time to chat, unless\n"
	.string "you have some Bottle Caps to trade.$"

Route109_SeashoreHouse_EventScript_CollectorIntroduction::
	msgbox Route109_SeashoreHouse_Text_ICollectCaps, MSGBOX_DEFAULT
	applymovement LOCALID_COLLECTOR, Common_Movement_ExclamationMark
	msgbox Route109_SeashoreHouse_Text_ICollectCaps2, MSGBOX_DEFAULT
	setflag FLAG_MET_BOTTLE_CAP_COLLECTOR
	return

Route109_SeashoreHouse_Text_ICollectCaps:
	.string "The Soda Pop here is pretty good,\n"
	.string "but I'm not here for the drinks.\p"
	.string "I'm here for the Bottle Caps!$"

Route109_SeashoreHouse_Text_ICollectCaps2:
	.string "What! You don't collect Bottle Caps?\p"
	.string "If you don't collect them, you should\n"
	.string "bring them to me.\p"
	.string "I'll give you something really good in\n"
	.string "return!$"


Route109_SeashoreHouse_EventScript_AlreadyGaveIntroduction::
	msgbox Route109_SeashoreHouse_Text_ShowMeSomeHotMatches, MSGBOX_DEFAULT
	release
	end

Route109_SeashoreHouse_EventScript_DefeatedTrainers::
	msgbox Route109_SeashoreHouse_Text_TakeTheseSodaPopBottles, MSGBOX_DEFAULT
	giveitem ITEM_SODA_POP, 6
	goto_if_eq VAR_RESULT, FALSE, Route109_SeashoreHouse_EventScript_BagFull
	setflag FLAG_RECEIVED_6_SODA_POP
	release
	end

Route109_SeashoreHouse_EventScript_BagFull::
	msgbox Route109_SeashoreHouse_Text_BagFull, MSGBOX_DEFAULT
	release
	end

Route109_SeashoreHouse_EventScript_AlreadyReceivedSodaPop::
	showmoneybox 0, 0
	msgbox Route109_SeashoreHouse_Text_WantToBuySodaPop, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, Route109_SeashoreHouse_EventScript_BuySodaPop
	msgbox Route109_SeashoreHouse_Text_ThatsTooBad, MSGBOX_DEFAULT
	hidemoneybox
	release
	end

Route109_SeashoreHouse_EventScript_BuySodaPop::
	checkmoney 300
	goto_if_eq VAR_RESULT, FALSE, Route109_SeashoreHouse_EventScript_NotEnoughMoney
	checkitemspace ITEM_SODA_POP
	goto_if_eq VAR_RESULT, FALSE, Route109_SeashoreHouse_EventScript_NotEnoughSpace
	msgbox Route109_SeashoreHouse_Text_HereYouGo, MSGBOX_DEFAULT
	removemoney 300
	updatemoneybox
	giveitem ITEM_SODA_POP
	hidemoneybox
	release
	end

Route109_SeashoreHouse_EventScript_NotEnoughMoney::
	msgbox Route109_SeashoreHouse_Text_NotEnoughMoney, MSGBOX_DEFAULT
	hidemoneybox
	release
	end

Route109_SeashoreHouse_EventScript_NotEnoughSpace::
	msgbox gText_TooBadBagIsFull, MSGBOX_DEFAULT
	hidemoneybox
	release
	end

Route109_SeashoreHouse_EventScript_Dwayne::
	trainerbattle_single TRAINER_DWAYNE, Route109_SeashoreHouse_Text_DwayneIntro, Route109_SeashoreHouse_Text_DwayneDefeated, Route109_SeashoreHouse_EventScript_CheckTrainersCompletion
	msgbox Route109_SeashoreHouse_Text_DwaynePostBattle, MSGBOX_AUTOCLOSE
	end

Route109_SeashoreHouse_EventScript_Johanna::
	trainerbattle_single TRAINER_JOHANNA, Route109_SeashoreHouse_Text_JohannaIntro, Route109_SeashoreHouse_Text_JohannaDefeated, Route109_SeashoreHouse_EventScript_CheckTrainersCompletion
	msgbox Route109_SeashoreHouse_Text_JohannaPostBattle, MSGBOX_AUTOCLOSE
	end

Route109_SeashoreHouse_EventScript_Simon::
	trainerbattle_single TRAINER_SIMON, Route109_SeashoreHouse_Text_SimonIntro, Route109_SeashoreHouse_Text_SimonDefeated, Route109_SeashoreHouse_EventScript_CheckTrainersCompletion
	msgbox Route109_SeashoreHouse_Text_SimonPostBattle, MSGBOX_AUTOCLOSE
	end

Route109_SeashoreHouse_EventScript_CheckTrainersCompletion::
	goto_if_not_defeated TRAINER_DWAYNE, Route109_SeashoreHouse_EventScript_TrainersNotCompleted
	goto_if_not_defeated TRAINER_JOHANNA, Route109_SeashoreHouse_EventScript_TrainersNotCompleted
	goto_if_not_defeated TRAINER_SIMON, Route109_SeashoreHouse_EventScript_TrainersNotCompleted
	setflag FLAG_DEFEATED_SEASHORE_HOUSE
	release
	end

Route109_SeashoreHouse_EventScript_TrainersNotCompleted::
	release
	end

Route109_SeashoreHouse_Text_SeashoreHouseIntro:
	.string "I'm the owner of the Seashore House.\n"
	.string "But you can call me Mr. Sea!\p"
	.string "What I love above all is to see hot\n"
	.string "Pokémon battles.\p"
	.string "Let me see that your heart burns hot!\p"
	.string "If you can defeat all the Trainers\n"
	.string "here, I'll reward your efforts.$"

Route109_SeashoreHouse_Text_ShowMeSomeHotMatches:
	.string "Show me some hot matches!\p"
	.string "I run this Seashore House just for\n"
	.string "that reason alone!$"

Route109_SeashoreHouse_Text_TakeTheseSodaPopBottles:
	.string "You're scorching hot!\n"
	.string "Those battles blazed!\l"
	.string "I'm more than just satisfied!\p"
	.string "As thanks for showing me your hot\n"
	.string "streak, I want you to take these.\p"
	.string "It's half a dozen bottles of Soda Pop!$"

Route109_SeashoreHouse_Text_BagFull:
	.string "Oh, but hey, your Bag's jammed full.\n"
	.string "I'll hang on to these for you.$"

Route109_SeashoreHouse_Text_WantToBuySodaPop:
	.string "Want to buy some Soda Pop?\n"
	.string "Pokémon love it!\p"
	.string "Just ¥300 a bottle!\n"
	.string "Buy some!$"

Route109_SeashoreHouse_Text_HereYouGo:
	.string "Here you go!$"

Route109_SeashoreHouse_Text_NotEnoughMoney:
	.string "You don't have the money.$"

Route109_SeashoreHouse_Text_ThatsTooBad:
	.string "No?\n"
	.string "That's too bad.$"

Route109_SeashoreHouse_Text_DwayneIntro:
	.string "If you're looking for a battle in the\n"
	.string "Seashore House, you'll find no\l"
	.string "hotter Trainer than me, matey!$"

Route109_SeashoreHouse_Text_DwayneDefeated:
	.string "That was a hot battle!\n"
	.string "I can accept that loss, matey!$"

Route109_SeashoreHouse_Text_DwaynePostBattle:
	.string "Whenever I'm in Slateport, I enjoy\n"
	.string "hot battles and ice-cold Soda Pop!$"

Route109_SeashoreHouse_Text_JohannaIntro:
	.string "Boring battles aren't worth the effort.\p"
	.string "Fiery hot battles are what toughen up\n"
	.string "Trainers and Pokémon!$"

Route109_SeashoreHouse_Text_JohannaDefeated:
	.string "That's hot!$"

Route109_SeashoreHouse_Text_JohannaPostBattle:
	.string "Whew, I'm all thirsty.\n"
	.string "Maybe I'll have a Soda Pop.$"

Route109_SeashoreHouse_Text_SimonIntro:
	.string "I'm going to show you how great\n"
	.string "my Pokémon are, but don't cry!$"

Route109_SeashoreHouse_Text_SimonDefeated:
	.string "…I lost, but I won't cry…$"

Route109_SeashoreHouse_Text_SimonPostBattle:
	.string "If one of my Pokémon knew the move\n"
	.string "for carrying me across water on its\l"
	.string "back, I could get rid of this inner tube.$"

