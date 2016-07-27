#ifndef DBCSTRUCTURE_H
#define DBCSTRUCTURE_H

enum SpellEffectIndex
{
    EFFECT_INDEX_0 = 0,
    EFFECT_INDEX_1 = 1,
    EFFECT_INDEX_2 = 2,
    MAX_SPELL_EFFECTS
};

struct SpellEntry
{
    uint32_t    Id;                                           // 0
    uint32_t    Category;                                     // 1
    //uint32_t     castUI                                     // 2 not used
    uint32_t    Dispel;                                       // 3
    uint32_t    Mechanic;                                     // 4
    uint32_t    Attributes;                                   // 5
    uint32_t    AttributesEx;                                 // 6
    uint32_t    AttributesEx2;                                // 7
    uint32_t    AttributesEx3;                                // 8
    uint32_t    AttributesEx4;                                // 9
    uint32_t    AttributesEx5;                                // 10
    uint32_t    AttributesEx6;                                // 11
    uint32_t    Stances;                                      // 12
    uint32_t    StancesNot;                                   // 13
    uint32_t    Targets;                                      // 14
    uint32_t    TargetCreatureType;                           // 15
    uint32_t    RequiresSpellFocus;                           // 16
    uint32_t    FacingCasterFlags;                            // 17
    uint32_t    CasterAuraState;                              // 18
    uint32_t    TargetAuraState;                              // 19
    uint32_t    CasterAuraStateNot;                           // 20
    uint32_t    TargetAuraStateNot;                           // 21
    uint32_t    CastingTimeIndex;                             // 22
    uint32_t    RecoveryTime;                                 // 23
    uint32_t    CategoryRecoveryTime;                         // 24
    uint32_t    InterruptFlags;                               // 25
    uint32_t    AuraInterruptFlags;                           // 26
    uint32_t    ChannelInterruptFlags;                        // 27
    uint32_t    procFlags;                                    // 28
    uint32_t    procChance;                                   // 29
    uint32_t    procCharges;                                  // 30
    uint32_t    maxLevel;                                     // 31
    uint32_t    baseLevel;                                    // 32
    uint32_t    spellLevel;                                   // 33
    uint32_t    DurationIndex;                                // 34
    uint32_t    powerType;                                    // 35
    uint32_t    manaCost;                                     // 36
    uint32_t    manaCostPerlevel;                             // 37
    uint32_t    manaPerSecond;                                // 38
    uint32_t    manaPerSecondPerLevel;                        // 39
    uint32_t    rangeIndex;                                   // 40
    float     speed;                                        // 41
    //uint32_t    modalNextSpell;                             // 42
    uint32_t    StackAmount;                                  // 43
    uint32_t    Totem[2];                                     // 44-45
    int32_t     Reagent[8];                                   // 46-53
    uint32_t    ReagentCount[8];                              // 54-61
    int32_t     EquippedItemClass;                            // 62 (value)
    int32_t     EquippedItemSubClassMask;                     // 63 (mask)
    int32_t     EquippedItemInventoryTypeMask;                // 64 (mask)
    uint32_t    Effect[MAX_SPELL_EFFECTS];                    // 65-67
    int32_t     EffectDieSides[MAX_SPELL_EFFECTS];            // 68-70
    int32_t     EffectBaseDice[MAX_SPELL_EFFECTS];            // 71-73
    float     EffectDicePerLevel[MAX_SPELL_EFFECTS];        // 74-76
    float     EffectRealPointsPerLevel[MAX_SPELL_EFFECTS];  // 77-79
    int32_t     EffectBasePoints[MAX_SPELL_EFFECTS];          // 80-82 (don't must be used in spell/auras explicitly, must be used cached Spell::m_currentBasePoints)
    uint32_t    EffectMechanic[MAX_SPELL_EFFECTS];            // 83-85
    uint32_t    EffectImplicitTargetA[MAX_SPELL_EFFECTS];     // 86-88
    uint32_t    EffectImplicitTargetB[MAX_SPELL_EFFECTS];     // 89-91
    uint32_t    EffectRadiusIndex[MAX_SPELL_EFFECTS];         // 92-94 - spellradius.dbc
    uint32_t    EffectApplyAuraName[MAX_SPELL_EFFECTS];       // 95-97
    uint32_t    EffectAmplitude[MAX_SPELL_EFFECTS];           // 98-100
    float     EffectMultipleValue[MAX_SPELL_EFFECTS];       // 101-103
    uint32_t    EffectChainTarget[MAX_SPELL_EFFECTS];         // 104-106
    uint32_t    EffectItemType[MAX_SPELL_EFFECTS];            // 107-109
    int32_t     EffectMiscValue[MAX_SPELL_EFFECTS];           // 110-112
    int32_t     EffectMiscValueB[MAX_SPELL_EFFECTS];          // 113-115
    uint32_t    EffectTriggerSpell[MAX_SPELL_EFFECTS];        // 116-118
    float     EffectPointsPerComboPoint[MAX_SPELL_EFFECTS]; // 119-121
    uint32_t    SpellVisual;                                  // 122
    // 123 not used
    uint32_t    SpellIconID;                                  // 124
    uint32_t    activeIconID;                                 // 125
    //uint32_t    spellPriority;                              // 126
    char*     SpellName[16];                                // 127-142
    //uint32_t    SpellNameFlag;                              // 143
    char*     Rank[16];                                     // 144-159
    //uint32_t    RankFlags;                                  // 160
    //char*     Description[16];                            // 161-176 not used
    //uint32_t    DescriptionFlags;                           // 177     not used
    //char*     ToolTip[16];                                // 178-193 not used
    //uint32_t    ToolTipFlags;                               // 194 not used
    uint32_t    ManaCostPercentage;                           // 195
    uint32_t    StartRecoveryCategory;                        // 196
    uint32_t    StartRecoveryTime;                            // 197
    uint32_t    MaxTargetLevel;                               // 198
    uint32_t    SpellFamilyName;                              // 199
    uint64_t    SpellFamilyFlags;                             // 200+201
    uint32_t    MaxAffectedTargets;                           // 202
    uint32_t    DmgClass;                                     // 203 defenseType
    uint32_t    PreventionType;                               // 204
    //uint32_t    StanceBarOrder;                             // 205 not used
    float     DmgMultiplier[3];                             // 206-208
    //uint32_t    MinFactionId;                               // 209 not used, and 0 in 2.4.2
    //uint32_t    MinReputation;                              // 210 not used, and 0 in 2.4.2
    //uint32_t    RequiredAuraVision;                         // 211 not used
    uint32_t    TotemCategory[2];                             // 212-213
    uint32_t    AreaId;                                       // 214
    uint32_t    SchoolMask;                                   // 215 school mask

private:
    SpellEntry(SpellEntry const&);
};

#endif
