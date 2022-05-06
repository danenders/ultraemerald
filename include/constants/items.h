#ifndef GUARD_CONSTANTS_ITEMS_H
#define GUARD_CONSTANTS_ITEMS_H

#define ITEM_NONE 0

// Poké Balls
#define ITEM_POKE_BALL 		1  //Pocket = Pokeball
#define ITEM_GREAT_BALL 	2  //Pocket = Pokeball
#define ITEM_ULTRA_BALL 	3  //Pocket = Pokeball
#define ITEM_MASTER_BALL 	4  //Pocket = Pokeball
#define ITEM_PREMIER_BALL 	5  //Pocket = Pokeball
#define ITEM_HEAL_BALL 		6  //unused
#define ITEM_NET_BALL 		7  //Pocket = Pokeball
#define ITEM_NEST_BALL 		8  //Pocket = Pokeball
#define ITEM_DIVE_BALL 		9  //Pocket = Pokeball
#define ITEM_DUSK_BALL 		10 //Pocket = Pokeball
#define ITEM_TIMER_BALL 	11 //Pocket = Pokeball
#define ITEM_QUICK_BALL 	12 //Pocket = Pokeball
#define ITEM_REPEAT_BALL 	13 //Pocket = Pokeball
#define ITEM_LUXURY_BALL 	14 //Pocket = Pokeball
#define ITEM_LEVEL_BALL 	15 //Pocket = Pokeball
#define ITEM_LURE_BALL 		16 //Pocket = Pokeball
#define ITEM_MOON_BALL 		17 //unused
#define ITEM_FRIEND_BALL 	18 //Pocket = Pokeball
#define ITEM_LOVE_BALL 		19 //Pocket = Pokeball
#define ITEM_FAST_BALL 		20 //unused
#define ITEM_HEAVY_BALL 	21 //Pocket = Pokeball
#define ITEM_DREAM_BALL 	22 //Pocket = Pokeball
#define ITEM_SAFARI_BALL 	23 //Pocket = Pokeball
#define ITEM_SPORT_BALL 	24 //unused
#define ITEM_PARK_BALL 		25 //unused
#define ITEM_BEAST_BALL 	26 //unused
#define ITEM_CHERISH_BALL 	27 //unused

// Note: If moving ball IDs around, updating FIRST_BALL/LAST_BALL is not sufficient
//       Several places expect the ball IDs to be first and contiguous (e.g. MON_DATA_POKEBALL)
//       If adding new balls, it's easiest to insert them after the last ball and increment the below IDs (and removing ITEM_034 for example)
#define FIRST_BALL ITEM_POKE_BALL
#define LAST_BALL  ITEM_CHERISH_BALL

// Medicine
#define ITEM_POTION 		28 //Pocket = Medicine
#define ITEM_SUPER_POTION 	29 //Pocket = Medicine
#define ITEM_HYPER_POTION 	30 //Pocket = Medicine
#define ITEM_MAX_POTION 	31 //Pocket = Medicine
#define ITEM_FULL_RESTORE 	32 //Pocket = Medicine
#define ITEM_REVIVE 		33 //Pocket = Medicine
#define ITEM_MAX_REVIVE 	34 //Pocket = Medicine
#define ITEM_FRESH_WATER 	35 //Pocket = Medicine
#define ITEM_SODA_POP 		36 //Pocket = Medicine
#define ITEM_LEMONADE 		37 //Pocket = Medicine
#define ITEM_MOOMOO_MILK 	38 //Pocket = Medicine
#define ITEM_ENERGY_POWDER 	39 //Pocket = Medicine
#define ITEM_ENERGY_ROOT 	40 //Pocket = Medicine
#define ITEM_HEAL_POWDER 	41 //Pocket = Medicine
#define ITEM_REVIVAL_HERB 	42 //Pocket = Medicine
#define ITEM_ANTIDOTE 		43 //Pocket = Medicine
#define ITEM_PARALYZE_HEAL 	44 //Pocket = Medicine
#define ITEM_BURN_HEAL 		45 //Pocket = Medicine
#define ITEM_ICE_HEAL 		46 //Pocket = Medicine
#define ITEM_AWAKENING 		47 //Pocket = Medicine
#define ITEM_FULL_HEAL 		48 //Pocket = Medicine
#define ITEM_ETHER 			49 //Pocket = Medicine
#define ITEM_MAX_ETHER 		50 //Pocket = Medicine
#define ITEM_ELIXIR 		51 //Pocket = Medicine
#define ITEM_MAX_ELIXIR 	52 //Pocket = Medicine
#define ITEM_BERRY_JUICE 	53 //Pocket = Medicine
#define ITEM_SACRED_ASH 	54 //Pocket = Medicine
#define ITEM_SWEET_HEART 	55 //unused
#define ITEM_MAX_HONEY 		56 //unused

// Regional Specialties
#define ITEM_PEWTER_CRUNCHIES 	57 //Pocket = Medicine
#define ITEM_RAGE_CANDY_BAR 	58 //Pocket = Medicine
#define ITEM_LAVA_COOKIE 		59 //Pocket = Medicine
#define ITEM_OLD_GATEAU 		60 //Pocket = Medicine
#define ITEM_CASTELIACONE 		61 //unused
#define ITEM_LUMIOSE_GALETTE	62 //unused
#define ITEM_SHALOUR_SABLE 		63 //unused
#define ITEM_BIG_MALASADA 		64 //unused

// Vitamins
#define ITEM_HP_UP 		65 //Pocket = Training
#define ITEM_PROTEIN 	66 //Pocket = Training
#define ITEM_IRON 		67 //Pocket = Training
#define ITEM_CALCIUM 	68 //Pocket = Training
#define ITEM_ZINC 		69 //Pocket = Training
#define ITEM_CARBOS 	70 //Pocket = Training
#define ITEM_PP_UP 		71 //Pocket = Training
#define ITEM_PP_MAX 	72 //Pocket = Training

// EV Feathers
#define ITEM_HEALTH_FEATHER 73
#define ITEM_MUSCLE_FEATHER 74
#define ITEM_RESIST_FEATHER 75
#define ITEM_GENIUS_FEATHER 76
#define ITEM_CLEVER_FEATHER 77
#define ITEM_SWIFT_FEATHER 	78

// Ability Modifiers
#define ITEM_ABILITY_CAPSULE 	79 //Pocket = Training
#define ITEM_ABILITY_PATCH 		80 //Pocket = Training

// Mints
#define ITEM_LONELY_MINT 	81 //Pocket = Training
#define ITEM_ADAMANT_MINT 	82 //Pocket = Training
#define ITEM_NAUGHTY_MINT 	83 //Pocket = Training
#define ITEM_BRAVE_MINT 	84 //Pocket = Training
#define ITEM_BOLD_MINT 		85 //Pocket = Training
#define ITEM_IMPISH_MINT 	86 //Pocket = Training
#define ITEM_LAX_MINT 		87 //Pocket = Training
#define ITEM_RELAXED_MINT 	88 //Pocket = Training
#define ITEM_MODEST_MINT 	89 //Pocket = Training
#define ITEM_MILD_MINT 		90 //Pocket = Training
#define ITEM_RASH_MINT 		91 //Pocket = Training
#define ITEM_QUIET_MINT 	92 //Pocket = Training
#define ITEM_CALM_MINT 		93 //Pocket = Training
#define ITEM_GENTLE_MINT 	94 //Pocket = Training
#define ITEM_CAREFUL_MINT 	95 //Pocket = Training
#define ITEM_SASSY_MINT 	96 //Pocket = Training
#define ITEM_TIMID_MINT 	97 //Pocket = Training
#define ITEM_HASTY_MINT 	98 //Pocket = Training
#define ITEM_JOLLY_MINT 	99 //Pocket = Training
#define ITEM_NAIVE_MINT 	100 //Pocket = Training
#define ITEM_SERIOUS_MINT 	101 //Pocket = Training

