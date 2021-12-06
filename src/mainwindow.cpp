#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowTitle(tr("Setup Encoders"));

    m_icoWidget = new IcoWidget(ui->widget);
    m_icoWidget->setIcoType(IcoWidget::IT_DrawComplex);
    m_icoWidget->setFromTo(0.1, 2.5); // in radian
    m_icoWidget->setPositionForSecondary(0.0,0,0);
}

MainWindow::~MainWindow(){
    delete ui;
}

void MainWindow::resizeEvent(QResizeEvent *e){
    m_icoWidget->resizeEvent(e);
}
