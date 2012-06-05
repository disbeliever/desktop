#ifndef ITEMBOOK_H
#define ITEMBOOK_H

#include "../desktopitem.h"

class ItemBook : DesktopItem
{
public:
    ItemBook();
    ItemBook(QString Title);
    QString GetTitle();
    QString GetAuthor();
private:
    QString Title;
    QString Author;
    QList<QString> Tags;
};

#endif // ITEMBOOK_H
