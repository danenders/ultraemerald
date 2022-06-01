SlateportCity_Dojo_MapScripts::
	.byte 0


SlateportCity_Dojo_EventScript_OffenseMaster::
	lock
	faceplayer
	msgbox SlateportCity_Dojo_Text_OffenseMaster, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, SlateportCity_Dojo_EventScript_CancelMart
	message SlateportCity_Dojo_Text_Training
	waitmessage
	pokemart SlateportCity_Dojo_Mart_Offense
	release
	end

SlateportCity_Dojo_EventScript_DefenseMaster::
	lock
	faceplayer
	msgbox SlateportCity_Dojo_Text_DefenseMaster, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, SlateportCity_Dojo_EventScript_CancelMart
	message SlateportCity_Dojo_Text_Training
	waitmessage
	pokemart SlateportCity_Dojo_Mart_Defense
	release
	end

SlateportCity_Dojo_Text_OffenseMaster:
	.string "I am the Offense Master.\p"
	.string "My students seek to reach\n"
	.string "their ultimate potential when\l"
	.string "it comes to attacking their\l"
	.string "opponents.\p"
	.string "If you're looking to improve your\n"
	.string "offensive power, I can assist you.\p"
	.string "Would you like to purchase my\n"
	.string "training items?$"

SlateportCity_Dojo_Text_DefenseMaster:
	.string "I am the Defense Master.\p"
	.string "My students seek to reach\n"
	.string "their ultimate potential when\l"
	.string "it comes to blocking their\l"
	.string "opponents.\p"
	.string "If you're looking to improve your\n"
	.string "defensive power, I can assist you.\p"
	.string "Would you like to purchase my\n"
	.string "training items?$"

SlateportCity_Dojo_EventScript_CancelMart::
	msgbox SlateportCity_Dojo_Text_AlwaysImprove, MSGBOX_DEFAULT
	release
	end

SlateportCity_Dojo_Text_AlwaysImprove::
	.string "There is always room to improve,\n"
	.string "young trainer.\p"
	.string "Never stop training!$"

SlateportCity_Dojo_Text_Training:
	.string "How can we assist your training?$"

	.align 2
SlateportCity_Dojo_Mart_Offense:
	.2byte ITEM_POWER_BRACER
	.2byte ITEM_POWER_LENS
	.2byte ITEM_POWER_ANKLET
	.2byte ITEM_NONE
	release
	end

	.align 2
SlateportCity_Dojo_Mart_Defense:
	.2byte ITEM_POWER_BELT
	.2byte ITEM_POWER_BAND
	.2byte ITEM_POWER_WEIGHT
	.2byte ITEM_NONE
	release
	end

SlateportCity_Dojo_EventScript_AttackPupil::
	goto_if_set FLAG_DAILY_DOJO_ATTACK, SlateportCity_Dojo_EventScript_AttackPupilThirsty
	faceplayer
	msgbox SlateportCity_Dojo_Text_AttackPupil, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, SlateportCity_Dojo_EventScript_BattleLater
	cleartrainerflag TRAINER_DOJO_ATTACK
	setflag FLAG_DAILY_DOJO_ATTACK
	trainerbattle_single TRAINER_DOJO_ATTACK, SlateportCity_Dojo_Text_PupilIntro, SlateportCity_Dojo_Text_PupilDefeat
	msgbox SlateportCity_Dojo_Text_AGoodWorkout, MSGBOX_AUTOCLOSE
	end

SlateportCity_Dojo_EventScript_DefensePupil::
	goto_if_set FLAG_DAILY_DOJO_DEFENSE, SlateportCity_Dojo_EventScript_DefensePupilThirsty
	faceplayer
	msgbox SlateportCity_Dojo_Text_DefensePupil, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, SlateportCity_Dojo_EventScript_BattleLater
	cleartrainerflag TRAINER_DOJO_DEFENSE
	setflag FLAG_DAILY_DOJO_DEFENSE
	trainerbattle_single TRAINER_DOJO_DEFENSE, SlateportCity_Dojo_Text_PupilIntro, SlateportCity_Dojo_Text_PupilDefeat
	msgbox SlateportCity_Dojo_Text_AGoodWorkout, MSGBOX_AUTOCLOSE
	end

