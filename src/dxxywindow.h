#ifndef DXXYWINDOW_H
#define DXXYWINDOW_H

#include <QMainWindow>

namespace Ui {
class DXXYWindow;
}

class DXXYWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit DXXYWindow(QWidget *parent = 0);
    ~DXXYWindow();

private:
    Ui::DXXYWindow *ui;

    void createActions();
    void createMenu();
};

#endif // DXXYWINDOW_H
