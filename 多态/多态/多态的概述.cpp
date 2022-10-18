//#include<iostream>
//using namespace std;
//class Animal
//{
//public:
//	//虚函数  只要涉及到继承  子类中同名函数  都是虚函数
//	virtual void sleep(void)
//	{
//		cout << "animal  动物在睡觉" << endl;
//	}
//};
//
//class Cat :public Animal
//{
//public:
//	virtual void sleep(void)
//	{
//		cout << "Cat 猫在睡觉！！ 喵喵" << endl;
//	}
//};
//
//void test01()
//{
//	//用基类（指针或引用）  保存  子类对象（向上转换）
//	Animal* p = new Cat;
//	p->sleep();//调用的是基类的sleep
//	Cat* pp = new Cat;
//	pp->sleep();
//
//	Cat cat;
//	Animal& ob = cat;
//	ob.sleep();//调用的是基类的sleep
//}
//void test02()
//{
//	//用基类（指针或引用）  保存  子类对象,同时还要操作子类自身成员
//	Animal* p = new Cat;
//	p->sleep();//猫在睡觉
//}
//int main(int argc, char* argv[])
//{
//	test02();
//	return 0;
//}