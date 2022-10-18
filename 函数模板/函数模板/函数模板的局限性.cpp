//#include<iostream>
//using namespace std;
//
//class Person
//{
//	friend ostream& operator<<(ostream& out, Person& ob);
//public:
//	int a;
//	int b;
//public:
//	Person(int a, int b)
//	{
//		this->a = a;
//		this->b = b;
//		cout << "构造函数" << endl;
//	}
//	~Person()
//	{
//		cout << "析构函数" << endl;
//	}
//	//方法2：重载>运算符   推荐
//	bool operator>(const Person& ob)
//	{
//		return (this->a > ob.a);
//	}
//};
//
//ostream& operator<<(ostream& out, Person& ob)
//{
//	out << "a=" << ob.a << ",b=" << ob.b << endl;
//	return out;
//}
//template<typename T>
//void mySwap(T& a, T& b)
//{
//	T tmp = a;
//	a = b;
//	b = tmp;
//}
//template<typename T>
//T& myMax(T& a, T& b)
//{
//	return a > b ? a : b;
//}
////方法1：提供函数模板  具体化
//#if 1
//template<> Person& myMax<Person>(Person& ob1, Person& ob2)
//{
//	return ob1.a > ob2.b ? ob1 : ob2;
//}
//#endif // 0
//void test01()
//{
//	int data1 = 10, data2 = 20;
//	cout << "data1=" << data1 << ", data2=" << data2 << endl;
//	mySwap(data1, data2);
//	cout << "data1=" << data1 << ", data2=" << data2 << endl;
//
//	Person ob1(10, 20);
//	Person ob2(100, 200);
//	cout << ob1 <<ob2<< endl;
//
//	mySwap(ob1, ob2);
//	cout << ob1 << ob2 << endl;
//}
//void test02()
//{
//
//	int data1 = 10, data2 = 20;
//	cout << myMax(data1, data2) << endl;
//	Person ob1(10, 20);
//	Person ob2(100, 200);
//	cout << myMax(ob1, ob2) << endl;
//}
//int main(int argc, char* argv[])
//{
//	test02();
//
//	return 0;
//}