//#include<iostream>
//using namespace std;
//void swapInt(int& a, int& b)
//{
//	int tmp = a;
//	a = b;
//	b = tmp;
//	return;
//}
//void swapChar(char& a, char& b)
//{
//	char tmp = a;
//	a = b;
//	b = tmp;
//	return;
//}
//
//void myswap(int a, int b)
//{
//	cout << "普通函数" << endl;
//	int tmp = a;
//	a = b;
//	b = tmp;
//	return;
//
//}
////函数模板  template是关键字
////class和 typename一样的
////T  系统自动推导 或  用户指定
//template<typename T>
//void myswap(T a, T b)
//{
//	cout << "函数模板" << endl;
//	T tmp;
//	tmp = a;
//	a = b;
//	b = tmp;
//}
//void test01()
//{
//	int data1 = 10, data2 = 20;
//	cout << "data1=" << data1 << ",data2= " <<data2<< endl;
//	swapInt(data1, data2);
//	cout << "data1=" << data1 << ",data2= " << data2 << endl;
//
//
//	char data3 = 'a', data4 = 'b';
//	cout << "data3=" << data3 << ",data4= " << data4 << endl;
//	swapChar(data3, data4);
//	cout << "data3=" << data3 << ",data4= " << data4 << endl;
//}
//void test02()
//{
//	int data1 = 10, data2 = 20;
//	cout << "data1=" << data1 << ",data2= " << data2 << endl;
//	myswap(data1, data2);//自动推导出T为int
//	cout << "data1=" << data1 << ",data2= " << data2 << endl;
//
//
//	char data3 = 'a', data4 = 'b';
//	cout << "data3=" << data3 << ",data4= " << data4 << endl;
//	myswap(data3, data4);//自动推导出T为char
//	cout << "data3=" << data3 << ",data4= " << data4 << endl;
//}
//void test03()
//{
//	int data1 = 10, data2 = 20;
//	cout << "data1=" << data1 << ",data2= " << data2 << endl;
//	//用户显示指定  T为int
//	myswap<int>(data1, data2);
//	cout << "data1=" << data1 << ",data2= " << data2 << endl;
//}
//
////函数模板的调用时机
//void test04()
//{
//	int a = 10;
//	char b = 'b';
//
//	//默认优先选择普通函数
//	myswap(a,a);
//
//	//选择函数模板
//	myswap<>(a, a);
//
//	//函数模板 的参数类型  不能自动类型转换
//	//myswap<>(a, b);
//
//	//函数模板 的参数类型  能自动类型转换
//	myswap(a, b);
//
//	//用户  指定T的类型
//	myswap<int>(a, b);
//}
//
//int main(int argc, char* argv[])
//{
//	test04();
//	return 0;
//}