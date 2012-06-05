#include "itembook.h"

ItemBook::ItemBook()
{
}

ItemBook::ItemBook(QString Title)
{
    this->Title = Title;
}

QString ItemBook::GetTitle()
{
    return Title;
}
