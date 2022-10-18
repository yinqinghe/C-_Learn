#include "qt.h"
#include<qpushbutton.h>
#include<qdebug.h>
#include"teacher.h"
#include"student.h"
#define N 1
QT::QT(QWidget *parent)
    : QWidget(parent)
{
    ui.setupUi(this);


    //this  代表当前主窗口
    //设置标题
    this->setWindowTitle("第一个窗口");

    //固定窗口
    //this->setFixedSize(800, 600);
    //设置窗口大小
    this->resize(800, 400);
    //在窗口上放一个按钮
    //创建一个Button控件
    //parent父对象为this  表明  主窗口  将来接管button
    //因为我希望将button放到当前窗口中  this代表当前窗口
    QPushButton* button = new QPushButton("奥尼尔", this);

    QPushButton* button1 = new QPushButton("迈克尔", this);
    //默认控件会显示到主窗口的左上方
    //移动按钮
    button1->move(0, 200);

    //需求：单击button  关闭主窗口
    //信号的发起者button  发出信号   主窗口this  关闭（槽函数）
    connect(button, &QPushButton::clicked, this, &QWidget::close);

    //lambda表达式
    QPushButton* btn2 = new QPushButton("Click me", this);
    btn2->move(200, 0);
    connect(btn2, &QPushButton::clicked, [=]() {
        //获取按钮上的文本
        QString text = btn2->text();
        qDebug() << text << endl;

        //设置按钮的文本
        btn2->setText("Oh  my  God!");
        });


    //实例化一个老师
    teacher* tea = new teacher(this);
    //实例化一个学生
    Student* stu = new Student(this);
#if N
    //connect建立老师和学生的关系
    void (teacher:: * p1)() = &teacher::hungry;
    void (Student:: * p2)() = &Student::treat;
    connect(tea, p1, stu, p2);
#else
    //报错的原因：hungry信号被重载了
    //通过函数指针  明确那个信号
    void (teacher:: * p1)(QString foodName) = &teacher::hungry;
    void (Student:: * p2)(QString foodName) = &Student::treat;
    connect(tea, p1, stu, p2);
#endif
    //下课了    老师饿了
    QPushButton* btn = new QPushButton("下课", this);
    btn->move(400, 0);
    connect(btn, &QPushButton::clicked, [=]() {
#if N
        //下课函数：  让老师发出饿的信号
        emit tea->hungry();
#else
        //下课函数：  让老师发出饿的信号
        emit tea->hungry("锅包肉");
#endif
        });
}
//QT::~QT()
//{
//
//}