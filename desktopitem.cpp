#include "desktopitem.h"

IDesktopItem::IDesktopItem(QWidget *parent) :
    QGraphicsView(parent)
{
    dragging = false;
}

WidgetList::WidgetList() {
    items = new QList<IDesktopItem>();

    //ItemBook *book = new ItemBook("Test title");
}

int WidgetList::countItems() {
    return items->count();
}

void IDesktopItem::dragEnterEvent(QDragEnterEvent*) {
}

void IDesktopItem::dragLeaveEvent(QDragEnterEvent*) {
}

void IDesktopItem::mousePressEvent(QMouseEvent *event) {
    if (event->button() == Qt::LeftButton) {
        dragging = true;
        event->accept(); // do not propagate
        if (isWindow())
            offset = event->globalPos() - pos();
        else
            offset = event->pos();
    }
}

void IDesktopItem::mouseReleaseEvent(QMouseEvent *event) {
    dragging = false;
    event->accept();
    offset = QPoint();
}

void IDesktopItem::mouseMoveEvent(QMouseEvent *event) {
    if (dragging) {
        event->accept(); // do not propagate
        if (isWindow())
            move(event->globalPos() - offset);
        else
            move(mapToParent(event->pos() - offset));
    }
}

QPoint IDesktopItem::getCoord() {
    return this->pos();
}