SlateportCity_Dojo_EventScript_SpAttackPupil::
	goto_if_set FLAG_DAILY_DOJO_SPATTACK, SlateportCity_Dojo_EventScript_SpAttackPupilThirsty
	faceplayer
	msgbox SlateportCity_Dojo_Text_SpAttackPupil, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, SlateportCity_Dojo_EventScript_BattleLater
	cleartrainerflag TRAINER_DOJO_SPATTACK
	setflag FLAG_DAILY_DOJO_SPATTACK
	trainerbattle_single TRAINER_DOJO_SPATTACK, SlateportCity_Dojo_Text_PupilIntro, SlateportCity_Dojo_Text_PupilDefeat
	msgbox SlateportCity_Dojo_Text_AGoodWorkout, MSGBOX_AUTOCLOSE
	end

SlateportCity_Dojo_EventScript_SpDefensePupil::
	goto_if_set FLAG_DAILY_DOJO_SPDEFENSE, SlateportCity_Dojo_EventScript_DefensePupilThirsty
	faceplayer
	msgbox SlateportCity_Dojo_Text_SpDefensePupil, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, SlateportCity_Dojo_EventScript_BattleLater
	cleartrainerflag TRAINER_DOJO_SPDEFENSE
	setflag FLAG_DAILY_DOJO_SPDEFENSE
	trainerbattle_single TRAINER_DOJO_SPDEFENSE, SlateportCity_Dojo_Text_PupilIntro, SlateportCity_Dojo_Text_PupilDefeat
	msgbox SlateportCity_Dojo_Text_AGoodWorkout, MSGBOX_AUTOCLOSE
	end

SlateportCity_Dojo_EventScript_SpeedPupil::
	goto_if_set FLAG_DAILY_DOJO_SPEED, SlateportCity_Dojo_EventScript_SpeedPupilThirsty
	faceplayer
	msgbox SlateportCity_Dojo_Text_SpeedPupil, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, SlateportCity_Dojo_EventScript_BattleLater
	cleartrainerflag TRAINER_DOJO_SPEED
	setflag FLAG_DAILY_DOJO_SPEED
	trainerbattle_single TRAINER_DOJO_SPEED, SlateportCity_Dojo_Text_PupilIntro, SlateportCity_Dojo_Text_PupilDefeat
	msgbox SlateportCity_Dojo_Text_AGoodWorkout, MSGBOX_AUTOCLOSE
	end

SlateportCity_Dojo_EventScript_HpPupil::
	goto_if_set FLAG_DAILY_DOJO_HP, SlateportCity_Dojo_EventScript_HpPupilThirsty
	faceplayer
	msgbox SlateportCity_Dojo_Text_HpPupil, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, SlateportCity_Dojo_EventScript_BattleLater
	cleartrainerflag TRAINER_DOJO_HP
	setflag FLAG_DAILY_DOJO_HP
	trainerbattle_single TRAINER_DOJO_HP, SlateportCity_Dojo_Text_PupilIntro, SlateportCity_Dojo_Text_PupilDefeat
	msgbox SlateportCity_Dojo_Text_AGoodWorkout, MSGBOX_AUTOCLOSE
	end

SlateportCity_Dojo_EventScript_BattleLater::
	msgbox SlateportCity_Dojo_Text_BattleLater, MSGBOX_DEFAULT
	release
	end

SlateportCity_Dojo_Text_PupilIntro:
	.string "Alright! I'll show you what\n"
	.string "my sensei has taught me!$"

SlateportCity_Dojo_Text_PupilDefeat:
	.string "I was no match for you.$"

