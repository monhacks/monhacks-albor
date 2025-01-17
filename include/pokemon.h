#ifndef GUARD_POKEMON_H
#define GUARD_POKEMON_H

#include "sprite.h"
#include "constants/items.h"
#include "constants/region_map_sections.h"
#include "constants/map_groups.h"
#include "contest_effect.h"

#define GET_BASE_SPECIES_ID(speciesId) (GetFormSpeciesId(speciesId, 0))
#define FORM_SPECIES_END (0xffff)

//Buscar los que no se usan y fuera
// Property labels for Get(Box)MonData / Set(Box)MonData
enum {
    MON_DATA_PERSONALITY,
    MON_DATA_STATUS,
    MON_DATA_OT_ID,
    MON_DATA_LANGUAGE,
    MON_DATA_SANITY_IS_BAD_EGG,
    MON_DATA_SANITY_HAS_SPECIES,
    MON_DATA_SANITY_IS_EGG,
    MON_DATA_OT_NAME,
    MON_DATA_MARKINGS,
    MON_DATA_HP,
    MON_DATA_IS_SHINY,
    MON_DATA_HIDDEN_NATURE,
    MON_DATA_NICKNAME,
    MON_DATA_NICKNAME10,
    MON_DATA_SPECIES,
    MON_DATA_HELD_ITEM,
    MON_DATA_MOVE1,
    MON_DATA_MOVE2,
    MON_DATA_MOVE3,
    MON_DATA_MOVE4,
    MON_DATA_PP1,
    MON_DATA_PP2,
    MON_DATA_PP3,
    MON_DATA_PP4,
    MON_DATA_PP_BONUSES,
    MON_DATA_COOL,
    MON_DATA_BEAUTY,
    MON_DATA_CUTE,
    MON_DATA_EXP,
    MON_DATA_HP_EV,
    MON_DATA_ATK_EV,
    MON_DATA_DEF_EV,
    MON_DATA_SPEED_EV,
    MON_DATA_SPATK_EV,
    MON_DATA_SPDEF_EV,
    MON_DATA_FRIENDSHIP,
    MON_DATA_SMART,
    MON_DATA_POKERUS,
    MON_DATA_MET_LOCATION,
    MON_DATA_MET_LEVEL,
    MON_DATA_MET_GAME,
    MON_DATA_POKEBALL,
    MON_DATA_HP_IV,
    MON_DATA_ATK_IV,
    MON_DATA_DEF_IV,
    MON_DATA_SPEED_IV,
    MON_DATA_SPATK_IV,
    MON_DATA_SPDEF_IV,
    MON_DATA_IS_EGG,
    MON_DATA_ABILITY_NUM,
    MON_DATA_TOUGH,
    MON_DATA_SHEEN,
    MON_DATA_OT_GENDER,
    MON_DATA_COOL_RIBBON,
    MON_DATA_BEAUTY_RIBBON,
    MON_DATA_CUTE_RIBBON,
    MON_DATA_SMART_RIBBON,
    MON_DATA_TOUGH_RIBBON,
    MON_DATA_LEVEL,
    MON_DATA_MAX_HP,
    MON_DATA_ATK,
    MON_DATA_DEF,
    MON_DATA_SPEED,
    MON_DATA_SPATK,
    MON_DATA_SPDEF,
    MON_DATA_MAIL,
    MON_DATA_SPECIES_OR_EGG,
    MON_DATA_IVS,
    MON_DATA_CHAMPION_RIBBON,
    MON_DATA_WINNING_RIBBON,
    MON_DATA_VICTORY_RIBBON,
    MON_DATA_ARTIST_RIBBON,
    MON_DATA_EFFORT_RIBBON,
    MON_DATA_MARINE_RIBBON,
    MON_DATA_LAND_RIBBON,
    MON_DATA_SKY_RIBBON,
    MON_DATA_COUNTRY_RIBBON,
    MON_DATA_NATIONAL_RIBBON,
    MON_DATA_EARTH_RIBBON,
    MON_DATA_WORLD_RIBBON,
    MON_DATA_MODERN_FATEFUL_ENCOUNTER,
    MON_DATA_KNOWN_MOVES,
    MON_DATA_RIBBON_COUNT,
    MON_DATA_RIBBONS,
    MON_DATA_HYPER_TRAINED_HP,
    MON_DATA_HYPER_TRAINED_ATK,
    MON_DATA_HYPER_TRAINED_DEF,
    MON_DATA_HYPER_TRAINED_SPEED,
    MON_DATA_HYPER_TRAINED_SPATK,
    MON_DATA_HYPER_TRAINED_SPDEF,
    MON_DATA_IS_SHADOW,
    MON_DATA_DYNAMAX_LEVEL,
    MON_DATA_GIGANTAMAX_FACTOR,
    MON_DATA_TERA_TYPE,
    MON_DATA_EVOLUTION_TRACKER,
};

