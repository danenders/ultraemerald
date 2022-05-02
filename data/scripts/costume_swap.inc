EventScript_CostumeSwap_Brendan::
	setvar VAR_TEMP_1, BRENDAN_COSTUME
	special SwapPlayersCostume
	goto EventScript_ChangingRoom_End
	end

EventScript_CostumeSwap_May::
	setvar VAR_TEMP_1, MAY_COSTUME
	special SwapPlayersCostume
	goto EventScript_ChangingRoom_End
	end

EventScript_CostumeSwap_Red::
	setvar VAR_TEMP_1, RED_COSTUME
	special SwapPlayersCostume
	goto EventScript_ChangingRoom_End
	end

EventScript_CostumeSwap_Leaf::
	setvar VAR_TEMP_1, LEAF_COSTUME
	special SwapPlayersCostume
	goto EventScript_ChangingRoom_End
	end

EventScript_CostumeSwap_Ethan::
	setvar VAR_TEMP_1, ETHAN_COSTUME
	special SwapPlayersCostume
	goto EventScript_ChangingRoom_End
	end

EventScript_CostumeSwap_Lyra::
	setvar VAR_TEMP_1, LYRA_COSTUME
	special SwapPlayersCostume
	goto EventScript_ChangingRoom_End
	end

EventScript_CostumeSwap_Kris::
	setvar VAR_TEMP_1, KRIS_COSTUME
	special SwapPlayersCostume
	goto EventScript_ChangingRoom_End
	end

EventScript_CostumeSwap_Lucas::
	setvar VAR_TEMP_1, LUCAS_COSTUME
	special SwapPlayersCostume
	goto EventScript_ChangingRoom_End
	end

EventScript_CostumeSwap_Dawn::
	setvar VAR_TEMP_1, DAWN_COSTUME
	special SwapPlayersCostume
	goto EventScript_ChangingRoom_End
	end

EventScript_CostumeSwap_LucasPlatinum::
	setvar VAR_TEMP_1, LUCAS_PLATINUM_COSTUME
	special SwapPlayersCostume
	goto EventScript_ChangingRoom_End
	end

EventScript_CostumeSwap_DawnPlatinum::
	setvar VAR_TEMP_1, DAWN_PLATINUM_COSTUME
	special SwapPlayersCostume
	goto EventScript_ChangingRoom_End
	end


EventScript_Mannequin_Brendan::
	lock
	msgbox CostumeInfo_Brendan, MSGBOX_DEFAULT
	release
	end

CostumeInfo_Brendan:
	.string "It's an outfit from Hoenn.\p"
	.string "It has a sporty look."

EventScript_Mannequin_May::
	lock
	msgbox CostumeInfo_May, MSGBOX_DEFAULT
	release
	end

CostumeInfo_May:
	.string "It's an outfit from Hoenn.\p"
	.string "It has a stylish bow.$"


EventScript_Mannequin_Red::
	lock
	msgbox CostumeInfo_Red, MSGBOX_DEFAULT
	goto_if_unset FLAG_COSTUME_RED, CostumePurchase_Red
	release
	end

CostumeInfo_Red:
	.string "It's an outfit from Kanto.\p"
	.string "It has a classic look to it.$"

CostumePurchase_Red::
	showmoneybox 0, 0
	msgbox CostumeSale_3000, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, CostumeSale_Cancel
	checkmoney 3000
	goto_if_eq VAR_RESULT, FALSE, CostumeSale_NotEnoughMoney
	playse SE_SHOP
	removemoney 3000
	updatemoneybox
	msgbox CostumeSale_ThankYou, MSGBOX_DEFAULT
	setflag FLAG_COSTUME_RED
	hidemoneybox
	releaseall
	end

EventScript_Mannequin_Leaf::
	lock
	msgbox CostumeInfo_Leaf, MSGBOX_DEFAULT
	goto_if_unset FLAG_COSTUME_LEAF, CostumePurchase_Leaf
	release
	end

CostumeInfo_Leaf:
	.string "It's an outfit from Kanto.\p"
	.string "It has a summer vibe.$"

CostumePurchase_Leaf::
	showmoneybox 0, 0
	msgbox CostumeSale_3000, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, CostumeSale_Cancel
	checkmoney 3000
	goto_if_eq VAR_RESULT, FALSE, CostumeSale_NotEnoughMoney
	playse SE_SHOP
	removemoney 3000
	updatemoneybox
	msgbox CostumeSale_ThankYou, MSGBOX_DEFAULT
	setflag FLAG_COSTUME_LEAF
	hidemoneybox
	releaseall
	end


EventScript_Mannequin_Ethan::
	lock
	msgbox CostumeInfo_Ethan, MSGBOX_DEFAULT
	goto_if_unset FLAG_COSTUME_ETHAN, CostumePurchase_Ethan
	release
	end