// Candy
#define ITEM_RARE_CANDY 	102 //Pocket = Training
#define ITEM_EXP_CANDY_XS 	103 //unused
#define ITEM_EXP_CANDY_S 	104 //unused
#define ITEM_EXP_CANDY_M 	105 //unused
#define ITEM_EXP_CANDY_L 	106 //unused
#define ITEM_EXP_CANDY_XL 	107 //unused
#define ITEM_DYNAMAX_CANDY 	108 //unused

// Medicinal Flutes
#define ITEM_BLUE_FLUTE 	109 //Pocket = Medicine
#define ITEM_YELLOW_FLUTE 	110 //Pocket = Medicine
#define ITEM_RED_FLUTE 		111 //Pocket = Medicine

// Encounter-modifying Flutes
#define ITEM_BLACK_FLUTE 112 //Pocket = Items
#define ITEM_WHITE_FLUTE 113 //Pocket = Items

// Encounter Modifiers
#define ITEM_REPEL 			114 //Pocket = Items
#define ITEM_SUPER_REPEL 	115 //Pocket = Items
#define ITEM_MAX_REPEL 		116 //Pocket = Items
#define ITEM_LURE 			117 //unused
#define ITEM_SUPER_LURE 	118 //unused
#define ITEM_MAX_LURE 		119 //unused

#define ITEM_ESCAPE_ROPE 	120 //Pocket = Items

// X Items
#define ITEM_X_ATTACK 		121 //Pocket = Items
#define ITEM_X_DEFENSE 		122 //Pocket = Items
#define ITEM_X_SP_ATK 		123 //Pocket = Items
#define ITEM_X_SP_DEF 		124 //Pocket = Items
#define ITEM_X_SPEED 		125 //Pocket = Items
#define ITEM_X_ACCURACY 	126 //Pocket = Items

#define ITEM_DIRE_HIT 		127 //Pocket = Items
#define ITEM_GUARD_SPEC 	128 //Pocket = Items

// Escape Items
#define ITEM_POKE_DOLL 		129 //Pocket = Items
#define ITEM_FLUFFY_TAIL 	130 //Pocket = Items
#define ITEM_POKE_TOY 		131 //unused

#define ITEM_MAX_MUSHROOMS 	132 //unused

// Treasures
#define ITEM_BOTTLE_CAP 		133 //unused
#define ITEM_GOLD_BOTTLE_CAP 	134 //unused
#define ITEM_NUGGET 			135 //Pocket = Treasures
#define ITEM_BIG_NUGGET 		136 //unused
#define ITEM_TINY_MUSHROOM 		137 //Pocket = Treasures
#define ITEM_BIG_MUSHROOM 		138 //Pocket = Treasures
#define ITEM_BALM_MUSHROOM 		139 //unused
#define ITEM_PEARL 				140 //Pocket = Treasures
#define ITEM_BIG_PEARL 			141 //Pocket = Treasures
#define ITEM_PEARL_STRING 		142 //unused
#define ITEM_STARDUST 			143 //Pocket = Treasures
#define ITEM_STAR_PIECE 		144 //Pocket = Treasures
#define ITEM_COMET_SHARD 		145 //unused
#define ITEM_SHOAL_SALT 		146 //Pocket = Treasures
#define ITEM_SHOAL_SHELL 		147 //Pocket = Treasures
#define ITEM_RED_SHARD 			148 //Pocket = Treasures
#define ITEM_BLUE_SHARD 		149 //Pocket = Treasures
#define ITEM_YELLOW_SHARD 		150 //Pocket = Treasures
#define ITEM_GREEN_SHARD 		151 //Pocket = Treasures
#define ITEM_HEART_SCALE 		152 //Pocket = Treasures
#define ITEM_HONEY 				153 //unused
#define ITEM_RARE_BONE 			154 //unused
#define ITEM_ODD_KEYSTONE 		155 //unused
#define ITEM_PRETTY_FEATHER 	156 //Pocket = Treasures
#define ITEM_RELIC_COPPER 		157 //unused
#define ITEM_RELIC_SILVER 		158 //unused
#define ITEM_RELIC_GOLD 		159 //unused
#define ITEM_RELIC_VASE 		160 //unused
#define ITEM_RELIC_BAND 		161 //unused
#define ITEM_RELIC_STATUE 		162 //unused
#define ITEM_RELIC_CROWN 		163 //unused
#define ITEM_STRANGE_SOUVENIR 	164 //unused

// Fossils
#define ITEM_HELIX_FOSSIL 		165 //Pocket = Treasures
#define ITEM_DOME_FOSSIL 		166 //Pocket = Treasures
#define ITEM_OLD_AMBER 			167 //Pocket = Treasures
#define ITEM_ROOT_FOSSIL 		168 //Pocket = Treasures
#define ITEM_CLAW_FOSSIL 		169 //Pocket = Treasures
#define ITEM_ARMOR_FOSSIL 		170 //unused
#define ITEM_SKULL_FOSSIL 		171 //unused
#define ITEM_COVER_FOSSIL 		172 //unused
#define ITEM_PLUME_FOSSIL 		173 //unused
#define ITEM_JAW_FOSSIL 		174 //unused
#define ITEM_SAIL_FOSSIL 		175 //unused
#define ITEM_FOSSILIZED_BIRD 	176 //unused
#define ITEM_FOSSILIZED_FISH 	177 //unused
#define ITEM_FOSSILIZED_DRAKE 	178 //unused
#define ITEM_FOSSILIZED_DINO 	179 //unused

// Mulch
#define ITEM_GROWTH_MULCH 		180 //unused
#define ITEM_DAMP_MULCH 		181 //unused
#define ITEM_STABLE_MULCH 		182 //unused
#define ITEM_GOOEY_MULCH 		183 //unused
#define ITEM_RICH_MULCH 		184 //unused
#define ITEM_SURPRISE_MULCH 	185 //unused
#define ITEM_BOOST_MULCH 		186 //unused
#define ITEM_AMAZE_MULCH 		187 //unused

// Apricorns
#define ITEM_RED_APRICORN 		188 //unused
#define ITEM_BLUE_APRICORN 		189 //unused
#define ITEM_YELLOW_APRICORN	190 //unused
#define ITEM_GREEN_APRICORN 	191 //unused
#define ITEM_PINK_APRICORN 		192 //unused
#define ITEM_WHITE_APRICORN 	193 //unused
#define ITEM_BLACK_APRICORN 	194 //unused

#define ITEM_WISHING_PIECE 		195 //unused
#define ITEM_GALARICA_TWIG 		196 //unused
#define ITEM_ARMORITE_ORE 		197 //unused
#define ITEM_DYNITE_ORE 		198 //unused

// Mail
#define ITEM_ORANGE_MAIL 	199 //Pocket = Items
#define ITEM_HARBOR_MAIL 	200 //Pocket = Items
#define ITEM_GLITTER_MAIL 	201 //Pocket = Items
#define ITEM_MECH_MAIL 		202 //Pocket = Items
#define ITEM_WOOD_MAIL 		203 //Pocket = Items
#define ITEM_WAVE_MAIL 		204 //Pocket = Items
#define ITEM_BEAD_MAIL 		205 //Pocket = Items
#define ITEM_SHADOW_MAIL 	206 //Pocket = Items
#define ITEM_TROPIC_MAIL 	207 //Pocket = Items
#define ITEM_DREAM_MAIL 	208 //Pocket = Items
#define ITEM_FAB_MAIL 		209 //Pocket = Items
#define ITEM_RETRO_MAIL 	210 //Pocket = Items

