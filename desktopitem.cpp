#include "desktopitem.h"

DesktopItem::DesktopItem(QWidget *parent) :
    QWidget(parent)
{
}

QPoint DesktopItem::getCoord() {
    return coord;
}
