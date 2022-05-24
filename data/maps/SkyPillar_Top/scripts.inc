.set LOCALID_RAYQUAZA_SLEEPING, 1
.set LOCALID_ZINNIA, 4

SkyPillar_Top_MapScripts::
	map_script MAP_SCRIPT_ON_RESUME, SkyPillar_Top_OnResume
	map_script MAP_SCRIPT_ON_TRANSITION, SkyPillar_Top_OnTransition
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, SkyPillar_Top_OnWarp
	.byte 0

SkyPillar_Top_OnResume:
	call_if_set FLAG_SYS_CTRL_OBJ_DELETE, SkyPillar_Top_EventScript_TryRemoveRayquaza
	end

SkyPillar_Top_EventScript_TryRemoveRayquaza::
	specialvar VAR_RESULT, GetBattleOutcome
	goto_if_ne VAR_RESULT, B_OUTCOME_CAUGHT, Common_EventScript_NopReturn
	removeobject VAR_LAST_TALKED
	setflag FLAG_CAUGHT_RAYQUAZA
	return

SkyPillar_Top_OnTransition:
	call_if_lt VAR_SKY_PILLAR_STATE, 2, SkyPillar_Top_EventScript_SetCleanLayout
	call_if_ge VAR_SKY_PILLAR_STATE, 2, SkyPillar_Top_EventScript_TryShowRayquaza
	call_if_set FLAG_CAUGHT_RAYQUAZA, SkyPillar_Top_ShowZinnia
	end

SkyPillar_Top_ShowZinnia::
	clearflag FLAG_HIDE_SKY_PILLAR_ZINNIA
	return

SkyPillar_Top_EventScript_SetCleanLayout::
	setmaplayoutindex LAYOUT_SKY_PILLAR_TOP_CLEAN
	setobjectmovementtype LOCALID_RAYQUAZA_SLEEPING, MOVEMENT_TYPE_FACE_DOWN
	return

SkyPillar_Top_EventScript_TryShowRayquaza::
	call_if_unset FLAG_DEFEATED_RAYQUAZA, SkyPillar_Top_EventScript_ShowRayquaza
	return

SkyPillar_Top_EventScript_ShowRayquaza::
	clearflag FLAG_HIDE_SKY_PILLAR_TOP_RAYQUAZA_STILL
	return

SkyPillar_Top_OnWarp:
	map_script_2 VAR_SKY_PILLAR_STATE, 0, SkyPillar_Top_EventScript_RayquazaFaceDown
	.2byte 0

SkyPillar_Top_EventScript_RayquazaFaceDown::
	turnobject LOCALID_RAYQUAZA_SLEEPING, DIR_SOUTH
	end

SkyPillar_Top_EventScript_Rayquaza::
	lockall
	waitse
	playmoncry SPECIES_RAYQUAZA, CRY_MODE_ENCOUNTER
	delay 40
	waitmoncry
	setwildbattle SPECIES_RAYQUAZA, 70
	setflag FLAG_SYS_CTRL_OBJ_DELETE
	special BattleSetup_StartLegendaryBattle
	waitstate
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
	specialvar VAR_RESULT, GetBattleOutcome
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, SkyPillar_Top_EventScript_DefeatedRayquaza
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, SkyPillar_Top_EventScript_RanFromRayquaza
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, SkyPillar_Top_EventScript_RanFromRayquaza
	setflag FLAG_DEFEATED_RAYQUAZA
	releaseall
	end

SkyPillar_Top_EventScript_DefeatedRayquaza::
	setflag FLAG_DEFEATED_RAYQUAZA
	goto SkyPillar_Top_EventScript_DefeatedRayquaza2
	end

SkyPillar_Top_EventScript_RanFromRayquaza::
	setvar VAR_0x8004, SPECIES_RAYQUAZA
	goto SkyPillar_Top_EventScript_RanFromRayquaza2
	end

SkyPillar_Top_EventScript_DefeatedRayquaza2::
	fadescreenswapbuffers FADE_TO_BLACK
	removeobject VAR_LAST_TALKED
	fadescreenswapbuffers FADE_FROM_BLACK
	releaseall
	end

SkyPillar_Top_EventScript_RanFromRayquaza2::
	fadescreenswapbuffers FADE_TO_BLACK
	removeobject VAR_LAST_TALKED
	fadescreenswapbuffers FADE_FROM_BLACK
	bufferspeciesname STR_VAR_1, VAR_0x8004
	msgbox gText_LegendaryFlewAway, MSGBOX_DEFAULT
	releaseall
	end