CostumeInfo_Ethan:
	.string "It's an outfit from Johto.\p"
	.string "It has a cool backwards hat.$"

CostumePurchase_Ethan::
	showmoneybox 0, 0
	msgbox CostumeSale_4000, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, CostumeSale_Cancel
	checkmoney 4000
	goto_if_eq VAR_RESULT, FALSE, CostumeSale_NotEnoughMoney
	playse SE_SHOP
	removemoney 4000
	updatemoneybox
	msgbox CostumeSale_ThankYou, MSGBOX_DEFAULT
	setflag FLAG_COSTUME_ETHAN
	hidemoneybox
	releaseall
	end


EventScript_Mannequin_Lyra::
	lock
	msgbox CostumeInfo_Lyra, MSGBOX_DEFAULT
	goto_if_unset FLAG_COSTUME_LYRA, CostumePurchase_Lyra
	release
	end

CostumeInfo_Lyra:
	.string "It's an outfit from Johto.\p"
	.string "It has some cute overalls.$"

CostumePurchase_Lyra::
	showmoneybox 0, 0
	msgbox CostumeSale_4000, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, CostumeSale_Cancel
	checkmoney 4000
	goto_if_eq VAR_RESULT, FALSE, CostumeSale_NotEnoughMoney
	playse SE_SHOP
	removemoney 4000
	updatemoneybox
	msgbox CostumeSale_ThankYou, MSGBOX_DEFAULT
	setflag FLAG_COSTUME_LYRA
	hidemoneybox
	releaseall
	end


EventScript_Mannequin_Kris::
	lock
	msgbox CostumeInfo_Kris, MSGBOX_DEFAULT
	goto_if_unset FLAG_COSTUME_KRIS, CostumePurchase_Kris
	release
	end

CostumeInfo_Kris:
	.string "It's an outfit from Johto.\p"
	.string "It has a chic vibe.$"

CostumePurchase_Kris::
	showmoneybox 0, 0
	msgbox CostumeSale_4000, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, CostumeSale_Cancel
	checkmoney 4000
	goto_if_eq VAR_RESULT, FALSE, CostumeSale_NotEnoughMoney
	playse SE_SHOP
	removemoney 4000
	updatemoneybox
	msgbox CostumeSale_ThankYou, MSGBOX_DEFAULT
	setflag FLAG_COSTUME_KRIS
	hidemoneybox
	releaseall
	end


EventScript_Mannequin_Lucas::
	lock
	msgbox CostumeInfo_Lucas, MSGBOX_DEFAULT
	goto_if_unset FLAG_COSTUME_LUCAS, CostumePurchase_Lucas
	release
	end

CostumeInfo_Lucas:
	.string "It's an outfit from Sinnoh.\p"
	.string "It has a modern look.$"

CostumePurchase_Lucas::
	showmoneybox 0, 0
	msgbox CostumeSale_5000, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, CostumeSale_Cancel
	checkmoney 5000
	goto_if_eq VAR_RESULT, FALSE, CostumeSale_NotEnoughMoney
	playse SE_SHOP
	removemoney 5000
	updatemoneybox
	msgbox CostumeSale_ThankYou, MSGBOX_DEFAULT
	setflag FLAG_COSTUME_LUCAS
	hidemoneybox
	releaseall
	end

EventScript_Mannequin_Dawn::
	lock
	msgbox CostumeInfo_Dawn, MSGBOX_DEFAULT
	goto_if_unset FLAG_COSTUME_DAWN, CostumePurchase_Dawn
	release
	end

CostumeInfo_Dawn:
	.string "It's an outfit from Sinnoh.\p"
	.string "It has a trendy look.$"

CostumePurchase_Dawn::
	showmoneybox 0, 0
	msgbox CostumeSale_5000, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, CostumeSale_Cancel
	checkmoney 5000
	goto_if_eq VAR_RESULT, FALSE, CostumeSale_NotEnoughMoney
	playse SE_SHOP
	removemoney 5000
	updatemoneybox
	msgbox CostumeSale_ThankYou, MSGBOX_DEFAULT
	setflag FLAG_COSTUME_DAWN
	hidemoneybox
	releaseall
	end


EventScript_Mannequin_LucasPlatinum::
	lock
	msgbox CostumeInfo_LucasPlatinum, MSGBOX_DEFAULT
	goto_if_unset FLAG_COSTUME_LUCAS_PLATINUM, CostumePurchase_LucasPlatinum
	release
	end

CostumeInfo_LucasPlatinum:
	.string "It's an outfit from Sinnoh.\p"
	.string "It's looks good for winter.$"

