#ifndef OBJECTSTROKE_H
#define OBJECTSTROKE_H
#include<QtGui>
class ObjectStroke
{
public:
    ObjectStroke(){};
    ObjectStroke(int indice, QString nome, QColor lc,QColor bc,bool fd, bool sd, bool cd,int ls,QList<QPoint> l );
    ObjectStroke(int i);

    QPoint pos;
    bool finished;
    bool closed;
    bool started;
    QList<QPoint> pList;
    QPolygonF oPolygon;
    int oIndice;
    QColor lineColor;
    QColor bgColor;
    int lineSize;
    QString nome;

};

#endif // OBJECTSTROKE_H
