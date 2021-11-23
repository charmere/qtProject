//
// Created by yolo on 2021/11/23.
//

#ifndef QTEVENT_MASTER_H
#define QTEVENT_MASTER_H

#include <QWidget>
#include <QLabel>
#include <QHBoxLayout>

class MasterUI: public QWidget{
	Q_OBJECT
public:
	MasterUI();

private:
	QLabel* showSoftUseInstrLabel;
	QHBoxLayout* layout;
};

#endif //QTEVENT_MASTER_H