#define FIRST_MAIL_INDEX ITEM_ORANGE_MAIL

// Evolution Items
#define ITEM_FIRE_STONE 		211 //Pocket = Items
#define ITEM_WATER_STONE 		212 //Pocket = Items
#define ITEM_THUNDER_STONE 		213 //Pocket = Items
#define ITEM_LEAF_STONE 		214 //Pocket = Items
#define ITEM_ICE_STONE 			215 //Pocket = Items
#define ITEM_SUN_STONE 			216 //Pocket = Items
#define ITEM_MOON_STONE 		217 //Pocket = Items
#define ITEM_SHINY_STONE 		218 //Pocket = Items
#define ITEM_DUSK_STONE 		219 //Pocket = Items
#define ITEM_DAWN_STONE 		220 //Pocket = Items
#define ITEM_SWEET_APPLE 		221 //unused
#define ITEM_TART_APPLE 		222 //unused
#define ITEM_CRACKED_POT 		223 //unused
#define ITEM_CHIPPED_POT 		224 //unused
#define ITEM_GALARICA_CUFF 		225 //unused
#define ITEM_GALARICA_WREATH 	226 //unused
#define ITEM_DRAGON_SCALE 		227 //Pocket = Items
#define ITEM_UPGRADE 			228 //Pocket = Items
#define ITEM_PROTECTOR 			229 //Pocket = Items
#define ITEM_ELECTIRIZER 		230 //Pocket = Items
#define ITEM_MAGMARIZER 		231 //Pocket = Items
#define ITEM_DUBIOUS_DISC 		232 //Pocket = Items
#define ITEM_REAPER_CLOTH 		233 //Pocket = Items
#define ITEM_PRISM_SCALE 		234 //Pocket = Items
#define ITEM_WHIPPED_DREAM 		235 //unused
#define ITEM_SACHET 			236 //unused
#define ITEM_OVAL_STONE 		237 //Pocket = Items
#define ITEM_STRAWBERRY_SWEET 	238 //unused
#define ITEM_LOVE_SWEET 		239 //unused
#define ITEM_BERRY_SWEET 		240 //unused
#define ITEM_CLOVER_SWEET 		241 //unused
#define ITEM_FLOWER_SWEET 		242 //unused
#define ITEM_STAR_SWEET 		243 //unused
#define ITEM_RIBBON_SWEET 		244 //unused

#define ITEM_EVERSTONE 			245 //Pocket = Items

// Nectars
#define ITEM_RED_NECTAR 		246  //unused
#define ITEM_YELLOW_NECTAR 		247  //unused
#define ITEM_PINK_NECTAR 		248  //unused
#define ITEM_PURPLE_NECTAR 		249  //unused

// Plates
#define ITEM_FLAME_PLATE 		250  //unused
#define ITEM_SPLASH_PLATE 		251  //unused
#define ITEM_ZAP_PLATE 			252  //unused
#define ITEM_MEADOW_PLATE 		253  //unused
#define ITEM_ICICLE_PLATE 		254  //unused
#define ITEM_FIST_PLATE 		255  //unused
#define ITEM_TOXIC_PLATE 		256  //unused
#define ITEM_EARTH_PLATE 		257  //unused
#define ITEM_SKY_PLATE 			258  //unused
#define ITEM_MIND_PLATE 		259  //unused
#define ITEM_INSECT_PLATE 		260  //unused
#define ITEM_STONE_PLATE 		261  //unused
#define ITEM_SPOOKY_PLATE 		262  //unused
#define ITEM_DRACO_PLATE 		263  //unused
#define ITEM_DREAD_PLATE 		264  //unused
#define ITEM_IRON_PLATE 		265  //unused
#define ITEM_PIXIE_PLATE 		266  //unused

// Drives
#define ITEM_DOUSE_DRIVE 		267 //unused
#define ITEM_SHOCK_DRIVE 		268 //unused
#define ITEM_BURN_DRIVE 		269 //unused
#define ITEM_CHILL_DRIVE 		270 //unused 

// Memories
#define ITEM_FIRE_MEMORY 		271 //unused
#define ITEM_WATER_MEMORY 		272 //unused
#define ITEM_ELECTRIC_MEMORY 	273 //unused
#define ITEM_GRASS_MEMORY 		274 //unused
#define ITEM_ICE_MEMORY 		275 //unused
#define ITEM_FIGHTING_MEMORY 	276 //unused
#define ITEM_POISON_MEMORY 		277 //unused
#define ITEM_GROUND_MEMORY 		278 //unused
#define ITEM_FLYING_MEMORY 		279 //unused
#define ITEM_PSYCHIC_MEMORY 	280 //unused
#define ITEM_BUG_MEMORY 		281 //unused
#define ITEM_ROCK_MEMORY 		282 //unused
#define ITEM_GHOST_MEMORY 		283 //unused
#define ITEM_DRAGON_MEMORY 		284 //unused
#define ITEM_DARK_MEMORY 		285 //unused
#define ITEM_STEEL_MEMORY 		286 //unused
#define ITEM_FAIRY_MEMORY 		287 //unused

#define ITEM_RUSTED_SWORD 	288 //unused
#define ITEM_RUSTED_SHIELD 	289 //unused

// Colored Orbs
#define ITEM_RED_ORB 		290 //Pocket = Mega Stones
#define ITEM_BLUE_ORB 		291 //Pocket = Mega Stones

// Mega Stones
#define ITEM_VENUSAURITE 	292 //Pocket = Mega Stones
#define ITEM_CHARIZARDITE_X 293 //Pocket = Mega Stones
#define ITEM_CHARIZARDITE_Y 294 //Pocket = Mega Stones
#define ITEM_BLASTOISINITE 	295 //Pocket = Mega Stones
#define ITEM_BEEDRILLITE 	296 //Pocket = Mega Stones
#define ITEM_PIDGEOTITE 	297 //Pocket = Mega Stones
#define ITEM_ALAKAZITE 		298 //Pocket = Mega Stones
#define ITEM_SLOWBRONITE 	299 //Pocket = Mega Stones
#define ITEM_GENGARITE 		300 //Pocket = Mega Stones
#define ITEM_KANGASKHANITE 	301 //Pocket = Mega Stones
#define ITEM_PINSIRITE 		302 //Pocket = Mega Stones
#define ITEM_GYARADOSITE 	303 //Pocket = Mega Stones
#define ITEM_AERODACTYLITE 	304 //Pocket = Mega Stones
#define ITEM_MEWTWONITE_X 	305 //Pocket = Mega Stones
#define ITEM_MEWTWONITE_Y 	306 //Pocket = Mega Stones
#define ITEM_AMPHAROSITE 	307 //Pocket = Mega Stones
#define ITEM_STEELIXITE 	308 //Pocket = Mega Stones
#define ITEM_SCIZORITE 		309 //Pocket = Mega Stones
#define ITEM_HERACRONITE 	310 //Pocket = Mega Stones
#define ITEM_HOUNDOOMINITE 	311 //Pocket = Mega Stones
#define ITEM_TYRANITARITE 	312 //Pocket = Mega Stones
#define ITEM_SCEPTILITE 	313 //Pocket = Mega Stones
#define ITEM_BLAZIKENITE 	314 //Pocket = Mega Stones
#define ITEM_SWAMPERTITE 	315 //Pocket = Mega Stones
#define ITEM_GARDEVOIRITE 	316 //Pocket = Mega Stones
#define ITEM_SABLENITE 		317 //Pocket = Mega Stones 
#define ITEM_MAWILITE 		318 //Pocket = Mega Stones
#define ITEM_AGGRONITE 		319 //Pocket = Mega Stones
#define ITEM_MEDICHAMITE 	320 //Pocket = Mega Stones
#define ITEM_MANECTITE 		321 //Pocket = Mega Stones
#define ITEM_SHARPEDONITE 	322 //Pocket = Mega Stones
#define ITEM_CAMERUPTITE 	323 //Pocket = Mega Stones
#define ITEM_ALTARIANITE 	324 //Pocket = Mega Stones
#define ITEM_BANETTITE 		325 //Pocket = Mega Stones
#define ITEM_ABSOLITE 		326 //Pocket = Mega Stones
#define ITEM_GLALITITE 		327 //Pocket = Mega Stones
#define ITEM_SALAMENCITE 	328 //Pocket = Mega Stones
#define ITEM_METAGROSSITE 	329 //Pocket = Mega Stones
#define ITEM_LATIASITE 		330 //Pocket = Mega Stones
#define ITEM_LATIOSITE 		331 //Pocket = Mega Stones
#define ITEM_LOPUNNITE 		332 //unused
#define ITEM_GARCHOMPITE 	333 //unused
#define ITEM_LUCARIONITE 	334 //unused
#define ITEM_ABOMASITE 		335 //unused
#define ITEM_GALLADITE 		336 //Pocket = Mega Stones
#define ITEM_AUDINITE 		337 //unused
#define ITEM_DIANCITE 		338 //unused