struct __attribute__((packed)) BoxPokemon
{
    u32 personality;

    u32 otId;

    u8 nickname[POKEMON_NAME_LENGTH];

    u32 species:11;
    u32 experience:21;

    u32 heldItem:10;
    u32 pokeball:6;
    u32 ppBonuses:8;
    u32 friendship:8;

    u8 hpEV;
    u8 attackEV;
    u8 defenseEV;
    u8 speedEV;

    u8 spAttackEV;
    u8 spDefenseEV;
    u8 metLocation;
    u32 metLevel:7;
    u32 isEgg:1;

    u32 move1:11;
    u32 hpIV:5;
    u32 move2:11;
    u32 attackIV:5;

    u32 move3:11;
    u32 defenseIV:5;
    u32 move4:11;
    u32 speedIV:5;

    u32 pp1:7;
    u32 pp2:7;
    u32 pp3:7;
    u32 spAttackIV:5;
    u32 spDefenseIV:5;
    u32 shinyModifier:1;

    u8 otName[PLAYER_NAME_LENGTH];

    u32 pp4:7;
    u32 abilityNum:2;
};

struct Pokemon
{
    struct BoxPokemon box;
    u32 status;
    u8 level;
    u16 hp;
    u16 maxHP;
    u16 attack;
    u16 defense;
    u16 speed;
    u16 spAttack;
    u16 spDefense;
};

struct MonSpritesGfxManager
{
    bool32 active;
    void *spriteBuffer;
    u8 **spritePointers;
    struct SpriteTemplate *templates;
    struct SpriteFrameImage *frameImages;
};

struct BattlePokemon
{
    /*0x00*/ u16 species;
    /*0x02*/ u16 attack;
    /*0x04*/ u16 defense;
    /*0x06*/ u16 speed;
    /*0x08*/ u16 spAttack;
    /*0x0A*/ u16 spDefense;
    /*0x0C*/ u16 moves[MAX_MON_MOVES];
    /*0x14*/ u32 hpIV:5;
    /*0x14*/ u32 attackIV:5;
    /*0x15*/ u32 defenseIV:5;
    /*0x15*/ u32 speedIV:5;
    /*0x16*/ u32 spAttackIV:5;
    /*0x17*/ u32 spDefenseIV:5;
    /*0x17*/ u32 abilityNum:2;
    /*0x18*/ s8 statStages[NUM_BATTLE_STATS];
    /*0x20*/ u16 ability;
    /*0x22*/ u8 types[3];
    /*0x25*/ u8 pp[MAX_MON_MOVES];
    /*0x29*/ u16 hp;
    /*0x2B*/ u8 level;
    /*0x2C*/ u8 friendship;
    /*0x2D*/ u16 maxHP;
    /*0x2F*/ u16 item;
    /*0x31*/ u8 nickname[POKEMON_NAME_LENGTH + 1];
    /*0x3C*/ u8 ppBonuses;
    /*0x3D*/ u8 otName[PLAYER_NAME_LENGTH + 1];
    /*0x45*/ u32 experience;
    /*0x49*/ u32 personality;
    /*0x4D*/ u32 status1;
    /*0x51*/ u32 status2;
    /*0x55*/ u32 otId;
    /*0x59*/ u8 metLevel;
    /*0x5A*/ bool8 isShiny;
};

struct Evolution
{
    u16 method;
    u16 param;
    u16 targetSpecies;
};

struct SpeciesInfo /*0xC4*/
{
 /* 0x00 */ u8 baseHP;
 /* 0x01 */ u8 baseAttack;
 /* 0x02 */ u8 baseDefense;
 /* 0x03 */ u8 baseSpeed;
 /* 0x04 */ u8 baseSpAttack;
 /* 0x05 */ u8 baseSpDefense;
 /* 0x06 */ u8 types[2];
 /* 0x08 */ u8 catchRate;
 /* 0x0A */ u16 expYield; // expYield was changed from u8 to u16 for the new Exp System.
 /* 0x0C */ u16 evYield_HP:2;
            u16 evYield_Attack:2;
            u16 evYield_Defense:2;
            u16 evYield_Speed:2;
 /* 0x0D */ u16 evYield_SpAttack:2;
            u16 evYield_SpDefense:2;
            u16 padding2:4;
 /* 0x0E */ u16 itemCommon;
 /* 0x10 */ u16 itemRare;
 /* 0x12 */ u8 genderRatio;
 /* 0x13 */ u8 eggCycles;
 /* 0x14 */ u8 friendship;
 /* 0x15 */ u8 growthRate;
 /* 0x16 */ u8 eggGroups[2];
 /* 0x18 */ u16 abilities[NUM_ABILITY_SLOTS]; // 3 abilities, no longer u8 because we have over 255 abilities now.
 /* 0x1E */ u8 safariZoneFleeRate; //fuera

