#ifndef CHARACTER_H
#define CHARACTER_H

#include "entity.h"
#include "sqlite3.h"

class Character : public Entity
{
public:
    Character();
    Character(SafehouseSqlite3);
};

#endif // CHARACTER_H
