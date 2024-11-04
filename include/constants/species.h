#ifndef GUARD_CONSTANTS_SPECIES_H
#define GUARD_CONSTANTS_SPECIES_H

enum Species
{
    SPECIES_NONE,
    SPECIES_BULBASAUR,
    SPECIES_IVYSAUR,
    SPECIES_VENUSAUR,
    SPECIES_CHARMANDER,
    SPECIES_CHARMELEON,
    SPECIES_CHARIZARD,
    SPECIES_SQUIRTLE,
    SPECIES_WARTORTLE,
    SPECIES_BLASTOISE,
    SPECIES_CATERPIE,
    SPECIES_METAPOD,
    SPECIES_BUTTERFREE,
    SPECIES_WEEDLE,
    SPECIES_KAKUNA,
    SPECIES_BEEDRILL,
    SPECIES_PIDGEY,
    SPECIES_PIDGEOTTO,
    SPECIES_PIDGEOT,
    SPECIES_RATTATA,
    SPECIES_RATICATE,
    SPECIES_SPEAROW,
    SPECIES_FEAROW,
    SPECIES_EKANS,
    SPECIES_ARBOK,
    SPECIES_PICHU,
    SPECIES_PIKACHU,
    SPECIES_RAICHU,
    SPECIES_RAICHU_ALOLA,
    SPECIES_SANDSHREW,
    SPECIES_SANDSLASH,
    SPECIES_SANDSHREW_ALOLA,
    SPECIES_SANDSLASH_ALOLA,
    SPECIES_NIDORAN_F,
    SPECIES_NIDORINA,
    SPECIES_NIDOQUEEN,
    SPECIES_NIDORAN_M,
    SPECIES_NIDORINO,
    SPECIES_NIDOKING,
    SPECIES_CLEFFA,
    SPECIES_CLEFAIRY,
    SPECIES_CLEFABLE,
    SPECIES_VULPIX,
    SPECIES_NINETALES,
    SPECIES_VULPIX_ALOLA,
    SPECIES_NINETALES_ALOLA,
    SPECIES_IGGLYBUFF,
    SPECIES_JIGGLYPUFF,
    SPECIES_WIGGLYTUFF,
    SPECIES_ZUBAT,
    SPECIES_GOLBAT,
    SPECIES_CROBAT,
    SPECIES_ODDISH,
    SPECIES_GLOOM,
    SPECIES_VILEPLUME,
    SPECIES_BELLOSSOM,
    SPECIES_PARAS,
    SPECIES_PARASECT,
    SPECIES_MEOWTH,
    SPECIES_PERSIAN,
    SPECIES_MEOWTH_ALOLA,
    SPECIES_PERSIAN_ALOLA,
    SPECIES_PSYDUCK,
    SPECIES_GOLDUCK,
    SPECIES_MANKEY,
    SPECIES_PRIMEAPE,
    SPECIES_ANNIHILAPE,
    SPECIES_GROWLITHE,
    SPECIES_ARCANINE,
    SPECIES_POLIWAG,
    SPECIES_POLIWHIRL,
    SPECIES_POLIWRATH,
    SPECIES_POLITOED,
    SPECIES_ABRA,
    SPECIES_KADABRA,
    SPECIES_ALAKAZAM,
    SPECIES_MACHOP,
    SPECIES_MACHOKE,
    SPECIES_MACHAMP,
    SPECIES_BELLSPROUT,
    SPECIES_WEEPINBELL,
    SPECIES_VICTREEBEL,
    SPECIES_TENTACOOL,
    SPECIES_TENTACRUEL,
    SPECIES_GEODUDE,
    SPECIES_GRAVELER,
    SPECIES_GOLEM,
    SPECIES_PONYTA,
    SPECIES_RAPIDASH,
    SPECIES_SLOWPOKE,
    SPECIES_SLOWBRO,
    SPECIES_SLOWKING,
    SPECIES_MAGNEMITE,
    SPECIES_MAGNETON,
    SPECIES_MAGNEZONE,
    SPECIES_GRIMER,
    SPECIES_MUK,
    SPECIES_SHELLDER,
    SPECIES_CLOYSTER,
    SPECIES_GASTLY,
    SPECIES_HAUNTER,
    SPECIES_GENGAR,
    SPECIES_ONIX,
    SPECIES_STEELIX,
    SPECIES_DROWZEE,
    SPECIES_HYPNO,
    SPECIES_KRABBY,
    SPECIES_KINGLER,
    SPECIES_EXEGGCUTE,
    SPECIES_EXEGGUTOR,
    SPECIES_CUBONE,
    SPECIES_MAROWAK,
    SPECIES_MAROWAK_ALOLA,
    SPECIES_TYROGUE,
    SPECIES_HITMONTOP,
    SPECIES_HITMONLEE,
    SPECIES_HITMONCHAN,
    SPECIES_LICKITUNG,
    SPECIES_LICKILICKY,
    SPECIES_KOFFING,
    SPECIES_WEEZING,
    SPECIES_WEEZING_GALAR,
    SPECIES_RHYHORN,
    SPECIES_RHYDON,
    SPECIES_RHYPERIOR,
    SPECIES_TANGELA,
    SPECIES_TANGROWTH,
    SPECIES_KANGASKHAN,
    SPECIES_HORSEA,
    SPECIES_SEADRA,
    SPECIES_KINGDRA,
    SPECIES_GOLDEEN,
    SPECIES_SEAKING,
    SPECIES_STARYU,
    SPECIES_STARMIE,
    SPECIES_MIME_JR,
    SPECIES_MR_MIME,
    SPECIES_SCYTHER,
    SPECIES_SCIZOR,
    SPECIES_KLEAVOR,
    SPECIES_SMOOCHUM,
    SPECIES_JYNX,
    SPECIES_ELEKID,
    SPECIES_ELECTABUZZ,
    SPECIES_ELECTIVIRE,
    SPECIES_MAGBY,
    SPECIES_MAGMAR,
    SPECIES_MAGMORTAR,
    SPECIES_PINSIR,
    SPECIES_TAUROS,
    SPECIES_MAGIKARP,
    SPECIES_GYARADOS,
    SPECIES_LAPRAS,
    SPECIES_EEVEE,
    SPECIES_VAPOREON,
    SPECIES_JOLTEON,
    SPECIES_FLAREON,
    SPECIES_ESPEON,
    SPECIES_UMBREON,
    SPECIES_LEAFEON,
    SPECIES_GLACEON,
    SPECIES_SYLVEON,
    SPECIES_PORYGON,
    SPECIES_PORYGON2,
    SPECIES_PORYGON_Z,
    SPECIES_OMANYTE,
    SPECIES_OMASTAR,
    SPECIES_KABUTO,
    SPECIES_KABUTOPS,
    SPECIES_AERODACTYL,
    SPECIES_MUNCHLAX,
    SPECIES_SNORLAX,
    SPECIES_ARTICUNO,
    SPECIES_ZAPDOS,
    SPECIES_MOLTRES,
    SPECIES_DRATINI,
    SPECIES_DRAGONAIR,
    SPECIES_DRAGONITE,
    SPECIES_MEWTWO,
    SPECIES_MEW,
    SPECIES_CHIKORITA,
    SPECIES_BAYLEEF,
    SPECIES_MEGANIUM,
    SPECIES_CYNDAQUIL,
    SPECIES_QUILAVA,
    SPECIES_TYPHLOSION,
    SPECIES_TOTODILE,
    SPECIES_CROCONAW,
    SPECIES_FERALIGATR,
    SPECIES_SENTRET,
    SPECIES_FURRET,
    SPECIES_HOOTHOOT,
    SPECIES_NOCTOWL,
    SPECIES_LEDYBA,
    SPECIES_LEDIAN,
    SPECIES_SPINARAK,
    SPECIES_ARIADOS,
    SPECIES_CHINCHOU,
    SPECIES_LANTURN,
    SPECIES_TOGEPI,
    SPECIES_TOGETIC,
    SPECIES_TOGEKISS,
    SPECIES_NATU,
    SPECIES_XATU,
    SPECIES_MAREEP,
    SPECIES_FLAAFFY,
    SPECIES_AMPHAROS,
    SPECIES_AZURILL,
    SPECIES_MARILL,
    SPECIES_AZUMARILL,
    SPECIES_BONSLY,
    SPECIES_SUDOWOODO,
    SPECIES_HOPPIP,
    SPECIES_SKIPLOOM,
    SPECIES_JUMPLUFF,
    SPECIES_AIPOM,
    SPECIES_AMBIPOM,
    SPECIES_SUNKERN,
    SPECIES_SUNFLORA,
    SPECIES_YANMA,
    SPECIES_YANMEGA,
    SPECIES_MURKROW,
    SPECIES_HONCHKROW,
    SPECIES_MISDREAVUS,
    SPECIES_MISMAGIUS,
    SPECIES_GIRAFARIG,
    SPECIES_GLIGAR,
    SPECIES_GLISCOR,
    SPECIES_SNUBBULL,
    SPECIES_GRANBULL,
    SPECIES_HERACROSS,
    SPECIES_SNEASEL,
    SPECIES_WEAVILE,
    SPECIES_SNEASLER,
    SPECIES_TEDDIURSA,
    SPECIES_URSARING,
    SPECIES_SLUGMA,
    SPECIES_MAGCARGO,
    SPECIES_SWINUB,
    SPECIES_PILOSWINE,
    SPECIES_MAMOSWINE,
    SPECIES_CORSOLA,
    SPECIES_DELIBIRD,
    SPECIES_HOUNDOUR,
    SPECIES_HOUNDOOM,
    SPECIES_PHANPY,
    SPECIES_DONPHAN,
    SPECIES_STANTLER,
    SPECIES_WYRDEER,
    SPECIES_RAIKOU,
    SPECIES_ENTEI,
    SPECIES_SUICUNE,
    SPECIES_LARVITAR,
    SPECIES_PUPITAR,
    SPECIES_TYRANITAR,
    SPECIES_LUGIA,
    SPECIES_HO_OH,
    SPECIES_CELEBI,
    SPECIES_TREECKO,
    SPECIES_GROVYLE,
    SPECIES_SCEPTILE,
    SPECIES_TORCHIC,
    SPECIES_COMBUSKEN,
    SPECIES_BLAZIKEN,
    SPECIES_MUDKIP,
    SPECIES_MARSHTOMP,
    SPECIES_SWAMPERT,
    SPECIES_POOCHYENA,
    SPECIES_MIGHTYENA,
    SPECIES_WURMPLE,
    SPECIES_SILCOON,
    SPECIES_BEAUTIFLY,
    SPECIES_CASCOON,
    SPECIES_DUSTOX,
    SPECIES_LOTAD,
    SPECIES_LOMBRE,
    SPECIES_LUDICOLO,
    SPECIES_SEEDOT,
    SPECIES_NUZLEAF,
    SPECIES_SHIFTRY,
    SPECIES_TAILLOW,
    SPECIES_SWELLOW,
    SPECIES_WINGULL,
    SPECIES_PELIPPER,
    SPECIES_RALTS,
    SPECIES_KIRLIA,
    SPECIES_GARDEVOIR,
    SPECIES_GALLADE,
    SPECIES_SURSKIT,
    SPECIES_MASQUERAIN,
    SPECIES_SHROOMISH,
    SPECIES_BRELOOM,
    SPECIES_SLAKOTH,
    SPECIES_VIGOROTH,
    SPECIES_SLAKING,
    SPECIES_NINCADA,
    SPECIES_NINJASK,
    SPECIES_SHEDINJA,
    SPECIES_WHISMUR,
    SPECIES_LOUDRED,
    SPECIES_EXPLOUD,
    SPECIES_MAKUHITA,
    SPECIES_HARIYAMA,
    SPECIES_NOSEPASS,
    SPECIES_PROBOPASS,
    SPECIES_SABLEYE,
    SPECIES_MAWILE,
    SPECIES_ARON,
    SPECIES_LAIRON,
    SPECIES_AGGRON,
    SPECIES_MEDITITE,
    SPECIES_MEDICHAM,
    SPECIES_ELECTRIKE,
    SPECIES_MANECTRIC,
    SPECIES_BUDEW,
    SPECIES_ROSELIA,
    SPECIES_ROSERADE,
    SPECIES_CARVANHA,
    SPECIES_SHARPEDO,
    SPECIES_WAILMER,
    SPECIES_WAILORD,
    SPECIES_NUMEL,
    SPECIES_CAMERUPT,
    SPECIES_TORKOAL,
    SPECIES_TRAPINCH,
    SPECIES_VIBRAVA,
    SPECIES_FLYGON,
    SPECIES_CACNEA,
    SPECIES_CACTURNE,
    SPECIES_SWABLU,
    SPECIES_ALTARIA,
    SPECIES_LUNATONE,
    SPECIES_SOLROCK,
    SPECIES_BALTOY,
    SPECIES_CLAYDOL,
    SPECIES_LILEEP,
    SPECIES_CRADILY,
    SPECIES_ANORITH,
    SPECIES_ARMALDO,
    SPECIES_FEEBAS,
    SPECIES_MILOTIC,
    SPECIES_CASTFORM_NORMAL,
    SPECIES_CASTFORM_SUNNY,
    SPECIES_CASTFORM_RAINY,
    SPECIES_CASTFORM_SNOWY,
    SPECIES_KECLEON,
    SPECIES_DUSKULL,
    SPECIES_DUSCLOPS,
    SPECIES_DUSKNOIR,
    SPECIES_TROPIUS,
    SPECIES_CHINGLING,
    SPECIES_CHIMECHO,
    SPECIES_ABSOL,
    SPECIES_SNORUNT,
    SPECIES_GLALIE,
    SPECIES_FROSLASS,
    SPECIES_SPHEAL,
    SPECIES_SEALEO,
    SPECIES_WALREIN,
    SPECIES_CLAMPERL,
    SPECIES_HUNTAIL,
    SPECIES_GOREBYSS,
    SPECIES_RELICANTH,
    SPECIES_BAGON,
    SPECIES_SHELGON,
    SPECIES_SALAMENCE,
    SPECIES_BELDUM,
    SPECIES_METANG,
    SPECIES_METAGROSS,
    SPECIES_LATIAS,
    SPECIES_LATIOS,
    SPECIES_KYOGRE,
    SPECIES_GROUDON,
    SPECIES_RAYQUAZA,
    SPECIES_JIRACHI,
    SPECIES_DEOXYS_NORMAL,
    SPECIES_DEOXYS_ATTACK,
    SPECIES_DEOXYS_DEFENSE,
    SPECIES_DEOXYS_SPEED,
    SPECIES_TURTWIG,
    SPECIES_GROTLE,
    SPECIES_TORTERRA,
    SPECIES_CHIMCHAR,
    SPECIES_MONFERNO,
    SPECIES_INFERNAPE,
    SPECIES_PIPLUP,
    SPECIES_PRINPLUP,
    SPECIES_EMPOLEON,
    SPECIES_STARLY,
    SPECIES_STARAVIA,
    SPECIES_STARAPTOR,
    SPECIES_BIDOOF,
    SPECIES_BIBAREL,
    SPECIES_KRICKETOT,
    SPECIES_KRICKETUNE,
    SPECIES_SHINX,
    SPECIES_LUXIO,
    SPECIES_LUXRAY,
    SPECIES_CRANIDOS,
    SPECIES_RAMPARDOS,
    SPECIES_SHIELDON,
    SPECIES_BASTIODON,
    SPECIES_COMBEE,
    SPECIES_VESPIQUEN,
    SPECIES_BUIZEL,
    SPECIES_FLOATZEL,
    SPECIES_CHERUBI,
    SPECIES_CHERRIM_OVERCAST,
    SPECIES_CHERRIM_SUNSHINE,
    SPECIES_SHELLOS_WEST,
    SPECIES_SHELLOS_EAST,
    SPECIES_GASTRODON_WEST,
    SPECIES_GASTRODON_EAST,
    SPECIES_DRIFLOON,
    SPECIES_DRIFBLIM,
    SPECIES_BUNEARY,
    SPECIES_LOPUNNY,
    SPECIES_GIBLE,
    SPECIES_GABITE,
    SPECIES_GARCHOMP,
    SPECIES_RIOLU,
    SPECIES_LUCARIO,
    SPECIES_HIPPOPOTAS,
    SPECIES_HIPPOWDON,
    SPECIES_SKORUPI,
    SPECIES_DRAPION,
    SPECIES_CROAGUNK,
    SPECIES_TOXICROAK,
    SPECIES_SNOVER,
    SPECIES_ABOMASNOW,
    SPECIES_ROTOM,
    SPECIES_ROTOM_HEAT,
    SPECIES_ROTOM_WASH,
    SPECIES_ROTOM_FROST,
    SPECIES_ROTOM_FAN,
    SPECIES_ROTOM_MOW,
    SPECIES_HEATRAN,
    SPECIES_SNIVY,
    SPECIES_SERVINE,
    SPECIES_SERPERIOR,
    SPECIES_TEPIG,
    SPECIES_PIGNITE,
    SPECIES_EMBOAR,
    SPECIES_OSHAWOTT,
    SPECIES_DEWOTT,
    SPECIES_SAMUROTT,
    SPECIES_DRILBUR,
    SPECIES_EXCADRILL,
    SPECIES_SANDILE,
    SPECIES_KROKOROK,
    SPECIES_KROOKODILE,
    SPECIES_DARUMAKA,
    SPECIES_DARUMAKA_GALAR,
    SPECIES_DARMANITAN_STANDARD,
    SPECIES_DARMANITAN_ZEN,
    SPECIES_DARMANITAN_GALAR_STANDARD,
    SPECIES_DARMANITAN_GALAR_ZEN,
    SPECIES_YAMASK,
    SPECIES_COFAGRIGUS,
    SPECIES_ZORUA,
    SPECIES_ZORUA_HISUI,
    SPECIES_ZOROARK,
    SPECIES_ZOROARK_HISUI,
    SPECIES_GOTHITA,
    SPECIES_GOTHORITA,
    SPECIES_GOTHITELLE,
    SPECIES_FOONGUS,
    SPECIES_AMOONGUSS,
    SPECIES_FRILLISH,
    SPECIES_JELLICENT,
    SPECIES_JOLTIK,
    SPECIES_GALVANTULA,
    SPECIES_FERROSEED,
    SPECIES_FERROTHORN,
    SPECIES_ELGYEM,
    SPECIES_BEHEEYEM,
    SPECIES_LITWICK,
    SPECIES_LAMPENT,
    SPECIES_CHANDELURE,
    SPECIES_AXEW,
    SPECIES_FRAXURE,
    SPECIES_HAXORUS,
    SPECIES_CUBCHOO,
    SPECIES_BEARTIC,
    SPECIES_GOLETT,
    SPECIES_GOLURK,
    SPECIES_PAWNIARD,
    SPECIES_BISHARP,
    SPECIES_DEINO,
    SPECIES_ZWEILOUS,
    SPECIES_HYDREIGON,
    SPECIES_LARVESTA,
    SPECIES_VOLCARONA,
    SPECIES_CHESPIN,
    SPECIES_QUILLADIN,
    SPECIES_CHESNAUGHT,
    SPECIES_FENNEKIN,
    SPECIES_BRAIXEN,
    SPECIES_DELPHOX,
    SPECIES_FROAKIE,
    SPECIES_FROGADIER,
    SPECIES_GRENINJA,
    SPECIES_BUNNELBY,
    SPECIES_DIGGERSBY,
    SPECIES_FLETCHLING,
    SPECIES_FLETCHINDER,
    SPECIES_TALONFLAME,
    SPECIES_PANCHAM,
    SPECIES_PANGORO,
    SPECIES_HONEDGE,
    SPECIES_DOUBLADE,
    SPECIES_AEGISLASH_SHIELD,
    SPECIES_AEGISLASH_BLADE,
    SPECIES_TYRUNT,
    SPECIES_TYRANTRUM,
    SPECIES_AMAURA,
    SPECIES_AURORUS,
    SPECIES_CARBINK,
    SPECIES_DIANCIE,
    SPECIES_GOOMY,
    SPECIES_SLIGGOO,
    SPECIES_GOODRA,
    SPECIES_PHANTUMP,
    SPECIES_TREVENANT,
    SPECIES_ROWLET,
    SPECIES_DARTRIX,
    SPECIES_DECIDUEYE,
    SPECIES_LITTEN,
    SPECIES_TORRACAT,
    SPECIES_INCINEROAR,
    SPECIES_POPPLIO,
    SPECIES_BRIONNE,
    SPECIES_PRIMARINA,
    SPECIES_ROCKRUFF,
    SPECIES_LYCANROC_MIDDAY,
    SPECIES_LYCANROC_MIDNIGHT,
    SPECIES_LYCANROC_DUSK,
    SPECIES_SANDYGAST,
    SPECIES_PALOSSAND,
    SPECIES_MIMIKYU_DISGUISED,
    SPECIES_MIMIKYU_BUSTED,
    SPECIES_JANGMO_O,
    SPECIES_HAKAMO_O,
    SPECIES_KOMMO_O,
    SPECIES_ROOKIDEE,
    SPECIES_CORVISQUIRE,
    SPECIES_CORVIKNIGHT,
    SPECIES_BLIPBUG,
    SPECIES_DOTTLER,
    SPECIES_ORBEETLE,
    SPECIES_TOXEL,
    SPECIES_TOXTRICITY_AMPED,
    SPECIES_TOXTRICITY_LOW_KEY,
    SPECIES_SNOM,
    SPECIES_FROSMOTH,
    SPECIES_DREEPY,
    SPECIES_DRAKLOAK,
    SPECIES_DRAGAPULT,
    SPECIES_GLIMMET,
    SPECIES_GLIMMORA,
    SPECIES_REGIROCK,
    SPECIES_REGICE,
    SPECIES_REGISTEEL,
    SPECIES_REGIELEKI,
    SPECIES_REGIDRAGO,
    SPECIES_REGIGIGAS,
    SPECIES_EGG,
    NUM_SPECIES
};

#define SPECIES_SHINY_TAG 5000

#endif  // GUARD_CONSTANTS_SPECIES_H