SkyPillar_Top_EventScript_AwakenRayquaza::
	lockall
	fadeoutbgm 1
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
	waitmovement 0
	special SpawnCameraObject
	applymovement OBJ_EVENT_ID_CAMERA, SkyPillar_Top_Movement_CameraPanUp
	waitmovement 0
	special RemoveCameraObject
	applymovement LOCALID_RAYQUAZA_SLEEPING, SkyPillar_Top_Movement_RayquazaStir
	waitmovement 0
	waitse
	playmoncry SPECIES_RAYQUAZA, CRY_MODE_ENCOUNTER
	setvar VAR_0x8004, 1  @ vertical pan
	setvar VAR_0x8005, 1  @ horizontal pan
	setvar VAR_0x8006, 8  @ num shakes
	setvar VAR_0x8007, 3  @ shake delay
	special ShakeCamera
	waitstate
	waitse
	playmoncry SPECIES_RAYQUAZA, CRY_MODE_ENCOUNTER
	setvar VAR_0x8004, 1  @ vertical pan
	setvar VAR_0x8005, 2  @ horizontal pan
	setvar VAR_0x8006, 8  @ num shakes
	setvar VAR_0x8007, 5  @ shake delay
	special ShakeCamera
	waitstate
	waitmoncry
	applymovement LOCALID_RAYQUAZA_SLEEPING, SkyPillar_Top_Movement_RayquazaFlyOff
	waitmovement 0
	removeobject LOCALID_RAYQUAZA_SLEEPING
	msgbox SkyPillar_Top_Text_RayquazaFlewOff, MSGBOX_DEFAULT
	closemessage
	delay 20
	fadeinbgm 1
	special SpawnCameraObject
	applymovement OBJ_EVENT_ID_CAMERA, SkyPillar_Top_Movement_CameraPanDown
	waitmovement 0
	special RemoveCameraObject
	setvar VAR_SOOTOPOLIS_CITY_STATE, 5
	setvar VAR_SKY_PILLAR_STATE, 1
	setvar VAR_SKY_PILLAR_RAQUAZA_CRY_DONE, 1
	releaseall
	end

@ Rayquaza has unusual movement frames
@ See comments, or sAnimTable_Rayquaza
SkyPillar_Top_Movement_RayquazaStir:
	delay_16
	walk_in_place_fast_left  @ Coiled, awake
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	walk_in_place_left  @ Coiled, mouth open
	delay_16
	walk_in_place_right  @ Normal, awake
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	step_end

SkyPillar_Top_Movement_RayquazaFlyOff:
	delay_16
	walk_in_place_down  @ Coiled, asleep
	delay_8
	walk_in_place_right  @ Normal, awake
	delay_8
	walk_faster_up  @ Fly up
	slide_up
	slide_up
	slide_up
	slide_up
	slide_up
	slide_up
	step_end

SkyPillar_Top_Movement_CameraPanUp:
	walk_slow_up
	walk_slow_up
	walk_slow_up
	step_end

SkyPillar_Top_Movement_CameraPanDown:
	walk_slow_down
	walk_slow_down
	walk_slow_down
	step_end

SkyPillar_Top_Text_RayquazaFlewOff:
	.string "The awakened Rayquaza flew off…$"

SkyPillar_Top_EventScript_Zinnia::
	lock
	faceplayer
	goto_if_unset FLAG_MET_ZINNIA, SkyPillar_Top_EventScript_MeetZinnia
	goto_if_set FLAG_ZINNIA_TAUGHT_DRAGON_ASCENT, SkyPillar_Top_EventScript_ZinniaTaughtMove
	fadedefaultbgm
	playbgm MUS_RAYQUAZA_APPEARS, TRUE
	fadescreen FADE_TO_BLACK
	msgbox SkyPillar_Top_Text_ZinniaStory, MSGBOX_DEFAULT
	fadescreen FADE_FROM_BLACK
	msgbox SkyPillar_Top_Text_UnlockRayquazaPower, MSGBOX_DEFAULT
	setvar VAR_0x8005, TUTOR_MOVE_DRAGON_ASCENT
	call MoveTutor_EventScript_OpenPartyMenu
	setflag FLAG_ZINNIA_TAUGHT_DRAGON_ASCENT
	goto_if_eq VAR_RESULT, 0, SkyPillar_Top_EventScript_AnotherTime
	msgbox SkyPillar_Top_Text_UseWisely, MSGBOX_DEFAULT
	release
	end

