LilycoveCity_DepartmentStore_7F_MapScripts::
	.byte 0

LilycoveCity_DepartmentStore_7F_EventScript_Fashonista::
	lock
	faceplayer
	msgbox LilycoveCity_DepartmentStore_7F_Text_Fashonista, MSGBOX_DEFAULT
	release
	end

LilycoveCity_DepartmentStore_7F_Text_Fashonista:
	.string "I opened this shop to share the\n"
	.string "the fashion from regions I've\l"
	.string "visited around the world.\p"
	.string "If I don't have it, it's simply\n"
	.string "not in style!$"
