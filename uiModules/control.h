//
// Created by yolo on 2021/11/23.
//

#ifndef QTEVENT_CONTROL_H
#define QTEVENT_CONTROL_H

#include <QHBoxLayout>
#include <QWidget>
#include <QPushButton>
#include <QSpacerItem>
#include <QVBoxLayout>
#include <QSizePolicy>

namespace masterUI{
	class UiChangeQWidget;
}

class UiChangeQWidget : public QWidget {
public:
	UiChangeQWidget();
private:
	QPushButton* masterButton;
	QPushButton* trainButton;
	QPushButton* testButton;
	QVBoxLayout* vbox_layout;
	QHBoxLayout* hbox_layout;

};

#endif //QTEVENT_CONTROL_H