            // Pokédex data
 /* 0x1F */ u8 categoryName[13];
 /* 0x1F */ u8 speciesName[POKEMON_NAME_LENGTH + 1];
 /* 0x2C */ u16 cryId;
 /* 0x2E */ u16 natDexNum;
 /* 0x30 */ u16 height; //fuera
 /* 0x32 */ u16 weight; //fuera
 /* 0x34 */ u16 pokemonScale; //fuera
 /* 0x36 */ u16 pokemonOffset; //fuera
 /* 0x38 */ u16 trainerScale; //fuera
 /* 0x3A */ u16 trainerOffset; //fuera
 /* 0x3C */ const u8 *description; //fuera
 /* 0x40 */ u8 bodyColor:7; //fuera
            // Graphical Data
            u8 noFlip:1;
 /* 0x41 */ u8 frontAnimDelay;
 /* 0x42 */ u8 frontAnimId;
 /* 0x43 */ u8 backAnimId;
 /* 0x44 */ const union AnimCmd *const *frontAnimFrames;
 /* 0x48 */ const u32 *frontPic;
 /* 0x4C */ const u32 *frontPicFemale;
 /* 0x50 */ const u32 *backPic;
 /* 0x54 */ const u32 *backPicFemale;
 /* 0x58 */ const u32 *palette;
 /* 0x5C */ const u32 *paletteFemale;
 /* 0x60 */ const u32 *shinyPalette;
 /* 0x64 */ const u32 *shinyPaletteFemale;
 /* 0x68 */ const u32 *iconSprite;
 /* 0x6C */ const u32 *iconSpriteFemale;
            // All Pokémon pics are 64x64, but this data table defines where in this 64x64 frame the sprite's non-transparent pixels actually are.
 /* 0x74 */ u8 frontPicSize; // The dimensions of this drawn pixel area.
 /* 0x74 */ u8 frontPicSizeFemale; // The dimensions of this drawn pixel area.
 /* 0x75 */ u8 frontPicYOffset; // The number of pixels between the drawn pixel area and the bottom edge.
 /* 0x76 */ u8 backPicSize; // The dimensions of this drawn pixel area.
 /* 0x76 */ u8 backPicSizeFemale; // The dimensions of this drawn pixel area.
 /* 0x77 */ u8 backPicYOffset; // The number of pixels between the drawn pixel area and the bottom edge.
 /* 0x79 */ u8 enemyMonElevation; // This determines how much higher above the usual position the enemy Pokémon is during battle. Species that float or fly have nonzero values.
            // Flags, la mayoría se pueden ir fuera
 /* 0x7A */ u32 isLegendary:1;
            u32 isMythical:1;
            u32 isUltraBeast:1;
            u32 isParadox:1;
            u32 isTotem:1;
            u32 isMegaEvolution:1;
            u32 isPrimalReversion:1;
            u32 isUltraBurst:1;
            u32 isGigantamax:1;
            u32 isTeraForm:1;
            u32 isAlolanForm:1;
            u32 isGalarianForm:1;
            u32 isHisuianForm:1;
            u32 isPaldeanForm:1;
            u32 cannotBeTraded:1;
            u32 perfectIVCount:3;   // This species will always generate with the specified amount of perfect IVs.
            u32 dexForceRequired:1; // This species will be taken into account for Pokédex ratings even if they have the "isMythical" flag set.
            u32 tmIlliterate:1;     // This species will be unable to learn the universal moves.
            u32 isFrontierBanned:1; // This species is not allowed to participate in Battle Frontier facilities.
            // Shadow settings
            s8 enemyShadowXOffset; // This determines the X-offset for an enemy Pokémon's shadow during battle; negative values point left, positive values point right.
            s8 enemyShadowYOffset; // This determines the Y-offset for an enemy Pokémon's shadow during battle; negative values point up, positive values point down.
            u16 enemyShadowSize:3; // This determines the size of the shadow sprite used for an enemy Pokémon's front sprite during battle.
            u16 suppressEnemyShadow:1; // If set to true, then a shadow will not be drawn beneath an enemy Pokémon's front sprite during battle.
            u32 brilla:1;
            u32 transparente:1;
            // Move Data
 /* 0x80 */ const struct LevelUpMove *levelUpLearnset;
 /* 0x84 */ const u16 *teachableLearnset;
            const u16 *eggMoveLearnset;
 /* 0x88 */ const struct Evolution *evolutions;
 /* 0x84 */ const u16 *formSpeciesIdTable;
 /* 0x84 */ const struct FormChange *formChangeTable;
            struct ObjectEventGraphicsInfo followerData;
            struct ObjectEventGraphicsInfo followerDataFemale;
};

