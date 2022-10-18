//#include<iostream>
//
//using namespace std;
//class Base
//{
//private:
//	int num;
//public:
//	Base(int num)
//	{
//		this->num = num;
//		cout << "Base有参构造int" << endl;
//	}
//	~Base()
//	{
//		cout << "析构函数" << endl;
//	}
//};
//
//class Son :public Base
//{
//private:
//	int num;
//public:
//	Son(int num1, int num2) :Base(num1)
//	{
//		this->num = num2;
//		cout << "有参构造int int" << endl;
//	}
//	~Son()
//	{
//		cout << "析构函数" << endl;
//	}
//	void showNum(void)
//	{
//		//当 父类和子类  成员变量同名时 在子类就近原则  选择本作用域的子类成员
//		//如果在子类中  必须使用父类中的同名成员  必须加上父类的作用域
//		cout << "父类中的num=" << Base::num << endl;
//		cout << "子类中的num=" << num << endl;
//	}
//};
//void test01()
//{
//	Son ob1(010, 20);
//	ob1.showNum();
//}
//int main(int argc, char* argv[])
//{
//	test01();
//	return 0;
//}