//#include<iostream>
//using namespace std;
//
//class Animal
//{
//public:
//	//虚函数  本质  是一个函数指针变量 
//	virtual void sleep(void)
//	{
//		cout << "animal  动物在睡觉" << endl;
//	}
//};
//class Cat :public Animal
//{
//public:
//	void sleep(void)
//	{
//
//		cout << "猫在睡觉" << endl;
//	}
//};
//void test01()
//{
//	//如果Animal没有涉及到继承  函数指针变量  就指向自身sleep
//	Animal ob;
//	ob.sleep();
//}
//
//int main(int argc, char* argv[])
//{
//	test01();
//	return 0;
//}