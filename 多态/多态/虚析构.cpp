//#include<iostream>
//using namespace std;
//
//class Animal
//{
//public:
//	virtual void sleep(void)
//	{
//		cout << "动物在睡觉！！" << endl;
//		
//	}
//	Animal()
//	{
//		cout << "animal构造" << endl;
//	}
//	//虚析构
//	virtual ~Animal()
//	{
//		cout << "animal析构" << endl;
//	}
//};
//class Cat:public Animal
//{
//public:
//	virtual void sleep(void)
//	{
//		cout << "Cat在睡觉！！" << endl;
//
//	}
//	Cat()
//	{
//		cout << "Cat构造" << endl;
//	}
//	~Cat()
//	{
//		cout << "Cat析构" << endl;
//	}
//};
//
//void test01()
//{
//	Animal* p = new Cat;
//	p->sleep();
//
//	delete p;
//}
//int main(int argc, char* argv[])
//{
//	test01();
//	return 0;
//}