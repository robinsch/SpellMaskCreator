#ifndef SHAREDDEFINES_H
#define SHAREDDEFINES_H

enum SpellSchools
{
    SPELL_SCHOOL_NORMAL = 0,
    SPELL_SCHOOL_HOLY   = 1,
    SPELL_SCHOOL_FIRE   = 2,
    SPELL_SCHOOL_NATURE = 3,
    SPELL_SCHOOL_FROST  = 4,
    SPELL_SCHOOL_SHADOW = 5,
    SPELL_SCHOOL_ARCANE = 6,
    SPELL_SCHOOL_MAX    = 7
};

enum Attributes
{
    SPELL_ATTR_UNK0                           = 0x00000001,       // 0
    SPELL_ATTR_RANGED                         = 0x00000002,       // 1 All ranged abilities have this flag
    SPELL_ATTR_ON_NEXT_SWING_1                = 0x00000004,       // 2 on next swing 1
    SPELL_ATTR_UNK3                           = 0x00000008,       // 3 not set in 2.4.3
    SPELL_ATTR_ABILITY                        = 0x00000010,       // 4 client puts 'ability' instead of 'spell' in game strings for these spells
    SPELL_ATTR_TRADESPELL                     = 0x00000020,       // 5 trade spells (recipes), will be added by client to a sublist of profession spell
    SPELL_ATTR_PASSIVE                        = 0x00000040,       // 6 Passive spell
    SPELL_ATTR_HIDDEN_CLIENTSIDE              = 0x00000080,       // 7 *Spells with this attribute are not visible in spellbook or aura bar
    SPELL_ATTR_HIDE_IN_COMBAT_LOG             = 0x00000100,       // 8 This attribite controls whether spell appears in combat logs
    SPELL_ATTR_TARGET_MAINHAND_ITEM           = 0x00000200,       // 9 Client automatically selects item from mainhand slot as a cast target
    SPELL_ATTR_ON_NEXT_SWING_2                = 0x00000400,       // 10 on next swing 2
    SPELL_ATTR_UNK11                          = 0x00000800,       // 11
    SPELL_ATTR_DAYTIME_ONLY                   = 0x00001000,       // 12 only useable at daytime, not set in 2.4.3
    SPELL_ATTR_NIGHT_ONLY                     = 0x00002000,       // 13 only useable at night, not set in 2.4.3
    SPELL_ATTR_INDOORS_ONLY                   = 0x00004000,       // 14 only useable indoors, not set in 2.4.3
    SPELL_ATTR_OUTDOORS_ONLY                  = 0x00008000,       // 15 Only useable outdoors.
    SPELL_ATTR_NOT_SHAPESHIFT                 = 0x00010000,       // 16 Not while shapeshifted
    SPELL_ATTR_ONLY_STEALTHED                 = 0x00020000,       // 17 Must be in stealth
    SPELL_ATTR_DONT_AFFECT_SHEATH_STATE       = 0x00040000,       // 18 *client won't hide unit weapons in sheath on cast/channel
    SPELL_ATTR_LEVEL_DAMAGE_CALCULATION       = 0x00080000,       // 19 spelldamage depends on caster level
    SPELL_ATTR_STOP_ATTACK_TARGET             = 0x00100000,       // 20 Stop attack after use this spell (and not begin attack if use)
    SPELL_ATTR_IMPOSSIBLE_DODGE_PARRY_BLOCK   = 0x00200000,       // 21 Cannot be dodged/parried/blocked
    SPELL_ATTR_CAST_TRACK_TARGET              = 0x00400000,       // 22 *Client automatically forces player to face target when casting
    SPELL_ATTR_CASTABLE_WHILE_DEAD            = 0x00800000,       // 23 *castable while dead?
    SPELL_ATTR_CASTABLE_WHILE_MOUNTED         = 0x01000000,       // 24 castable while mounted
    SPELL_ATTR_DISABLED_WHILE_ACTIVE          = 0x02000000,       // 25 Activate and start cooldown after aura fade or remove summoned creature or go
    SPELL_ATTR_NEGATIVE_1                     = 0x04000000,       // 26 *Aura ignore immune? - Many negative spells have this attr
    SPELL_ATTR_CASTABLE_WHILE_SITTING         = 0x08000000,       // 27 castable while sitting
    SPELL_ATTR_CANT_USED_IN_COMBAT            = 0x10000000,       // 28 Cannot be used in combat
    SPELL_ATTR_UNAFFECTED_BY_INVULNERABILITY  = 0x20000000,       // 29 unaffected by invulnerability (hmm possible not...)
    SPELL_ATTR_BREAKABLE_BY_DAMAGE            = 0x40000000,       // 30 breakable by damage?
    SPELL_ATTR_CANT_CANCEL                    = 0x80000000        // 31 positive aura can't be canceled
};

