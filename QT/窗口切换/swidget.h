#pragma once
#pragma execution_character_set("utf-8")
#include <QWidget>

class SWidget : public QWidget
{
	Q_OBJECT

public:
	SWidget(QWidget *paren=0);
	~SWidget();

signals:
	void back();//»ØÍËĞÅºÅ

public slots:
};
