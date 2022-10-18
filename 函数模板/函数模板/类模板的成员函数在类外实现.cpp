//#include<iostream>
//using namespace std;
////include标准是包含头文件  基本上不会包含.cpp
////#include"person.cpp"
//#include"person.h"
//
////类模板 会经过两次编译
////第一次  类模板  本身编译  是类模板的成员调用的时候
////C++/C  独立文件编译
////如果  类模板的.cpp和.h分文件  出错的原因  在第二次编译
////建议.cpp和.h放在一起
//
//////严格来说  类模板的类型  不是Person  而是Person<T1,T2>
////template<class T1,class T2>
////class Person {
////	
////public:
////	T1 name;
////	T2 age;
////public:
////	//类内声明
////	Person(T1 name, T2 age);
////	void showPerson(void);
////
////};
//////类外定义
////template<class T1, class T2>
////Person<T1, T2>::Person(T1 name, T2 age)
////{
////	cout << "有参构造" << endl;
////	this->age = age;
////	this->name = name;
////}
////
////template<class T1, class T2>
////void Person<T1, T2>::showPerson(void)
////{
////	cout << "name=" << name << ",  age= " << age << endl;
////}
//
//int main(int argc, char* argv[])
//{
//	Person<string, int> ob1("德玛西亚", 18);
//	ob1.showPerson();
//	return 0;
//}