SlateportCity_Dojo_Text_AGoodWorkout:
	.string "I still have a long way to go.\n"
	.string "That was quite the workout.$"

SlateportCity_Dojo_Text_AttackPupil:
	.string "I am studying the ways of the\n"
	.string "Offense Master!\p"
	.string "Physical attacks are the most\n"
	.string "powerful moves, and I will be\l"
	.string "the strongest in all of Hoenn!\p"
	.string "Do you wish to challenge me?$"	

SlateportCity_Dojo_Text_DefensePupil:
	.string "I am studying the ways of the\n"
	.string "Defense Master!\p"
	.string "Physical attacks cannot even\n"
	.string "break my defense, and I will be\l"
	.string "the strongest in all of Hoenn!\p"
	.string "Do you wish to challenge me?$"	

SlateportCity_Dojo_Text_SpAttackPupil:
	.string "I am studying the ways of the\n"
	.string "Offense Master!\p"
	.string "Special attacks are the most\n"
	.string "powerful moves, and I will be\l"
	.string "the strongest in all of Hoenn!\p"
	.string "Do you wish to challenge me?$"

SlateportCity_Dojo_Text_SpDefensePupil:
	.string "I am studying the ways of the\n"
	.string "Defense Master!\p"
	.string "Special attacks cannot even\n"
	.string "break my defense, and I will be\l"
	.string "the strongest in all of Hoenn!\p"
	.string "Do you wish to challenge me?$"	

SlateportCity_Dojo_Text_SpeedPupil:
	.string "I am studying the ways of the\n"
	.string "Offense Master!\p"
	.string "Speed is the most important\n"
	.string "factor in battle, and I will be\l"
	.string "the strongest in all of Hoenn!\p"
	.string "Do you wish to challenge me?$"	

SlateportCity_Dojo_Text_HpPupil:
	.string "I am studying the ways of the\n"
	.string "Defense Master!\p"
	.string "Having more HP than your opponent\n"
	.string "is the most important factor in\l"
	.string "battle, and I will be the strongest\l"
	.string "in all of Hoenn!\p"
	.string "Do you wish to challenge me?$"	
	
SlateportCity_Dojo_Text_BattleLater:
	.string "If you wish to become the best,\n"
	.string "you must work for it!$"

SlateportCity_Dojo_EventScript_AttackPupilThirsty::
	lock
	faceplayer
	msgbox SlateportCity_Dojo_Text_SureAmThirsty, MSGBOX_DEFAULT
	checkitem ITEM_FRESH_WATER
	goto_if_eq VAR_RESULT, FALSE, SlateportCity_Dojo_EventScript_CouldUseADrink
	msgbox SlateportCity_Dojo_Text_CanIHaveThat, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, SlateportCity_Dojo_EventScript_CouldUseADrink
	removeitem ITEM_FRESH_WATER
	clearflag FLAG_DAILY_DOJO_ATTACK
	msgbox SlateportCity_Dojo_Text_HitsThatSpot, MSGBOX_DEFAULT
	release
	end

SlateportCity_Dojo_EventScript_DefensePupilThirsty::
	lock
	faceplayer
	msgbox SlateportCity_Dojo_Text_SureAmThirsty, MSGBOX_DEFAULT
	checkitem ITEM_FRESH_WATER
	goto_if_eq VAR_RESULT, FALSE, SlateportCity_Dojo_EventScript_CouldUseADrink
	msgbox SlateportCity_Dojo_Text_CanIHaveThat, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, SlateportCity_Dojo_EventScript_CouldUseADrink
	removeitem ITEM_FRESH_WATER
	clearflag FLAG_DAILY_DOJO_DEFENSE
	msgbox SlateportCity_Dojo_Text_HitsThatSpot, MSGBOX_DEFAULT
	release
	end

