//#include<iostream>
//#include<string.h>
//
//using namespace std;
//
//class Person
//{
//private:
//	char* name;//指针成员
//public:
//	Person()
//	{
//		name = NULL;
//		cout << "无参构造" << endl;
//	}
//	Person(char *name) 
//	{
//		//根据实际传入的  参数   给this->name申请空间
//		this->name = new char[strlen(name) + 1];
//
//		//将name指向的字符串  拷贝到  this->name指向的空间中
//		strcpy(this->name, name);
//
//		cout << "有参构造" << endl;
//
//	}
//	Person(const Person& ob)                        //如果没有重载赋值运算符，编译器会自动创建默认的赋值运算符重载函数。
//	{                                               //行为类似默认拷贝构造 ，进行简单值拷贝
//		//this代表的是新对象
//		cout << "拷贝构造函数" << endl;
//		this->name = new char[strlen(ob.name) + 1];
//		strcpy(this->name, ob.name);
//	}
//	~Person()
//	{
//		cout << "析构函数" << endl;
//		if (this->name != NULL)
//		{
//			delete [] this->name;
//			this->name = NULL;
//		}
//	}
//public:
//	void showPerson(void)                           //前提  ：类中有指针成员  必须重载 =运算符    
//	{                                               //类中 没有指针成员  不需要重载=运算符 （默认的浅拷贝就可以完成）
//		cout << "name= " <<name << endl; //指针作为类的成员：拷贝构造函数  必须自定义 （默认拷贝构造是
//	}
//
//	//成员函数  重载=运算符
//	Person& operator=(Person& ob)// ob == ob1
//	{
//		//this==>&ob3
//		if (this->name != NULL)//说明this->name以前有指向             重点！！！！！！！！！！！！！！！
//		{
//			//释放以前指向的空间
//			delete[] this->name;
//			this->name = NULL;
//		}
//		//申请空间
//		this->name = new char[strlen(ob.name) + 1];
//		//拷贝内容
//		strcpy(this->name, ob.name);
//		return *this;//重点！！！！！
//	}
//
//	//重载==  ==出现在判断语句中
//	bool operator==(Person& ob)
//	{
//		if (strcmp(this->name, ob.name) == 0)
//		{
//			return true;
//		}
//		return false;
//	}
//
//
//	//重载!=  !=出现在判断语句中
//	bool operator!=(Person& ob)
//	{
//		if (strcmp(this->name, ob.name) != 0)
//		{
//			return true;
//		}
//		return false;
//	}
//};
//void test01()
//{
//	Person ob1("Mike");
//	ob1.showPerson();
//
//	//注意 旧对象  给新对象赋值  调用的是拷贝构造（默认拷贝构造就i是单纯的赋值）
//	Person ob2 = ob1;//这个地方 不是调用赋值=运算符
//	ob2.showPerson();
//
//	Person ob3;
//	ob3 = ob1;//此处才是调用的赋值=运算符（默认赋值=运算是浅拷贝）
//	ob3.showPerson();
//
//	Person ob4, ob5, ob6;
//	ob6=ob5 = ob4 = ob1;
//	ob5.showPerson();
//	ob6.showPerson();
//}
//void test02()
//{
//	Person ob1("lucy");
//	Person ob2("lucy");
//
//
//	Person ob3("bobo");
//
//	if (ob1 == ob2)
//	{
//		cout << "ob1==ob2" << endl;
//	}
//	else
//	{
//		cout << "ob1!=ob2" << endl;
//	}
//
//
//	if (ob1 != ob3)
//	{
//		cout << "ob1!=ob3" << endl;
//	}
//	else
//	{
//		cout << "ob1==ob3" << endl;
//	}
//}
//int main(int argc, char* argv[])
//{
//	test02();
//	return  0;
//}