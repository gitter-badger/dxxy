#ifndef DXXYWIDGET_H
#define DXXYWIDGET_H

class DXXYWidget;

#include <QDockWidget>

#include "../dxxywindow.h"
#include "../dxxy.h"
#include "dxxycomponent.h"
#include "dxxyutil.h"

class DXXYWidget : public QDockWidget, public DXXYComponent
{
public:
    DXXYWidget(DXXY *man);
private:
    DXXY* man;
};

#endif // DXXYWIDGET_H
