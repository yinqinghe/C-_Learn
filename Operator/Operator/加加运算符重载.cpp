//#include<iostream>
//
//using namespace std;
//
//class Data
//{
//	friend ostream& operator<<(ostream& out, Data& ob);
//private:
//	int a;
//	int b;
//public:
//	Data()
//	{
//		cout << "无参的构造函数" << endl;
//		a = 0;
//		b = 0;
//	}
//	Data(int a, int b)
//	{
//		cout << "有参构造函数" << endl;
//		this->a = a;
//		this->b = b;
//	}
//	~Data()
//	{
//		cout << "析构函数" << endl;
//	}
//public:
//	void showData(void)
//	{
//		cout << "a= " << a << ",b=" << b<<endl;
//	}
//
//
//	//成员函数  重载前置++  ++ob1   (先加   后使用）
//	//编译器  默认识别  operator++(a)  //但是a可以用this代替  从而化简  operator++()
//
//	Data& operator++()//++ob1
//	{
//		//先加
//		a++;//this->a=this->a+1;
//		b++;//this->b=this->b+1;
//		//后使用
//		return *this;
//	}
//	//成员函数  重载后置++  ob1++   (先使用   后加）
//    //编译器  默认识别  operator++(a,int)  //但是a可以用this代替  从而化简  operator++(int)
//	Data operator++(int)//ob1++
//	{
//		//先使用(备份加之前的值）
//		Data old = *this;
//
//		//后加
//		a++;
//		b++;
//
//		return old;
//	}
//
//
//
//	//成员函数  重载前置--  --ob3   (先加   后使用）
//	//编译器  默认识别  operator--(a)  //但是a可以用this代替  从而化简  operator--()
//
//	Data& operator--()
//	{
//		//先减
//		a--;
//		b--;
//
//		//后使用（返回）
//		return *this;
//	}
//	//成员函数  重载后置--  ob4--   (先使用   后加）
//	//编译器  默认识别  operator--(a,int)  //但是a可以用this代替  从而化简  operator--(int)
//	Data& operator--(int)
//	{
//		//先使用
//		Data old = *this;
//
//		//再减
//		a--;
//		b--;
//
//		return old;
//	}
//};
//ostream& operator<<(ostream& out, Data& ob)
//{
//	out << "a=" << ob.a << ",b=" << ob.b;
//	return out;
//}
//void test01()
//{
//	Data ob1(10, 20);
//	ob1.showData();
//	
//	//重载<<直接输出自定义对象的值
//	//operator<<(cout,ob1)
//	cout << ob1 << endl;
//
//	//成员函数 重载 ++运算符
//	cout << ++ob1 << endl;
//
//	Data ob2(10, 20);
//	cout << "后置++：" << ob2 << endl;
//	cout <<"后置++："<< ob2 ++<< endl;
//	cout <<"后置++："<< ob2 << endl;
//
//	//成员函数 重载 --运算符
//	Data ob3(10, 20);
//	cout << "ob3:  " << ob3 << endl;
//	cout << --ob3 << endl;
//
//	Data ob4(100, 200);
//	cout << "ob4:  " << ob4 << endl;
//	cout << ob4-- << endl;
//	cout << "ob4:  " << ob4 << endl;
//
//	//++ob1
//}
//int main(int argc, char* argv[])
//{
//	test01();
//	return 0;
//}