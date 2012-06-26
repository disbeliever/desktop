#ifndef DESKTOP_H
#define DESKTOP_H

#include <QMainWindow>
#include "../desktopitem.h"
#include "../items/itembook.h"

namespace Ui {
class Desktop;
}

class Desktop : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit Desktop(QWidget *parent = 0);
    ~Desktop();
    int countItems();
    void addItem(IDesktopItem *item);
    
private:
    Ui::Desktop *ui;
    WidgetList *items;

private slots:
    void addNewBook();
};

#endif // DESKTOP_H
