#include "bandmapview.h"

BandMapView::BandMapView(QWidget *parent) : QGraphicsView(parent)
{
    // Initialize Variables
    lower_bound = MHz(14.150);
    scale=4;

    // Create Scene
    scene = new QGraphicsScene(this);
    this->setScene(scene);

    // Set Widget Settings
    this->setMinimumWidth(200);
    this->setHorizontalScrollBarPolicy ( Qt::ScrollBarAlwaysOff );
    this->setVerticalScrollBarPolicy ( Qt::ScrollBarAlwaysOff );
}


/* Redraws on showEvent */
void BandMapView::showEvent(QShowEvent* event)
{
   QGraphicsView::showEvent(event);
   draw_bandmap();
}

/* Redraws on resizeEvent */
void BandMapView::resizeEvent(QResizeEvent* event)
{
   QGraphicsView::resizeEvent(event);
   draw_bandmap();
}

void BandMapView::increaseScale(){
    if(scale < 11) scale--;
    draw_bandmap();
}

void BandMapView::decreaseScale(){
    if(scale > 0) scale++;
    draw_bandmap();
}

void BandMapView::draw_bandmap(){

   // Set Scale
   freq_t round_numbers[11] = {500, 1000, 2500, 5000, 10000, 25000, 50000, 1000000, 250000, 500000, 1000000}; //Scale per 150 pixels

   // Draw Hash Marks
   for(int y = 0; y < this->height(); y+= 30){
        if (y % 150 != 0)
            this->scene->addLine(50,y,55,y);
   }

   //Draw Frequency Markers
   for(int y = 0; y < this->height(); y+=150){
       freq_t marker = lower_bound + ((y/150)*round_numbers[scale]);

       QGraphicsTextItem *ptr = this->scene->addText(DXXYUtil::freq_string(marker, DXXYUtil::MHz, 3));
       ptr->setY(y - 12);
   }

   // Main Line
   this->scene->addLine(55,0,55,this->height());
   this->setSceneRect(0,0,this->width(),this->height());
}


