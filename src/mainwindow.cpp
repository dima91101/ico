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

    QTimer * t = new QTimer(this);
    this->connect( t, SIGNAL( timeout() ), this, SLOT( updateFrame() ) );
    t->start(1000/60);

}

MainWindow::~MainWindow(){
    delete ui;
}

void MainWindow::updateFrame(){
    static int gradus = 0;
    m_icoWidget->setPositionForSecondary(gradus * GRADUS_TO_RADIAN, gradus); // radian | number print
    gradus += 2;
    if(gradus >= 360) gradus = 0;
}

void MainWindow::resizeEvent(QResizeEvent *e){
    m_icoWidget->resizeEvent(e);
}