struct MoveInfo
{
    const u8 *name;
    const u8 *description;
    u16 effect;
    u16 type:5;
    u16 category:2;
    u16 power:9; // up to 511
    u16 accuracy:7;
    u16 target:9;
    u8 pp;
    union {
        u8 effect;
        u8 powerOverride;
    } zMove;

    s32 priority:4;
    u32 recoil:7;
    u32 strikeCount:4; // Max 15 hits. Defaults to 1 if not set. May apply its effect on each hit.
    u32 criticalHitStage:2;
    u32 alwaysCriticalHit:1;
    u32 numAdditionalEffects:2; // limited to 3 - don't want to get too crazy
    // 12 bits left to complete this word - continues into flags

    // Flags
    u32 makesContact:1;
    u32 ignoresProtect:1;
    u32 magicCoatAffected:1;
    u32 snatchAffected:1;
    u32 ignoresKingsRock:1;
    u32 punchingMove:1;
    u32 bitingMove:1;
    u32 soundMove:1;
    u32 ballisticMove:1;
    u32 peckMove:1;
    u32 hammerMove:1;
    u32 tailMove:1;
    u32 hornMove:1;
    u32 powderMove:1;
    u32 danceMove:1;
    u32 windMove:1;
    u32 slicingMove:1; // end of word
    u32 healingMove:1;
    u32 minimizeDoubleDamage:1;
    u32 ignoresTargetAbility:1;
    u32 ignoresTargetDefenseEvasionStages:1;
    u32 damagesUnderground:1;
    u32 damagesUnderwater:1;
    u32 damagesAirborne:1;
    u32 damagesAirborneDoubleDamage:1;
    u32 ignoreTypeIfFlyingAndUngrounded:1;
    u32 thawsUser:1;
    u32 ignoresSubstitute:1;
    u32 forcePressure:1;
    u32 cantUseTwice:1;
    u32 headMove:1;
    u32 eyesMove:1;
    u32 lickMove:1;

    // Ban flags
    u32 gravityBanned:1;
    u32 mirrorMoveBanned:1;
    u32 meFirstBanned:1;
    u32 mimicBanned:1;
    u32 metronomeBanned:1;
    u32 copycatBanned:1;
    u32 assistBanned:1; // Matches same moves as copycatBanned + semi-invulnerable moves and Mirror Coat.
    u32 sleepTalkBanned:1;
    u32 instructBanned:1;
    u32 encoreBanned:1;
    u32 parentalBondBanned:1;
    u32 skyBattleBanned:1;
    u32 sketchBanned:1;
    u32 padding:5; // end of word

    u32 argument;

    // primary/secondary effects
    const struct AdditionalEffect *additionalEffects;

    // contest parameters
    u8 contestEffect;
    u8 contestCategory:3;
    u8 contestComboStarterId;
    u8 contestComboMoves[MAX_COMBO_MOVES];
    const u8 *battleAnimScript;
};

#define EFFECTS_ARR(...) (const struct AdditionalEffect[]) {__VA_ARGS__}
#define ADDITIONAL_EFFECTS(...) EFFECTS_ARR( __VA_ARGS__ ), .numAdditionalEffects = ARRAY_COUNT(EFFECTS_ARR( __VA_ARGS__ ))

// Just a hack to make a move boosted by Sheer Force despite having no secondary effects affected
#define SHEER_FORCE_HACK { .moveEffect = 0, .chance = 100, }

struct AdditionalEffect
{
    u16 moveEffect;
    u8 self:1;
    u8 onlyIfTargetRaisedStats:1;
    u8 onChargeTurnOnly:1;
    u8 chance; // 0% = effect certain, primary effect
};

