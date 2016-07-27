#ifndef DBCSTORES_H
#define DBCSTORES_H
#include "DBCStore.h"
#include "DBCStructure.h"
#include "DBCfmt.h"

extern DBCStorage <SpellEntry> sSpellStore;

DBCStorage <SpellEntry> sSpellStore(SpellEntryfmt);

typedef std::list<std::string> StoreProblemList;

template<class T>
inline void LoadDBC(DBCStorage<T>& storage, const std::string& filename)
{
    if (!storage.Load(filename.c_str()))
        printf("error loading dbc files");
}

#endif
