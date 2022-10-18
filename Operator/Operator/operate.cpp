#include<iostream>
#include<string.h>
#include<cstring>
using namespace std;

class Person
{
	friend ostream& operator<<(ostream& out, Person& ob);
	friend Person operator+(Person& ob1, Person& ob2);
private:
	char* name;
	int num;
public:
	Person()
	{
		this->name = NULL;
		this->num = 0;
		cout << "无参构造" << endl;
	}
	Person(char* name, int num)
	{
		this->name = new char[strlen(name) + 1];
		strcpy(this->name, name);
		this->num = num;
		cout << "有参构造" << endl;
	}

	~Person()
	{
		if (this->name != NULL)
		{
			delete [] this->name;
			this->name = NULL;
		}
		cout << "析构函数" << endl;
	}
public:
	//成员函数  完成运算符重载 ob1 用this代替  ob2用参数ob代替
	//Person operator+( Person& ob)//ob1   ob2
	//{
	//	//name+name(字符串追加）
	//	char* tmp_name = new char[strlen(this->name) + strlen(ob.name) + 1];
	//	strcpy(tmp_name, this->name);
	//	strcat(tmp_name, ob.name);

	//	//num+num(数值相加）
	//	int tmp_num = this->num + ob.num;
	//	Person tmp(tmp_name, tmp_num);

	//	//释放tmp_name的空间
	//	if (tmp_name != NULL)
	//	{
	//		delete[] tmp_name;
	//		tmp_name = NULL;
	//	}
	//	return tmp;
	//}
	void printPerson(void)
	{
		cout << "name=" << name << ",num=" << num << endl;
	}

};
//全局函数作为友元 完成运算符重载<<
ostream& operator<<(ostream& out, Person& ob)//out=cout,ob=ob1
{
	out << ob.name << "," << ob.num;
	//每次执行完  返回值得到cout
	return out;
}
//全局函数作为友元 完成运算符重载+
Person operator+(Person& ob1, Person& ob2)//ob1   ob2
{
	//name+name(字符串追加）
	char* tmp_name = new char[strlen(ob1.name) + strlen(ob1.name)+1];
	strcpy(tmp_name, ob1.name);
	strcat(tmp_name, ob2.name);

	//num+num(数值相加）
	int tmp_num = ob1.num + ob2.num;
	Person tmp(tmp_name, tmp_num);
	
	//释放tmp_name的空间
	if (tmp_name != NULL)
	{
		delete [] tmp_name;
		tmp_name = NULL;
	}
	return tmp;
}
//void test01()
//{
//	Person ob1("lucy", 18);
//	//普通的成员函数  遍历信息  这种方式太LOW了
//	//ob1.printPerson();
//
//	//cout默认输出方式 无法识别 自定义对象  输出格式
//	//cout << ob1 << endl;//err
//	//运算符重载的调用方式1：
//	operator<<(cout, ob1);
//	//运算符重载的调用方法2：
//	//对方法1进行优化 去掉operator,第一个参数 放在运算符<<的左边  第二个参数 放在运算符<<的右边
//	cout << ob1;//等价	operator<<(cout, ob1);
//
//	Person ob2("bob", 8);
//	cout << ob1 << "  " << ob2 << endl;
//
//}
//void test02()
//{
//	Person ob1("lucy", 18);
//	Person ob2("bob", 19);
//
//	cout << ob1 << endl;
//	cout << ob2 << endl;
//	//	Person ob3= operator(ob1 + ob2);
//	//Person ob3= ob1 + ob2;
//	//cout << ob3 << endl;
//
//}
void test03()
{
	Person ob1("ordan", 2);
	Person ob2("ike", 2);
	//Person ob3 = ob1.operator+(ob2);
	//Person ob3 = ob1 + ob2;
	//cout << ob3 << endl;
}
int main(int argc, char* argv[])
{
	test03();

	return 0;
}


//int main(int argc, char* argv[])
//{
//	Person ob1("lucy", 18);
//	//普通的成员函数  遍历信息
//	//ob1.printPerson();
//
//	//cout默认输出方式 无法识别 自定义对象  输出格式
//	//cout << ob1 << endl;//err
//	//运算符重载的调用方式1：
//	operator<<(cout, ob1);
//	//运算符重载的调用方法2：
//	//对方法1进行优化 去掉operator,第一个参数 放在运算符<<的左边  第二个参数 放在运算符<<的右边
//	cout << ob1;//等价	operator<<(cout, ob1);
//
//	Person ob2("bob", 8);
//	cout << ob1 << "  " << ob2 << endl;
//
//
//	return 0;
//}