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
    }
}

void IDesktopItem::mouseReleaseEvent(QMouseEvent *event) {
    dragging = false;
}

void IDesktopItem::mouseMoveEvent(QMouseEvent *event) {
    if (dragging) {
        QPoint point = parentWidget()->mapToGlobal(*(new QPoint(event->globalX() + event->x(), event->globalY() + event->y())));
        move(point);
    }
}

QPoint IDesktopItem::getCoord() {
    return this->pos();
}