enum AttributesEx
{
    SPELL_ATTR_EX_DISMISS_PET                 = 0x00000001,       // 0 *for these spells is old pet dismissed before summon new
    SPELL_ATTR_EX_DRAIN_ALL_POWER             = 0x00000002,       // 1 use all power (Only paladin Lay of Hands and Bunyanize)
    SPELL_ATTR_EX_CHANNELED_1                 = 0x00000004,       // 2 channeled 1
    SPELL_ATTR_EX_CANT_BE_REDIRECTED          = 0x00000008,       // 3 cant be redirected
    SPELL_ATTR_EX_UNK4                        = 0x00000010,       // 4 (stealth, prowl, whirlwind, rockbiter)
    SPELL_ATTR_EX_NOT_BREAK_STEALTH           = 0x00000020,       // 5 Not break stealth
    SPELL_ATTR_EX_CHANNELED_2                 = 0x00000040,       // 6 channeled 2
    SPELL_ATTR_EX_CANT_BE_REFLECTED           = 0x00000080,       // 7 cant be reflected
    SPELL_ATTR_EX_NOT_IN_COMBAT_TARGET        = 0x00000100,       // 8 Spell req target not to be in combat state
    SPELL_ATTR_EX_MELEE_COMBAT_SPELL          = 0x00000200,       // 9 *spells with this flag can be cast only if caster is able to melee attack target
    SPELL_ATTR_EX_NO_THREAT                   = 0x00000400,       // 10 *no generates threat?
    SPELL_ATTR_EX_UNK11                       = 0x00000800,       // 11 *aura?
    SPELL_ATTR_EX_PICKPOKET                   = 0x00001000,       // 12 *pickpoket
    SPELL_ATTR_EX_FARSIGHT                    = 0x00002000,       // 13 *Client removes farsight on aura loss
    SPELL_ATTR_EX_CHANNEL_TRACK_TARGET        = 0x00004000,       // 14 *Client automatically forces player to face target when channeling
    SPELL_ATTR_EX_DISPEL_AURAS_ON_IMMUNITY    = 0x00008000,       // 15 remove auras on immunity
    SPELL_ATTR_EX_UNAFFECTED_BY_SCHOOL_IMMUNE = 0x00010000,       // 16 unaffected by school immunity
    SPELL_ATTR_EX_UNAUTOCASTABLE_BY_PET       = 0x00020000,       // 17
    SPELL_ATTR_EX_UNK18                       = 0x00040000,       // 18 stun, polymorph, daze, hex
    SPELL_ATTR_EX_CANT_TARGET_SELF            = 0x00080000,       // 19 *Applies only to unit target - for example Divine Intervention (19752)
    SPELL_ATTR_EX_REQ_COMBO_POINTS1           = 0x00100000,       // 20 Req combo points on target
    SPELL_ATTR_EX_DONT_PUT_IN_COMBAT          = 0x00200000,       // 21 *dont start combat?
    SPELL_ATTR_EX_REQ_COMBO_POINTS2           = 0x00400000,       // 22 Req combo points on target
    SPELL_ATTR_EX_UNK23                       = 0x00800000,       // 23
    SPELL_ATTR_EX_FISHING                     = 0x01000000,       // 24 *Req fishing pole?? - only fishing spells
    SPELL_ATTR_EX_UNK25                       = 0x02000000,       // 25 not set in 2.4.3
    SPELL_ATTR_EX_UNK26                       = 0x04000000,       // 26 works correctly with [target=focus] and [target=mouseover] macros?
    SPELL_ATTR_EX_MUST_FACE_TARGET            = 0x08000000,       // 27 *Caster must face its target in order to successfully cast spell
    SPELL_ATTR_EX_HIDDEN_AURA                 = 0x10000000,       // 28 *client doesn't display these spells in aura bar
    SPELL_ATTR_EX_CHANNEL_DISPLAY_SPELL_NAME  = 0x20000000,       // 29 *spell name is displayed in cast bar instead of 'channeling' text
    SPELL_ATTR_EX_ENABLE_AT_DODGE             = 0x40000000,       // 30 *overpower
    SPELL_ATTR_EX_UNK31                       = 0x80000000        // 31
};

