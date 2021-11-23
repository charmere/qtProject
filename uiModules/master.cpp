//
// Created by yolo on 2021/11/23.
//

#include "master.h"

MasterUI::MasterUI() {
	showSoftUseInstrLabel = new QLabel("Software instructions......", this);
	showSoftUseInstrLabel->setAlignment(Qt::AlignHCenter);
	layout = new QHBoxLayout(this);
	layout->addWidget(showSoftUseInstrLabel);
	setLayout(layout);
}

