RustboroCity_Tailor_MapScripts::
	.byte 0

RustboroCity_Tailor_EventScript_Tailor::
	lock
	faceplayer
	msgbox RustboroCity_Tailor_Text_Welcome, MSGBOX_DEFAULT
	release
	end

RustboroCity_Tailor_Text_Welcome:
	.string "We have the lastest styles from\n"
	.string "Kanto and Hoenn in stock.\p"
	.string "If you already an own an outfit,\n"
	.string "speak to the attendant to use \n"
	.string "one of our dressing rooms.$"

RustboroCity_Tailor_EventScript_Shopper::
	lock
	faceplayer
	msgbox RustboroCity_Tailor_Text_Trends, MSGBOX_DEFAULT
	release
	end

RustboroCity_Tailor_Text_Trends:
	.string "I must read every fashion magazine\n"
	.string "I can find to stay on top of all\l"
	.string "the latest trends.$"

RustboroCity_Tailor_Sign_Magazines::
	msgbox RustboroCity_Tailor_Text_Magazines, MSGBOX_SIGN
	end

RustboroCity_Tailor_Text_Magazines:
	.string "It's a fashion magazine...\p"
	.string "Theres a trainer with a\n"
	.string "white cape on the cover.$"
