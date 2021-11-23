#include <QApplication>
#include "uiModules/control.h"
#include "uiModules/train.h"
#include "uiModules/master.h"
#include "uiModules/test.h"
#include <QWidget>
#include <QHBoxLayout>
#include <QFont>

int main(int argc, char *argv[]) {
	QApplication a(argc, argv);

	// main widget
	auto *mainWidget = new QWidget;
	mainWidget->setMinimumSize(1280, 720);
	auto *hboxLayout = new QHBoxLayout;

	auto *font = new QFont();
	font->setFamily("Source code pro");
	QApplication::setFont(*font);

	auto *uiChangeQWidget = new UiChangeQWidget;
	auto *masterUi = new MasterUI;
	auto trainWidget = new TrainUI;

	hboxLayout->addWidget(uiChangeQWidget);
	hboxLayout->addWidget(trainWidget);
	mainWidget->setLayout(hboxLayout);
	mainWidget->show();


	return QApplication::exec();
}
