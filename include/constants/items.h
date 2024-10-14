#ifndef GUARD_CONSTANTS_ITEMS_H
#define GUARD_CONSTANTS_ITEMS_H

enum Items
{
    ITEM_NONE,
    ITEM_POKE_BALL,
    ITEM_GREAT_BALL,
    ITEM_ULTRA_BALL,
    ITEM_MASTER_BALL,
    ITEM_PREMIER_BALL,
    ITEM_HEAL_BALL,
    ITEM_NET_BALL,
    ITEM_NEST_BALL,
    ITEM_DIVE_BALL,
    ITEM_DUSK_BALL,
    ITEM_TIMER_BALL,
    ITEM_QUICK_BALL,
    ITEM_REPEAT_BALL,
    ITEM_LUXURY_BALL,
    ITEM_LEVEL_BALL,
    ITEM_LURE_BALL,
    ITEM_MOON_BALL,
    ITEM_FRIEND_BALL,
    ITEM_LOVE_BALL,
    ITEM_FAST_BALL,
    ITEM_HEAVY_BALL,
    ITEM_DREAM_BALL,
    ITEM_SAFARI_BALL,
    ITEM_SPORT_BALL,
    ITEM_PARK_BALL,
    ITEM_BEAST_BALL,
    ITEM_CHERISH_BALL,
    ITEM_POTION,
    ITEM_SUPER_POTION,
    ITEM_HYPER_POTION,
    ITEM_MAX_POTION,
    ITEM_FULL_RESTORE,
    ITEM_REVIVE,
    ITEM_MAX_REVIVE,
    ITEM_FRESH_WATER,
    ITEM_SODA_POP,
    ITEM_LEMONADE,
    ITEM_MOOMOO_MILK,
    ITEM_ENERGY_POWDER,
    ITEM_ENERGY_ROOT,
    ITEM_HEAL_POWDER,
    ITEM_REVIVAL_HERB,
    ITEM_ANTIDOTE,
    ITEM_PARALYZE_HEAL,
    ITEM_BURN_HEAL,
    ITEM_ICE_HEAL,
    ITEM_AWAKENING,
    ITEM_FULL_HEAL,
    ITEM_ETHER,
    ITEM_MAX_ETHER,
    ITEM_ELIXIR,
    ITEM_MAX_ELIXIR,
    ITEM_BERRY_JUICE,
    ITEM_SACRED_ASH,
    ITEM_SWEET_HEART,
    ITEM_MAX_HONEY,
    ITEM_PEWTER_CRUNCHIES,
    ITEM_RAGE_CANDY_BAR,
    ITEM_LAVA_COOKIE,
    ITEM_OLD_GATEAU,
    ITEM_CASTELIACONE,
    ITEM_LUMIOSE_GALETTE,
    ITEM_SHALOUR_SABLE,
    ITEM_BIG_MALASADA,
    ITEM_HP_UP,
    ITEM_PROTEIN,
    ITEM_IRON,
    ITEM_CALCIUM,
    ITEM_ZINC,
    ITEM_CARBOS,
    ITEM_PP_UP,
    ITEM_PP_MAX,
    ITEM_HEALTH_FEATHER,
    ITEM_MUSCLE_FEATHER,
    ITEM_RESIST_FEATHER,
    ITEM_GENIUS_FEATHER,
    ITEM_CLEVER_FEATHER,
    ITEM_SWIFT_FEATHER,
    ITEM_ABILITY_CAPSULE,
    ITEM_ABILITY_PATCH,
    ITEM_LONELY_MINT,
    ITEM_ADAMANT_MINT,
    ITEM_NAUGHTY_MINT,
    ITEM_BRAVE_MINT,
    ITEM_BOLD_MINT,
    ITEM_IMPISH_MINT,
    ITEM_LAX_MINT,
    ITEM_RELAXED_MINT,
    ITEM_MODEST_MINT,
    ITEM_MILD_MINT,
    ITEM_RASH_MINT,
    ITEM_QUIET_MINT,
    ITEM_CALM_MINT,
    ITEM_GENTLE_MINT,
    ITEM_CAREFUL_MINT,
    ITEM_SASSY_MINT,
    ITEM_TIMID_MINT,
    ITEM_HASTY_MINT,
    ITEM_JOLLY_MINT,
    ITEM_NAIVE_MINT,
    ITEM_SERIOUS_MINT,
    ITEM_RARE_CANDY,
    ITEM_EXP_CANDY_XS,
    ITEM_EXP_CANDY_S,
    ITEM_EXP_CANDY_M,
    ITEM_EXP_CANDY_L,
    ITEM_EXP_CANDY_XL,
    ITEM_DYNAMAX_CANDY,
    ITEM_BLUE_FLUTE,
    ITEM_YELLOW_FLUTE,
    ITEM_RED_FLUTE,
    ITEM_BLACK_FLUTE,
    ITEM_WHITE_FLUTE,
    ITEM_REPEL,
    ITEM_SUPER_REPEL,
    ITEM_MAX_REPEL,
    ITEM_LURE,
    ITEM_SUPER_LURE,
    ITEM_MAX_LURE,
    ITEM_ESCAPE_ROPE,
    ITEM_X_ATTACK,
    ITEM_X_DEFENSE,
    ITEM_X_SP_ATK,
    ITEM_X_SP_DEF,
    ITEM_X_SPEED,
    ITEM_X_ACCURACY,
    ITEM_DIRE_HIT,
    ITEM_GUARD_SPEC,
    ITEM_POKE_DOLL,
    ITEM_FLUFFY_TAIL,
    ITEM_POKE_TOY,
    ITEM_MAX_MUSHROOMS,
    ITEM_BOTTLE_CAP,
    ITEM_GOLD_BOTTLE_CAP,
    ITEM_NUGGET,
    ITEM_BIG_NUGGET,
    ITEM_TINY_MUSHROOM,
    ITEM_BIG_MUSHROOM, // equipado en Pokémon salvajes
    ITEM_BALM_MUSHROOM,
    ITEM_PEARL,
    ITEM_BIG_PEARL, //Obtenible equipado en Pokémon salvajes
    ITEM_PEARL_STRING,
    ITEM_STARDUST,
    ITEM_STAR_PIECE, //Obtenible equipado en Pokémon salvajes
    ITEM_COMET_SHARD,
    ITEM_SHOAL_SALT,
    ITEM_SHOAL_SHELL,
    ITEM_RED_SHARD,
    ITEM_BLUE_SHARD,
    ITEM_YELLOW_SHARD,
    ITEM_GREEN_SHARD,
    ITEM_HEART_SCALE,
    ITEM_HONEY,
    ITEM_RARE_BONE,
    ITEM_ODD_KEYSTONE,
    ITEM_PRETTY_FEATHER,
    ITEM_RELIC_COPPER,
    ITEM_RELIC_SILVER,
    ITEM_RELIC_GOLD,
    ITEM_RELIC_VASE,
    ITEM_RELIC_BAND,
    ITEM_RELIC_STATUE,
    ITEM_RELIC_CROWN,
    ITEM_STRANGE_SOUVENIR,
    ITEM_HELIX_FOSSIL,
    ITEM_DOME_FOSSIL,
    ITEM_OLD_AMBER,
    ITEM_ROOT_FOSSIL,
    ITEM_CLAW_FOSSIL,
    ITEM_ARMOR_FOSSIL,
    ITEM_SKULL_FOSSIL,
    ITEM_COVER_FOSSIL,
    ITEM_PLUME_FOSSIL,
    ITEM_JAW_FOSSIL,
    ITEM_SAIL_FOSSIL,
    ITEM_FOSSILIZED_BIRD,
    ITEM_FOSSILIZED_FISH,
    ITEM_FOSSILIZED_DRAKE,
    ITEM_FOSSILIZED_DINO,
    ITEM_GROWTH_MULCH,
    ITEM_DAMP_MULCH,
    ITEM_STABLE_MULCH,
    ITEM_GOOEY_MULCH,
    ITEM_RICH_MULCH,
    ITEM_SURPRISE_MULCH,
    ITEM_BOOST_MULCH,
    ITEM_AMAZE_MULCH,
    ITEM_RED_APRICORN,
    ITEM_BLUE_APRICORN,
    ITEM_YELLOW_APRICORN,
    ITEM_GREEN_APRICORN,
    ITEM_PINK_APRICORN,
    ITEM_WHITE_APRICORN,
    ITEM_BLACK_APRICORN,
    ITEM_WISHING_PIECE,
    ITEM_GALARICA_TWIG,
    ITEM_ARMORITE_ORE,
    ITEM_DYNITE_ORE,
    ITEM_ORANGE_MAIL,
    ITEM_HARBOR_MAIL,
    ITEM_GLITTER_MAIL,
    ITEM_MECH_MAIL,
    ITEM_WOOD_MAIL,
    ITEM_WAVE_MAIL,
    ITEM_BEAD_MAIL,
    ITEM_SHADOW_MAIL,
    ITEM_TROPIC_MAIL,
    ITEM_DREAM_MAIL,
    ITEM_FAB_MAIL,
    ITEM_RETRO_MAIL,
    ITEM_FIRE_STONE,
    ITEM_WATER_STONE,
    ITEM_THUNDER_STONE,
    ITEM_LEAF_STONE,
    ITEM_ICE_STONE,
    ITEM_SUN_STONE,
    ITEM_MOON_STONE,
    ITEM_SHINY_STONE,
    ITEM_DUSK_STONE,
    ITEM_DAWN_STONE,
    ITEM_SWEET_APPLE,
    ITEM_TART_APPLE,
    ITEM_CRACKED_POT,
    ITEM_CHIPPED_POT,
    ITEM_GALARICA_CUFF,
    ITEM_GALARICA_WREATH,
    ITEM_DRAGON_SCALE,
    ITEM_UPGRADE,
    ITEM_PROTECTOR, //Obtenible equipado en Rhydon
    ITEM_ELECTIRIZER, //Obtenible equipado en Electabuzz
    ITEM_MAGMARIZER, //Obtenible equipado en Magmar
    ITEM_DUBIOUS_DISC, //Obtenible equipado en Porygon
    ITEM_REAPER_CLOTH,
    ITEM_PRISM_SCALE,
    ITEM_WHIPPED_DREAM,
    ITEM_SACHET,
    ITEM_OVAL_STONE,
    ITEM_STRAWBERRY_SWEET,
    ITEM_LOVE_SWEET,
    ITEM_BERRY_SWEET,
    ITEM_CLOVER_SWEET,
    ITEM_FLOWER_SWEET,
    ITEM_STAR_SWEET,
    ITEM_RIBBON_SWEET,
    ITEM_EVERSTONE,
    ITEM_RED_NECTAR,
    ITEM_YELLOW_NECTAR,
    ITEM_PINK_NECTAR,
    ITEM_PURPLE_NECTAR,
    ITEM_FLAME_PLATE,
    ITEM_SPLASH_PLATE,
    ITEM_ZAP_PLATE,
    ITEM_MEADOW_PLATE,
    ITEM_ICICLE_PLATE,
    ITEM_FIST_PLATE,
    ITEM_TOXIC_PLATE,
    ITEM_EARTH_PLATE,
    ITEM_SKY_PLATE,
    ITEM_MIND_PLATE,
    ITEM_INSECT_PLATE,
    ITEM_STONE_PLATE,
    ITEM_SPOOKY_PLATE,
    ITEM_DRACO_PLATE,
    ITEM_DREAD_PLATE,
    ITEM_IRON_PLATE,
    ITEM_PIXIE_PLATE,
    ITEM_DOUSE_DRIVE,
    ITEM_SHOCK_DRIVE,
    ITEM_BURN_DRIVE,
    ITEM_CHILL_DRIVE,
    ITEM_FIRE_MEMORY,
    ITEM_WATER_MEMORY,
    ITEM_ELECTRIC_MEMORY,
    ITEM_GRASS_MEMORY,
    ITEM_ICE_MEMORY,
    ITEM_FIGHTING_MEMORY,
    ITEM_POISON_MEMORY,
    ITEM_GROUND_MEMORY,
    ITEM_FLYING_MEMORY,
    ITEM_PSYCHIC_MEMORY,
    ITEM_BUG_MEMORY,
    ITEM_ROCK_MEMORY,
    ITEM_GHOST_MEMORY,
    ITEM_DRAGON_MEMORY,
    ITEM_DARK_MEMORY,
    ITEM_STEEL_MEMORY,
    ITEM_FAIRY_MEMORY,
    ITEM_RUSTED_SWORD,
    ITEM_RUSTED_SHIELD,
    ITEM_RED_ORB,
    ITEM_BLUE_ORB,
    ITEM_VENUSAURITE,
    ITEM_CHARIZARDITE_X,
    ITEM_CHARIZARDITE_Y,
    ITEM_BLASTOISINITE,
    ITEM_BEEDRILLITE,
    ITEM_PIDGEOTITE,
    ITEM_ALAKAZITE,
    ITEM_SLOWBRONITE,
    ITEM_GENGARITE,
    ITEM_KANGASKHANITE,
    ITEM_PINSIRITE,
    ITEM_GYARADOSITE,
    ITEM_AERODACTYLITE,
    ITEM_MEWTWONITE_X,
    ITEM_MEWTWONITE_Y,
    ITEM_AMPHAROSITE,
    ITEM_STEELIXITE,
    ITEM_SCIZORITE,
    ITEM_HERACRONITE,
    ITEM_HOUNDOOMINITE,
    ITEM_TYRANITARITE,
    ITEM_SCEPTILITE,
    ITEM_BLAZIKENITE,
    ITEM_SWAMPERTITE,
    ITEM_GARDEVOIRITE,
    ITEM_SABLENITE,
    ITEM_MAWILITE,
    ITEM_AGGRONITE,
    ITEM_MEDICHAMITE,
    ITEM_MANECTITE,
    ITEM_SHARPEDONITE,
    ITEM_CAMERUPTITE,
    ITEM_ALTARIANITE,
    ITEM_BANETTITE,
    ITEM_ABSOLITE,
    ITEM_GLALITITE,
    ITEM_SALAMENCITE,
    ITEM_METAGROSSITE,
    ITEM_LATIASITE,
    ITEM_LATIOSITE,
    ITEM_LOPUNNITE,
    ITEM_GARCHOMPITE,
    ITEM_LUCARIONITE,
    ITEM_ABOMASITE,
    ITEM_GALLADITE,
    ITEM_AUDINITE,
    ITEM_DIANCITE,
    ITEM_NORMAL_GEM,
    ITEM_FIRE_GEM,
    ITEM_WATER_GEM,
    ITEM_ELECTRIC_GEM,
    ITEM_GRASS_GEM,
    ITEM_ICE_GEM,
    ITEM_FIGHTING_GEM,
    ITEM_POISON_GEM,
    ITEM_GROUND_GEM,
    ITEM_FLYING_GEM,
    ITEM_PSYCHIC_GEM,
    ITEM_BUG_GEM,
    ITEM_ROCK_GEM,
    ITEM_GHOST_GEM,
    ITEM_DRAGON_GEM,
    ITEM_DARK_GEM,
    ITEM_STEEL_GEM,
    ITEM_FAIRY_GEM,
    ITEM_NORMALIUM_Z,
    ITEM_FIRIUM_Z,
    ITEM_WATERIUM_Z,
    ITEM_ELECTRIUM_Z,
    ITEM_GRASSIUM_Z,
    ITEM_ICIUM_Z,
    ITEM_FIGHTINIUM_Z,
    ITEM_POISONIUM_Z,
    ITEM_GROUNDIUM_Z,
    ITEM_FLYINIUM_Z,
    ITEM_PSYCHIUM_Z,
    ITEM_BUGINIUM_Z,
    ITEM_ROCKIUM_Z,
    ITEM_GHOSTIUM_Z,
    ITEM_DRAGONIUM_Z,
    ITEM_DARKINIUM_Z,
    ITEM_STEELIUM_Z,
    ITEM_FAIRIUM_Z,
    ITEM_PIKANIUM_Z,
    ITEM_EEVIUM_Z,
    ITEM_SNORLIUM_Z,
    ITEM_MEWNIUM_Z,
    ITEM_DECIDIUM_Z,
    ITEM_INCINIUM_Z,
    ITEM_PRIMARIUM_Z,
    ITEM_LYCANIUM_Z,
    ITEM_MIMIKIUM_Z,
    ITEM_KOMMONIUM_Z,
    ITEM_TAPUNIUM_Z,
    ITEM_SOLGANIUM_Z,
    ITEM_LUNALIUM_Z,
    ITEM_MARSHADIUM_Z,
    ITEM_ALORAICHIUM_Z,
    ITEM_PIKASHUNIUM_Z,
    ITEM_ULTRANECROZIUM_Z,
    ITEM_LIGHT_BALL,
    ITEM_LEEK,
    ITEM_THICK_CLUB,
    ITEM_LUCKY_PUNCH,
    ITEM_METAL_POWDER,
    ITEM_QUICK_POWDER,
    ITEM_DEEP_SEA_SCALE,
    ITEM_DEEP_SEA_TOOTH,
    ITEM_SOUL_DEW,
    ITEM_ADAMANT_ORB,
    ITEM_LUSTROUS_ORB,
    ITEM_GRISEOUS_ORB,
    ITEM_SEA_INCENSE,
    ITEM_LAX_INCENSE,
    ITEM_ODD_INCENSE,
    ITEM_ROCK_INCENSE,
    ITEM_FULL_INCENSE,
    ITEM_WAVE_INCENSE,
    ITEM_ROSE_INCENSE,
    ITEM_LUCK_INCENSE,
    ITEM_PURE_INCENSE,
    ITEM_RED_SCARF,
    ITEM_BLUE_SCARF,
    ITEM_PINK_SCARF,
    ITEM_GREEN_SCARF,
    ITEM_YELLOW_SCARF,
    ITEM_MACHO_BRACE,
    ITEM_POWER_WEIGHT,
    ITEM_POWER_BRACER,
    ITEM_POWER_BELT,
    ITEM_POWER_LENS,
    ITEM_POWER_BAND,
    ITEM_POWER_ANKLET,
    ITEM_SILK_SCARF,
    ITEM_CHARCOAL,
    ITEM_MYSTIC_WATER,
    ITEM_MAGNET,
    ITEM_MIRACLE_SEED,
    ITEM_NEVER_MELT_ICE,
    ITEM_BLACK_BELT,
    ITEM_POISON_BARB,
    ITEM_SOFT_SAND,
    ITEM_SHARP_BEAK,
    ITEM_TWISTED_SPOON, //Obtenible equipado en Abra
    ITEM_SILVER_POWDER,
    ITEM_HARD_STONE,
    ITEM_SPELL_TAG,
    ITEM_DRAGON_FANG, //En Pokémon salvajes
    ITEM_BLACK_GLASSES,
    ITEM_METAL_COAT,
    ITEM_CHOICE_BAND,
    ITEM_CHOICE_SPECS,
    ITEM_CHOICE_SCARF,
    ITEM_FLAME_ORB,
    ITEM_TOXIC_ORB,
    ITEM_DAMP_ROCK,
    ITEM_HEAT_ROCK,
    ITEM_SMOOTH_ROCK,
    ITEM_ICY_ROCK,
    ITEM_ELECTRIC_SEED,
    ITEM_PSYCHIC_SEED,
    ITEM_MISTY_SEED,
    ITEM_GRASSY_SEED,
    ITEM_ABSORB_BULB, //Obtenible equipado en Pokémon salvajes
    ITEM_CELL_BATTERY, //Obtenible equipado en Pokémon salvajes
    ITEM_LUMINOUS_MOSS, //Obtenible equipado en Pokémon salvajes
    ITEM_SNOWBALL, //Obtenible equipado en Pokémon salvajes
    ITEM_BRIGHT_POWDER,
    ITEM_WHITE_HERB,
    ITEM_EXP_SHARE,
    ITEM_QUICK_CLAW,
    ITEM_SOOTHE_BELL,
    ITEM_MENTAL_HERB,
    ITEM_KINGS_ROCK,
    ITEM_AMULET_COIN,
    ITEM_CLEANSE_TAG,
    ITEM_SMOKE_BALL,
    ITEM_FOCUS_BAND,
    ITEM_LUCKY_EGG,
    ITEM_SCOPE_LENS,
    ITEM_LEFTOVERS, //Obtenible equipado en Snorlax
    ITEM_SHELL_BELL,
    ITEM_WIDE_LENS,
    ITEM_MUSCLE_BAND,
    ITEM_WISE_GLASSES,
    ITEM_EXPERT_BELT,
    ITEM_LIGHT_CLAY,
    ITEM_LIFE_ORB,
    ITEM_POWER_HERB,
    ITEM_FOCUS_SASH,
    ITEM_ZOOM_LENS,
    ITEM_METRONOME,
    ITEM_IRON_BALL,
    ITEM_LAGGING_TAIL,
    ITEM_DESTINY_KNOT,
    ITEM_BLACK_SLUDGE, //Obtenible equipado en Muk
    ITEM_GRIP_CLAW, //Obtenible en Pokémon salvajes
    ITEM_STICKY_BARB,
    ITEM_SHED_SHELL,
    ITEM_BIG_ROOT,
    ITEM_RAZOR_CLAW,
    ITEM_RAZOR_FANG,
    ITEM_EVIOLITE,
    ITEM_FLOAT_STONE,
    ITEM_ROCKY_HELMET,
    ITEM_AIR_BALLOON,
    ITEM_RED_CARD,
    ITEM_RING_TARGET,
    ITEM_BINDING_BAND,
    ITEM_EJECT_BUTTON,
    ITEM_WEAKNESS_POLICY,
    ITEM_ASSAULT_VEST,
    ITEM_SAFETY_GOGGLES,
    ITEM_ADRENALINE_ORB,
    ITEM_TERRAIN_EXTENDER,
    ITEM_PROTECTIVE_PADS,
    ITEM_THROAT_SPRAY,
    ITEM_EJECT_PACK,
    ITEM_HEAVY_DUTY_BOOTS,
    ITEM_BLUNDER_POLICY,
    ITEM_ROOM_SERVICE,
    ITEM_UTILITY_UMBRELLA,
    ITEM_CHERI_BERRY,
    ITEM_CHESTO_BERRY,
    ITEM_PECHA_BERRY,
    ITEM_RAWST_BERRY,
    ITEM_ASPEAR_BERRY,
    ITEM_LEPPA_BERRY,
    ITEM_ORAN_BERRY,
    ITEM_PERSIM_BERRY,
    ITEM_LUM_BERRY,
    ITEM_SITRUS_BERRY,
    ITEM_FIGY_BERRY,
    ITEM_WIKI_BERRY,
    ITEM_MAGO_BERRY,
    ITEM_AGUAV_BERRY,
    ITEM_IAPAPA_BERRY,
    ITEM_RAZZ_BERRY,
    ITEM_BLUK_BERRY,
    ITEM_NANAB_BERRY,
    ITEM_WEPEAR_BERRY,
    ITEM_PINAP_BERRY,
    ITEM_POMEG_BERRY,
    ITEM_KELPSY_BERRY,
    ITEM_QUALOT_BERRY,
    ITEM_HONDEW_BERRY,
    ITEM_GREPA_BERRY,
    ITEM_TAMATO_BERRY,
    ITEM_CORNN_BERRY,
    ITEM_MAGOST_BERRY,
    ITEM_RABUTA_BERRY,
    ITEM_NOMEL_BERRY,
    ITEM_SPELON_BERRY,
    ITEM_PAMTRE_BERRY,
    ITEM_WATMEL_BERRY,
    ITEM_DURIN_BERRY,
    ITEM_BELUE_BERRY,
    ITEM_CHILAN_BERRY,
    ITEM_OCCA_BERRY,
    ITEM_PASSHO_BERRY,
    ITEM_WACAN_BERRY,
    ITEM_RINDO_BERRY,
    ITEM_YACHE_BERRY,
    ITEM_CHOPLE_BERRY,
    ITEM_KEBIA_BERRY,
    ITEM_SHUCA_BERRY,
    ITEM_COBA_BERRY,
    ITEM_PAYAPA_BERRY,
    ITEM_TANGA_BERRY,
    ITEM_CHARTI_BERRY,
    ITEM_KASIB_BERRY,
    ITEM_HABAN_BERRY,
    ITEM_COLBUR_BERRY,
    ITEM_BABIRI_BERRY,
    ITEM_ROSELI_BERRY,
    ITEM_LIECHI_BERRY,
    ITEM_GANLON_BERRY,
    ITEM_SALAC_BERRY,
    ITEM_PETAYA_BERRY,
    ITEM_APICOT_BERRY,
    ITEM_LANSAT_BERRY,
    ITEM_STARF_BERRY,
    ITEM_ENIGMA_BERRY,
    ITEM_MICLE_BERRY,
    ITEM_CUSTAP_BERRY,
    ITEM_JABOCA_BERRY,
    ITEM_ROWAP_BERRY,
    ITEM_KEE_BERRY,
    ITEM_MARANGA_BERRY,
    ITEM_TM01,
    ITEM_TM02,
    ITEM_TM03,
    ITEM_TM04,
    ITEM_TM05,
    ITEM_TM06,
    ITEM_TM07,
    ITEM_TM08,
    ITEM_TM09,
    ITEM_TM10,
    ITEM_TM11,
    ITEM_TM12,
    ITEM_TM13,
    ITEM_TM14,
    ITEM_TM15,
    ITEM_TM16,
    ITEM_TM17,
    ITEM_TM18,
    ITEM_TM19,
    ITEM_TM20,
    ITEM_TM21,
    ITEM_TM22,
    ITEM_TM23,
    ITEM_TM24,
    ITEM_TM25,
    ITEM_TM26,
    ITEM_TM27,
    ITEM_TM28,
    ITEM_TM29,
    ITEM_TM30,
    ITEM_TM31,
    ITEM_TM32,
    ITEM_TM33,
    ITEM_TM34,
    ITEM_TM35,
    ITEM_TM36,
    ITEM_TM37,
    ITEM_TM38,
    ITEM_TM39,
    ITEM_TM40,
    ITEM_TM41,
    ITEM_TM42,
    ITEM_TM43,
    ITEM_TM44,
    ITEM_TM45,
    ITEM_TM46,
    ITEM_TM47,
    ITEM_TM48,
    ITEM_TM49,
    ITEM_TM50,
    ITEM_TM51,
    ITEM_TM52,
    ITEM_TM53,
    ITEM_TM54,
    ITEM_TM55,
    ITEM_TM56,
    ITEM_TM57,
    ITEM_TM58,
    ITEM_TM59,
    ITEM_TM60,
    ITEM_TM61,
    ITEM_TM62,
    ITEM_TM63,
    ITEM_TM64,
    ITEM_TM65,
    ITEM_TM66,
    ITEM_TM67,
    ITEM_TM68,
    ITEM_TM69,
    ITEM_TM70,
    ITEM_TM71,
    ITEM_TM72,
    ITEM_TM73,
    ITEM_TM74,
    ITEM_TM75,
    ITEM_TM76,
    ITEM_TM77,
    ITEM_TM78,
    ITEM_TM79,
    ITEM_TM80,
    ITEM_TM81,
    ITEM_TM82,
    ITEM_TM83,
    ITEM_TM84,
    ITEM_TM85,
    ITEM_TM86,
    ITEM_TM87,
    ITEM_TM88,
    ITEM_TM89,
    ITEM_TM90,
    ITEM_TM91,
    ITEM_TM92,
    ITEM_TM93,
    ITEM_TM94,
    ITEM_TM95,
    ITEM_TM96,
    ITEM_TM97,
    ITEM_TM98,
    ITEM_TM99,
    ITEM_TM100,
    ITEM_HM01,
    ITEM_HM02,
    ITEM_HM03,
    ITEM_HM04,
    ITEM_HM05,
    ITEM_HM06,
    ITEM_HM07,
    ITEM_HM08,
    ITEM_OVAL_CHARM,
    ITEM_SHINY_CHARM,
    ITEM_CATCHING_CHARM,
    ITEM_EXP_CHARM,
    ITEM_ROTOM_CATALOG,
    ITEM_GRACIDEA,
    ITEM_REVEAL_GLASS,
    ITEM_DNA_SPLICERS,
    ITEM_ZYGARDE_CUBE,
    ITEM_PRISON_BOTTLE,
    ITEM_N_SOLARIZER,
    ITEM_N_LUNARIZER,
    ITEM_REINS_OF_UNITY,
    ITEM_MEGA_RING,
    ITEM_Z_POWER_RING,
    ITEM_DYNAMAX_BAND,
    ITEM_BICYCLE,
    ITEM_MACH_BIKE,
    ITEM_ACRO_BIKE,
    ITEM_OLD_ROD,
    ITEM_GOOD_ROD,
    ITEM_SUPER_ROD,
    ITEM_DOWSING_MACHINE,
    ITEM_TOWN_MAP,
    ITEM_VS_SEEKER,
    ITEM_TM_CASE,
    ITEM_BERRY_POUCH,
    ITEM_POKEMON_BOX_LINK,
    ITEM_COIN_CASE,
    ITEM_POWDER_JAR,
    ITEM_WAILMER_PAIL,
    ITEM_POKE_RADAR,
    ITEM_POKEBLOCK_CASE,
    ITEM_SOOT_SACK,
    ITEM_POKE_FLUTE,
    ITEM_FAME_CHECKER,
    ITEM_TEACHY_TV,
    ITEM_SS_TICKET,
    ITEM_EON_TICKET,
    ITEM_MYSTIC_TICKET,
    ITEM_AURORA_TICKET,
    ITEM_OLD_SEA_MAP,
    ITEM_LETTER,
    ITEM_DEVON_PARTS,
    ITEM_GO_GOGGLES,
    ITEM_DEVON_SCOPE,
    ITEM_BASEMENT_KEY,
    ITEM_SCANNER,
    ITEM_STORAGE_KEY,
    ITEM_KEY_TO_ROOM_1,
    ITEM_KEY_TO_ROOM_2,
    ITEM_KEY_TO_ROOM_4,
    ITEM_KEY_TO_ROOM_6,
    ITEM_METEORITE,
    ITEM_MAGMA_EMBLEM,
    ITEM_CONTEST_PASS,
    ITEM_PARCEL,
    ITEM_SECRET_KEY,
    ITEM_BIKE_VOUCHER,
    ITEM_GOLD_TEETH,
    ITEM_CARD_KEY,
    ITEM_LIFT_KEY,
    ITEM_SILPH_SCOPE,
    ITEM_TRI_PASS,
    ITEM_RAINBOW_PASS,
    ITEM_TEA,
    ITEM_RUBY,
    ITEM_SAPPHIRE,
    ITEM_ABILITY_SHIELD,
    ITEM_CLEAR_AMULET,
    ITEM_PUNCHING_GLOVE,
    ITEM_COVERT_CLOAK,
    ITEM_LOADED_DICE,
    ITEM_AUSPICIOUS_ARMOR,
    ITEM_BOOSTER_ENERGY,
    ITEM_BIG_BAMBOO_SHOOT,
    ITEM_GIMMIGHOUL_COIN,
    ITEM_LEADERS_CREST,
    ITEM_MALICIOUS_ARMOR,
    ITEM_MIRROR_HERB,
    ITEM_SCROLL_OF_DARKNESS,
    ITEM_SCROLL_OF_WATERS,
    ITEM_TERA_ORB,
    ITEM_TINY_BAMBOO_SHOOT,
    ITEM_BUG_TERA_SHARD,
    ITEM_DARK_TERA_SHARD,
    ITEM_DRAGON_TERA_SHARD,
    ITEM_ELECTRIC_TERA_SHARD,
    ITEM_FAIRY_TERA_SHARD,
    ITEM_FIGHTING_TERA_SHARD,
    ITEM_FIRE_TERA_SHARD,
    ITEM_FLYING_TERA_SHARD,
    ITEM_GHOST_TERA_SHARD,
    ITEM_GRASS_TERA_SHARD,
    ITEM_GROUND_TERA_SHARD,
    ITEM_ICE_TERA_SHARD,
    ITEM_NORMAL_TERA_SHARD,
    ITEM_POISON_TERA_SHARD,
    ITEM_PSYCHIC_TERA_SHARD,
    ITEM_ROCK_TERA_SHARD,
    ITEM_STEEL_TERA_SHARD,
    ITEM_WATER_TERA_SHARD,
    ITEM_ADAMANT_CRYSTAL,
    ITEM_GRISEOUS_CORE,
    ITEM_LUSTROUS_GLOBE,
    ITEM_BLACK_AUGURITE,
    ITEM_LINKING_CORD,
    ITEM_PEAT_BLOCK,
    ITEM_BERSERK_GENE,
    ITEM_FAIRY_FEATHER,
    ITEM_SYRUPY_APPLE,
    ITEM_UNREMARKABLE_TEACUP,
    ITEM_MASTERPIECE_TEACUP,
    ITEM_CORNERSTONE_MASK,
    ITEM_WELLSPRING_MASK,
    ITEM_HEARTHFLAME_MASK,
    ITEM_HEALTH_MOCHI,
    ITEM_MUSCLE_MOCHI,
    ITEM_RESIST_MOCHI,
    ITEM_GENIUS_MOCHI,
    ITEM_CLEVER_MOCHI,
    ITEM_SWIFT_MOCHI,
    ITEM_FRESH_START_MOCHI,
    ITEM_GLIMMERING_CHARM,
    ITEM_METAL_ALLOY,
    ITEM_STELLAR_TERA_SHARD,
    ITEM_JUBILIFE_MUFFIN,
    ITEM_REMEDY,
    ITEM_FINE_REMEDY,
    ITEM_SUPERB_REMEDY,
    ITEM_AUX_EVASION,
    ITEM_AUX_GUARD,
    ITEM_AUX_POWER,
    ITEM_AUX_POWERGUARD,
    ITEM_CHOICE_DUMPLING,
    ITEM_SWAP_SNACK,
    ITEM_TWICE_SPICED_RADISH,
    ITEM_POKESHI_DOLL,
    ITEM_CHALECO_TACTICO,