CostumePurchase_LucasPlatinum::
	showmoneybox 0, 0
	msgbox CostumeSale_6000, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, CostumeSale_Cancel
	checkmoney 6000
	goto_if_eq VAR_RESULT, FALSE, CostumeSale_NotEnoughMoney
	playse SE_SHOP
	removemoney 6000
	updatemoneybox
	msgbox CostumeSale_ThankYou, MSGBOX_DEFAULT
	setflag FLAG_COSTUME_LUCAS_PLATINUM
	hidemoneybox
	releaseall
	end

EventScript_Mannequin_DawnPlatinum::
	lock
	msgbox CostumeInfo_DawnPlatinum, MSGBOX_DEFAULT
	goto_if_unset FLAG_COSTUME_DAWN_PLATINUM, CostumePurchase_DawnPlatinum
	release
	end

CostumeInfo_DawnPlatinum:
	.string "It's an outfit from Sinnoh.\p"
	.string "It has an autumn vibe.$"

CostumePurchase_DawnPlatinum::
	showmoneybox 0, 0
	msgbox CostumeSale_6000, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, CostumeSale_Cancel
	checkmoney 6000
	goto_if_eq VAR_RESULT, FALSE, CostumeSale_NotEnoughMoney
	playse SE_SHOP
	removemoney 6000
	updatemoneybox
	msgbox CostumeSale_ThankYou, MSGBOX_DEFAULT
	setflag FLAG_COSTUME_DAWN_PLATINUM
	hidemoneybox
	releaseall
	end

CostumeSale_3000:
	.string "This outfit is ¥3000.\n"
	.string "Would you like to buy it?$"

CostumeSale_4000:
	.string "This outfit is ¥4000.\n"
	.string "Would you like to buy it?$"

CostumeSale_5000:
	.string "This outfit is ¥5000.\n"
	.string "Would you like to buy it?$"

CostumeSale_6000:
	.string "This outfit is ¥6000.\n"
	.string "Would you like to buy it?$"

CostumeSale_Cancel::
	closemessage
	hidemoneybox
	releaseall
	end

CostumeSale_NotEnoughMoney::
	msgbox CostumeSale_CantAffordIt, MSGBOX_DEFAULT
	goto CostumeSale_Cancel
	end

CostumeSale_ThankYou:
	.string "Thank you!\p"
	.string "Please enjoy your new outfit.$"

CostumeSale_CantAffordIt:
	.string "You don't have enough money.$"

EventScript_ChangingRoom::
	lockall
	faceplayer
	msgbox Text_ChangingRoom, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, EventScript_ChangingRoom_Cancel
	fadescreen FADE_TO_BLACK
	playse SE_EXIT
	message Text_ChangingRoom_ChooseRegion
	waitmessage
	multichoicedefault 0, 0, MULTI_REGION, 5, FALSE
	switch VAR_RESULT
	case 0, EventScript_ChangingRoom_KantoCollection
	case 1, EventScript_ChangingRoom_JohtoCollection
	case 2, EventScript_ChangingRoom_HoennCollection
	case 3, EventScript_ChangingRoom_SinnohCollection
	case 4, EventScript_ChangingRoom_Exit
	case MULTI_B_PRESSED, EventScript_ChangingRoom_Exit
	end

EventScript_ChangingRoom_Exit::
	closemessage
	msgbox Text_ChangingRoom_Cancel, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, TRUE, EventScript_ChangingRoom_Loop
	fadescreen FADE_FROM_BLACK
	releaseall
	end

EventScript_ChangingRoom_Loop::
	message Text_ChangingRoom_ChooseRegion
	waitmessage
	multichoicedefault 0, 0, MULTI_REGION, 4, FALSE
	switch VAR_RESULT
	case 0, EventScript_ChangingRoom_KantoCollection
	case 1, EventScript_ChangingRoom_JohtoCollection
	case 2, EventScript_ChangingRoom_HoennCollection
	case 3, EventScript_ChangingRoom_SinnohCollection
	case MULTI_B_PRESSED, EventScript_ChangingRoom_Exit
	end

EventScript_ChangingRoom_Error::
	msgbox Text_ChangingRoom_Error, MSGBOX_DEFAULT
	goto EventScript_ChangingRoom_Loop
	end

Text_ChangingRoom:
	.string "Would you like to use our\n"
	.string "dressing rooms?$"

EventScript_ChangingRoom_Cancel::
	releaseall
	end

Text_ChangingRoom_ChooseRegion:
	.string "Which collection did you want to\n"
	.string "to choose an outfit from?$"

Text_ChangingRoom_ChooseOutfit:
	.string "Please choose an outfit style.$"

Text_ChangingRoom_Error:
	.string "You don't own that outfit!$"

