#ifndef ICOWIDGET_H
#define ICOWIDGET_H

#include <QWidget>
#include <QPainter>
#include <QMatrix>
#include <QDebug>
#include <QTimer>
#include <QMouseEvent>
#include <QResizeEvent>

class IcoWidget : public QWidget
{
    Q_OBJECT
public:
    enum ICO_TYPE{
        IT_DrawCircle  = 0,
        IT_DrawPicture = 1,
        IT_DrawComplex = 2
    };
    IcoWidget(QWidget *parent = nullptr);
    ~IcoWidget(){}

//    void setFromTo(BYTE from, BYTE to);
    void setFromTo(double from, double to);
    void setPositionForSecondary(qreal inputVal, int multiplier, qreal val);
    void setIcoType(ICO_TYPE var);

    void resizeEvent(QResizeEvent *e);
    void paintEvent(QPaintEvent *);

private:
    void DrawFullWidget(QPainter &painter);
    void DrawLayoutCircle(QPainter &painter);
    void DrawGridSectorAngle(QPainter &painter);
    void DrawArrow(QPainter &painter);
    void DrawCurrentNumAngle(QPainter &painter);
    void DrawLayoutGradus(QPainter &painter);
    void DrawPicture(QPainter &painter);

    void RecountCoordWidget();

    int RadianToGradus(double radian);

    bool m_isDrawpieOver;

    double m_currentAngleArrow;
    double m_currentNumAngle;

//    int m_offset;
//    int over1;
//    int over2;

    int m_translateWidthToCenterWidget;
    int m_translateHeightToCenterWidget;
    int m_diameterWidget;
    int m_from;
    int m_to;

    ICO_TYPE m_icoType;

    QWidget *m_mainQwidget;
};

#endif // ICOWIDGET_H
