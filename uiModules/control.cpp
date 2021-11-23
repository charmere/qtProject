//
// Created by yolo on 2021/11/23.
//

#include "control.h"

UiChangeQWidget::UiChangeQWidget() {

	// limit width for master
	setMaximumWidth(100);

	// master button
	masterButton = new QPushButton("master", this);
	masterButton->setFixedSize(60, 60);
	masterButton->setStyleSheet("border:1px solid black;\n"
								"border-radius:10%;");

	//train button
	trainButton = new QPushButton("train", this);
	trainButton->setFixedSize(60, 60);
	trainButton->setStyleSheet("border:1px solid black;\n"
							   "border-radius:10%;");

	//test button
	testButton = new QPushButton("test", this);
	testButton->setFixedSize(60, 60);
	testButton->setStyleSheet("border:1px solid black;\n"
							  "border-radius:10%;");

	// layout add button
	vbox_layout = new QVBoxLayout();

	vbox_layout->addWidget(masterButton);
	vbox_layout->addWidget(trainButton);
	vbox_layout->addWidget(testButton);

	hbox_layout = new QHBoxLayout();
	hbox_layout->addSpacerItem(new QSpacerItem(10, 10, QSizePolicy::Expanding, QSizePolicy::Expanding));
	hbox_layout->addLayout(vbox_layout);
	hbox_layout->addSpacerItem(new QSpacerItem(10, 10, QSizePolicy::Expanding, QSizePolicy::Expanding));
	setLayout(hbox_layout);
}