    ITEMS_COUNT,
};

    #define FIRST_MAIL_INDEX    ITEM_ORANGE_MAIL
    #define FIRST_BALL          ITEM_POKE_BALL
    #define LAST_BALL           ITEM_CHERISH_BALL
    #define FIRST_BERRY_INDEX   ITEM_CHERI_BERRY
    #define LAST_BERRY_INDEX    ITEM_MARANGA_BERRY
    #define ITEM_FIELD_ARROW    ITEMS_COUNT

// A special item id associated with "Cancel"/"Exit" etc. in a list of items or decorations
// Its icon is defined at ITEMS_COUNT as the "return to field" arrow
#define ITEM_LIST_END 0xFFFF

#define CONFUSE_BERRY_HEAL_FRACTION 2 //50% PS
#define DIVISOR_PS_ACTIVACION_BAYAS 4 //25% PS

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

#define ITEM_TO_BERRY(itemId) (((itemId) - FIRST_BERRY_INDEX) + 1)
#define ITEM_TO_MAIL(itemId) ((itemId) - FIRST_MAIL_INDEX)
#define MAIL_NONE 255
#define ITEM_TO_MULCH(itemId)(((itemId) - ITEM_GROWTH_MULCH) + 1)

#define NUM_TECHNICAL_MACHINES 100
#define NUM_HIDDEN_MACHINES 8

