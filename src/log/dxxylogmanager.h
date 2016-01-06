#ifndef DXXYLOGMANAGER_H
#define DXXYLOGMANAGER_H

#include <QtSql>
#include <QString>

#include <dxxy.h>

class DXXYLogManager
{
public:
    DXXYLogManager(DXXY *man, QString dbfile);

private:
    DXXY *dxxy;
    QSqlDatabase db;
};

#endif // DXXYLOGMANAGER_H
