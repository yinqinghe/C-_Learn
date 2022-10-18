// day01.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

using namespace std;
class Printer
{
public:
    static Printer* getSignlePrint(void)
    {
        return signlePrint;
    }
    void printText(char* str)
    {
        cout << "打印" << str << endl;
        count++;
    }
    int count;
private:
    static Printer *signlePrint;
private:
    //防止该类实例化其他对象 将构造函数全部私有
    Printer() { count = 0; }
    Printer(const Printer &ob){}

};
Printer* Printer::signlePrint = new Printer;
int main(int agrgc,char *argv[])
{
    //打印任务1
    Printer* p1 = Printer::getSignlePrint();
    p1->printText("入职报告1");
    p1->printText("入职报告2");
    p1->printText("入职报告3");

    //打印任务1
    Printer* p2 = Printer::getSignlePrint();
    p2->printText("入职报告1");
    p2->printText("入职报告2");
    p2->printText("入职报告3");
    cout << "打印任务数量：" << p2->count << endl;
    return 0;
}
