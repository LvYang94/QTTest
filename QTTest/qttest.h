#ifndef QTTEST_H
#define QTTEST_H

#include <QtWidgets/QMainWindow>
#include "ui_qttest.h"

class QTTest : public QMainWindow
{
	Q_OBJECT

public:
	QTTest(QWidget *parent = 0);
	~QTTest();

private:
	Ui::QTTestClass ui;
};

#endif // QTTEST_H
