#include "desktop.h"
#include "../ui_desktop.h"

Desktop::Desktop(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Desktop)
{
    ui->setupUi(this);
}

Desktop::~Desktop()
{
    delete ui;
}

int Desktop::countItems()
{
    return items.count();
}

void Desktop::addItem(DesktopItem *item)
{
    items.insert(items.count(), item);
}
