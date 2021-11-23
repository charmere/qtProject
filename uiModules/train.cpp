//
// Created by yolo on 2021/11/23.
//

#include "train.h"
#include <QWidget>

TrainUI::TrainUI() {

	// space 0
	industryGridLayout->setSpacing(0);
	trainArgsGridLayout->setSpacing(0);
	startTrainGridLayout->setSpacing(0);
	leftVboxLayout->setSpacing(0);
	rightVboxLayout->setSpacing(0);
	trainLayout->setSpacing(0);

	// left Widget
	trainProgressLabel->setAlignment(Qt::AlignHCenter);
	trainProgressLabel->setStyleSheet("border:1px solid black");

	showTrainProgressLabel->setAlignment(Qt::AlignCenter);
	leftVboxLayout->addWidget(trainProgressLabel, 1);
	leftVboxLayout->addWidget(showTrainProgressLabel, 29);
	leftWidget->setLayout(leftVboxLayout);
	leftWidget->setObjectName("leftWidget");
	leftWidget->setStyleSheet("#leftWidget{border:1px solid black}");
	leftWidget->setContentsMargins(0, 0, 0, 0);

	// -----------------------------------------------------------------------------------
	// right widget
	rightVboxLayout->addWidget(trainSettingLabel, 1);

	rightVboxLayout->addWidget(industryAndProductLabel, 1);
	// industry and product widget
	industryGridLayout->addItem(new QSpacerItem(10, 10, QSizePolicy::Fixed, QSizePolicy::Expanding), 0, 0, 1, 3);
	industryGridLayout->addWidget(industryNameLabel, 0, 1, 1, 1);
	industryGridLayout->addWidget(productNameLabel, 1, 1, 1, 1);
	industryGridLayout->addWidget(algorithmNameLabel, 2, 1, 1, 1);
	industryAndProductWidget->setLayout(industryGridLayout);
	rightVboxLayout->addWidget(industryAndProductWidget, 5);

	// train args and dataset widget
	rightVboxLayout->addWidget(trainArgsAndDatasetLabel, 1);
	trainArgsGridLayout->addItem(new QSpacerItem(10, 10, QSizePolicy::Fixed, QSizePolicy::Expanding), 0, 0, 1, 4);
	trainArgsGridLayout->addWidget(epochsLabel, 0, 1, 1, 1);
	trainArgsGridLayout->addWidget(batchSizeLabel, 1, 1, 1, 1);
	trainArgsGridLayout->addWidget(trainDatasetLabel, 2, 1, 1, 1);
	trainArgsGridLayout->addWidget(trainDatasetComboBox, 3, 1, 1, 2);
	trainArgsGridLayout->addWidget(epochsComboBox, 0, 2, 1, 1);
	trainArgsGridLayout->addWidget(batchSizeComboBox, 1, 2, 1, 1);
	trainArgsGridLayout->addItem(new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Expanding), 0, 0, 1, 4);
	trainArgsAndDatasetWidget->setLayout(trainArgsGridLayout);
	rightVboxLayout->addWidget(trainArgsAndDatasetWidget, 8);

	// start train widget
	startTrainGridLayout->addWidget(startTrainPushButton, 0, 0, Qt::AlignCenter);
	startTrainWidget->setLayout(startTrainGridLayout);
	rightVboxLayout->addWidget(startTrainWidget, 14);

	rightWidget->setLayout(rightVboxLayout);
	rightWidget->setObjectName("rightWidget");
	rightWidget->setStyleSheet("#rightWidget{border:1px solid black}");


	trainLayout->addWidget(leftWidget);
	trainLayout->addWidget(rightWidget);
	trainLayout->setStretch(0, 1);


	setLayout(trainLayout);
}