// Gems
#define ITEM_NORMAL_GEM 	339 //Pocket = Battle Items
#define ITEM_FIRE_GEM 		340 //Pocket = Battle Items
#define ITEM_WATER_GEM 		341 //Pocket = Battle Items
#define ITEM_ELECTRIC_GEM 	342 //Pocket = Battle Items
#define ITEM_GRASS_GEM 		343 //Pocket = Battle Items
#define ITEM_ICE_GEM 		344 //Pocket = Battle Items
#define ITEM_FIGHTING_GEM 	345 //Pocket = Battle Items
#define ITEM_POISON_GEM 	346 //Pocket = Battle Items
#define ITEM_GROUND_GEM 	347 //Pocket = Battle Items
#define ITEM_FLYING_GEM 	348 //Pocket = Battle Items
#define ITEM_PSYCHIC_GEM 	349 //Pocket = Battle Items
#define ITEM_BUG_GEM 		350 //Pocket = Battle Items
#define ITEM_ROCK_GEM 		351 //Pocket = Battle Items
#define ITEM_GHOST_GEM 		352 //Pocket = Battle Items
#define ITEM_DRAGON_GEM 	353 //Pocket = Battle Items
#define ITEM_DARK_GEM 		354 //Pocket = Battle Items
#define ITEM_STEEL_GEM 		355 //Pocket = Battle Items
#define ITEM_FAIRY_GEM 		356 //Pocket = Battle Items

// Z-Crystals
#define ITEM_NORMALIUM_Z 		357 //unused
#define ITEM_FIRIUM_Z 			358 //unused
#define ITEM_WATERIUM_Z 		359 //unused
#define ITEM_ELECTRIUM_Z 		360 //unused
#define ITEM_GRASSIUM_Z 		361 //unused
#define ITEM_ICIUM_Z 			362 //unused
#define ITEM_FIGHTINIUM_Z 		363 //unused
#define ITEM_POISONIUM_Z 		364 //unused
#define ITEM_GROUNDIUM_Z 		365 //unused
#define ITEM_FLYINIUM_Z 		366 //unused
#define ITEM_PSYCHIUM_Z 		367 //unused
#define ITEM_BUGINIUM_Z 		368 //unused
#define ITEM_ROCKIUM_Z 			369 //unused
#define ITEM_GHOSTIUM_Z 		370 //unused
#define ITEM_DRAGONIUM_Z 		371 //unused
#define ITEM_DARKINIUM_Z 		372 //unused
#define ITEM_STEELIUM_Z 		373 //unused
#define ITEM_FAIRIUM_Z 			374 //unused
#define ITEM_PIKANIUM_Z 		375 //unused
#define ITEM_EEVIUM_Z 			376 //unused
#define ITEM_SNORLIUM_Z 		377 //unused
#define ITEM_MEWNIUM_Z 			378 //unused
#define ITEM_DECIDIUM_Z 		379 //unused
#define ITEM_INCINIUM_Z 		380 //unused
#define ITEM_PRIMARIUM_Z 		381 //unused
#define ITEM_LYCANIUM_Z 		382 //unused
#define ITEM_MIMIKIUM_Z 		383 //unused
#define ITEM_KOMMONIUM_Z 		384 //unused
#define ITEM_TAPUNIUM_Z 		385 //unused
#define ITEM_SOLGANIUM_Z 		386 //unused
#define ITEM_LUNALIUM_Z 		387 //unused
#define ITEM_MARSHADIUM_Z 		388 //unused
#define ITEM_ALORAICHIUM_Z 		389 //unused
#define ITEM_PIKASHUNIUM_Z 		390 //unused
#define ITEM_ULTRANECROZIUM_Z 	391 //unused

// Species-specific Held Items
#define ITEM_LIGHT_BALL 		392 //Pocket = Battle Items
#define ITEM_LEEK 				393 //Pocket = Battle Items
#define ITEM_THICK_CLUB 		394 //Pocket = Battle Items
#define ITEM_LUCKY_PUNCH 		395 //Pocket = Battle Items
#define ITEM_METAL_POWDER 		396 //Pocket = Battle Items
#define ITEM_QUICK_POWDER 		397 //Pocket = Battle Items
#define ITEM_DEEP_SEA_SCALE 	398 //Pocket = Battle Items
#define ITEM_DEEP_SEA_TOOTH 	399 //Pocket = Battle Items
#define ITEM_SOUL_DEW		 	400 //Pocket = Battle Items
#define ITEM_ADAMANT_ORB 		401 //unused
#define ITEM_LUSTROUS_ORB 		402 //unused
#define ITEM_GRISEOUS_ORB 		403 //unused

// Incenses
#define ITEM_SEA_INCENSE 		404  //Pocket = Items
#define ITEM_LAX_INCENSE 		405  //Pocket = Items
#define ITEM_ODD_INCENSE 		406  //Pocket = Items
#define ITEM_ROCK_INCENSE 		407  //Pocket = Items
#define ITEM_FULL_INCENSE 		408  //Pocket = Items
#define ITEM_WAVE_INCENSE 		409  //Pocket = Items
#define ITEM_ROSE_INCENSE 		410  //Pocket = Items
#define ITEM_LUCK_INCENSE 		411  //Pocket = Items
#define ITEM_PURE_INCENSE 		412  //Pocket = Items

// Contest Scarves
#define ITEM_RED_SCARF 		413  //Pocket = Items
#define ITEM_BLUE_SCARF 	414  //Pocket = Items
#define ITEM_PINK_SCARF 	415  //Pocket = Items
#define ITEM_GREEN_SCARF 	416  //Pocket = Items
#define ITEM_YELLOW_SCARF 	417  //Pocket = Items

// EV Gain Modifiers
#define ITEM_MACHO_BRACE 	418 //Pocket = Training
#define ITEM_POWER_WEIGHT 	419 //Pocket = Training
#define ITEM_POWER_BRACER 	420 //Pocket = Training
#define ITEM_POWER_BELT 	421 //Pocket = Training
#define ITEM_POWER_LENS 	422 //Pocket = Training
#define ITEM_POWER_BAND 	423 //Pocket = Training
#define ITEM_POWER_ANKLET 	424 //Pocket = Training