enum AttributesEx2
{
    SPELL_ATTR_EX2_ALLOW_DEAD_TARGET          = 0x00000001,       // 0 *can target dead target
    SPELL_ATTR_EX2_TRANSPARENT                = 0x00000002,       // 1 *make caster transparent
    SPELL_ATTR_EX2_IGNORE_LOS                 = 0x00000004,       // 2 *these spells ignore line-of-sight
    SPELL_ATTR_EX2_UNK3                       = 0x00000008,       // 3
    SPELL_ATTR_EX2_ALWAYS_APPLY_MODIFIERS     = 0x00000010,       // 4 *spell modifiers are applied dynamically (even if aura is not passive)
    SPELL_ATTR_EX2_AUTOREPEAT_FLAG            = 0x00000020,       // 5
    SPELL_ATTR_EX2_UNK6                       = 0x00000040,       // 6
    SPELL_ATTR_EX2_UNK7                       = 0x00000080,       // 7
    SPELL_ATTR_EX2_UNK8                       = 0x00000100,       // 8 not set in 2.4.3
    SPELL_ATTR_EX2_UNK9                       = 0x00000200,       // 9
    SPELL_ATTR_EX2_TAME_SPELLS                = 0x00000400,       // 10 *tame spells
    SPELL_ATTR_EX2_HEALTH_FUNNEL              = 0x00000800,       // 11
    SPELL_ATTR_EX2_UNK12                      = 0x00001000,       // 12 *(swipe, cleave)
    SPELL_ATTR_EX2_CASTABLE_ON_ITEMS          = 0x00002000,       // 13 *item enchants, poisons, disenchant...
    SPELL_ATTR_EX2_UNK14                      = 0x00004000,       // 14 *(picoviny)
    SPELL_ATTR_EX2_UNK15                      = 0x00008000,       // 15 not set in 2.4.3
    SPELL_ATTR_EX2_TAME_BEAST                 = 0x00010000,       // 16
    SPELL_ATTR_EX2_NOT_RESET_AUTOSHOT         = 0x00020000,       // 17 Hunters Shot and Stings only have this flag
    SPELL_ATTR_EX2_REQ_DEAD_PET               = 0x00040000,       // 18 *Only Revive pet
    SPELL_ATTR_EX2_NOT_NEED_SHAPESHIFT        = 0x00080000,       // 19 does not necessarly need shapeshift
    SPELL_ATTR_EX2_MUST_BEHIND_TARGET         = 0x00100000,       // 20 *Caster need to be behind of his target
    SPELL_ATTR_EX2_DAMAGE_REDUCED_SHIELD      = 0x00200000,       // 21 *for ice blocks, pala immunity buffs, priest absorb shields, but used also for other spells -> not sure!
    SPELL_ATTR_EX2_UNK22                      = 0x00400000,       // 22
    SPELL_ATTR_EX2_UNK23                      = 0x00800000,       // 23 *(Only mage Arcane Concentration have this flag)
    SPELL_ATTR_EX2_UNK24                      = 0x01000000,       // 24
    SPELL_ATTR_EX2_UNK25                      = 0x02000000,       // 25
    SPELL_ATTR_EX2_UNK26                      = 0x04000000,       // 26 unaffected by school immunity
    SPELL_ATTR_EX2_UNK27                      = 0x08000000,       // 27
    SPELL_ATTR_EX2_UNK28                      = 0x10000000,       // 28
    SPELL_ATTR_EX2_CANT_CRIT                  = 0x20000000,       // 29 Spell can't crit
    SPELL_ATTR_EX2_TRIGGERED_CAN_TRIGGER      = 0x40000000,       // 30 spell can trigger even if triggered
    SPELL_ATTR_EX2_FOOD                       = 0x80000000        // 31 food, well-fed, and a few others
};

enum AttributesEx3
{
    SPELL_ATTR_EX3_UNK0                       = 0x00000001,       // 0
    SPELL_ATTR_EX3_UNK1                       = 0x00000002,       // 1
    SPELL_ATTR_EX3_UNK2                       = 0x00000004,       // 2
    SPELL_ATTR_EX3_BLOCKABLE_SPELL            = 0x00000008,       // 3 Only dmg class melee
    SPELL_ATTR_EX3_IGNORE_RESURRECTION_TIMER  = 0x00000010,       // 4 Druid Rebirth only this spell have this flag
    SPELL_ATTR_EX3_UNK5                       = 0x00000020,       // 5
    SPELL_ATTR_EX3_UNK6                       = 0x00000040,       // 6
    SPELL_ATTR_EX3_STACKS_FOR_DIFF_CASTERS    = 0x00000080,       // 7 separate stack for every caster
    SPELL_ATTR_EX3_PLAYERS_ONLY               = 0x00000100,       // 8 Player only?
    SPELL_ATTR_EX3_UNK9                       = 0x00000200,       // 9
    SPELL_ATTR_EX3_MAIN_HAND                  = 0x00000400,       // 10 Main hand weapon required
    SPELL_ATTR_EX3_BATTLEGROUND               = 0x00000800,       // 11 Can casted only on battleground
    SPELL_ATTR_EX3_CAST_ON_DEAD               = 0x00001000,       // 12 *target is a dead player (not every spell has this flag)
    SPELL_ATTR_EX3_UNK13                      = 0x00002000,       // 13 *no triggers effects that trigger on casting a spell??
    SPELL_ATTR_EX3_UNK14                      = 0x00004000,       // 14 "Honorless Target" only this spells have this flag
    SPELL_ATTR_EX3_UNK15                      = 0x00008000,       // 15 Auto Shoot, Shoot, Throw,  - this is autoshot flag
    SPELL_ATTR_EX3_CANT_TRIGGER_PROC          = 0x00010000,       // 16
    SPELL_ATTR_EX3_NO_INITIAL_AGGRO           = 0x00020000,       // 17 no initial aggro
    SPELL_ATTR_EX3_IGNORE_HIT_RESULT          = 0x00040000,       // 18 Spell should always hit its target
    SPELL_ATTR_EX3_DISABLE_PROC               = 0x00080000,       // 19 *during aura proc no spells can trigger (20178, 20375)
    SPELL_ATTR_EX3_DEATH_PERSISTENT           = 0x00100000,       // 20 Death persistent spells
    SPELL_ATTR_EX3_UNK21                      = 0x00200000,       // 21
    SPELL_ATTR_EX3_REQ_WAND                   = 0x00400000,       // 22 Req wand
    SPELL_ATTR_EX3_UNK23                      = 0x00800000,       // 23
    SPELL_ATTR_EX3_REQ_OFFHAND                = 0x01000000,       // 24 Req offhand weapon
    SPELL_ATTR_EX3_UNK25                      = 0x02000000,       // 25
    SPELL_ATTR_EX3_CAN_PROC_TRIGGERED         = 0x04000000,       // 26
    SPELL_ATTR_EX3_UNK27                      = 0x08000000,       // 27
    SPELL_ATTR_EX3_ALWAYS_CAST_OK             = 0x10000000,       // 28 *Flagdrops, captures, enrages - total immunity to caster auras
    SPELL_ATTR_EX3_NO_SPELL_BONUS             = 0x20000000,       // 29 Ignore bonus spell damage?
    SPELL_ATTR_EX3_DONT_DISPLAY_RANGE         = 0x40000000,       // 30 *at these spells is not displayed range in tooltip
    SPELL_ATTR_EX3_UNK31                      = 0x80000000        // 31
};

