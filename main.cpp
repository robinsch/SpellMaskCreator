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
        }
    }

    printf("%u", resultMask);
}

int main()
{
    // Load Spell.dbc
    LoadDBC(sSpellStore, "Spell.dbc");

    CreateMask([](SpellEntry const* spellInfo)
    {
        for (uint8_t i = 0; i < 3; i++)
            return spellInfo->SpellFamilyName == SPELLFAMILY_SHAMAN && spellInfo->Effect[i] == SPELL_EFFECT_APPLY_AURA;

        return false;
    });

    return 0;
}

