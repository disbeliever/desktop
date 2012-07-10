#ifndef DESKTOPITEM_H
#define DESKTOPITEM_H

#include <QtGui>

class IDesktopItem : public QGraphicsView
{
    Q_OBJECT

public:
    explicit IDesktopItem(QWidget *parent = 0);
    //virtual QPoint getCoord()=0;
private:
    void mousePressEvent(QMouseEvent *event);
    void mouseReleaseEvent(QMouseEvent *event);
    void mouseMoveEvent(QMouseEvent *event);
    void dragEnterEvent(QDragEnterEvent *);
    void dragLeaveEvent(QDragEnterEvent *);
    bool dragging;
    QPoint offset;
    QPoint getCoord();
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
