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
#include <QStringList>
#include <QMessageBox>

class TrainUI : public QWidget {
Q_OBJECT
public:
	TrainUI();

public slots:

	void startTrainButtonClicked();

public:
	// train progress
	QLabel *trainProgressLabel = new QLabel("训练进度", this);
	QLabel *showTrainProgressLabel = new QLabel("显示训练进度", this);
	QWidget *leftWidget = new QWidget(this);

	//---------------------------------------------------
	// train setting

	// right widget
	QWidget *rightWidget = new QWidget(this);
	QLabel *trainSettingLabel = new QLabel("训练设置");

	// industry and product
	QLabel *industryAndProductLabel = new QLabel(" 行业产品 ", this);
	QLabel *industryNameLabel = new QLabel("行业:None", this);
	QLabel *productNameLabel = new QLabel("产品:None", this);
	QLabel *algorithmNameLabel = new QLabel("算法:None", this);
	QGridLayout *industryGridLayout = new QGridLayout;
	QWidget *industryAndProductWidget = new QWidget(this);

	// train args and dataset
	QLabel *trainArgsAndDatasetLabel = new QLabel(" 训练参数和数据集", this);

	QHBoxLayout *addSpaceLayout = new QHBoxLayout();
	QWidget *epochWidget = new QWidget();
	QHBoxLayout *epochHLayout = new QHBoxLayout();
	QLabel *epochsLabel = new QLabel("Epochs:", this);
	QComboBox *epochsComboBox = new QComboBox(this);
	QWidget *batchSizeWidget = new QWidget();
	QHBoxLayout *batchSizeHLayout = new QHBoxLayout();
	QLabel *batchSizeLabel = new QLabel("batchSize:", this);
	QComboBox *batchSizeComboBox = new QComboBox(this);
	QLabel *trainDatasetLabel = new QLabel("训练数据");
	QWidget *datasetWidget = new QWidget();
	QVBoxLayout *trainDatasetLayout = new QVBoxLayout();
	QComboBox *trainDatasetComboBox = new QComboBox(this);
	QVBoxLayout *trainArgsVboxLayout = new QVBoxLayout();
	QWidget *trainArgsAndDatasetWidget = new QWidget(this);

	// start train
	QPushButton *startTrainPushButton = new QPushButton("  start train  ");
	QGridLayout *startTrainGridLayout = new QGridLayout(this);
	QWidget *startTrainWidget = new QWidget(this);

	// main layout
	QVBoxLayout *leftVboxLayout = new QVBoxLayout;
	QVBoxLayout *rightVboxLayout = new QVBoxLayout;
	QHBoxLayout *trainLayout = new QHBoxLayout;

};

#endif //QTEVENT_TRAIN_H
