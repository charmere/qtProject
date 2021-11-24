#include <QApplication>

#include <QWidget>
#include <QHBoxLayout>
#include <QFont>
#include "uiModules/window.h"

int main(int argc, char *argv[]) {
	QApplication a(argc, argv);
	auto *font = new QFont();
	font->setFamily("PingFang SC");
	font->setPixelSize(12);
	QApplication::setFont(*font);
	auto *window = new QWindow;
	window->show();

	return QApplication::exec();
}