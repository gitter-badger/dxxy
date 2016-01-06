#include "dxxy.h"

/** TEMPORARY INCLUDES **/
#include "components/bandmap/bandmap.h"
/** END TEMPORARY INCLUDES **/

DXXY::DXXY(DXXYWindow& dxxywindowp)
{
    /** CONFIG **/
     // Windows
     #if defined(_WIN32) || defined(_WIN64)
        platform = DXXY::Windows;

        // Mac
     #elif defined(__APPLE__)
        platform = DXXY::Mac;

        // Linux
     #else
        platform = DXXY::Linux;

     #endif



    /** Assign Qt Window **/
        dxxywindow = &dxxywindowp;

    /** Start LogManager **/
        QString dbpath;
        if(platform == DXXY::Windows){
            dbpath = qApp->applicationDirPath() + "/" + QString("dxxy.db");
        }
        else{
            dbpath = qApp->applicationDirPath() + QString("/../etc/dxxy/dxxy.db");
        }

        DXXYLogManager *LogManager = new DXXYLogManager(this, dbpath);

    /** Start RadioManager **/

    /** Start AudioManager **/

    /** Start ComponentManager **/
        LoadComponents();

}

/** ERROR MANAGER **/
void DXXY::NewError(MessageType type, QString mesg){
    QMessageBox messageBox;
    switch(type){
        case DXXY::critical :
            messageBox.critical(0, "Error", mesg);
        break;

        case DXXY::warning :
            messageBox.warning(0, "Warning", mesg);
        break;

        case DXXY::info :
            messageBox.information(0, "Info", mesg);
        break;

    qDebug() << mesg;
    messageBox.exec();
    }
}

/** COMPONENT MANAGER **/
void DXXY::LoadComponents(){
    BandMap *bm = new BandMap(this);
    dxxywindow->addDockWidget(Qt::RightDockWidgetArea, bm);
}