enum AttributesEx4
{
    SPELL_ATTR_EX4_UNK0                       = 0x00000001,        // 0
    SPELL_ATTR_EX4_PROC_ONLY_ON_DUMMY         = 0x00000002,        // 1 * proc only on SPELL_EFFECT_DUMMY?
    SPELL_ATTR_EX4_UNK2                       = 0x00000004,        // 2
    SPELL_ATTR_EX4_CANT_PROC_FROM_SELFCAST    = 0x00000008,        // 3
    SPELL_ATTR_EX4_UNK4                       = 0x00000010,        // 4
    SPELL_ATTR_EX4_UNK5                       = 0x00000020,        // 5
    SPELL_ATTR_EX4_NOT_STEALABLE              = 0x00000040,        // 6
    SPELL_ATTR_EX4_FORCE_TRIGGERED            = 0x00000080,        // 7 spells forced to be triggered
    SPELL_ATTR_EX4_UNK8                       = 0x00000100,        // 8
    SPELL_ATTR_EX4_SPECIAL_ACTIVATION         = 0x00000200,        // 9 *(Execute, Revenge, Hammer of Wrath, ...)
    SPELL_ATTR_EX4_SPELL_VS_EXTEND_COST       = 0x00000400,        // 10 Rogue Shiv have this flag
    SPELL_ATTR_EX4_UNK11                      = 0x00000800,        // 11
    SPELL_ATTR_EX4_UNK12                      = 0x00001000,        // 12
    SPELL_ATTR_EX4_UNK13                      = 0x00002000,        // 13
    SPELL_ATTR_EX4_DAMAGE_DOESNT_BREAK_AURAS  = 0x00004000,        // 14
    SPELL_ATTR_EX4_UNK15                      = 0x00008000,        // 15
    SPELL_ATTR_EX4_NOT_USABLE_IN_ARENA        = 0x00010000,        // 16 not usable in arena
    SPELL_ATTR_EX4_USABLE_IN_ARENA            = 0x00020000,        // 17 usable in arena
    SPELL_ATTR_EX4_AREA_TARGET_CHAIN          = 0x00040000,        // 18 *hits area targets one after another instead of all at once
    SPELL_ATTR_EX4_UNK19                      = 0x00080000,        // 19
    SPELL_ATTR_EX4_UNK20                      = 0x00100000,        // 20
    SPELL_ATTR_EX4_UNK21                      = 0x00200000,        // 21 *(Pally aura, druid forms, warrior stance, shadowform, hunter track)
    SPELL_ATTR_EX4_UNK22                      = 0x00400000,        // 22 *(only Seal of command)
    SPELL_ATTR_EX4_UNK23                      = 0x00800000,        // 23
    SPELL_ATTR_EX4_AUTOSHOT                   = 0x01000000,        // 24 Autoshot only
    SPELL_ATTR_EX4_UNK25                      = 0x02000000,        // 25 pet scaling auras
    SPELL_ATTR_EX4_CAST_ONLY_IN_OUTLAND       = 0x04000000,        // 26 Can only be used in Outland.
    SPELL_ATTR_EX4_UNK27                      = 0x08000000,        // 27
    SPELL_ATTR_EX4_UNK28                      = 0x10000000,        // 28
    SPELL_ATTR_EX4_UNK29                      = 0x20000000,        // 29
    SPELL_ATTR_EX4_UNK30                      = 0x40000000,        // 30
    SPELL_ATTR_EX4_UNK31                      = 0x80000000         // 31
};

