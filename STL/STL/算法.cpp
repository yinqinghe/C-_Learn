//#include<iostream>
//#include<algorithm>
//#include<vector>
//#include<numeric>
//#include <functional>
//using namespace std;
//int myTransInt(int val)
//{
//	return val*val;
//}
//class MyTransInt
//{
//public:
//	int operator()(int val)
//	{
//		return val;
//	}
//};
////遍历算法
//void test01()
//{
//	vector<int> v1;
//	v1.push_back(2);
//	v1.push_back(20);
//	v1.push_back(19);
//	v1.push_back(40);
//	v1.push_back(33);
//
//	//将v1容器的元素  搬运到v2中
//	vector<int> v2;
//	//预先：设置v2的大小
//	v2.resize(v1.size());
//	
//	//transform(v1.begin(), v1.end(), v2.begin(), 搬运方式);
//	// 普通函数
//	//transform(v1.begin(), v1.end(), v2.begin(), myTransInt);
//	//仿函数
//	transform(v1.begin(), v1.end(), v2.begin(), MyTransInt());
//	for_each(v2.begin(), v2.end(), [](int val) {
//		cout << val << "   ";
//		});
//	cout << endl;
//
//}
////常用查找算法
//class Person
//{
//public:
//	string name;
//	int age;
//	Person(string name, int age)
//	{
//		this->age = age;
//		this->name = name;
//	}
//	void showPerson()
//	{
//		cout << "name = " << this->name << ",age = " << this->age << endl;
//	}
//	bool operator==(const Person& ob)
//	{
//		if (this->name == ob.name && this->age == age)
//			return true;
//		return false;
//	}
//};
//void test02()
//{
//	vector<int> v1;
//	v1.push_back(2);
//	v1.push_back(20);
//	v1.push_back(19);
//	v1.push_back(40);
//	v1.push_back(33);
//
//	vector<int>::iterator ret;
//	ret = find(v1.begin(), v1.end(), 200);
//	if (ret != v1.end())
//	{
//		cout << "找到的数据为：" << *ret << endl;
//	}
//	vector<Person> v2;
//	v2.push_back(Person("麦克", 25));
//	v2.push_back(Person("乔治", 35));
//	v2.push_back(Person("威斯布鲁克", 29));
//	v2.push_back(Person("迈克尔", 21));
//
//	Person tmp("迈克尔", 21);
//	vector<Person>::iterator ret2;
//	//
//	ret2 = find(v2.begin(), v2.end(), tmp);
//	if (ret2 != v2.end())
//	{
//		cout << "找到的数据name=" << (*ret2).name << ", age = " << (*ret2).age << endl;
//	}
//}
//bool myGreaterThan20(int val)
//{
//	return val > 20;
//}
//class MyGreaterThan20
//{
//public:
//	bool operator()(int val)
//	{
//		return val > 20;
//	}
//};
//void test03()
//{
//	vector<int> v1;
//	v1.push_back(2);
//	v1.push_back(20);
//	v1.push_back(19);
//	v1.push_back(40);
//	v1.push_back(33);
//
//	//寻找第一个大于20的数
//	vector<int>::iterator ret;
//	//ret = find_if(v1.begin(), v1.end(), myGreaterThan20);
//	ret = find_if(v1.begin(), v1.end(), MyGreaterThan20());
//	if (ret != v1.end())
//	{
//		cout << "寻找到的数据为：" << *ret << endl;
//	}
//}
// //adjacent_find算法 查找相邻重复元素
//void test05()
//{
//	vector<int> v1;
//	v1.push_back(33);
//	v1.push_back(20);
//	v1.push_back(19);
//	v1.push_back(40);
//	v1.push_back(33);
//	vector<int>::iterator ret;
//	//对于普通函数   不需要回调函数
//	ret = adjacent_find(v1.begin(), v1.end());
//	if (ret != v1.end())
//	{
//		cout << "寻找到重复的数据：" << *ret << endl;
//	}
//
//	vector<Person> v2;
//	v2.push_back(Person("麦克", 25));
//
//	v2.push_back(Person("乔治", 35));
//	v2.push_back(Person("威斯布鲁克", 29));
//	v2.push_back(Person("乔治", 35));
//	vector<Person>::iterator ret1;
//	ret1 = adjacent_find(v2.begin(), v2.end());
//	if (ret1 != v2.end())
//	{
//		cout << "寻找到重复的数据：" << (*ret1).name<<"   "<<(*ret1).age << endl;
//	}
//}
//void test06()
//{
//	vector<int> v1;
//	v1.push_back(33);
//	v1.push_back(40);
//	v1.push_back(49);
//	v1.push_back(50);
//	v1.push_back(53);
//	//二分查找法  前提容器元素必须是有序的
//	bool ret = binary_search(v1.begin(), v1.end(), 40);
//	if (ret == true)
//	{
//		cout<<"找到"<<endl;
//	}
//	else
//	{
//		cout << "未找到" << endl;
//	}
//}
////count算法  统计元素出现次数
//void test07()
//{
//	vector<int> v1;
//	v1.push_back(33);
//	v1.push_back(40);
//	v1.push_back(49);
//	v1.push_back(50);
//	v1.push_back(33);
//
//	cout << count(v1.begin(), v1.end(), 33) << endl;//
//}
////count_if算法  根据元素的匹配条件统计元素出现的次数
//bool myGreaterThan10(int val)
//{
//	return val > 10;
//}
//class MyGreaterThan10
//{
//public:
//	bool operator()(int val)
//	{
//		return val > 10;
//	}
//};
//void test08()
//{
//	vector<int> v1;
//	v1.push_back(33);
//	v1.push_back(40);
//	v1.push_back(49);
//	v1.push_back(50);
//	v1.push_back(33);
//
//	cout << count(v1.begin(), v1.end(), 33) << endl;
//	//使用回调函数
//	cout << count_if(v1.begin(), v1.end(), myGreaterThan10) << endl;
//	//使用仿函数
//	cout << count_if(v1.begin(), v1.end(), MyGreaterThan10() )<< endl;
//	//使用内建函数
//	cout << count_if(v1.begin(), v1.end(), bind2nd(greater<int>(),33)) << endl;
//}
////常用排序算法
////merge算法  容器元素合并，并存储到另一个容器中（每个容器必须有序）
//int main(int argc, char* argv[])
//{
//	test08();
//	return 0;
//}