// Type-boosting Held Items
#define ITEM_SILK_SCARF 	425 //Pocket = Battle Items
#define ITEM_CHARCOAL 		426 //Pocket = Battle Items
#define ITEM_MYSTIC_WATER 	427 //Pocket = Battle Items
#define ITEM_MAGNET 		428 //Pocket = Battle Items
#define ITEM_MIRACLE_SEED 	429 //Pocket = Battle Items
#define ITEM_NEVER_MELT_ICE 430 //Pocket = Battle Items
#define ITEM_BLACK_BELT 	431 //Pocket = Battle Items
#define ITEM_POISON_BARB 	432 //Pocket = Battle Items
#define ITEM_SOFT_SAND 		433 //Pocket = Battle Items
#define ITEM_SHARP_BEAK 	434 //Pocket = Battle Items
#define ITEM_TWISTED_SPOON 	435 //Pocket = Battle Items
#define ITEM_SILVER_POWDER 	436 //Pocket = Battle Items
#define ITEM_HARD_STONE 	437 //Pocket = Battle Items
#define ITEM_SPELL_TAG 		438 //Pocket = Battle Items
#define ITEM_DRAGON_FANG 	439 //Pocket = Battle Items
#define ITEM_BLACK_GLASSES 	440 //Pocket = Battle Items
#define ITEM_METAL_COAT 	441 //Pocket = Battle Items

// Choice Items
#define ITEM_CHOICE_BAND 	442 //Pocket = Battle Items
#define ITEM_CHOICE_SPECS 	443 //Pocket = Battle Items
#define ITEM_CHOICE_SCARF 	444 //Pocket = Battle Items

// Status Orbs
#define ITEM_FLAME_ORB 445  //Pocket = Battle Items
#define ITEM_TOXIC_ORB 446  //Pocket = Battle Items

// Weather Rocks
#define ITEM_DAMP_ROCK 		447 //Pocket = Battle Items
#define ITEM_HEAT_ROCK 		448 //Pocket = Battle Items
#define ITEM_SMOOTH_ROCK 	449 //Pocket = Battle Items
#define ITEM_ICY_ROCK 		450 //Pocket = Battle Items

// Terrain Seeds
#define ITEM_ELECTRIC_SEED 	451 //unused
#define ITEM_PSYCHIC_SEED 	452 //unused
#define ITEM_MISTY_SEED 	453 //unused
#define ITEM_GRASSY_SEED 	454 //unused

// Type-activated Stat Modifiers
#define ITEM_ABSORB_BULB 	455 //unused
#define ITEM_CELL_BATTERY 	456 //unused
#define ITEM_LUMINOUS_MOSS 	457 //unused
#define ITEM_SNOWBALL 		458 //unused

// Misc. Held Items
#define ITEM_BRIGHT_POWDER 		459 //Pocket = Battle Items
#define ITEM_WHITE_HERB 		460 //Pocket = Battle Items
#define ITEM_EXP_SHARE 			461 //Pocket = Key Items
#define ITEM_QUICK_CLAW 		462 //Pocket = Battle Items
#define ITEM_SOOTHE_BELL 		463 //Pocket = Battle Items
#define ITEM_MENTAL_HERB 		464 //Pocket = Battle Items
#define ITEM_KINGS_ROCK 		465 //Pocket = Battle Items
#define ITEM_AMULET_COIN 		466 //Pocket = Battle Items
#define ITEM_CLEANSE_TAG 		467 //Pocket = Battle Items
#define ITEM_SMOKE_BALL 		468 //Pocket = Battle Items
#define ITEM_FOCUS_BAND 		469 //Pocket = Battle Items
#define ITEM_LUCKY_EGG 			470 //Pocket = Battle Items
#define ITEM_SCOPE_LENS 		471 //Pocket = Battle Items
#define ITEM_LEFTOVERS 			472 //Pocket = Battle Items
#define ITEM_SHELL_BELL 		473 //Pocket = Battle Items
#define ITEM_WIDE_LENS 			474 //unused
#define ITEM_MUSCLE_BAND 		475 //Pocket = Battle Items
#define ITEM_WISE_GLASSES 		476 //Pocket = Battle Items
#define ITEM_EXPERT_BELT 		477 //Pocket = Battle Items
#define ITEM_LIGHT_CLAY 		478 //Pocket = Battle Items
#define ITEM_LIFE_ORB 			479 //Pocket = Battle Items
#define ITEM_POWER_HERB 		480 //Pocket = Battle Items
#define ITEM_FOCUS_SASH 		481 //Pocket = Battle Items
#define ITEM_ZOOM_LENS 			482 //unused
#define ITEM_METRONOME 			483 //Pocket = Battle Items
#define ITEM_IRON_BALL 			484 //unused
#define ITEM_LAGGING_TAIL 		485 //unused
#define ITEM_DESTINY_KNOT 		486 //Pocket = Battle Items
#define ITEM_BLACK_SLUDGE 		487 //Pocket = Battle Items
#define ITEM_GRIP_CLAW 			488 //unused
#define ITEM_STICKY_BARB 		489 //unused
#define ITEM_SHED_SHELL 		490 //unused
#define ITEM_BIG_ROOT 			491 //Pocket = Battle Items
#define ITEM_RAZOR_CLAW 		492 //Pocket = Battle Items
#define ITEM_RAZOR_FANG 		493 //Pocket = Battle Items
#define ITEM_EVIOLITE 			494 //Pocket = Battle Items
#define ITEM_FLOAT_STONE 		495 //unused
#define ITEM_ROCKY_HELMET 		496 //Pocket = Battle Items
#define ITEM_AIR_BALLOON 		497 //Pocket = Battle Items
#define ITEM_RED_CARD 			498 //Pocket = Battle Items
#define ITEM_RING_TARGET 		499 //unused
#define ITEM_BINDING_BAND 		500 //unused
#define ITEM_EJECT_BUTTON 		501 //Pocket = Battle Items
#define ITEM_WEAKNESS_POLICY 	502 //Pocket = Battle Items
#define ITEM_ASSAULT_VEST 		503 //Pocket = Battle Items
#define ITEM_SAFETY_GOGGLES 	504 //Pocket = Battle Items
#define ITEM_ADRENALINE_ORB 	505 //unused
#define ITEM_TERRAIN_EXTENDER 	506 //unused
#define ITEM_PROTECTIVE_PADS 	507 //unused
#define ITEM_THROAT_SPRAY 		508 //unused
#define ITEM_EJECT_PACK 		509 //Pocket = Battle Items
#define ITEM_HEAVY_DUTY_BOOTS 	510 //Pocket = Battle Items
#define ITEM_BLUNDER_POLICY 	511 //unused
#define ITEM_ROOM_SERVICE 		512 //unused
#define ITEM_UTILITY_UMBRELLA 	513 //unused

