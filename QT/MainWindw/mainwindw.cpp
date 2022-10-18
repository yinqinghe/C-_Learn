#include "mainwindw.h"
#include<qaction.h>
#include<qdebug.h>
#include<qdialog.h>
#include<qmessagebox.h>
#include<qfontdialog.h>
#include<qcolordialog.h>
#include<qfiledialog.h>
#pragma execution_character_set("utf-8")
MainWindw::MainWindw(QWidget* parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
    //通过ui指针成员  去访问  UI文件上的空间
    //connect(ui.menuBar, &QAction::triggered, [=]() {
    //    qDebug() << "新建文件了" << endl;
    //    });


    //消息对话框
#if 0
    //模态对话框
    QDialog* dlg = new QDialog(this);
    //有警告：原因是弹出的对话框 太小  可以重置对话框的大小
    dlg->resize(400, 200);
    dlg->exec();
    qDebug()<< "显示模态对话框" << endl;
#endif

#if 0
    //非模态对话框
    QDialog* dlg = new QDialog(this);
    //
    dlg->resize(200, 100);
    dlg->show();
    qDebug() << "显示非模态对话框" << endl;
#endif

#if 0
    //弹出一个错误框（模态的）
    QMessageBox::critical(this, "错误", "很严重的错误提示");
#endif
#if 0
    //弹出一个信息提示（模态的）
    QMessageBox::information(this, "信息", "重要的信息");
#endif
#if 1
    //弹出一个询问对话框（模态的）
    QMessageBox::StandardButton ret;

    ret=QMessageBox::question(this, "询问", "请立即重置",QMessageBox::SaveAll|QMessageBox::Cancel,QMessageBox::Cancel);
    if (ret == QMessageBox::SaveAll)
    {
        qDebug() << "用户选择了save" << endl;
    }
    else if (ret == QMessageBox::Cancel)
    {
        qDebug() << "用户选择了cancel" << endl;
    }
#endif
#if 1
    //字体对话框
    bool yes;
    QFont font;
    font=QFontDialog::getFont(&yes, QFont("宋体"), this);
    qDebug() << yes << endl;
    if (yes == true)
    {
        qDebug() << "字体为：" << font.family() << ",字体大小：" << font.pointSize() << endl;
    }

#endif
#if 1
    //颜色对话框
    QColor color;

    color=QColorDialog::getColor();
    qDebug() << "r=" << color.red() << ", g=" << color.green() << ", b= " << color.blue() << endl;
#endif
#if 1
    //文件对话框
    QString filename;
    filename = QFileDialog::getOpenFileName(this,"文件","C:\\Users\\殷清贺\\Pictures\\img",tr("Images(*.png *.jpg)"));
    qDebug() << filename << endl;
#endif
}