#define MAX_BAG_ITEM_CAPACITY         999
#define MAX_PYRAMID_BAG_ITEM_CAPACITY  99 // Values higher than 255 require free SaveBlock2 space.

#define MAX_ITEM_DIGITS         ((MAX_BAG_ITEM_CAPACITY > 99) ? 3 : 2)
#define MAX_PYRAMID_ITEM_DIGITS ((MAX_PYRAMID_BAG_ITEM_CAPACITY > 99) ? 3 : 2)

enum Rods
{
    OLD_ROD,
    GOOD_ROD,
    SUPER_ROD,
};

enum Bikes
{
    MACH_BIKE,
    ACRO_BIKE,
};

enum ExpCandies
{
    EXP_100 = 1,
    EXP_800,
    EXP_3000,
    EXP_10000,
    EXP_30000,
};

enum ItemUse
{
    ITEM_USE_MAIL,
    ITEM_USE_PARTY_MENU,
    ITEM_USE_FIELD,
    ITEM_USE_PBLOCK_CASE,
    ITEM_USE_BAG_MENU,
    ITEM_USE_PARTY_MENU_MOVES,
};

enum EffectsItems
{
    EFFECT_ITEM_RESTORE_HP = 1,
    EFFECT_ITEM_CURE_STATUS,
    EFFECT_ITEM_HEAL_AND_CURE_STATUS,
    EFFECT_ITEM_INCREASE_STAT,
    EFFECT_ITEM_SET_MIST,
    EFFECT_ITEM_SET_FOCUS_ENERGY,
    EFFECT_ITEM_ESCAPE,
    EFFECT_ITEM_THROW_BALL,
    EFFECT_ITEM_REVIVE,
    EFFECT_ITEM_RESTORE_PP,
    EFFECT_ITEM_INCREASE_ALL_STATS,
    EFFECT_ITEM_USE_POKE_FLUTE,
};

#endif  // GUARD_CONSTANTS_ITEMS_H