// Berries
#define ITEM_CHERI_BERRY 	514 // Pocket = Berries
#define ITEM_CHESTO_BERRY 	515 // Pocket = Berries
#define ITEM_PECHA_BERRY 	516 // Pocket = Berries
#define ITEM_RAWST_BERRY 	517 // Pocket = Berries
#define ITEM_ASPEAR_BERRY 	518 // Pocket = Berries
#define ITEM_LEPPA_BERRY 	519 // Pocket = Berries
#define ITEM_ORAN_BERRY 	520 // Pocket = Berries
#define ITEM_PERSIM_BERRY 	521 // Pocket = Berries
#define ITEM_LUM_BERRY 		522 // Pocket = Berries
#define ITEM_SITRUS_BERRY 	523 // Pocket = Berries
#define ITEM_FIGY_BERRY 	524 // Pocket = Berries
#define ITEM_WIKI_BERRY 	525 // Pocket = Berries
#define ITEM_MAGO_BERRY 	526 // Pocket = Berries
#define ITEM_AGUAV_BERRY 	527 // Pocket = Berries
#define ITEM_IAPAPA_BERRY 	528 // Pocket = Berries
#define ITEM_RAZZ_BERRY 	529 // Pocket = Berries
#define ITEM_BLUK_BERRY 	530 // Pocket = Berries
#define ITEM_NANAB_BERRY 	531 // Pocket = Berries
#define ITEM_WEPEAR_BERRY 	532 // Pocket = Berries
#define ITEM_PINAP_BERRY 	533 // Pocket = Berries
#define ITEM_POMEG_BERRY 	534 // Pocket = Berries
#define ITEM_KELPSY_BERRY 	535 // Pocket = Berries
#define ITEM_QUALOT_BERRY 	536 // Pocket = Berries
#define ITEM_HONDEW_BERRY 	537 // Pocket = Berries
#define ITEM_GREPA_BERRY 	538 // Pocket = Berries
#define ITEM_TAMATO_BERRY 	539 // Pocket = Berries
#define ITEM_CORNN_BERRY 	540 // Pocket = Berries
#define ITEM_MAGOST_BERRY 	541 // Pocket = Berries
#define ITEM_RABUTA_BERRY 	542 // Pocket = Berries
#define ITEM_NOMEL_BERRY 	543 // Pocket = Berries
#define ITEM_SPELON_BERRY 	544 // Pocket = Berries
#define ITEM_PAMTRE_BERRY 	545 // Pocket = Berries
#define ITEM_WATMEL_BERRY 	546 // Pocket = Berries
#define ITEM_DURIN_BERRY 	547 // Pocket = Berries
#define ITEM_BELUE_BERRY 	548 // Pocket = Berries
#define ITEM_CHILAN_BERRY 	549 // Pocket = Berries
#define ITEM_OCCA_BERRY 	550 // Pocket = Berries
#define ITEM_PASSHO_BERRY 	551 // Pocket = Berries
#define ITEM_WACAN_BERRY 	552 // Pocket = Berries
#define ITEM_RINDO_BERRY 	553 // Pocket = Berries
#define ITEM_YACHE_BERRY 	554 // Pocket = Berries
#define ITEM_CHOPLE_BERRY 	555 // Pocket = Berries
#define ITEM_KEBIA_BERRY 	556 // Pocket = Berries
#define ITEM_SHUCA_BERRY 	557 // Pocket = Berries
#define ITEM_COBA_BERRY 	558 // Pocket = Berries
#define ITEM_PAYAPA_BERRY 	559 // Pocket = Berries
#define ITEM_TANGA_BERRY 	560 // Pocket = Berries
#define ITEM_CHARTI_BERRY 	561 // Pocket = Berries
#define ITEM_KASIB_BERRY 	562 // Pocket = Berries
#define ITEM_HABAN_BERRY 	563 // Pocket = Berries
#define ITEM_COLBUR_BERRY 	564 // Pocket = Berries
#define ITEM_BABIRI_BERRY 	565 // Pocket = Berries
#define ITEM_ROSELI_BERRY 	566 // Pocket = Berries
#define ITEM_LIECHI_BERRY 	567 // Pocket = Berries
#define ITEM_GANLON_BERRY 	568 // Pocket = Berries
#define ITEM_SALAC_BERRY 	569 // Pocket = Berries
#define ITEM_PETAYA_BERRY 	570 // Pocket = Berries
#define ITEM_APICOT_BERRY 	571 // Pocket = Berries
#define ITEM_LANSAT_BERRY 	572 // Pocket = Berries
#define ITEM_STARF_BERRY 	573 // Pocket = Berries
#define ITEM_ENIGMA_BERRY 	574 //unused
#define ITEM_MICLE_BERRY 	575 // Pocket = Berries
#define ITEM_CUSTAP_BERRY 	576 // Pocket = Berries
#define ITEM_JABOCA_BERRY 	577 // Pocket = Berries
#define ITEM_ROWAP_BERRY 	578 // Pocket = Berries
#define ITEM_KEE_BERRY 		579 // Pocket = Berries
#define ITEM_MARANGA_BERRY 	580 // Pocket = Berries
#define ITEM_ENIGMA_BERRY_E_READER 581  //unused

#define FIRST_BERRY_INDEX ITEM_CHERI_BERRY
#define LAST_BERRY_INDEX  ITEM_ENIGMA_BERRY_E_READER

// TMs/HMs
#define ITEM_TM01 	582 //Pocket = TMsHMs
#define ITEM_TM02 	583 //Pocket = TMsHMs
#define ITEM_TM03 	584 //Pocket = TMsHMs
#define ITEM_TM04 	585 //Pocket = TMsHMs
#define ITEM_TM05 	586 //Pocket = TMsHMs
#define ITEM_TM06 	587 //Pocket = TMsHMs
#define ITEM_TM07 	588 //Pocket = TMsHMs
#define ITEM_TM08 	589 //Pocket = TMsHMs
#define ITEM_TM09 	590 //Pocket = TMsHMs
#define ITEM_TM10 	591 //Pocket = TMsHMs
#define ITEM_TM11 	592 //Pocket = TMsHMs
#define ITEM_TM12 	593 //Pocket = TMsHMs
#define ITEM_TM13 	594 //Pocket = TMsHMs
#define ITEM_TM14 	595 //Pocket = TMsHMs
#define ITEM_TM15 	596 //Pocket = TMsHMs 
#define ITEM_TM16 	597 //Pocket = TMsHMs
#define ITEM_TM17 	598 //Pocket = TMsHMs
#define ITEM_TM18 	599 //Pocket = TMsHMs
#define ITEM_TM19 	600 //Pocket = TMsHMs
#define ITEM_TM20 	601 //Pocket = TMsHMs
#define ITEM_TM21 	602 //Pocket = TMsHMs
#define ITEM_TM22 	603 //Pocket = TMsHMs
#define ITEM_TM23 	604 //Pocket = TMsHMs
#define ITEM_TM24 	605 //Pocket = TMsHMs
#define ITEM_TM25 	606 //Pocket = TMsHMs
#define ITEM_TM26 	607 //Pocket = TMsHMs
#define ITEM_TM27 	608 //Pocket = TMsHMs
#define ITEM_TM28 	609 //Pocket = TMsHMs
#define ITEM_TM29 	610 //Pocket = TMsHMs
#define ITEM_TM30 	611 //Pocket = TMsHMs
#define ITEM_TM31 	612 //Pocket = TMsHMs
#define ITEM_TM32 	613 //Pocket = TMsHMs
#define ITEM_TM33 	614 //Pocket = TMsHMs
#define ITEM_TM34 	615 //Pocket = TMsHMs
#define ITEM_TM35 	616 //Pocket = TMsHMs
#define ITEM_TM36 	617 //Pocket = TMsHMs
#define ITEM_TM37 	618 //Pocket = TMsHMs
#define ITEM_TM38 	619 //Pocket = TMsHMs
#define ITEM_TM39 	620 //Pocket = TMsHMs
#define ITEM_TM40 	621 //Pocket = TMsHMs
#define ITEM_TM41 	622 //Pocket = TMsHMs
#define ITEM_TM42 	623 //Pocket = TMsHMs
#define ITEM_TM43 	624 //Pocket = TMsHMs
#define ITEM_TM44 	625 //Pocket = TMsHMs
#define ITEM_TM45 	626 //Pocket = TMsHMs
#define ITEM_TM46 	627 //Pocket = TMsHMs
#define ITEM_TM47 	628 //Pocket = TMsHMs
#define ITEM_TM48 	629 //Pocket = TMsHMs
#define ITEM_TM49 	630 //Pocket = TMsHMs
#define ITEM_TM50 	631 //Pocket = TMsHMs
#define ITEM_TM51 	632 //unused
#define ITEM_TM52 	633 //unused
#define ITEM_TM53 	634 //unused
#define ITEM_TM54 	635 //unused
#define ITEM_TM55 	636 //unused
#define ITEM_TM56 	637 //unused
#define ITEM_TM57 	638 //unused
#define ITEM_TM58 	639 //unused
#define ITEM_TM59 	640 //unused
#define ITEM_TM60 	641 //unused
#define ITEM_TM61 	642 //unused
#define ITEM_TM62 	643 //unused
#define ITEM_TM63 	644 //unused
#define ITEM_TM64 	645 //unused
#define ITEM_TM65 	646 //unused
#define ITEM_TM66 	647 //unused
#define ITEM_TM67 	648 //unused
#define ITEM_TM68 	649 //unused
#define ITEM_TM69 	650 //unused
#define ITEM_TM70 	651 //unused
#define ITEM_TM71 	652 //unused
#define ITEM_TM72 	653 //unused
#define ITEM_TM73 	654 //unused
#define ITEM_TM74 	655 //unused
#define ITEM_TM75 	656 //unused
#define ITEM_TM76 	657 //unused
#define ITEM_TM77 	658 //unused
#define ITEM_TM78 	659 //unused
#define ITEM_TM79 	660 //unused
#define ITEM_TM80 	661 //unused
#define ITEM_TM81 	662 //unused
#define ITEM_TM82 	663 //unused
#define ITEM_TM83 	664 //unused
#define ITEM_TM84 	665 //unused
#define ITEM_TM85 	666 //unused
#define ITEM_TM86 	667 //unused
#define ITEM_TM87 	668 //unused
#define ITEM_TM88 	669 //unused
#define ITEM_TM89 	670 //unused
#define ITEM_TM90 	671 //unused
#define ITEM_TM91 	672 //unused
#define ITEM_TM92 	673 //unused
#define ITEM_TM93 	674 //unused
#define ITEM_TM94 	675 //unused
#define ITEM_TM95 	676 //unused
#define ITEM_TM96 	677 //unused
#define ITEM_TM97 	678 //unused
#define ITEM_TM98 	679 //unused
#define ITEM_TM99 	680 //unused
#define ITEM_TM100 	681 //unused