enum AttributesEx5
{
    SPELL_ATTR_EX5_CAN_CHANNEL_WHEN_MOVING    = 0x00000001,        // 0 don't interrupt channeling spells when moving
    SPELL_ATTR_EX5_NO_REAGENT_WHILE_PREP      = 0x00000002,        // 1 not need reagents if UNIT_FLAG_PREPARATION
    SPELL_ATTR_EX5_UNK2                       = 0x00000004,        // 2
    SPELL_ATTR_EX5_USABLE_WHILE_STUNNED       = 0x00000008,        // 3 usable while stunned
    SPELL_ATTR_EX5_UNK4                       = 0x00000010,        // 4
    SPELL_ATTR_EX5_SINGLE_TARGET_SPELL        = 0x00000020,        // 5 Only one target can be apply at a time
    SPELL_ATTR_EX5_UNK6                       = 0x00000040,        // 6
    SPELL_ATTR_EX5_UNK7                       = 0x00000080,        // 7
    SPELL_ATTR_EX5_UNK8                       = 0x00000100,        // 8
    SPELL_ATTR_EX5_START_PERIODIC_AT_APPLY    = 0x00000200,        // 9 * begin periodic tick at aura apply - not implemented yet
    SPELL_ATTR_EX5_HIDE_DURATION              = 0x00000400,        // 10 do not send duration to client
    SPELL_ATTR_EX5_UNK11                      = 0x00000800,        // 11 *Intervene, Righteous Defense (cast on attacked player, forces his attacker to attack caster)
    SPELL_ATTR_EX5_UNK12                      = 0x00001000,        // 12
    SPELL_ATTR_EX5_HASTE_AFFECT_DURATION      = 0x00002000,        // 13 haste effects decrease duration of this
    SPELL_ATTR_EX5_UNK14                      = 0x00004000,        // 14
    SPELL_ATTR_EX5_UNK15                      = 0x00008000,        // 15
    SPELL_ATTR_EX5_UNK16                      = 0x00010000,        // 16 Cleave, Swipe, Saber lash (damage to an enemy and its nearest ally)
    SPELL_ATTR_EX5_USABLE_WHILE_FEARED        = 0x00020000,        // 17 usable while feared
    SPELL_ATTR_EX5_USABLE_WHILE_CONFUSED      = 0x00040000,        // 18 usable while confused
    SPELL_ATTR_EX5_UNK19                      = 0x00080000,        // 19
    SPELL_ATTR_EX5_UNK20                      = 0x00100000,        // 20 some transformations and illusions
    SPELL_ATTR_EX5_UNK21                      = 0x00200000,        // 21
    SPELL_ATTR_EX5_UNK22                      = 0x00400000,        // 22
    SPELL_ATTR_EX5_UNK23                      = 0x00800000,        // 23
    SPELL_ATTR_EX5_UNK24                      = 0x01000000,        // 24
    SPELL_ATTR_EX5_UNK25                      = 0x02000000,        // 25 only Death Lightning
    SPELL_ATTR_EX5_UNK26                      = 0x04000000,        // 26 "Thunder clap", "Seed of Corruption" only
    SPELL_ATTR_EX5_UNK27                      = 0x08000000,        // 27
    SPELL_ATTR_EX5_UNK28                      = 0x10000000,        // 28
    SPELL_ATTR_EX5_UNK29                      = 0x20000000,        // 29 Alterac Valley auras (Might of Frostwolf, Honor of the Stormpike)
    SPELL_ATTR_EX5_UNK30                      = 0x40000000,        // 30 Ahune visual spells
    SPELL_ATTR_EX5_UNK31                      = 0x80000000         // 31
};

enum AttributesEx6
{
    SPELL_ATTR_EX6_DONT_DISPLAY_COOLDOWN      = 0x00000001,        // 0 Only Move spell have this flag
    SPELL_ATTR_EX6_ONLY_IN_ARENA              = 0x00000002,        // 1 not set in 2.4.3
    SPELL_ATTR_EX6_IGNORE_CASTER_AURAS        = 0x00000004,        // 2 *ignore caster auras?
    SPELL_ATTR_EX6_INDIRECT_TAUNT             = 0x00000008,        // 3 *Righteous Defense only - taunt attacker from attacked unit?
    SPELL_ATTR_EX6_UNK4                       = 0x00000010,        // 4 not set in 2.4.3
    SPELL_ATTR_EX6_UNK5                       = 0x00000020,        // 5 *Ritual of Summoning
    SPELL_ATTR_EX6_UNK6                       = 0x00000040,        // 6 *some tracking spells
    SPELL_ATTR_EX6_UNK7                       = 0x00000080,        // 7 *chance to trigger spell on melee or ranged hit?
    SPELL_ATTR6_CANT_TARGET_CROWD_CONTROLLED  = 0x00000100,        // 8 Avenger's Shield only
    SPELL_ATTR_EX6_UNK9                       = 0x00000200,        // 9 not set in 2.4.3
    SPELL_ATTR_EX6_UNK10                      = 0x00000400,        // 10 *Find Minerals only
    SPELL_ATTR_EX6_NOT_IN_RAID_INSTANCE       = 0x00000800,        // 11 *Sayge's Dark Fortune of ... only
    SPELL_ATTR_EX6_UNK12                      = 0x00001000,        // 12 not set in 2.4.3
    SPELL_ATTR_EX6_CAN_TARGET_INVISIBLE       = 0x00002000,        // 13 *only  Bash'ir Phasing Device (ignore visibility requirement for spell target (phases, invisibility, etc.))
    SPELL_ATTR_EX6_UNK14                      = 0x00004000,        // 14 not set in 2.4.3
    SPELL_ATTR_EX6_UNK15                      = 0x00008000,        // 15 not set in 2.4.3
    SPELL_ATTR_EX6_UNK16                      = 0x00010000,        // 16 not set in 2.4.3
    SPELL_ATTR_EX6_SUMMON_MOUNT               = 0x00020000,        // 17 *mount spells
    SPELL_ATTR_EX6_UNK18                      = 0x00040000,        // 18 not set in 2.4.3
    SPELL_ATTR_EX6_UNK19                      = 0x00080000,        // 19 not set in 2.4.3
    SPELL_ATTR_EX6_UNK20                      = 0x00100000,        // 20 not set in 2.4.3
    SPELL_ATTR_EX6_UNK21                      = 0x00200000,        // 21 not set in 2.4.3
    SPELL_ATTR_EX6_UNK22                      = 0x00400000,        // 22 not set in 2.4.3
    SPELL_ATTR_EX6_UNK23                      = 0x00800000,        // 23 not set in 2.4.3
    SPELL_ATTR_EX6_UNK24                      = 0x01000000,        // 24 not set in 2.4.3
    SPELL_ATTR_EX6_UNK25                      = 0x02000000,        // 25 not set in 2.4.3
    SPELL_ATTR_EX6_UNK26                      = 0x04000000,        // 26 not set in 2.4.3
    SPELL_ATTR_EX6_UNK27                      = 0x08000000,        // 27 not set in 2.4.3
    SPELL_ATTR_EX6_UNK28                      = 0x10000000,        // 28 not set in 2.4.3
    SPELL_ATTR_EX6_UNK29                      = 0x20000000,        // 29 not set in 2.4.3
    SPELL_ATTR_EX6_UNK30                      = 0x40000000,        // 30 not set in 2.4.3
    SPELL_ATTR_EX6_UNK31                      = 0x80000000         // 31 not set in 2.4.3
};

