#include "itembook.h"

ItemBook::ItemBook()
{
    dragging = false;
}

ItemBook::ItemBook(QString Title)
{
    dragging = false;
    this->Title = Title;

    QGraphicsScene scene;
    scene.setParent(this);
    scene.addText(this->Title);
    QPen pen(QColor(0,0,0));
    scene.addLine(QLineF(0,0,1,2));
    this->resize(64,64*1.5);
    this->setScene(&scene);

    QGraphicsSimpleTextItem text;
    text.setText("Hello world");
    scene.addItem(&text);
}

QString ItemBook::GetTitle()
{
    return Title;
}

void ItemBook::SetPath(QString path) {
    this->Path = path;
}

QString ItemBook::GetPath() {
    return this->Path;
}

void ItemBook::mouseDoubleClickEvent(QMouseEvent *event) {

}
