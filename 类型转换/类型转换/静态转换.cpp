//#include<iostream>
//#include<typeinfo>
//using namespace std;
//
////用于类层次结构中基类（父类）和派生类（子类）之间指针或引用的转换
////进行上行转换：用 基类指针，引用指向子类空间（安全）
////进行下行转换：用 子类指针，引用 指向基类空间（不安全）
//
//class Animal{};
//class Dog:public Animal
//{};
//class Other{};
//
////静态转换static_cast
//void test01()
//{
//	//static_cast  作用于  基本类型
//	char ch = 'a';
//	double d = (double)ch;
//	int a = static_cast<int>(d);
//	cout << typeid(d).name() << endl;
//	cout << typeid(a).name() << endl;
//	cout << "d=" << d << endl;
//	cout << "a=" << a << endl;
//
//	//static_cast  作用于  自定义数据类型（结构体  类）
//	//关系的类之间
//	//上行转换  安全
//	Animal* p = static_cast<Animal*>(new Dog);
//	//下行转换  不安全  容易越界
//	Dog* p2 = static_cast<Dog*>(new Animal);
//
//	//static_cast 不能作用于   不相关的类之间转换
//	//Animal* p3 = static_cast<Animal*>(new Other);//err
//}
////dynamic_cast动态转换
//void test02()
//{
//	//1.dynamic_cast  不支持  基本类型
//	char ch = 'a';
//	//double d = dynamic_cast<double>(ch);
//	
//	//2.dynamic_cast  上行转换  （父类指针指向子类空间  安全）
//	Animal* p1 = dynamic_cast<Animal*>(new Dog);
//
//	//3.dynamic_cast  下行转换  （子类指针  指向  父类空间  不安全）
//	//Dog* p2 = dynamic_cast<Dog*>(new Animal);//不支持  不安全  的转换
//
//	//4.dynamic_cast  不支持  没有关系的  类型转换
//	//Animal* p3 = dynamic_cast<Animal*>(new Other);
//
//}
////常量转换 conat_cast
//void test03()
//{
//	const int* p = NULL;
//	int* p1 = const_cast<int*>(p);
//
//	int* p2 = NULL;
//	const int* p3 = const_cast<const int*>(p2);
//
//	//conat_cast 不支持  非指针或引用的转换
//	const int a = 100;
//	//int b = const_cast<int>(a);//err
//
//	int data = 100;
//	//常量引用  转换成  普通引用
//	const int& ob = data;
//	int& ob2 = const_cast<int&>(ob);
//}
//void test04()
//{
//	//reinterpret_cast  不支持基本数据类型
//	char ch = 'a';
//	//double d = reinterpret_cast<double>(ch); // err
//
//	//reinterpret_cast  支持  不相关的类型转换
//	Animal * p1 = reinterpret_cast<Animal*>(new Other);
//
//	//上行转换
//	Animal* p2 = reinterpret_cast<Animal*>(new Dog);
//
//	//下行转换
//	Dog* p3 = reinterpret_cast<Dog*>(new Animal);
//}
//int main(int argc, char* argv[])
//{
//	test03();
//
//	return 0;
//}