#define MAX_SPELL_EFFECTS 3
enum SpellEffects
{
    SPELL_EFFECT_INSTAKILL                 = 1,
    SPELL_EFFECT_SCHOOL_DAMAGE             = 2,
    SPELL_EFFECT_DUMMY                     = 3,
    SPELL_EFFECT_PORTAL_TELEPORT           = 4,
    SPELL_EFFECT_TELEPORT_UNITS            = 5,
    SPELL_EFFECT_APPLY_AURA                = 6,
    SPELL_EFFECT_ENVIRONMENTAL_DAMAGE      = 7,
    SPELL_EFFECT_POWER_DRAIN               = 8,
    SPELL_EFFECT_HEALTH_LEECH              = 9,
    SPELL_EFFECT_HEAL                      = 10,
    SPELL_EFFECT_BIND                      = 11,
    SPELL_EFFECT_PORTAL                    = 12,
    SPELL_EFFECT_RITUAL_BASE               = 13,
    SPELL_EFFECT_RITUAL_SPECIALIZE         = 14,
    SPELL_EFFECT_RITUAL_ACTIVATE_PORTAL    = 15,
    SPELL_EFFECT_QUEST_COMPLETE            = 16,
    SPELL_EFFECT_WEAPON_DAMAGE_NOSCHOOL    = 17,
    SPELL_EFFECT_RESURRECT                 = 18,
    SPELL_EFFECT_ADD_EXTRA_ATTACKS         = 19,
    SPELL_EFFECT_DODGE                     = 20,
    SPELL_EFFECT_EVADE                     = 21,
    SPELL_EFFECT_PARRY                     = 22,
    SPELL_EFFECT_BLOCK                     = 23,
    SPELL_EFFECT_CREATE_ITEM               = 24,
    SPELL_EFFECT_WEAPON                    = 25,
    SPELL_EFFECT_DEFENSE                   = 26,
    SPELL_EFFECT_PERSISTENT_AREA_AURA      = 27,
    SPELL_EFFECT_SUMMON                    = 28,
    SPELL_EFFECT_LEAP                      = 29,
    SPELL_EFFECT_ENERGIZE                  = 30,
    SPELL_EFFECT_WEAPON_PERCENT_DAMAGE     = 31,
    SPELL_EFFECT_TRIGGER_MISSILE           = 32,
    SPELL_EFFECT_OPEN_LOCK                 = 33,
    SPELL_EFFECT_SUMMON_CHANGE_ITEM        = 34,
    SPELL_EFFECT_APPLY_AREA_AURA_PARTY     = 35,
    SPELL_EFFECT_LEARN_SPELL               = 36,
    SPELL_EFFECT_SPELL_DEFENSE             = 37,
    SPELL_EFFECT_DISPEL                    = 38,
    SPELL_EFFECT_LANGUAGE                  = 39,
    SPELL_EFFECT_DUAL_WIELD                = 40,
    SPELL_EFFECT_41                        = 41,            // old SPELL_EFFECT_SUMMON_WILD
    SPELL_EFFECT_42                        = 42,            // old SPELL_EFFECT_SUMMON_GUARDIAN
    SPELL_EFFECT_TELEPORT_UNITS_FACE_CASTER= 43,
    SPELL_EFFECT_SKILL_STEP                = 44,
    SPELL_EFFECT_UNDEFINED_45              = 45,
    SPELL_EFFECT_SPAWN                     = 46,
    SPELL_EFFECT_TRADE_SKILL               = 47,
    SPELL_EFFECT_STEALTH                   = 48,
    SPELL_EFFECT_DETECT                    = 49,
    SPELL_EFFECT_TRANS_DOOR                = 50,
    SPELL_EFFECT_FORCE_CRITICAL_HIT        = 51,
    SPELL_EFFECT_GUARANTEE_HIT             = 52,
    SPELL_EFFECT_ENCHANT_ITEM              = 53,
    SPELL_EFFECT_ENCHANT_ITEM_TEMPORARY    = 54,
    SPELL_EFFECT_TAMECREATURE              = 55,
    SPELL_EFFECT_SUMMON_PET                = 56,
    SPELL_EFFECT_LEARN_PET_SPELL           = 57,
    SPELL_EFFECT_WEAPON_DAMAGE             = 58,
    SPELL_EFFECT_OPEN_LOCK_ITEM            = 59,
    SPELL_EFFECT_PROFICIENCY               = 60,
    SPELL_EFFECT_SEND_EVENT                = 61,
    SPELL_EFFECT_POWER_BURN                = 62,
    SPELL_EFFECT_THREAT                    = 63,
    SPELL_EFFECT_TRIGGER_SPELL             = 64,
    SPELL_EFFECT_HEALTH_FUNNEL             = 65,
    SPELL_EFFECT_POWER_FUNNEL              = 66,
    SPELL_EFFECT_HEAL_MAX_HEALTH           = 67,
    SPELL_EFFECT_INTERRUPT_CAST            = 68,
    SPELL_EFFECT_DISTRACT                  = 69,
    SPELL_EFFECT_PULL                      = 70,
    SPELL_EFFECT_PICKPOCKET                = 71,
    SPELL_EFFECT_ADD_FARSIGHT              = 72,
    SPELL_EFFECT_73                        = 73,            // old SPELL_EFFECT_SUMMON_POSSESSED
    SPELL_EFFECT_74                        = 74,            // old SPELL_EFFECT_SUMMON_TOTEM
    SPELL_EFFECT_HEAL_MECHANICAL           = 75,
    SPELL_EFFECT_SUMMON_OBJECT_WILD        = 76,
    SPELL_EFFECT_SCRIPT_EFFECT             = 77,
    SPELL_EFFECT_ATTACK                    = 78,
    SPELL_EFFECT_SANCTUARY                 = 79,
    SPELL_EFFECT_ADD_COMBO_POINTS          = 80,
    SPELL_EFFECT_CREATE_HOUSE              = 81,
    SPELL_EFFECT_BIND_SIGHT                = 82,
    SPELL_EFFECT_DUEL                      = 83,
    SPELL_EFFECT_STUCK                     = 84,
    SPELL_EFFECT_SUMMON_PLAYER             = 85,
    SPELL_EFFECT_ACTIVATE_OBJECT           = 86,
    SPELL_EFFECT_87                        = 87,            // old SPELL_EFFECT_SUMMON_TOTEM_SLOT1
    SPELL_EFFECT_88                        = 88,            // old SPELL_EFFECT_SUMMON_TOTEM_SLOT2
    SPELL_EFFECT_89                        = 89,            // old SPELL_EFFECT_SUMMON_TOTEM_SLOT3
    SPELL_EFFECT_90                        = 90,            // old SPELL_EFFECT_SUMMON_TOTEM_SLOT4
    SPELL_EFFECT_THREAT_ALL                = 91,
    SPELL_EFFECT_ENCHANT_HELD_ITEM         = 92,
    SPELL_EFFECT_93                        = 93,            // old SPELL_EFFECT_SUMMON_PHANTASM
    SPELL_EFFECT_SELF_RESURRECT            = 94,
    SPELL_EFFECT_SKINNING                  = 95,
    SPELL_EFFECT_CHARGE                    = 96,
    SPELL_EFFECT_97                        = 97,            // old SPELL_EFFECT_SUMMON_CRITTER
    SPELL_EFFECT_KNOCK_BACK                = 98,
    SPELL_EFFECT_DISENCHANT                = 99,
    SPELL_EFFECT_INEBRIATE                 = 100,
    SPELL_EFFECT_FEED_PET                  = 101,
    SPELL_EFFECT_DISMISS_PET               = 102,
    SPELL_EFFECT_REPUTATION                = 103,
    SPELL_EFFECT_SUMMON_OBJECT_SLOT1       = 104,
    SPELL_EFFECT_SUMMON_OBJECT_SLOT2       = 105,
    SPELL_EFFECT_SUMMON_OBJECT_SLOT3       = 106,
    SPELL_EFFECT_SUMMON_OBJECT_SLOT4       = 107,
    SPELL_EFFECT_DISPEL_MECHANIC           = 108,
    SPELL_EFFECT_SUMMON_DEAD_PET           = 109,
    SPELL_EFFECT_DESTROY_ALL_TOTEMS        = 110,
    SPELL_EFFECT_DURABILITY_DAMAGE         = 111,
    SPELL_EFFECT_112                       = 112,           // old SPELL_EFFECT_SUMMON_DEMON
    SPELL_EFFECT_RESURRECT_NEW             = 113,
    SPELL_EFFECT_ATTACK_ME                 = 114,
    SPELL_EFFECT_DURABILITY_DAMAGE_PCT     = 115,
    SPELL_EFFECT_SKIN_PLAYER_CORPSE        = 116,
    SPELL_EFFECT_SPIRIT_HEAL               = 117,
    SPELL_EFFECT_SKILL                     = 118,
    SPELL_EFFECT_APPLY_AREA_AURA_PET       = 119,
    SPELL_EFFECT_TELEPORT_GRAVEYARD        = 120,
    SPELL_EFFECT_NORMALIZED_WEAPON_DMG     = 121,
    SPELL_EFFECT_122                       = 122,
    SPELL_EFFECT_SEND_TAXI                 = 123,
    SPELL_EFFECT_PLAYER_PULL               = 124,
    SPELL_EFFECT_MODIFY_THREAT_PERCENT     = 125,
    SPELL_EFFECT_STEAL_BENEFICIAL_BUFF     = 126,
    SPELL_EFFECT_PROSPECTING               = 127,
    SPELL_EFFECT_APPLY_AREA_AURA_FRIEND    = 128,
    SPELL_EFFECT_APPLY_AREA_AURA_ENEMY     = 129,
    SPELL_EFFECT_REDIRECT_THREAT           = 130,
    SPELL_EFFECT_131                       = 131,
    SPELL_EFFECT_132                       = 132,
    SPELL_EFFECT_UNLEARN_SPECIALIZATION    = 133,
    SPELL_EFFECT_KILL_CREDIT               = 134,
    SPELL_EFFECT_135                       = 135,
    SPELL_EFFECT_HEAL_PCT                  = 136,
    SPELL_EFFECT_ENERGIZE_PCT              = 137,
    SPELL_EFFECT_138                       = 138,
    SPELL_EFFECT_139                       = 139,
    SPELL_EFFECT_FORCE_CAST                = 140,
    SPELL_EFFECT_141                       = 141,
    SPELL_EFFECT_TRIGGER_SPELL_WITH_VALUE  = 142,
    SPELL_EFFECT_APPLY_AREA_AURA_OWNER     = 143,
    SPELL_EFFECT_KNOCK_BACK_2              = 144,
    SPELL_EFFECT_145                       = 145,
    SPELL_EFFECT_146                       = 146,
    SPELL_EFFECT_QUEST_FAIL                = 147,
    SPELL_EFFECT_148                       = 148,
    SPELL_EFFECT_149                       = 149,
    SPELL_EFFECT_150                       = 150,
    SPELL_EFFECT_TRIGGER_SPELL_2           = 151,
    SPELL_EFFECT_152                       = 152,
    SPELL_EFFECT_153                       = 153,
    TOTAL_SPELL_EFFECTS                    = 154
};