#define ITEM_HM01 	682 //Pocket = TMsHMs
#define ITEM_HM02 	683 //Pocket = TMsHMs
#define ITEM_HM03 	684 //Pocket = TMsHMs
#define ITEM_HM04 	685 //Pocket = TMsHMs
#define ITEM_HM05 	686 //Pocket = TMsHMs
#define ITEM_HM06 	687 //Pocket = TMsHMs
#define ITEM_HM07 	688 //Pocket = TMsHMs
#define ITEM_HM08 	689 //Pocket = TMsHMs

#define ITEM_TM01_FOCUS_PUNCH 	ITEM_TM01
#define ITEM_TM02_DRAGON_CLAW 	ITEM_TM02
#define ITEM_TM03_WATER_PULSE 	ITEM_TM03
#define ITEM_TM04_CALM_MIND 	ITEM_TM04
#define ITEM_TM05_ROAR 			ITEM_TM05
#define ITEM_TM06_TOXIC 		ITEM_TM06
#define ITEM_TM07_HAIL 			ITEM_TM07
#define ITEM_TM08_BULK_UP 		ITEM_TM08
#define ITEM_TM09_BULLET_SEED 	ITEM_TM09
#define ITEM_TM10_HIDDEN_POWER 	ITEM_TM10
#define ITEM_TM11_SUNNY_DAY 	ITEM_TM11
#define ITEM_TM12_TAUNT 		ITEM_TM12
#define ITEM_TM13_ICE_BEAM 		ITEM_TM13
#define ITEM_TM14_BLIZZARD 		ITEM_TM14
#define ITEM_TM15_HYPER_BEAM 	ITEM_TM15
#define ITEM_TM16_LIGHT_SCREEN 	ITEM_TM16
#define ITEM_TM17_PROTECT 		ITEM_TM17
#define ITEM_TM18_RAIN_DANCE 	ITEM_TM18
#define ITEM_TM19_GIGA_DRAIN 	ITEM_TM19
#define ITEM_TM20_SAFEGUARD 	ITEM_TM20
#define ITEM_TM21_FRUSTRATION 	ITEM_TM21
#define ITEM_TM22_SOLAR_BEAM 	ITEM_TM22
#define ITEM_TM23_IRON_TAIL 	ITEM_TM23
#define ITEM_TM24_THUNDERBOLT 	ITEM_TM24
#define ITEM_TM25_THUNDER 		ITEM_TM25
#define ITEM_TM26_EARTHQUAKE 	ITEM_TM26
#define ITEM_TM27_RETURN 		ITEM_TM27
#define ITEM_TM28_DIG 			ITEM_TM28
#define ITEM_TM29_PSYCHIC 		ITEM_TM29
#define ITEM_TM30_SHADOW_BALL 	ITEM_TM30
#define ITEM_TM31_BRICK_BREAK 	ITEM_TM31
#define ITEM_TM32_DOUBLE_TEAM 	ITEM_TM32
#define ITEM_TM33_REFLECT 		ITEM_TM33
#define ITEM_TM34_SHOCK_WAVE 	ITEM_TM34
#define ITEM_TM35_FLAMETHROWER 	ITEM_TM35
#define ITEM_TM36_SLUDGE_BOMB 	ITEM_TM36
#define ITEM_TM37_SANDSTORM 	ITEM_TM37
#define ITEM_TM38_FIRE_BLAST 	ITEM_TM38
#define ITEM_TM39_ROCK_TOMB 	ITEM_TM39
#define ITEM_TM40_AERIAL_ACE 	ITEM_TM40
#define ITEM_TM41_TORMENT 		ITEM_TM41
#define ITEM_TM42_FACADE 		ITEM_TM42
#define ITEM_TM43_SECRET_POWER 	ITEM_TM43
#define ITEM_TM44_REST 			ITEM_TM44
#define ITEM_TM45_ATTRACT 		ITEM_TM45
#define ITEM_TM46_THIEF 		ITEM_TM46
#define ITEM_TM47_STEEL_WING 	ITEM_TM47
#define ITEM_TM48_SKILL_SWAP 	ITEM_TM48
#define ITEM_TM49_SNATCH 		ITEM_TM49
#define ITEM_TM50_OVERHEAT 		ITEM_TM50

#define ITEM_HM01_CUT 			ITEM_HM01
#define ITEM_HM02_FLY 			ITEM_HM02
#define ITEM_HM03_SURF 			ITEM_HM03
#define ITEM_HM04_STRENGTH 		ITEM_HM04
#define ITEM_HM05_FLASH 		ITEM_HM05
#define ITEM_HM06_ROCK_SMASH 	ITEM_HM06
#define ITEM_HM07_WATERFALL 	ITEM_HM07
#define ITEM_HM08_DIVE 			ITEM_HM08

// Charms
#define ITEM_OVAL_CHARM 		690 //Pocket = Key Items
#define ITEM_SHINY_CHARM 		691 //Pocket = Key Items
#define ITEM_CATCHING_CHARM 	692 //Pocket = Key Items
#define ITEM_EXP_CHARM 			693 //unused

// Form-changing Key Items
#define ITEM_ROTOM_CATALOG		694 //unused
#define ITEM_GRACIDEA 			695 //unused
#define ITEM_REVEAL_GLASS 		696 //unused
#define ITEM_DNA_SPLICERS 		697 //unused
#define ITEM_ZYGARDE_CUBE 		698 //unused
#define ITEM_PRISON_BOTTLE 		699 //unused
#define ITEM_N_SOLARIZER 		700 //unused
#define ITEM_N_LUNARIZER 		701 //unused
#define ITEM_REINS_OF_UNITY 	702 //unused

