#include "itembook.h"

ItemBook::ItemBook()
{
    dragging = false;
    ui = new QGraphicsView();
}

ItemBook::ItemBook(QString Title)
{
    dragging = false;
    this->Title = Title;

    QGraphicsScene scene;
    scene.addText(this->Title);
    QPen pen(QColor(0,0,0));
    scene.addLine(0,0,1,2,pen);
    this->setScene(&scene);
}

QString ItemBook::GetTitle()
{
    return Title;
}

QPoint ItemBook::getCoord() {
    return QPoint(0,0);
}

void ItemBook::mouseReleaseEvent(QMouseEvent *event) {
    dragging = false;
    QMessageBox msgBox;
    msgBox.setText("Hello world");
    msgBox.exec();
}

void ItemBook::mousePressEvent(QMouseEvent *event) {
    dragging = true;
}

void ItemBook::mouseDoubleClickEvent(QMouseEvent *event) {

}

//void ItemBook::mouseMoveEvent(QMouseEvent *event) {
//    if (dragging) {
//        move(event->pos());
//    }
//}