SkyPillar_Top_EventScript_MeetZinnia::
	setflag FLAG_MET_ZINNIA
	msgbox SkyPillar_Top_Text_ZinniaIntro, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, SkyPillar_Top_EventScript_Zinnia
	goto SkyPillar_Top_EventScript_AnotherTime
	end

SkyPillar_Top_EventScript_AnotherTime::
	msgbox SkyPillar_Top_Text_ZinniaAnotherTime, MSGBOX_DEFAULT
	waitmessage
	turnobject LOCALID_ZINNIA, DIR_NORTH
	release
	end

SkyPillar_Top_Text_ZinniaAnotherTime:
	.string "Zinnia: Perhaps another time then.$"

SkyPillar_Top_Text_ZinniaIntro:
	.string "???: So, you have returned.\p"
	.string "Do you also hear Rayquaza's call?\p"
	.string "For thousands of years, my people\n"
	.string "have lived in the shadows, waiting\l"
	.string "until we were needed to summon\l"
	.string "Rayquaza and protect Hoenn once\l"
	.string "again...\p"
	.string "It seems that you were able to\n"
	.string "harness Rayquaza's power on your\l"
	.string "own.\p"
	.string "Hmm...could you be...?\p"
	.string "No..that's impossible.\p"
	.string "Even so...\p"
	.string "You have used this power to\n"
	.string "protect Hoenn, and for that my\l"
	.string "people are grateful, but you have\l"
	.string "not brought out Rayquaza's full\l"
	.string "potential.\p"
	.string "My name is Zinnia, and I am one\n"
	.string "of the last Draconid People.\p"
	.string "I can teach you this power.\p"
	.string "Would you like to hear my story?$"

SkyPillar_Top_EventScript_ZinniaTaughtMove::
	msgbox SkyPillar_Top_Text_ZinniaToldStory, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, SkyPillar_Top_EventScript_ZinniaRepeat
	msgbox SkyPillar_Top_Text_ZinniaAnotherTime, MSGBOX_DEFAULT
	turnobject LOCALID_ZINNIA, DIR_NORTH
	release
	end

SkyPillar_Top_EventScript_ZinniaRepeat::
	clearflag FLAG_ZINNIA_TAUGHT_DRAGON_ASCENT
	goto SkyPillar_Top_EventScript_Zinnia
	end

SkyPillar_Top_Text_ZinniaToldStory:
	.string "Zinnia: You have already heard my\n"
	.string "story...\p"
	.string "Would you like me to repeat it?$"

SkyPillar_Top_Text_ZinniaStory:
	.string "Long ago, the battles between\n"
	.string "Groudon and Kyogre were even\l"
	.string "more terrible than what you saw.\p"
	.string "In their primal forms, when these\n" 
	.string "Pokemon would fight, the world\l"
	.string "would tremble in fear.\p"
	.string "When the battles became too\n"
	.string "fierce, my people took shelter\l"
	.string "in Meteor Falls.\p"
	.string "Just when we thought the world\n"
	.string "would be destoryed, my ancestors\l"
	.string "made a wish on a strange stone...\p"
	.string "They wished for a Pokemon to\n"
	.string "bring an end to the conflict, so\l"
	.string "that people and Pokemon could\l"
	.string "finally live in peace.\p"
	.string "Their wish was answered by\n"
	.string "Rayquaza.\p"
	.string "Rayquaza stopped the primal\n"
	.string "ancient Pokemon, and then\l"
	.string "ascended to the heavens...\p"
	.string "My people built this tower to\n"
	.string "remember that wish.\p"
	.string "Just like my ancestors, you wish\n"
	.string "for peace between people and\l"
	.string "Pokemon.\p"
	.string "Your bond with Rayquaza proves it.\n"
	.string "By forging that bond, we can bring\l"
	.string "out Rayquaza's true power!$"

SkyPillar_Top_Text_UnlockRayquazaPower:
	.string "Unlock Rayquaza's true power.$"

SkyPillar_Top_Text_UseWisely:
	.string "You have already defended this\n"
	.string "world once.\p"
	.string "I trust you will this power\n"
	.string "wisely.$"
