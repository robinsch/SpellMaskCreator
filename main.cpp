#include <functional>
#include "DBCStores.h"
#include "SharedDefines.h"

void CreateMask(std::function<bool(SpellEntry const*)> const& check)
{
    uint32_t resultMask = 0x0;
    for (uint32_t i = 1; i < sSpellStore.GetNumRows(); ++i)
    {
        SpellEntry const* spellInfo = sSpellStore.LookupEntry(i);
        if (!spellInfo)
            continue;

        if (check(spellInfo))
        {
            resultMask |= spellInfo->SpellFamilyFlags;
            printf("Name: %u Entry: %s SpellFamilyFlags: %u\n", spellInfo->Id, spellInfo->SpellName[0], spellInfo->SpellFamilyFlags);
        }
    }

    printf("\nSpellFamilyMask: %u", resultMask);
}

int main()
{
    // Load Spell.dbc
    LoadDBC(sSpellStore, "Spell.dbc");

    CreateMask([](SpellEntry const* spellInfo)
    {
        // Example how to use
        /*for (uint8_t i = 0; i < 3; i++)
            return spellInfo->Dispel == DISPEL_MAGIC && spellInfo->SpellFamilyName == SPELLFAMILY_SHAMAN && spellInfo->Effect[i] == SPELL_EFFECT_APPLY_AURA;*/

        return false;
    });

    getchar();

    return 0;
}

