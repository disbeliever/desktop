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
    QString GetPath();
    void SetPath(QString path);
    QGraphicsView *ui;
private:
    QString Title;
    QString Author;
    QString Path;
    QList<QString> Tags;
    bool dragging;
    void mouseDoubleClickEvent(QMouseEvent*);
};

#endif // ITEMBOOK_H
