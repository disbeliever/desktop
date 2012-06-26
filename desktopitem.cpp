#include "desktopitem.h"
#include "items/itembook.h"

IDesktopItem::IDesktopItem(QWidget *parent) :
    QGraphicsView(parent)
{
    dragging = false;
}

WidgetList::WidgetList() {
    items = new QList<IDesktopItem>();

    ItemBook *book = new ItemBook("Test title");
}

int WidgetList::countItems() {
    return items->count();
}

void IDesktopItem::dragEnterEvent(QDragEnterEvent *event) {
    dragging = true;
}

void IDesktopItem::dragLeaveEvent(QDragEnterEvent *event) {
    dragging = false;
}

void ItemBook::mouseMoveEvent(QMouseEvent *event) {
    if (dragging) {
        move(event->pos());
    }
}
