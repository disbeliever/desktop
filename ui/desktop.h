#ifndef DESKTOP_H
#define DESKTOP_H

#include <QMainWindow>
#include "../desktopitem.h"

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
    void addItem(DesktopItem *item);
    
private:
    Ui::Desktop *ui;
    QList<DesktopItem> items;
};

#endif // DESKTOP_H
