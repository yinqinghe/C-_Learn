#include "student.h"
#include<qdebug.h>
Student::Student(QObject *parent)
	: QObject(parent)
{
}

void Student::treat()
{
	qDebug() << "请老师吃饭了" << endl;
}
void Student::treat(QString foodName)
{
	qDebug() << "请老师吃了" << foodName << endl;
}

Student::~Student()
{
}
