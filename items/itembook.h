#ifndef ITEMBOOK_H
#define ITEMBOOK_H

#include "../desktopitem.h"
#include <QtGui>

class ItemBook : public IDesktopItem
{
    Q_OBJECT
public:
    ItemBook();
    //ItemBook(QWidget *parent = 0);
    ItemBook(QString Title);
    QString GetTitle();
    QString GetAuthor();
    QPoint getCoord();
    QGraphicsView *ui;
private:
    QString Title;
    QString Author;
    QList<QString> Tags;
    bool dragging;
    void mousePressEvent(QMouseEvent*);
    void mouseReleaseEvent(QMouseEvent*);
    void mouseMoveEvent(QMouseEvent*);
    void mouseDoubleClickEvent(QMouseEvent*);
};

#endif // ITEMBOOK_H