// Spell mechanics
enum Mechanics
{
    MECHANIC_NONE             = 0,
    MECHANIC_CHARM            = 1,
    MECHANIC_CONFUSED         = 2,
    MECHANIC_DISARM           = 3,
    MECHANIC_DISTRACT         = 4,
    MECHANIC_FEAR             = 5,
    MECHANIC_FUMBLE           = 6,
    MECHANIC_ROOT             = 7,
    MECHANIC_PACIFY           = 8,                          //0 spells use this mechanic
    MECHANIC_SILENCE          = 9,
    MECHANIC_SLEEP            = 10,
    MECHANIC_SNARE            = 11,
    MECHANIC_STUN             = 12,
    MECHANIC_FREEZE           = 13,
    MECHANIC_KNOCKOUT         = 14,
    MECHANIC_BLEED            = 15,
    MECHANIC_BANDAGE          = 16,
    MECHANIC_POLYMORPH        = 17,
    MECHANIC_BANISH           = 18,
    MECHANIC_SHIELD           = 19,
    MECHANIC_SHACKLE          = 20,
    MECHANIC_MOUNT            = 21,
    MECHANIC_PERSUADE         = 22,                         //0 spells use this mechanic
    MECHANIC_TURN             = 23,
    MECHANIC_HORROR           = 24,
    MECHANIC_INVULNERABILITY  = 25,
    MECHANIC_INTERRUPT        = 26,
    MECHANIC_DAZE             = 27,
    MECHANIC_DISCOVERY        = 28,
    MECHANIC_IMMUNE_SHIELD    = 29,                         // Divine (Blessing) Shield/Protection and Ice Block
    MECHANIC_SAPPED           = 30
};

