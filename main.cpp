#include <QApplication>

#include "ui/desktop.h"

int main(int argc, char **argv) {
	QApplication *app = new QApplication(argc, argv);
    Desktop *desktop = new Desktop();
    desktop->show();
    return app->exec();
}
