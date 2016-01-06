#include <QApplication>

#include "dxxy.h"
#include "dxxywindow.h"

int main(int argc, char *argv[])
{

    /** Create Window **/
    QApplication a(argc, argv);
    DXXYWindow w;

    /** Start DXXY **/
    DXXY* dxxy = new DXXY(w);

    /** Activate Window **/
    w.show();

    return a.exec();
}
