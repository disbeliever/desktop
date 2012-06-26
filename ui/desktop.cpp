#include <QtGui>
#include "desktop.h"
#include "../ui_desktop.h"

Desktop::Desktop(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Desktop)
{
    ui->setupUi(this);
    connect(ui->actionQuit, SIGNAL(triggered()), SLOT(close()));
    connect(ui->actionBook, SIGNAL(triggered()), SLOT(addNewBook()));
}

Desktop::~Desktop()
{
    delete ui;
}

int Desktop::countItems()
{
    //return items->countItems();
    return 0;
}

void Desktop::addNewBook()
{
    ItemBook *book = new ItemBook("Искусство системного мышления");
    //book->ui->setParent(ui->graphicsView);
    //book->ui->show();
    book->setParent(ui->graphicsView);
    book->show();
}
