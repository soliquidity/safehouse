#include "entity.h"

Entity::Entity()
{
    // NOTHING, HAHA!!!
}

Entity::Entity(SafehouseSqlite3 shdb)
{
    // Make magic with le database and set ID
}

Entity::getFromDb(SafehouseSqlite3 shdb)
{
    // Use dbTransfer to know what stats there are to collect
}

Entity::setToDb(SafehouseSqlite3 shdb)
{
    // Use dbTransfer to know what stats to set
}