Text_ChangingRoom_Cancel:
	.string "Would you like to leave the\n"
	.string "dressing room?"


EventScript_ChangingRoom_KantoCollection::
	msgbox Text_ChangingRoom_ChooseOutfit
	waitmessage
	multichoicedefault 0, 0, MULTI_KANTO_OUTFIT, 3, FALSE
	switch VAR_RESULT
	case 0, EventScript_KantoCollection_Red
	case 1, EventScript_KantoCollection_Leaf
	case 2, EventScript_ChangingRoom_Loop
	case MULTI_B_PRESSED, EventScript_ChangingRoom_Loop
	end

EventScript_ChangingRoom_JohtoCollection::
	msgbox Text_ChangingRoom_ChooseOutfit
	waitmessage
	multichoicedefault 0, 0, MULTI_JOHTO_OUTFIT, 4, FALSE
	switch VAR_RESULT
	case 0, EventScript_JohtoCollection_Ethan
	case 1, EventScript_JohtoCollection_Lyra
	case 2, EventScript_JohtoCollection_Kris
	case 3, EventScript_ChangingRoom_Loop
	case MULTI_B_PRESSED, EventScript_ChangingRoom_Loop
	end

EventScript_ChangingRoom_HoennCollection::
	msgbox Text_ChangingRoom_ChooseOutfit
	waitmessage
	multichoicedefault 0, 0, MULTI_HOENN_OUTFIT, 3, FALSE
	switch VAR_RESULT
	case 0, EventScript_HoennCollection_Brendan
	case 1, EventScript_HoennCollection_May
	case 2, EventScript_ChangingRoom_Loop
	case MULTI_B_PRESSED, EventScript_ChangingRoom_Loop
	end

EventScript_ChangingRoom_SinnohCollection::
	msgbox Text_ChangingRoom_ChooseOutfit
	waitmessage
	multichoicedefault 0, 0, MULTI_SINNOH_OUTFIT, 5, FALSE
	switch VAR_RESULT
	case 0, EventScript_SinnohCollection_Lucas
	case 1, EventScript_SinnohCollection_Dawn
	case 2, EventScript_SinnohCollection_LucasPlatinum
	case 3, EventScript_SinnohCollection_DawnPlatinum
	case 4, EventScript_ChangingRoom_Loop
	case MULTI_B_PRESSED, EventScript_ChangingRoom_Loop
	end

EventScript_KantoCollection_Red::
	goto_if_unset FLAG_COSTUME_RED, EventScript_ChangingRoom_Error
	goto EventScript_CostumeSwap_Red
	end

EventScript_KantoCollection_Leaf::
	goto_if_unset FLAG_COSTUME_LEAF, EventScript_ChangingRoom_Error
	goto EventScript_CostumeSwap_Leaf
	end

EventScript_JohtoCollection_Ethan::
	goto_if_unset FLAG_COSTUME_ETHAN, EventScript_ChangingRoom_Error
	goto EventScript_CostumeSwap_Ethan
	end

EventScript_JohtoCollection_Lyra::
	goto_if_unset FLAG_COSTUME_LYRA, EventScript_ChangingRoom_Error
	goto EventScript_CostumeSwap_Lyra
	end

EventScript_JohtoCollection_Kris::
	goto_if_unset FLAG_COSTUME_KRIS, EventScript_ChangingRoom_Error
	goto EventScript_CostumeSwap_Kris
	end

EventScript_HoennCollection_Brendan::
	goto EventScript_CostumeSwap_Brendan
	end

EventScript_HoennCollection_May::
	goto EventScript_CostumeSwap_May
	end

EventScript_SinnohCollection_Lucas::
	goto_if_unset FLAG_COSTUME_LUCAS, EventScript_ChangingRoom_Error
	goto EventScript_CostumeSwap_Lucas
	end

EventScript_SinnohCollection_Dawn::
	goto_if_unset FLAG_COSTUME_DAWN, EventScript_ChangingRoom_Error
	goto EventScript_CostumeSwap_Dawn
	end

EventScript_SinnohCollection_LucasPlatinum::
	goto_if_unset FLAG_COSTUME_LUCAS_PLATINUM, EventScript_ChangingRoom_Error
	goto EventScript_CostumeSwap_Lucas
	end
	
EventScript_SinnohCollection_DawnPlatinum::
	goto_if_unset FLAG_COSTUME_DAWN_PLATINUM, EventScript_ChangingRoom_Error
	goto EventScript_CostumeSwap_Dawn
	end

EventScript_ChangingRoom_End::
	closemessage
	playse SE_EXIT
	turnobject OBJ_EVENT_ID_PLAYER, DIR_SOUTH
	fadescreen FADE_FROM_BLACK
	releaseall
	end