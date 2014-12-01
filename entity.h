#ifndef ENTITY_H
#define ENTITY_H

#include "safehousesqlite3.h"
#include <QtCore>

/*
 * This class will be a bridge betwenn the different ways i decide to handle
 * characters, items, spells and all things alike. This object is also what will be seen on the screen
 *
 * classes Character, Vehicle, Item and their subclasses will inherit Entity
 */
class Entity
{
    /*
     * A method telling the program what stats the entity has and what version
     * of the db it is defined for, might make it throw an exception if the
     * databases aren't compatible
     */
    virtual void dbTransfer() = 0;

protected:
    QString ID;

public:
    /*
     * Does nothing, yet...
     */
    Entity();
    /*
     * Creates a new entity with an ID that isn't found in the database and ads
     * it to that database
     */
    Entity(SafehouseSqlite3);
    /*
     * A standard getter from an sqlite3 database, made to handle multiple
     * databases at once.
     */
    void getFromDb(SafehouseSqlite3);
    /*
     * A smart setter that will know if the entity should update or add itself
     * to the database
     */
    void setToDb(SafehouseSqlite3);
};

#endif // ENTITY_H
