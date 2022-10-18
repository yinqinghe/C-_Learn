//#include<iostream>
//using namespace std;
//
//template<class T1,class T2>
//class Data
//{
//	friend void addData(Data<string, int>& ob);
//private:
//	T1 name;
//	T2 num;
//public:
//	Data(T1 name, T2 num)
//	{
//		this->name = name;
//		this->num = num;
//		cout << "有参构造" << endl;
//	}
//	~Data()
//	{
//		cout << "析构函数" << endl;
//	}
//	void showData()
//	{
//		cout << "name=" << this->name << ", num=" << this->num << endl;
//	}
//};
//
//void addData(Data<string, int>& ob)
//{
//	cout << "普通函数" << endl;
//	ob.name += "_vip";
//	ob.num += 2000;
//	return;
//}
//template<class T>
//void addData(T& ob)
//{
//	cout << "函数模板" << endl;
//	ob.name += "_vip";
//	ob.num += 2000;
//	return;
//}
//void test02()
//{
//	Data<string, int> ob("德玛西亚", 18);
//	addData(ob);
//	ob.showData();
//}
//void test01()
//{
//	//Data ob1("德玛西亚");//err   类模板不允许  类型推导
//	Data<string, int> ob1("德玛西亚", 100);
//	ob1.showData();
//	Data<int, string> ob2(150, "迈克尔");
//	ob2.showData();
//	Data<string, string> ob3("德玛西亚", "mike");
//	ob3.showData();
//	Data<int, int> ob4(666, 100);
//	ob4.showData();
//}
//
//int main(int argc, char* argv[])
//{
//	test02();
//	return 0;
//}