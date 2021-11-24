//
// Created by yolo on 2021/11/24.
//

#include "window.h"

QWindow::QWindow() {

	this->setMinimumSize(1280, 720);
	auto *hboxLayout = new QHBoxLayout(this);

	auto *uiChangeQWidget = new UiChangeQWidget;
//	auto *masterUi = new MasterUI;
	auto trainWidget = new TrainUI;

	hboxLayout->addWidget(uiChangeQWidget);
	hboxLayout->addWidget(trainWidget);
	hboxLayout->setMargin(0);
	hboxLayout->setSpacing(0);

}


