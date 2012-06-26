#ifndef DESKTOPITEM_H
#define DESKTOPITEM_H

#include <QtGui>

class IDesktopItem : public QGraphicsView
{
    Q_OBJECT

public:
    explicit IDesktopItem(QWidget *parent = 0);
    virtual QPoint getCoord()=0;
private:
    //virtual QPoint *coord;
    void dragEnterEvent(QDragEnterEvent *);
    void dragLeaveEvent(QDragEnterEvent *);
    bool dragging;
signals:

public slots:

};

class WidgetList
{
public:
    WidgetList();
    ~WidgetList();
    int countItems();
    //void append(IDesktopItem& item);
private:
    QList<IDesktopItem> *items;
};

#endif // DESKTOPITEM_H
