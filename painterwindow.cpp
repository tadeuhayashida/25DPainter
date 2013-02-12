#include "painterwindow.h"

QDataStream &operator<<(QDataStream &out, const ObjectStroke &o)
{
    out << o.bgColor<<o.closed<<o.finished<<o.started<<o.lineColor<<o.lineSize<<o.nome<<o.oIndice <<o.pList;
    return out;
}

QDataStream &operator>>(QDataStream &in, ObjectStroke &o)
{
    QColor lineColor;
    QColor bgColor;
    bool closed;
    bool finished;
    bool started;
    quint32 lineSize;
    QString nome;
    quint32 oIndice;
    QList<QPoint> pList;

    in >> bgColor >> closed >> finished >> started >> lineColor >> lineSize >> nome >> oIndice >> pList;
    o = ObjectStroke(oIndice, nome, lineColor,bgColor, finished,started,closed, lineSize, pList);
    return in;
}


PainterWindow::PainterWindow(QWidget *parent) :
    QWidget(parent)
{
    startingObject = true;
    strokeCounter = 0;

}

void PainterWindow::paint(QPainter &painter)
{

}

void PainterWindow::CreateNewStroke()
{
    objectStrokeList.push_back(ObjectStroke(++strokeCounter));

}

void PainterWindow::paintEvent(QPaintEvent *e)
{
    QPainter painter(this);
    const QRect & rect = e->rect();
    painter.eraseRect(rect);
    //if(aa) painter.setRenderHint(QPainter::Antialiasing);
    paint(painter);

}

void PainterWindow::mousePressEvent(QMouseEvent *e)
{
    if(startingObject){
        CreateNewStroke();
        startingObject = false;

    }

}

void PainterWindow::mouseReleaseEvent(QMouseEvent *e)
{
}

void PainterWindow::mouseMoveEvent(QMouseEvent *e)
{
}
