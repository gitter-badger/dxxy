#include "dxxylogmanager.h"

DXXYLogManager::DXXYLogManager(DXXY *man, QString dbfile)
{
    // Set DXXY Instance
    dxxy = man;

    // Open Database
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName(dbfile);
    if (!db.open())
    {
        qDebug() << db.lastError().text();
        dxxy->NewError(DXXY::critical,db.lastError().text());
    }

    // Check to see if Database is Populated

}
