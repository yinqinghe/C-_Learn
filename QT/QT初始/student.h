#pragma once
#pragma execution_character_set("utf-8")
#include <QObject>

class Student : public QObject
{
	Q_OBJECT

public:
	Student(QObject *parent);
	~Student();
signals:

public slots:
	//返回值类型为void  需要声明  需要实现  可以有参数  可以重载
	void treat();
	void treat(QString foodName);

};