// Battle Mechanic Key Items
#define ITEM_MEGA_RING 			703 //Pocket = Key Items
#define ITEM_Z_POWER_RING 		704 //unused
#define ITEM_DYNAMAX_BAND 		705 //unused

// Misc. Key Items
#define ITEM_BICYCLE 			706 //unused
#define ITEM_MACH_BIKE 			707 //Pocket = Key Items
#define ITEM_ACRO_BIKE 			708 //Pocket = Key Items
#define ITEM_OLD_ROD 			709 //Pocket = Key Items
#define ITEM_GOOD_ROD 			710 //Pocket = Key Items
#define ITEM_SUPER_ROD 			711 //Pocket = Key Items
#define ITEM_DOWSING_MACHINE 	712 //Pocket = Key Items
#define ITEM_TOWN_MAP 			713 //unused
#define ITEM_VS_SEEKER 			714 //unused
#define ITEM_TM_CASE 			715 //unused
#define ITEM_BERRY_POUCH 		716 //unused
#define ITEM_POKEMON_BOX_LINK 	717 //unused
#define ITEM_COIN_CASE 			718 //Pocket = Key Items
#define ITEM_POWDER_JAR 		719 //Pocket = Key Items
#define ITEM_WAILMER_PAIL 		720 //Pocket = Key Items
#define ITEM_POKE_RADAR 		721 //unused
#define ITEM_POKEBLOCK_CASE 	722 //Pocket = Key Items
#define ITEM_SOOT_SACK 			723 //Pocket = Key Items
#define ITEM_POKE_FLUTE 		724 //unused
#define ITEM_FAME_CHECKER 		725 //unused
#define ITEM_TEACHY_TV 			726 //unused

// Story Key Items
#define ITEM_SS_TICKET 			727 //Pocket = Key Items
#define ITEM_EON_TICKET 		728 //Pocket = Key Items
#define ITEM_MYSTIC_TICKET 		729 //Pocket = Key Items
#define ITEM_AURORA_TICKET 		730 //Pocket = Key Items
#define ITEM_OLD_SEA_MAP 		731 //Pocket = Key Items
#define ITEM_LETTER 			732 //Pocket = Key Items
#define ITEM_DEVON_PARTS 		733 //Pocket = Key Items
#define ITEM_GO_GOGGLES 		734 //Pocket = Key Items
#define ITEM_DEVON_SCOPE 		735 //Pocket = Key Items
#define ITEM_BASEMENT_KEY 		736 //Pocket = Key Items
#define ITEM_SCANNER 			737 //Pocket = Key Items
#define ITEM_STORAGE_KEY 		738 //Pocket = Key Items
#define ITEM_KEY_TO_ROOM_1 		739 //Pocket = Key Items
#define ITEM_KEY_TO_ROOM_2 		740 //Pocket = Key Items
#define ITEM_KEY_TO_ROOM_4 		741 //Pocket = Key Items
#define ITEM_KEY_TO_ROOM_6 		742 //Pocket = Key Items
#define ITEM_METEORITE 			743 //Pocket = Key Items
#define ITEM_MAGMA_EMBLEM 		744 //Pocket = Key Items
#define ITEM_CONTEST_PASS 		745 //Pocket = Key Items
#define ITEM_OAKS_PARCEL 		746 //unused
#define ITEM_SECRET_KEY 		747 //unused
#define ITEM_BIKE_VOUCHER 		748 //unused
#define ITEM_GOLD_TEETH 		749 //unused
#define ITEM_CARD_KEY 			750 //unused
#define ITEM_LIFT_KEY 			751 //unused
#define ITEM_SILPH_SCOPE 		752 //unused
#define ITEM_TRI_PASS 			753 //unused
#define ITEM_RAINBOW_PASS 		754 //unused
#define ITEM_TEA 				755 //unused
#define ITEM_RUBY 				756 //unused
#define ITEM_SAPPHIRE 			757 //unused

#define ITEMS_COUNT 758
#define ITEM_FIELD_ARROW ITEMS_COUNT

// Range of berries given out by various NPCS
#define FIRST_BERRY_MASTER_BERRY      ITEM_POMEG_BERRY
#define LAST_BERRY_MASTER_BERRY       ITEM_NOMEL_BERRY
#define FIRST_BERRY_MASTER_WIFE_BERRY ITEM_CHERI_BERRY
#define LAST_BERRY_MASTER_WIFE_BERRY  ITEM_SITRUS_BERRY
#define FIRST_KIRI_BERRY              ITEM_POMEG_BERRY
#define LAST_KIRI_BERRY               ITEM_NOMEL_BERRY
#define FIRST_ROUTE_114_MAN_BERRY     ITEM_RAZZ_BERRY
#define LAST_ROUTE_114_MAN_BERRY      ITEM_PINAP_BERRY

#define NUM_BERRY_MASTER_BERRIES          (LAST_BERRY_MASTER_BERRY - FIRST_BERRY_MASTER_BERRY + 1)
#define NUM_BERRY_MASTER_BERRIES_SKIPPED  (FIRST_BERRY_MASTER_BERRY - FIRST_BERRY_INDEX)
#define NUM_BERRY_MASTER_WIFE_BERRIES     (LAST_BERRY_MASTER_WIFE_BERRY - FIRST_BERRY_MASTER_WIFE_BERRY + 1)
#define NUM_KIRI_BERRIES                  (LAST_KIRI_BERRY - FIRST_KIRI_BERRY + 1)
#define NUM_KIRI_BERRIES_SKIPPED          (FIRST_KIRI_BERRY - FIRST_BERRY_INDEX)
#define NUM_ROUTE_114_MAN_BERRIES         (LAST_ROUTE_114_MAN_BERRY - FIRST_ROUTE_114_MAN_BERRY + 1)
#define NUM_ROUTE_114_MAN_BERRIES_SKIPPED (FIRST_ROUTE_114_MAN_BERRY - FIRST_BERRY_INDEX)

#define ITEM_TO_BERRY(itemId)(((itemId) - FIRST_BERRY_INDEX) + 1)
#define ITEM_TO_MAIL(itemId)((itemId) - FIRST_MAIL_INDEX)
#define MAIL_NONE 0xFF

#define NUM_TECHNICAL_MACHINES 100
#define NUM_HIDDEN_MACHINES 8

#define MAX_BAG_ITEM_CAPACITY  99
#define MAX_PC_ITEM_CAPACITY   999
#define MAX_BERRY_CAPACITY     999

#define BAG_ITEM_CAPACITY_DIGITS 2
#define BERRY_CAPACITY_DIGITS 3
#define MAX_ITEM_DIGITS BERRY_CAPACITY_DIGITS

// Secondary IDs for rods
#define OLD_ROD   0
#define GOOD_ROD  1
#define SUPER_ROD 2

// Secondary IDs for bikes
#define MACH_BIKE 0
#define ACRO_BIKE 1

// Item type IDs (used to determine the exit callback)
#define ITEM_USE_MAIL        0
#define ITEM_USE_PARTY_MENU  1
#define ITEM_USE_FIELD       2
#define ITEM_USE_PBLOCK_CASE 3
#define ITEM_USE_BAG_MENU    4 // No exit callback, stays in bag menu

// Item battle usage IDs (only checked to see if nonzero)
#define ITEM_B_USE_MEDICINE 1
#define ITEM_B_USE_OTHER    2

// Check if the item is one that can be used on a Pokemon.
#define ITEM_HAS_EFFECT(item) ((item) >= ITEM_POTION && (item) <= LAST_BERRY_INDEX)

#endif  // GUARD_CONSTANTS_ITEMS_H
