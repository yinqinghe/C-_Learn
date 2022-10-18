//#include<iostream>
//
//using namespace std;
//
//class Person
//{
//private:
//	int num;
//public:
//
//	Person(int num):num(num)//与this->功能相同
//	{
//		//this->num = num;
//		cout << "有参构造函数num=" <<num<< endl;
//	}
//	~Person()
//	{
//		cout << "析构函数num=" <<num<< endl;
//	}
//public:
//	void showPerson(void)
//	{
//		cout << "num = " << num << endl;
//	}
//};
//
////设计一个智能指针  解决 Person new出的堆区空间  释放问题
//class SmartPointer
//{
//public:
//	Person* pPerson;
//public:
//	SmartPointer(Person* p)
//	{
//		pPerson = p;
//
//	}
//	~SmartPointer()
//	{
//		if (pPerson != NULL)
//		{
//			delete pPerson;
//			pPerson = NULL;
//		}
//	}
//public:
//	//成员函数重载->运算符
//	Person* operator->()
//	{
//		return this->pPerson;
//	}
//
//	//成员函数  重载 *运算
//	Person& operator*()
//	{
//		return *(this->pPerson);
//	}
//};
//
//void test01()
//{
//	//Person ob(100);
//	//ob.showPerson();
//
//	Person* p = new Person(100);
//	p->showPerson();
//	
//	//假如忘了 delete p   使用智能指针类
//	//delete p;
//
//	//需求：自动的帮我释放  堆区空间（智能智能指针的概念）
//	SmartPointer pointer(new Person(200));
//
//	//访问Person类中的showPerson()
//	//pointer.pPerson->showPerson();
//
//	//(pointer.operator->())->showPerson();
//	//利用运算符重载实现智能指针类的功能
//	pointer->showPerson();
//
//	(*pointer).showPerson();
//
//
//}
//
//int main(int argc, char* argv[])
//{
//	test01();
//	return 0;
//}