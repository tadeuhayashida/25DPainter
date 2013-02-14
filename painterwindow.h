#ifndef PAINTERWINDOW_H
#define PAINTERWINDOW_H

#include <QWidget>
#include<QtGui>
#include<QtCore>
#include<qwt/qwt_curve_fitter.h>
#include"objectstroke.h"
#include <iostream>

typedef QList<ObjectStroke> ObjectStrokeList;
QDataStream &operator<<(QDataStream &out, const ObjectStroke &o);
QDataStream &operator>>(QDataStream &in, ObjectStroke &o);

class PainterWindow : public QWidget
{
    Q_OBJECT
public:
    explicit PainterWindow(QWidget *parent = 0);

    
signals:
    
public slots:


private:
    //variables
    bool startingObject;
    int strokeCounter;
    ObjectStrokeList objectStrokeList;


    //functions
    void paint(QPainter &painter);
    void CreateNewStroke();



protected:
    void paintEvent(QPaintEvent *e);
    void mousePressEvent(QMouseEvent *e);
    void mouseReleaseEvent(QMouseEvent *e);
    void mouseMoveEvent(QMouseEvent *e);
    
};

#endif // PAINTERWINDOW_H
