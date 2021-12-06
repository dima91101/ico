#include "icowidget.h"

IcoWidget::IcoWidget(QWidget *parent):
    QWidget(parent),
    m_isDrawpieOver(false),
    m_currentAngleArrow(0.0),
    m_currentNumAngle(0.0),
    m_translateWidthToCenterWidget(0),
    m_translateHeightToCenterWidget(0),
    m_diameterWidget(1),
    m_from(0.0),
    m_to(0.0),
    m_icoType(IT_DrawCircle),
    m_mainQwidget(parent)
{

}

void IcoWidget::setFromTo(double from, double to){
    m_from = RadianToGradus(from);
    m_to = RadianToGradus(to);

    RecountCoordWidget();
}

void IcoWidget::setPositionForSecondary(qreal inputVal, int multiplier, qreal val){
    const int minMultiply = 1;
    const int maxMultiply = 20;

    if (multiplier < minMultiply) multiplier = minMultiply;
    if (multiplier > maxMultiply) multiplier = maxMultiply;

    m_currentAngleArrow = inputVal * maxMultiply;
    m_currentNumAngle = val;    

    RecountCoordWidget();
}

void IcoWidget::setIcoType(ICO_TYPE var){
    m_icoType = var;
}

void IcoWidget::resizeEvent(QResizeEvent *e){
    this->resize(m_mainQwidget->width(),
                 m_mainQwidget->height());
    RecountCoordWidget();
}

void IcoWidget::paintEvent(QPaintEvent *){
    QPainter painter(this);
    switch (m_icoType) {
    case IT_DrawCircle :
        DrawFullWidget(painter);
        break;
    case IT_DrawComplex :
        DrawFullWidget(painter);
        break;
    case IT_DrawPicture :
        DrawPicture(painter);
        break;
    }
}

void IcoWidget::DrawFullWidget(QPainter &painter){
    DrawLayoutCircle(painter);
    DrawGridSectorAngle(painter);
    DrawArrow(painter);
    DrawCurrentNumAngle(painter);
    DrawLayoutGradus(painter);
}

void IcoWidget::DrawLayoutCircle(QPainter &painter){
    painter.setPen(QPen(QColor(50,75,50,255),1.0,Qt::SolidLine,Qt::RoundCap));
    painter.setRenderHint(QPainter::Antialiasing, true);

    QBrush br_c(QColor(30,60,30,75),Qt::SolidPattern);
    painter.setBrush(br_c);
    painter.drawEllipse( m_translateWidthToCenterWidget,
                         m_translateHeightToCenterWidget,
                         m_diameterWidget,
                         m_diameterWidget);
}

void IcoWidget::DrawGridSectorAngle(QPainter &painter){
    const double offsetWidth = 0.01 * m_diameterWidget;  // 1% of full diameter
    const double offsetHeight = 0.02 * m_diameterWidget; // 2% of full diameter
    QRectF rectangle(offsetWidth + m_translateWidthToCenterWidget,
                     offsetWidth + m_translateHeightToCenterWidget,
                     m_diameterWidget - offsetHeight,
                     m_diameterWidget - offsetHeight);

    int startAngle = 0;
    int spanAngle = 0;
    const int rotateAngle = 90;
    const int maxGradus = 360;
    if ((m_from) < (m_to)){
        startAngle =  -(m_from - rotateAngle);
        spanAngle = -(m_to - m_from);
    }
    if ((m_from) > (m_to)){
        startAngle =  -(m_from - rotateAngle);
        spanAngle = -(maxGradus - m_from + m_to);
    }

    painter.setPen(QPen(QColor(34,136,238,255),0.7,Qt::SolidLine,Qt::RoundCap));
    QBrush br_pie(QColor(17,68,119,150),Qt::DiagCrossPattern );
    painter.setBrush(br_pie);
    painter.drawPie(rectangle, startAngle * 16, spanAngle * 16);

}

void IcoWidget::DrawArrow(QPainter &painter){
    QColor col3(20,255,20,255);
    QColor col4(20,200,20,90);

    QMatrix myMatrix2;
    myMatrix2.translate(m_diameterWidget/2 + m_translateWidthToCenterWidget,
                        m_diameterWidget/2 + m_translateHeightToCenterWidget);
    myMatrix2.rotate((m_currentAngleArrow - 90));
    painter.setWorldMatrix(myMatrix2);

    painter.setPen(QPen(col3,0.9,Qt::SolidLine,Qt::RoundCap));
    QPolygon polygon1;

    polygon1.putPoints( 0, 7,
                        m_diameterWidget/2.15,0 ,
                        4, 4,
                        -2, 4,
                        -4, 2,
                        -4,-2,
                        -2,-4,
                        4,-4);

    painter.drawPolygon(polygon1,Qt::WindingFill);
    QBrush br1(col4,Qt::SolidPattern);

    QPainterPath pp1;
    pp1.addPolygon(polygon1);
    painter.fillPath(pp1,br1);

}

