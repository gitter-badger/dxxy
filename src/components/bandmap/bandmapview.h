#ifndef BANDMAPVIEW_H
#define BANDMAPVIEW_H

#include <stdint.h>

#include <QObject>
#include <QWidget>
#include <QDockWidget>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QGraphicsSimpleTextItem>
#include <QFont>

#include "../dxxyutil.h"

#include <hamlib/rigclass.h>

class BandMapView : public QGraphicsView
{
public:
    BandMapView(QWidget *parent = 0);

private:
    QGraphicsScene *scene;
    void draw_bandmap();

    // Scale
    void increaseScale();
    void decreaseScale();
    u_int8_t scale;
    freq_t lower_bound;

    // Inherit Events
    void resizeEvent(QResizeEvent* event);
    void showEvent(QShowEvent* event);

};

#endif // BANDMAPVIEW_H
