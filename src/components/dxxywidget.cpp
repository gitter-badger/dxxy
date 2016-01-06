#include "dxxywidget.h"

DXXYWidget::DXXYWidget(DXXY *man) : QDockWidget(), DXXYComponent(man)
{
    dxxy = man;
}
