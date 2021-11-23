//
// Created by yolo on 2021/11/23.
//

#ifndef QTEVENT_TRAIN_H
#define QTEVENT_TRAIN_H

#include <QWidget>
#include <QLabel>
#include <QPushButton>
#include <QSpacerItem>
#include <QSizePolicy>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QComboBox>
#include <QGridLayout>

class TrainUI : public QWidget {
Q_OBJECT
public:
	TrainUI();

private:
	// train progress
	QLabel *trainProgressLabel = new QLabel("train progress", this);
	QLabel *showTrainProgressLabel = new QLabel("show train progress", this);
	QWidget *leftWidget = new QWidget(this);

	//---------------------------------------------------
	// train setting

	// right widget
	QWidget *rightWidget = new QWidget(this);
	QLabel *trainSettingLabel = new QLabel("train setting");

	// industry and product
	QLabel *industryAndProductLabel = new QLabel("industry and product", this);
	QLabel *industryNameLabel = new QLabel("industry:None", this);
	QLabel *productNameLabel = new QLabel("product:None", this);
	QLabel *algorithmNameLabel = new QLabel("algorithm:None", this);
	QGridLayout *industryGridLayout = new QGridLayout;
	QWidget *industryAndProductWidget = new QWidget(this);

	// train args and dataset
	QLabel *trainArgsAndDatasetLabel = new QLabel("train args and datasets", this);
	QLabel *epochsLabel = new QLabel("Epochs:", this);
	QComboBox *epochsComboBox = new QComboBox(this);
	QLabel *batchSizeLabel = new QLabel("batchSize:", this);
	QComboBox *batchSizeComboBox = new QComboBox(this);
	QLabel *trainDatasetLabel = new QLabel("train dataset");
	QComboBox *trainDatasetComboBox = new QComboBox(this);
	QGridLayout *trainArgsGridLayout = new QGridLayout();
	QWidget *trainArgsAndDatasetWidget = new QWidget(this);

	// start train
	QPushButton *startTrainPushButton = new QPushButton("start train");
	QGridLayout *startTrainGridLayout = new QGridLayout(this);
	QWidget *startTrainWidget = new QWidget(this);

	// main layout
	QVBoxLayout *leftVboxLayout = new QVBoxLayout;
	QVBoxLayout *rightVboxLayout = new QVBoxLayout;
	QHBoxLayout *trainLayout = new QHBoxLayout;

};

#endif //QTEVENT_TRAIN_H
