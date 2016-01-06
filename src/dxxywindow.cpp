#include "dxxywindow.h"
#include "ui_dxxywindow.h"

DXXYWindow::DXXYWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::DXXYWindow)
{
    // Setup Main Window
      ui->setupUi(this);
      this->setWindowTitle("DXXY Amateur Radio Logging");
      this->showMaximized();

    // Default Actions

    // Default Menu

}

/* Handle Deletion */
DXXYWindow::~DXXYWindow()
{
    delete ui;
}

/* Create Actions*/
void DXXYWindow::createActions(){

}

/* Create Menus */
void DXXYWindow::createMenu(){

}