struct Ability
{
    u8 name[ABILITY_NAME_LENGTH + 1];
    const u8 *description;
    s8 aiRating;
    u8 cantBeCopied:1; // cannot be copied by Role Play or Doodle
    u8 cantBeSwapped:1; // cannot be swapped with Skill Swap or Wandering Spirit
    u8 cantBeTraced:1; // cannot be copied by Trace - same as cantBeCopied except for Wonder Guard
    u8 cantBeSuppressed:1; // cannot be negated by Gastro Acid or Neutralizing Gas
    u8 cantBeOverwritten:1; // cannot be overwritten by Entrainment, Worry Seed or Simple Beam (but can be by Mummy) - same as cantBeSuppressed except for Truant
    u8 breakable:1; // can be bypassed by Mold Breaker and clones
    u8 failsOnImposter:1; // doesn't work on an Imposter mon; when can we actually use this?
};

enum {
    AFFINE_NONE,
    AFFINE_TURN_UP,
    AFFINE_TURN_UP_AND_DOWN,
    AFFINE_TURN_DOWN,
    AFFINE_TURN_DOWN_SLOW,
    AFFINE_TURN_DOWN_SLIGHT,
    AFFINE_TURN_UP_HIGH,
    NUM_MON_AFFINES,
};

// The animation the Pokémon does during the feeding scene depends on their nature.
// The below values are offsets into sMonPokeblockAnims of the animation data for that nature.
#define ANIM_HARDY   0
#define ANIM_LONELY  (ANIM_HARDY + 3)
#define ANIM_BRAVE   (ANIM_LONELY + 1)
#define ANIM_ADAMANT (ANIM_BRAVE + 1)
#define ANIM_NAUGHTY (ANIM_ADAMANT + 5)
#define ANIM_BOLD    (ANIM_NAUGHTY + 3)
#define ANIM_DOCILE  (ANIM_BOLD + 2)
#define ANIM_RELAXED (ANIM_DOCILE + 1)
#define ANIM_IMPISH  (ANIM_RELAXED + 2)
#define ANIM_LAX     (ANIM_IMPISH + 1)
#define ANIM_TIMID   (ANIM_LAX + 1)
#define ANIM_HASTY   (ANIM_TIMID + 5)
#define ANIM_SERIOUS (ANIM_HASTY + 2)
#define ANIM_JOLLY   (ANIM_SERIOUS + 1)
#define ANIM_NAIVE   (ANIM_JOLLY + 1)
#define ANIM_MODEST  (ANIM_NAIVE + 4)
#define ANIM_MILD    (ANIM_MODEST + 3)
#define ANIM_QUIET   (ANIM_MILD + 1)
#define ANIM_BASHFUL (ANIM_QUIET + 2)
#define ANIM_RASH    (ANIM_BASHFUL + 3)
#define ANIM_CALM    (ANIM_RASH + 3)
#define ANIM_GENTLE  (ANIM_CALM + 1)
#define ANIM_SASSY   (ANIM_GENTLE + 1)
#define ANIM_CAREFUL (ANIM_SASSY + 1)
#define ANIM_QUIRKY  (ANIM_CAREFUL + 5)

// In palace double battles, Pokémon have a target preference depending on nature
#define PALACE_TARGET_STRONGER 0
#define PALACE_TARGET_WEAKER   1
#define PALACE_TARGET_RANDOM   2

struct NatureInfo
{
    const u8 *name;
    u8 statUp;
    u8 backAnim;
    u8 pokeBlockAnim[2];
    u8 battlePalacePercents[4];
    u8 battlePalaceFlavorText;
    u8 battlePalaceSmokescreen;
    const u8 *natureGirlMessage;
};

struct LevelUpMove
{
    u16 move;
    u16 level;
};

struct FormChange
{
    u16 method;
    u16 targetSpecies;
    u16 param1;
    u16 param2;
    u16 param3;
};

#define GET_SHINY_VALUE(otId, personality) (HIHALF(otId) ^ LOHALF(otId) ^ HIHALF(personality) ^ LOHALF(personality))

extern u8 gPlayerPartyCount;
extern struct Pokemon gPlayerParty[PARTY_SIZE];
extern u8 gEnemyPartyCount;
extern struct Pokemon gEnemyParty[PARTY_SIZE];
extern struct SpriteTemplate gMultiuseSpriteTemplate;
extern u16 gFollowerSteps;

extern const struct MoveInfo gMovesInfo[];
extern const struct SpeciesInfo gSpeciesInfo[];
extern const u32 gExperienceTables[][MAX_LEVEL + 1];
extern const u8 gPPUpGetMask[];
extern const u8 gPPUpClearMask[];
extern const u8 gPPUpAddValues[];
extern const u8 gStatStageRatios[MAX_STAT_STAGE + 1][2];
extern const struct SpriteTemplate gBattlerSpriteTemplates[];
extern const u32 sExpCandyExperienceTable[];
extern const struct Ability gAbilitiesInfo[];
extern const struct NatureInfo gNaturesInfo[];

