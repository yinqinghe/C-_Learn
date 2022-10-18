//#include<iostream>
//using namespace std;
//class Data
//{
//private:
//	int data;
//	mutable int num;
//public:
//	void myPrintData(void) const 
//	{
//		//data = 1000;//err const修饰函数 函数不能操作普通成员变量
//		cout << this->data << endl;
//		//在const修饰函数的情况下，mutable修饰的成员变量 可以修改
//		num = 200;
//	}
//	//编译器认为 普通成员函数 存在修改成员变量的可能
//	void setData(int data) const 
//	{
//		//this->data = data;
//		return;
//	}
//	Data()
//	{
//		cout << "无参构造" << endl;
//	}
//	Data(int data)
//	{
//		this->data = data;
//		cout << "有参构造" << endl;
//	}
//	Data(const Data& ob)
//	{
//		this->data = ob.data;
//		cout << "拷贝构造" << endl;
//	}
//	~Data()
//	{
//		cout << "析构函数" << endl;
//	}
//};
//void test03()
//{
//	//常对象
//	const Data ob1(200);
//
//	//常对象 只能调用const修饰的函数
//	ob1.setData(200000);
//	ob1.myPrintData();
//}
//void test02()
//{
//	Data ob1(100);
//	ob1.myPrintData();
//}
//int main(int argc, char* argv[])
//{
//	test02();
//	return 0;
//}