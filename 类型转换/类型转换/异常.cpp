//#include<iostream>
//
//using namespace std;
//
//int myDiv(int a, int b)
//{
//	if (b == 0)
//		return -1;//-1表示失败
//	return a / b;
//
//}
//void test01()
//{
//	int ret = myDiv(10, -10);
//	if (ret == -1)
//	{
//		cout << "程序异常了" << endl;
//	}
//	else
//	{
//		cout << "程序正常了" << endl;
//	}
//}
//
//int myDiv01(int a, int b)
//{
//	if (b == 0)
//		throw 'p';//抛出异常
//	return a / b;
//
//}
//void test02()
//{
//	try {
//		int ret = myDiv01(10, 0);
//		cout << "ret=" << ret << endl;
//	}
//	catch (int e)//只捕获  抛出是Int类型的异常
//	{
//		cout << "捕获到Int类型异常 e=" << e << endl;
//	}
//	catch (float e)//只捕获  抛出是float类型的异常
//	{
//		cout << "捕获到float类型异常 e=" << e << endl;
//	}
//	catch (char e)//只捕获  抛出是char类型的异常
//	{
//		cout << "捕获到char类型异常 e=" << e << endl;
//	}
//	catch (...)//只捕获  抛出是Int类型的异常
//	{
//		cout << "捕获到其他类型异常 e=" << endl;
//	}
//}
//class Person
//{
//private:
//	string name;
//public:
//	Person(string name)
//	{
//		this->name = name;
//		cout << "Person " << name << "构造函数" << endl;
//	}
//	~Person()
//	{
//		cout << "Person " << name << "析构函数" << endl;
//	}
//
//};
////栈解旋
//void test03()
//{
//	try {
//		Person ob1("001");
//		Person ob2("002");
//		Person ob3("003");
//		Person ob4("004");
//
//		throw 10;
//	}
//	catch (int)
//	{
//		cout << "捕获到int 异常" << endl;
//	}
//	cout << "其他工作" << endl;
//}
//void testFunc02() throw()
//{
//	throw 3.14f;
//}
//
//void test04()
//{
//	try {
//		testFunc02();
//	}
//	catch (int e)//只捕获  抛出是Int类型的异常
//	{
//		cout << "捕获到Int类型异常 e=" << e << endl;
//	}
//	catch (float e)//只捕获  抛出是float类型的异常
//	{
//		cout << "捕获到float类型异常 e=" << e << endl;
//	}
//	catch (char e)//只捕获  抛出是char类型的异常
//	{
//		cout << "捕获到char类型异常 e=" << e << endl;
//	}
//	catch (...)//只捕获  抛出是Int类型的异常
//	{
//		cout << "捕获到其他类型异常 e=" << endl;
//	}
//}
//class MyException
//{
//public:
//	MyException()
//	{
//		cout << "异常构造" << endl;
//	}
//	MyException(const MyException& ob)
//	{
//		cout << "异常拷贝构造" << endl;
//	}
//	~MyException()
//	{
//		cout << "异常的析构" << endl;
//	}
//};
//void test05()
//{
//	try {
//		MyException ob;
//		throw ob;
//		//throw new MyException;
//	}
//	//catch (MyException e)
//	//{
//	//	cout << "捕获到MyException异常" << endl;
//	//}
//	catch (MyException& e)
//	{
//		cout << "捕获到MyException  &异常" << endl;
//	}
//	catch (MyException* e)
//	{
//		cout << "捕获到MyException  *异常" << endl;
//		delete e;
//	}
//}
//class People
//{
//private:
//	int age;
//public:
//	People(int age)
//	{
//		if (age < 0 || age>150)
//			throw out_of_range("age无效");
//		this->age = age;
//	}
//};
//void test06()
//{
//	try {
//		People ob(200);
//	}
//	catch (exception& e)
//	{
//		cout << "捕获到异常" << e.what() << endl;
//	}
//}
//int main(int argc, char* argv[])
//{
//	test06();
//	return 0;
//}