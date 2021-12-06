#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "icowidget.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    void resizeEvent(QResizeEvent *e);

    Ui::MainWindow *ui;
    IcoWidget *m_icoWidget;
};

#endif // MAINWINDOW_H
