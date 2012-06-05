#ifndef DESKTOPITEM_H
#define DESKTOPITEM_H

#include <QWidget>

class DesktopItem : public QWidget
{
    Q_OBJECT

public:
    explicit DesktopItem(QWidget *parent = 0);
    QPoint getCoord();
    
private:
    QPoint coord;
signals:
    
public slots:
    
};

#endif // DESKTOPITEM_H