void ZeroBoxMonData(struct BoxPokemon *boxMon);
void ZeroMonData(struct Pokemon *mon);
void ZeroPlayerPartyMons(void);
void ZeroEnemyPartyMons(void);
void CreateMon(struct Pokemon *mon, u16 species, u8 level, u8 fixedIV, u8 hasFixedPersonality, u32 fixedPersonality, u8 otIdType, u32 fixedOtId);
void CreateBoxMon(struct BoxPokemon *boxMon, u16 species, u8 level, u8 fixedIV, u8 hasFixedPersonality, u32 fixedPersonality, u8 otIdType, u32 fixedOtId);
void CreateMonWithNature(struct Pokemon *mon, u16 species, u8 level, u8 fixedIV, u8 nature);
void CreateMonWithGenderNatureLetter(struct Pokemon *mon, u16 species, u8 level, u8 fixedIV, u8 gender, u8 nature);
void CreateMaleMon(struct Pokemon *mon, u16 species, u8 level);
void CreateMonWithIVsPersonality(struct Pokemon *mon, u16 species, u8 level, u32 ivs, u32 personality);
void CreateMonWithIVsOTID(struct Pokemon *mon, u16 species, u8 level, u8 *ivs, u32 otId);
void CreateMonWithEVSpread(struct Pokemon *mon, u16 species, u8 level, u8 fixedIV, u8 evSpread);
void CreateBattleTowerMon(struct Pokemon *mon, struct BattleTowerPokemon *src);
void CreateBattleTowerMon_HandleLevel(struct Pokemon *mon, struct BattleTowerPokemon *src, bool8 lvl50);
void CreateApprenticeMon(struct Pokemon *mon, const struct Apprentice *src, u8 monId);
void CreateMonWithEVSpreadNatureOTID(struct Pokemon *mon, u16 species, u8 level, u8 nature, u8 fixedIV, u8 evSpread, u32 otId);
void ConvertPokemonToBattleTowerPokemon(struct Pokemon *mon, struct BattleTowerPokemon *dest);
bool8 ShouldIgnoreDeoxysForm(u8 caseId, u8 battlerId);
void CreateEnemyEventMon(void);
void CalculateMonStats(struct Pokemon *mon);
void BoxMonToMon(const struct BoxPokemon *src, struct Pokemon *dest);
u8 GetLevelFromMonExp(struct Pokemon *mon);
u8 GetLevelFromBoxMonExp(struct BoxPokemon *boxMon);
u16 GiveMoveToMon(struct Pokemon *mon, u16 move);
u16 GiveMoveToBoxMon(struct BoxPokemon *boxMon, u16 move);
u16 GiveMoveToBattleMon(struct BattlePokemon *mon, u16 move);
void SetMonMoveSlot(struct Pokemon *mon, u16 move, u8 slot);
void SetBattleMonMoveSlot(struct BattlePokemon *mon, u16 move, u8 slot);
void GiveMonInitialMoveset(struct Pokemon *mon);
void GiveBoxMonInitialMoveset(struct BoxPokemon *boxMon);
u16 MonTryLearningNewMove(struct Pokemon *mon, bool8 firstMove);
void DeleteFirstMoveAndGiveMoveToMon(struct Pokemon *mon, u16 move);
void DeleteFirstMoveAndGiveMoveToBoxMon(struct BoxPokemon *boxMon, u16 move);
u8 CountAliveMonsInBattle(u8 caseId, u32 battler);
u8 GetDefaultMoveTarget(u8 battlerId);
u8 GetMonGender(struct Pokemon *mon);
u8 GetBoxMonGender(struct BoxPokemon *boxMon);
u8 GetGenderFromSpeciesAndPersonality(u16 species, u32 personality);
bool32 IsPersonalityFemale(u16 species, u32 personality);
void SetMultiuseSpriteTemplateToPokemon(u16 speciesTag, u8 battlerPosition);
void SetMultiuseSpriteTemplateToTrainer(u16 trainerSpriteId, u8 battlerPosition);

/* GameFreak called Get(Box)MonData with either 2 or 3 arguments, for
 * type safety we have a Get(Box)MonData macro which dispatches to
 * either Get(Box)MonData2 or Get(Box)MonData3 based on the number of
 * arguments. The two functions are aliases of each other, but they
 * differ for matching purposes in the caller's codegen. */
