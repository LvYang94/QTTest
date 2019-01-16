#include "qttest.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	QTTest w;
	w.show();
	return a.exec();
}