void IcoWidget::DrawCurrentNumAngle(QPainter &painter/*, QString &str*/){
    QFontMetrics fm(this->font());
    int hf = fm.height();

    QMatrix myTextMatrix2;
    painter.setWorldMatrix(myTextMatrix2);
    QString dig = QString::number(m_currentAngleArrow,'f',2).rightJustified(6,'0',true);
    QString ss1(tr("Position (.10): ") + dig + "°");

    qreal d = QString(dig.split('.').at(1)).toInt();
    d= d*0.6;
    QString onlyVal = QString::number(m_currentNumAngle).rightJustified(5,'0',true);
    QString showTextVal =  QString((tr("Value(RAW): ") + onlyVal));
    painter.drawText(5,hf,showTextVal);

    painter.drawText(5,hf * 3 ,ss1);
    painter.drawText(5,hf * 2 ,tr("Position (.60): ") + QString(dig.split('.').at(0)) +
                     "°"  + QString::number((int)d).rightJustified(2,'0',true) + "'");

    QFont font  = this->font();
    const int old_p_size = font.pointSize();
    font.setPointSize(125);
    painter.setFont(font);
    QFontMetrics fmBig(painter.font());
    QBrush br_c_big(QColor(0,0,0,255),Qt::SolidPattern);
    painter.setBrush(br_c_big);
    painter.drawRoundedRect((m_diameterWidget / 2 + m_translateWidthToCenterWidget) - (fmBig.width(onlyVal)/2),
                            (m_diameterWidget / 2 + m_translateHeightToCenterWidget) - (fmBig.height()/2),
                             fmBig.width(onlyVal),fmBig.height(),20,20 );
    painter.drawText((m_diameterWidget / 2 + m_translateWidthToCenterWidget) - (fmBig.width(onlyVal)/2),
                     (m_diameterWidget / 2 + m_translateHeightToCenterWidget) + (fmBig.height()/2) -
                     (fmBig.height() * 0.2) , onlyVal);

    font.setPointSize(old_p_size);
    painter.setFont(font);
}

void IcoWidget::DrawLayoutGradus(QPainter &painter){
    QColor col3(20,255,20,255);
    painter.setPen(QPen(col3,0.9,Qt::SolidLine,Qt::RoundCap));

    for (int i_line = 0; i_line < 360 ; i_line ++){
        QMatrix myMatrixLines;
        myMatrixLines.translate(m_diameterWidget/2 + m_translateWidthToCenterWidget,
                                m_diameterWidget/2 + m_translateHeightToCenterWidget);
        myMatrixLines.rotate(i_line);
        painter.setWorldMatrix(myMatrixLines);
        int lenI = 1;
        if (!(i_line% 5) )  lenI = 4;
        if (!(i_line% 15) )  lenI = 8;
        if (!(i_line% 45) )  lenI = 15;
        painter.drawLine(0,(m_diameterWidget/2) + lenI ,
                         0,(m_diameterWidget/2));
    }
}

void IcoWidget::DrawPicture(QPainter &painter){
    QPixmap pixmap1(":/res/ch_sw6.png");
    painter.drawPixmap(m_translateWidthToCenterWidget,
                       m_translateHeightToCenterWidget,
                       m_diameterWidget,
                       m_diameterWidget,
                       pixmap1);
    painter.setPen(QPen(QColor(215, 160, 2),0.5,Qt::SolidLine,Qt::RoundCap));
    painter.setRenderHint(QPainter::Antialiasing, true);
    QBrush br_c(QColor(34, 26, 28),Qt::SolidPattern);
    painter.setBrush(br_c);

    QString textAlert(tr("For further work, the base should be installed on a folding azimuth and is locked!"));

    //     For further work, the base should be installed on a folding azimuth and is locked!
    //     Для дальнейшей работы антенная колонка должна быть зафиксирована!

    QFontMetrics fm(this->font());
    const int hf = fm.height();
    const int wf = fm.width(textAlert);
    const int wid = wf + 20;
    QRect r((m_diameterWidget / 2 + m_translateWidthToCenterWidget) - (wid / 2) ,33,wid,hf+5);
    painter.drawRoundedRect(r,12,12);
    painter.setPen(QPen(QColor(255, 0, 0),1.0,Qt::SolidLine,Qt::RoundCap));
    r.setX(r.x() + 10);
    r.setY(r.y() + 1);
    painter.drawText(r,textAlert);
}

void IcoWidget::RecountCoordWidget(){
    const int offset = 40;
    if(m_mainQwidget->width() > m_mainQwidget->height()){
        m_diameterWidget = m_mainQwidget->height() - offset;
        m_translateWidthToCenterWidget = (m_mainQwidget->width() - m_diameterWidget) / 2;
        m_translateHeightToCenterWidget = offset/2;
    } else {
        m_diameterWidget = m_mainQwidget->width() - offset;
        m_translateHeightToCenterWidget = (m_mainQwidget->height() - m_diameterWidget)/2;
        m_translateWidthToCenterWidget = offset/2;
    }
//    if(m_from || m_to){
//        update();
//    }
}

int IcoWidget::RadianToGradus(double radian){
    return (int)(radian * (180.0 / M_PI));
}