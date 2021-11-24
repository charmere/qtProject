//
// Created by yolo on 2021/11/23.
//

#include "train.h"
#include <QWidget>

TrainUI::TrainUI() {

	// space 0
	industryGridLayout->setSpacing(0);
	trainArgsVboxLayout->setSpacing(0);
	startTrainGridLayout->setSpacing(0);
	leftVboxLayout->setSpacing(0);
	rightVboxLayout->setSpacing(0);
	trainLayout->setSpacing(0);

	// left Widget
	trainProgressLabel->setAlignment(Qt::AlignCenter);

	showTrainProgressLabel->setAlignment(Qt::AlignCenter);
	leftVboxLayout->addWidget(trainProgressLabel, 1);

	showTrainProgressLabel->setStyleSheet("border-top:1px solid black");
	leftVboxLayout->addWidget(showTrainProgressLabel, 29);
	leftVboxLayout->setMargin(0);
	leftVboxLayout->setSpacing(0);
	leftWidget->setLayout(leftVboxLayout);
	leftWidget->setObjectName("leftWidget");
	leftWidget->setStyleSheet("#leftWidget{border:1px solid black;}\n"
	                          "#leftWidget{border-right:0px solid black;}");
	leftWidget->setContentsMargins(0, 0, 0, 0);

	// -----------------------------------------------------------------------------------
	// right widget
	trainSettingLabel->setAlignment(Qt::AlignCenter);
	trainSettingLabel->setStyleSheet("border:0px solid black;\n"
	                                 "border-bottom:1px solid black");
	rightVboxLayout->addWidget(trainSettingLabel, 2);

	industryAndProductLabel->setStyleSheet("border:0px solid black;\n"
	                                       "border-bottom:1px solid black");
	rightVboxLayout->addWidget(industryAndProductLabel, 3);
	// industry and product widget
	industryGridLayout->addItem(new QSpacerItem(10, 10, QSizePolicy::Fixed, QSizePolicy::Expanding), 0, 0, 3, 1);
	industryGridLayout->addWidget(industryNameLabel, 0, 1, 1, 1);
	industryGridLayout->addWidget(productNameLabel, 1, 1, 1, 1);
	industryGridLayout->addWidget(algorithmNameLabel, 2, 1, 1, 1);
	industryAndProductWidget->setLayout(industryGridLayout);
	rightVboxLayout->addWidget(industryAndProductWidget, 8);

	// train args and dataset widget
	trainArgsAndDatasetLabel->setStyleSheet("border:1px solid black");
	rightVboxLayout->addWidget(trainArgsAndDatasetLabel, 3);

	epochHLayout->addWidget(epochsLabel);
	QStringList epochList = {"16", "32", "64", "128"};
	epochsComboBox->setFixedWidth(80);
	epochsComboBox->addItems(epochList);
	epochHLayout->addWidget(epochsComboBox);
	epochWidget = new QWidget();
	epochHLayout->setSpacing(0);
	epochHLayout->setMargin(0);
	epochWidget->setLayout(epochHLayout);
	trainArgsVboxLayout->addWidget(epochWidget, 1);
	batchSizeHLayout->addWidget(batchSizeLabel);
	QStringList batchSizeList = {"1", "2", "3", "4"};
	batchSizeComboBox->addItems(batchSizeList);
	batchSizeComboBox->setFixedWidth(80);
	batchSizeHLayout->addWidget(batchSizeComboBox);
	batchSizeWidget = new QWidget();
	batchSizeHLayout->setSpacing(0);
	batchSizeHLayout->setMargin(0);
	batchSizeWidget->setLayout(batchSizeHLayout);
	trainArgsVboxLayout->addWidget(batchSizeWidget, 1);

	trainDatasetLayout->addWidget(trainDatasetLabel, 1);

	QStringList datasetList = {"coco128", "coco", "imageNet"};
	trainDatasetComboBox->addItems(datasetList);
	trainDatasetLayout->addWidget(trainDatasetComboBox, 1);
	trainDatasetLayout->addItem(new QSpacerItem(1, 1, QSizePolicy::Expanding, QSizePolicy::Expanding));
	trainDatasetLayout->setStretch(2, 1);

	datasetWidget = new QWidget();
	trainDatasetLayout->setSpacing(0);
	trainDatasetLayout->setMargin(0);
	datasetWidget->setLayout(trainDatasetLayout);

	trainArgsVboxLayout->addWidget(datasetWidget, 2);

	addSpaceLayout = new QHBoxLayout();
	addSpaceLayout->addItem(new QSpacerItem(10, 10, QSizePolicy::Fixed, QSizePolicy::Expanding));
	addSpaceLayout->addLayout(trainArgsVboxLayout);
	trainArgsAndDatasetWidget->setLayout(addSpaceLayout);
	trainArgsAndDatasetWidget->setObjectName("argsDatasetWidget");
	trainArgsAndDatasetWidget->setStyleSheet("#argsDatasetWidget{border:0px solid black;}\n"
	                                         "#argsDatasetWidget{border-bottom:1px solid black;}");

	rightVboxLayout->addWidget(trainArgsAndDatasetWidget, 12);

	// start train widget
	startTrainPushButton->setMinimumSize(50, 40);
	startTrainPushButton->setStyleSheet("border:1px solid black;\n"
	                                    "border-radius:10%;");

	startTrainGridLayout->addWidget(startTrainPushButton, 0, 0, Qt::AlignCenter);
	startTrainWidget->setLayout(startTrainGridLayout);
	rightVboxLayout->addWidget(startTrainWidget, 30);
	rightVboxLayout->setSpacing(0);
	rightVboxLayout->setMargin(0);

	rightWidget->setLayout(rightVboxLayout);
	rightWidget->setObjectName("rightWidget");

	rightWidget->setStyleSheet("#rightWidget{border:1px solid black}");

	trainLayout->addWidget(leftWidget);
	trainLayout->addWidget(rightWidget);
	trainLayout->setStretch(0, 9);
	trainLayout->setStretch(1, 1);
	trainLayout->setMargin(0);
	trainLayout->setSpacing(0);
	setLayout(trainLayout);


	connect(startTrainPushButton, &QPushButton::clicked, this, &TrainUI::startTrainButtonClicked);
}

void TrainUI::startTrainButtonClicked() {

	QMessageBox::information(this, tr("提示信息"), tr("start train button clicked."), QMessageBox::Ok | QMessageBox::Cancel,
	                         QMessageBox::Ok);

}

