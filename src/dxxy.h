#ifndef DXXY_H
#define DXXY_H

class DXXY;

#include <QObject>
#include <QString>
#include <QMessageBox>

#include <dxxywindow.h>
#include "log/dxxylogmanager.h"
#include "components/dxxycomponent.h"

class DXXY
{
public:
    DXXY(DXXYWindow& dxxywindowp);

    // Config
    enum Platform {Windows, Mac, Linux};
    Platform platform;

    // Errors
    enum MessageType {critical, warning, info};
    void NewError(MessageType type, QString mesg);

private:
    DXXYWindow* dxxywindow;

    // Component Manager
    void LoadComponents();
};

#endif // DXXY_H
