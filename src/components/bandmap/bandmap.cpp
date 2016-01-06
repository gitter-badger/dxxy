#include <QObject>
#include <QWidget>
#include <QDockWidget>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QGraphicsSimpleTextItem>
#include <QFont>

#include "bandmap.h"
#include "bandmapview.h"

BandMap::BandMap(DXXY *man) : DXXYWidget(man)
{
    BandMapView *bandmapview = new BandMapView(this);
    setWidget(bandmapview);
}
