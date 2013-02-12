#include "objectstroke.h"

ObjectStroke::ObjectStroke(int i)
{
    this->finished=false;
    this->oIndice=i;
    this->closed=false;
    lineColor=Qt::blue;
    bgColor=Qt::transparent;
    started=false;
    nome = "Stroke "+ i ;
}

ObjectStroke::ObjectStroke(int indice, QString nome, QColor lc, QColor bc, bool fd, bool sd, bool cd, int ls, QList<QPoint> l){
    finished=fd;
    oIndice=indice;
    closed=cd;
    lineColor=lc;
    bgColor=bc;
    started=sd;
    lineSize=ls;
    pList=l;
    this->nome=nome;
}
