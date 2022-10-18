#include "MyString.h"
#include<iostream>
#include<string.h>
#include<cstring>
using namespace std;

MyString::MyString()
{
	cout << "无参构造" << endl;
}

MyString::MyString(const char* str)
{
	cout << "char *构造函数" << endl;
	//申请空间
	this->str = new char[strlen(str) + 1];
	//拷贝字符串
	strcpy(this->str, str);
	
	//更新size
	this->size = strlen(str);
}

MyString::MyString(const MyString& ob)
{
	cout << "拷贝构造函数" << endl;
	//申请空间
	this->str = new char[strlen(ob.str) + 1];
	//拷贝字符串
	strcpy(this->str, ob.str);

	//更新size
	this->size = ob.size;
}

MyString::~MyString()
{
	cout << "析构函数" << endl;
	if (this->str != NULL)
	{
		delete[] this->str;
		this->str = NULL;
	}
}

int MyString::Size()
{
	return this->size;
}

char& MyString::operator[](int index)//index表示数组的下标
{
	//判断下标是否合法
	if (index >= 0 && index < this->size)
	{
		return this->str[index];
	}
	else
	{
		cout << "index无效" << endl;
	}

}

MyString& MyString::operator=(const MyString& ob)
{
	//将ob.str拷贝到this->str里面
	// 1.将this->str指向的旧空间  释放掉
	if (this->str != NULL)
	{
		delete[] this->str;
		this->str = NULL;
	}
	//根据ob.str的大小申请空间
	this->str = new char[ob.size + 1];
	strcpy(this->str, ob.str);

	this->size = ob.size;

	return *this;
	// TODO: 在此处插入 return 语句
}

MyString& MyString::operator=(const char* str)
{
	//将ob.str拷贝到this->str里面
	// 1.将this->str指向的旧空间  释放掉
	if (this->str != NULL)
	{
		delete[] this->str;
		this->str = NULL;
	}

	this->str = new char[strlen(str) + 1];
	strcpy(this->str, str);

	this->size = strlen(str);

	return *this;

	// TODO: 在此处插入 return 语句
}

MyString& MyString::operator+(const MyString& ob)
{
	//this指向的是str5  ob是str6的别名
	//计算将两个字符串拼接后的长度
	int newSize = this->size + ob.size + 1;
	char* tmp_str = new char[newSize];
	//清空tmp_str所指向的空间
	memset(tmp_str, 0, newSize);

	//先将this->str拷贝到tmp_str中  然后将ob.str 追加到tmp_str中
	strcpy(tmp_str, this->str);
	strcat(tmp_str, ob.str);

	static MyString newString(tmp_str);
	//释放tmp_str指向的临时空间
	if (tmp_str != NULL)
	{
		delete[] tmp_str;
		tmp_str = NULL;
	}
	return newString;
	// TODO: 在此处插入 return 语句
}

MyString& MyString::operator+(const char* str)
{
	//this指向的是str5  ob是str6的别名
//计算将两个字符串拼接后的长度
	int newSize = this->size + strlen(str) + 1;
	char* tmp_str = new char[newSize];
	//清空tmp_str所指向的空间
	memset(tmp_str, 0, newSize);

	//先将this->str拷贝到tmp_str中  然后将ob.str 追加到tmp_str中
	strcpy(tmp_str, this->str);
	strcat(tmp_str, str);

	static MyString newString(tmp_str);
	//释放tmp_str指向的临时空间
	if (tmp_str != NULL)
	{
		delete[] tmp_str;
		tmp_str = NULL;
	}
	return newString;
	// TODO: 在此处插入 return 语句
}

bool MyString::operator==(const MyString& ob)
{
	if ((strcmp(this->str, ob.str) == 0) && (this->size == ob.size))
	{
		return true;
	}
	return false;
}

bool MyString::operator==(const char* str)
{
	if ((strcmp(this->str, str) == 0) && (this->size == strlen(str)))
	{
		return true;
	}
	return false;
}

ostream& operator<<(ostream& out, MyString& ob)
{
	out<<ob.str;
	return out;
}

istream& operator>>(istream& in, MyString& ob)
{
	if (ob.str != NULL)
	{
		delete [] ob.str;
		ob.str = NULL;
	}


	char buf[1024] = "";
	in >> buf;

	ob.str = new char[strlen(buf) + 1];
	strcpy(ob.str, buf);
	ob.size = strlen(buf);

	return in;
}
