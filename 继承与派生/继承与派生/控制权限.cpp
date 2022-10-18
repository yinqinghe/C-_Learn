//#include<iostream>
//
//using namespace std;
//
//class Base
//{
//public:
//	int a;
//private:
//	int b;
//protected:
//	int c;
//};
////公有继承
//class Son1 :public Base
//{
//private:
//public:
//	//父类中的public数据  在子类中  也是public
//	//父类中的private数据 在子类中  是不可见的
//	//父类中的protected数据 在子类中  是protectedd
//	// 子类的内部
//	//
//	void showbase() {
//		a = 100;//子类内部可访问
//		b = 1;//不能直接访问
//		c = 1;//子类内部可访问
//	}
//};
//void test01()
//{
//	Son1 ob;
//	ob.a;//子类外可访问
//	ob.b;//子类外不可访问
//	ob.c;//子类外不可访问
//
//}
////私有继承
//class Son1 :private Base
//{
//private:
//public:
//	//父类中的public数据  在子类中  也是private
//	//父类中的private数据 在子类中  是不可见的
//	//父类的protected数据 在子类中  是private
//	// 子类的内部
//	//
//	void showbase() {
//		a = 100;//子类内部可访问
//		b = 1;//不能直接访问
//		c = 1;//子类内部可访问
//	}
//};
// void test02()
//{
//	Son1 ob;
//	ob.a;//子类外不可访问
//	ob.b;//子类外不可访问
//	ob.c;//子类外不可访问
//
//}
////保护继承
//class Son1 :protected Base
//{
//private:
//public:
//  //父类中的public数据  在子类中  也是protected
//	//父类中的private数据 在子类中  是不可见的
//	//父类的protected数据 在子类中  是protectedd
//	// 子类的内部
//	void showbase() {
//		a = 100;//子类内部可访问
//		b = 1;//不能直接访问
//		c = 1;//子类内部可访问
//	}
//};
//void test03()
//{
//	Son1 ob;
//	ob.a;//子类外不可访问
//	ob.b;//子类外不可访问
//	ob.c;//子类外不可访问
//
//}

//int main(int argc, char* argv[])
//{
//	test02();
//	return 0;
//}