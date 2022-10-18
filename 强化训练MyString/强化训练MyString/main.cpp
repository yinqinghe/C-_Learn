#include<iostream>
#include"MyString.h"
using namespace std;

int main(int argc, char* argv[])
{
	MyString str1("vnaeifna");
	//自定义对象  必须重载<<(普遍全局友元函数实现）
	cout << str1 << endl;
	cout << "size= " << str1.Size() << endl;

	//自定义对象  必须重载>>(普遍全局友元函数实现）
	cin >> str1;
	cout << str1 << endl;
	cout << "size= " << str1.Size() << endl;


	MyString strL2("hello class");
	//重载[]运算符
	cout << strL2[1] << endl;

	//重载[]运算符   返回值必须是左值  才能写操作
	//重载[]运算符   的返回值必须是引用
	strL2[1] = 'E';
	cout << strL2 << endl;

	MyString str3("hello str3");
	cout << str3 << endl;

	//将对象str2赋值给str3
	//（默认赋值语句  浅拷贝）
	//必须重载=运算符 （成员函数完成）
	str3 = strL2;
	cout << "str3:" << str3 << endl;
	
	MyString str4("hello str4");
	cout << "str4:" << str4 <<",size=" <<str4.Size()<< endl;
	str4 = "hello string";
	cout << "str4:" << str4 << ",size=" << str4.Size()<< endl;

	//重载+运算符
	MyString str5("我是傻逼");
	MyString str6("你是傻逼");
	cout << str5 + str6 << endl;
	//cout << (str5 + str6).Size << endl;

	MyString str7("我是迈克尔");
	cout << str7 + "乔丹" << endl;

	//重载==运算符
	MyString str8("我是FOOL");
	MyString str9("你是傻逼");
	if (str8 == str9)
	{
		cout << "相等" << endl;
	}
	else
	{
		cout << "不相等" << endl;
	}
	if (str8 == "我是FOOL")
	{
		cout << "相等" << endl;
	}
	else
	{
		cout << "不相等" << endl;
	}
	return 0;
}