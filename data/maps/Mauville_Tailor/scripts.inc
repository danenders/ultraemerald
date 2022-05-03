Mauville_Tailor_MapScripts::
	.byte 0

MauvilleCity_Tailor_EventScript_Tailor::
	lock
	faceplayer
	msgbox MauvilleCity_Tailor_Text_Welcome, MSGBOX_DEFAULT
	release
	end

MauvilleCity_Tailor_Text_Welcome:
	.string "We imported these new outfits\n"
	.string "all the way from Johto!$"

MauvilleCity_Tailor_EventScript_Shopper::
	lock
	faceplayer
	msgbox MauvilleCity_Tailor_Text_Confidence, MSGBOX_DEFAULT
	release
	end

MauvilleCity_Tailor_Text_Confidence:
	.string "I wish I had the confidence to\n"
	.string "buy one of these trainer outfits\l"
	.string "and go on an adventure.$"

MauvilleCity_Tailor_Sign_Magazines::
	msgbox MauvilleCity_Tailor_Text_Magazines, MSGBOX_SIGN
	end

MauvilleCity_Tailor_Text_Magazines:
	.string "It's a fashion magazine...\p"
	.string "There's an article about the\n"
	.string "fashion of Hoenn's gym leaders.\p"
	.string "Dad doesn't seem to be trendy.$"

