#ifndef SAFEHOUSESQLITE3_H
#define SAFEHOUSESQLITE3_H

#include <QObject>
#include "sqlite3.h"
#include "entity.h"
#include "character.h"

const unsigned int SAFEHOUSE_DATABASE_VER = 0;

class SafehouseSqlite3 : public QObject
{
    Q_OBJECT

    sqlite3 *db;
    sqlite3_stmt *stmt;

public:
    explicit SafehouseSqlite3(QObject *parent = 0);
    
signals:
    
public slots:
    void add(Character);
    
};

#endif // SAFEHOUSESQLITE3_H