#define GetMonData(...) CAT(GetMonData, NARG_8(__VA_ARGS__))(__VA_ARGS__)
#define GetBoxMonData(...) CAT(GetBoxMonData, NARG_8(__VA_ARGS__))(__VA_ARGS__)
u32 GetMonData3(struct Pokemon *mon, s32 field, u8 *data);
u32 GetMonData2(struct Pokemon *mon, s32 field);
u32 GetBoxMonData3(struct BoxPokemon *boxMon, s32 field, u8 *data);
u32 GetBoxMonData2(struct BoxPokemon *boxMon, s32 field);

void SetMonData(struct Pokemon *mon, s32 field, const void *dataArg);
void SetBoxMonData(struct BoxPokemon *boxMon, s32 field, const void *dataArg);
void CopyMon(void *dest, void *src, size_t size);
u8 GiveMonToPlayer(struct Pokemon *mon);
u8 CopyMonToPC(struct Pokemon *mon);
u8 CalculatePlayerPartyCount(void);
u8 CalculateEnemyPartyCount(void);
u8 GetMonsStateToDoubles(void);
u8 GetMonsStateToDoubles_2(void);
u16 GetAbilityBySpecies(u16 species, u8 abilityNum);
u16 GetMonAbility(struct Pokemon *mon);
void CreateSecretBaseEnemyParty(struct SecretBase *secretBaseRecord);
u8 GetSecretBaseTrainerPicIndex(void);
u8 GetSecretBaseTrainerClass(void);
bool8 IsPlayerPartyAndPokemonStorageFull(void);
bool8 IsPokemonStorageFull(void);
const u8 *GetSpeciesName(u16 species);
const u8 *GetSpeciesCategory(u16 species);
const u8 *GetSpeciesPokedexDescription(u16 species);
u16 GetSpeciesHeight(u16 species);
u16 GetSpeciesWeight(u16 species);
const struct LevelUpMove *GetSpeciesLevelUpLearnset(u16 species);
const u16 *GetSpeciesTeachableLearnset(u16 species);
const u16 *GetSpeciesEggMoves(u16 species);
const struct Evolution *GetSpeciesEvolutions(u16 species);
const u16 *GetSpeciesFormTable(u16 species);
const struct FormChange *GetSpeciesFormChanges(u16 species);
u8 CalculatePPWithBonus(u16 move, u8 ppBonuses, u8 moveIndex);
void RemoveMonPPBonus(struct Pokemon *mon, u8 moveIndex);
void RemoveBattleMonPPBonus(struct BattlePokemon *mon, u8 moveIndex);
void PokemonToBattleMon(struct Pokemon *src, struct BattlePokemon *dst);
void CopyPlayerPartyMonToBattleData(u8 battlerId, u8 partyIndex);
bool8 ExecuteTableBasedItemEffect(struct Pokemon *mon, u16 item, u8 partyIndex, u8 moveIndex);
bool8 PokemonUseItemEffects(struct Pokemon *mon, u16 item, u8 partyIndex, u8 moveIndex, u8 e);
bool8 HealStatusConditions(struct Pokemon *mon, u32 healMask, u8 battlerId);
u8 GetItemEffectParamOffset(u32 battler, u16 itemId, u8 effectByte, u8 effectBit);
u8 *UseStatIncreaseItem(u16 itemId);
u8 GetNature(struct Pokemon *mon);
u8 GetNatureFromPersonality(u32 personality);
u16 GetEvolutionTargetSpecies(struct Pokemon *mon, enum EvolutionMode mode, u16 evolutionItem, struct Pokemon *tradePartner);
bool8 IsMonPastEvolutionLevel(struct Pokemon *mon);
u16 NationalPokedexNumToSpecies(u16 nationalNum);
u16 SpeciesToNationalPokedexNum(u16 species);
void EvolutionRenameMon(struct Pokemon *mon, u16 oldSpecies, u16 newSpecies);
u8 GetPlayerFlankId(void);
u16 GetLinkTrainerFlankId(u8 id);
s32 GetBattlerMultiplayerId(u16 id);
u8 GetTrainerEncounterMusicId(u16 trainerOpponentId);
u16 ModifyStatByNature(u8 nature, u16 n, u8 statIndex);
void AdjustFriendship(struct Pokemon *mon, u8 event);
void MonGainEVs(struct Pokemon *mon, u16 defeatedSpecies);
u16 GetMonEVCount(struct Pokemon *mon);
void RandomlyGivePartyPokerus(struct Pokemon *party);
u8 CheckPartyPokerus(struct Pokemon *party, u8 selection);
u8 CheckPartyHasHadPokerus(struct Pokemon *party, u8 selection);
void UpdatePartyPokerusTime(u16 days);
void PartySpreadPokerus(struct Pokemon *party);
bool8 TryIncrementMonLevel(struct Pokemon *mon);
u8 CanLearnTeachableMove(u16 species, u16 move);
u8 GetMoveRelearnerMoves(struct Pokemon *mon, u16 *moves);
u8 GetLevelUpMovesBySpecies(u16 species, u16 *moves);
u8 GetNumberOfRelearnableMoves(struct Pokemon *mon);
u16 SpeciesToPokedexNum(u16 species);
u16 GetBattleBGM(void);
void PlayBattleBGM(void);
void PlayMapChosenOrBattleBGM(u16 songId);
void CreateTask_PlayMapChosenOrBattleBGM(u16 songId);
const u32 *GetMonFrontSpritePal(struct Pokemon *mon);
const u32 *GetMonSpritePalFromSpeciesAndPersonality(u16 species, bool32 isShiny, u32 personality);
const u32 *GetMonSpritePalFromSpecies(u16 species, bool32 isShiny, bool32 isFemale);
bool8 IsMonSpriteNotFlipped(u16 species);
s8 GetMonFlavorRelation(struct Pokemon *mon, u8 flavor);
s8 GetFlavorRelationByPersonality(u32 personality, u8 flavor);
bool8 IsTradedMon(struct Pokemon *mon);
bool8 IsOtherTrainer(u32 otId, u8 *otName);
void MonRestorePP(struct Pokemon *mon);
void BoxMonRestorePP(struct BoxPokemon *boxMon);
void SetMonPreventsSwitchingString(void);
void SetWildMonHeldItem(void);
bool8 IsMonShiny(struct Pokemon *mon);
const u8 *GetTrainerPartnerName(void);
void BattleAnimateFrontSprite(struct Sprite *sprite, u16 species, bool8 noCry, u8 panMode);
void DoMonFrontSpriteAnimation(struct Sprite *sprite, u16 species, bool8 noCry, u8 panModeAnimFlag);
void PokemonSummaryDoMonAnimation(struct Sprite *sprite, u16 species, bool8 oneFrame);
void StopPokemonAnimationDelayTask(void);
void BattleAnimateBackSprite(struct Sprite *sprite, u16 species);
u8 GetOpposingLinkMultiBattlerId(bool8 rightSide, u8 multiplayerId);
u16 PlayerGenderToFrontTrainerPicId(u8 playerGender);
void HandleSetPokedexFlag(u16 nationalNum, u8 caseId);
bool8 HasTwoFramesAnimation(u16 species);
struct MonSpritesGfxManager *CreateMonSpritesGfxManager(void);
void DestroyMonSpritesGfxManager(void);
u8 *MonSpritesGfxManager_GetSpritePtr(void);
u16 GetFormSpeciesId(u16 speciesId, u8 formId);
u8 GetFormIdFromFormSpeciesId(u16 formSpeciesId);
u16 GetFormChangeTargetSpecies(struct Pokemon *mon, u16 method, u32 arg);
u16 GetFormChangeTargetSpeciesBoxMon(struct BoxPokemon *boxMon, u16 method, u32 arg);
bool32 DoesSpeciesHaveFormChangeMethod(u16 species, u16 method);
u16 MonTryLearningNewMoveEvolution(struct Pokemon *mon, bool8 firstMove);
bool32 SpeciesHasGenderDifferences(u16 species);
bool32 TryFormChange(u32 monId, u32 side, u16 method);
void TryToSetBattleFormChangeMoves(struct Pokemon *mon, u16 method);
u32 GetMonFriendshipScore(struct Pokemon *pokemon);
u32 GetMonAffectionHearts(struct Pokemon *pokemon);
void UpdateMonPersonality(struct BoxPokemon *boxMon, u32 personality);
u8 CalculatePartyCount(struct Pokemon *party);
u16 SanitizeSpeciesId(u16 species);
bool32 IsSpeciesEnabled(u16 species);
u16 GetCryIdBySpecies(u16 species);
u16 GetSpeciesPreEvolution(u16 species);
void HealPokemon(struct Pokemon *mon);
void HealBoxPokemon(struct BoxPokemon *boxMon);
const u8 *GetMoveName(u16 moveId);
const u8 *GetMoveAnimationScript(u16 moveId);
void TrySetDayLimitToFormChange(struct Pokemon *mon);
u32 CheckDynamicMoveType(struct Pokemon *mon, u32 move, u32 battler);

#endif // GUARD_POKEMON_H