// Spell dispell type
enum DispelType
{
    DISPEL_NONE         = 0,
    DISPEL_MAGIC        = 1,
    DISPEL_CURSE        = 2,
    DISPEL_DISEASE      = 3,
    DISPEL_POISON       = 4,
    DISPEL_STEALTH      = 5,
    DISPEL_INVISIBILITY = 6,
    DISPEL_ALL          = 7,
    DISPEL_SPE_NPC_ONLY = 8,
    DISPEL_ENRAGE       = 9
};

enum SpellDmgClass
{
    SPELL_DAMAGE_CLASS_NONE     = 0,
    SPELL_DAMAGE_CLASS_MAGIC    = 1,
    SPELL_DAMAGE_CLASS_MELEE    = 2,
    SPELL_DAMAGE_CLASS_RANGED   = 3
};

enum SpellFamilyNames
{
    SPELLFAMILY_GENERIC     = 0,
    SPELLFAMILY_UNK1        = 1,
    SPELLFAMILY_UNUSED      = 2,
    SPELLFAMILY_MAGE        = 3,
    SPELLFAMILY_WARRIOR     = 4,
    SPELLFAMILY_WARLOCK     = 5,
    SPELLFAMILY_PRIEST      = 6,
    SPELLFAMILY_DRUID       = 7,
    SPELLFAMILY_ROGUE       = 8,
    SPELLFAMILY_HUNTER      = 9,
    SPELLFAMILY_PALADIN     = 10,
    SPELLFAMILY_SHAMAN      = 11,
    SPELLFAMILY_UNK2        = 12,
    SPELLFAMILY_POTION      = 13
};

#endif