SlateportCity_Dojo_EventScript_SpAttackPupilThirsty::
	lock
	faceplayer
	msgbox SlateportCity_Dojo_Text_SureAmThirsty, MSGBOX_DEFAULT
	checkitem ITEM_FRESH_WATER
	goto_if_eq VAR_RESULT, FALSE, SlateportCity_Dojo_EventScript_CouldUseADrink
	msgbox SlateportCity_Dojo_Text_CanIHaveThat, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, SlateportCity_Dojo_EventScript_CouldUseADrink
	removeitem ITEM_FRESH_WATER
	clearflag FLAG_DAILY_DOJO_SPATTACK
	msgbox SlateportCity_Dojo_Text_HitsThatSpot, MSGBOX_DEFAULT
	release
	end

SlateportCity_Dojo_EventScript_SpDefensePupilThirsty::
	lock
	faceplayer
	msgbox SlateportCity_Dojo_Text_SureAmThirsty, MSGBOX_DEFAULT
	checkitem ITEM_FRESH_WATER
	goto_if_eq VAR_RESULT, FALSE, SlateportCity_Dojo_EventScript_CouldUseADrink
	msgbox SlateportCity_Dojo_Text_CanIHaveThat, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, SlateportCity_Dojo_EventScript_CouldUseADrink
	removeitem ITEM_FRESH_WATER
	clearflag FLAG_DAILY_DOJO_SPDEFENSE
	msgbox SlateportCity_Dojo_Text_HitsThatSpot, MSGBOX_DEFAULT
	release
	end

SlateportCity_Dojo_EventScript_SpeedPupilThirsty::
	lock
	faceplayer
	msgbox SlateportCity_Dojo_Text_SureAmThirsty, MSGBOX_DEFAULT
	checkitem ITEM_FRESH_WATER
	goto_if_eq VAR_RESULT, FALSE, SlateportCity_Dojo_EventScript_CouldUseADrink
	msgbox SlateportCity_Dojo_Text_CanIHaveThat, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, SlateportCity_Dojo_EventScript_CouldUseADrink
	removeitem ITEM_FRESH_WATER
	clearflag FLAG_DAILY_DOJO_SPEED
	msgbox SlateportCity_Dojo_Text_HitsThatSpot, MSGBOX_DEFAULT
	release
	end

SlateportCity_Dojo_EventScript_HpPupilThirsty::
	lock
	faceplayer
	msgbox SlateportCity_Dojo_Text_SureAmThirsty, MSGBOX_DEFAULT
	checkitem ITEM_FRESH_WATER
	goto_if_eq VAR_RESULT, FALSE, SlateportCity_Dojo_EventScript_CouldUseADrink
	msgbox SlateportCity_Dojo_Text_CanIHaveThat, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, SlateportCity_Dojo_EventScript_CouldUseADrink
	removeitem ITEM_FRESH_WATER
	clearflag FLAG_DAILY_DOJO_HP
	msgbox SlateportCity_Dojo_Text_HitsThatSpot, MSGBOX_DEFAULT
	release
	end

SlateportCity_Dojo_EventScript_CouldUseADrink::
	msgbox SlateportCity_Dojo_EventScript_CouldUseADrink, MSGBOX_DEFAULT
	release
	end

SlateportCity_Dojo_Text_SureAmThirsty:
	.string "Pokemon training is exhausting!\p"
	.string "I'm going to get refreshed before\n"
	.string "I can go another round...$"

SlateportCity_Dojo_Text_CanIHaveThat:
	.string "Oh! You have some Fresh Water!\p"
	.string "Could I have some of that?$"

SlateportCity_Dojo_Text_CouldUseADrink:
	.string "I sure could use a drink...$"

SlateportCity_Dojo_Text_HitsThatSpot:
	.string "Wow, thanks!\p"
	.string "GLUG GLUG GLUG\p"
	.string "Ahhhhhhh....\p"
	.string "That really hits the spot!\p"
	.string "I feel ready for another battle!$"
