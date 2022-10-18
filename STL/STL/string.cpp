//#include<iostream>
//#include<vector>
//#include<algorithm>
//#include<string>
//using namespace std;
//
///*
//string 构造函数
//string（）；//创建一个空的字符串  列如
//string（const string& str)//使用一个string对象初始化另一个string对象
//string(const char* s)//使用字符串s初始化
//string(int n,char c);//使用n个字符c初始化
//
//string基本赋值操作
//string& operator=(const char* s);//char*类型字符串  赋值给当前的字符串
//string& operator=(const string &s);//把字符串s赋值给当前的字符串
//string& operator=(char c);//字符赋值给当前的字符串
//string& assign(const char *s);//把字符串s赋给当前的字符串
//string& assign(const char *s,int n);//把字符串s的前n个字符赋给当前的字符串
//string& assign(const string &s);//把字符串s赋给当前字符串
//string& assign(int n,char c);//用n个字符c赋给当前字符串
//string& assign(const string &s,int start,int n);//将s从start开始n个
//
//*/
//
//void test2()
//{
//	
//	//string（）；//创建一个空的字符串  列如
//	string str1;
//	cout << str1 << endl;
//	
//
//	//string(const char* s)//使用字符串s初始化
//	string str2("hello string");
//	cout << str2 << endl;
//
//	string str4;
//	//string（const string& str)//使用一个string对象初始化另一个string对象
//	str4 = str2;
//	cout << str4 << endl;
//
//
//	//string(int n, char c);//使用n个字符c初始化
//	string str3(10,'H');
//	cout << str3 << endl;
//
//	//string& operator=(const char* s);//char*类型字符串  赋值给当前的字符串
//	string str5;
//	str5 = "hello str5";
//	cout << str5 << endl;
//
//
//	//string& operator=(const string & s);//把字符串s赋值给当前的字符串
//	str4 = str2;
//	cout << str4 << endl;
//
//	//string& operator=(char c);//字符赋值给当前的字符串
//	string str6;
//	str6 = 'H';
//	cout << str6 << endl;
//
//	//string& assign(const char* s);//把字符串s赋给当前的字符串
//	string str7;
//	str7.assign("hello str7");
//	cout << str7 << endl;
//
//	//string& assign(const char* s, int n);//把字符串s的前n个字符赋给当前的字符串
//	string str8;
//	str8.assign("hello str8", 5);
//	cout << str8 << endl;
//
//	//string& assign(const string & s);//把字符串s赋给当前字符串
//	string str9;
//	str9.assign(str8);
//	cout << str9 << endl;
//
//	//string& assign(int n, char c);//用n个字符c赋给当前字符串
//	string str10;
//	str10.assign(10,'AKA');
//	cout << str10 << endl;
//
//	//string& assign(const string & s, int start, int n);//将s从start开始n个
//	string str11;
//	str11.assign("abcdefghijabcdefg", 1, 4);
//	cout << str11 << endl;
//
//}
///*
//string 存取字符操作
//char& operator[](int n);//通过[]方式取字符
//char& at(int n);//通过at 方法获取字符
//
//*/
//
//void test02()
//{
//	string str1 = "hello string";
//	cout << str1[1] << endl;//'e'
//	cout << str1.at(1) << endl;//'e'
//
//	str1[1] = 'E';
//	cout << str1 << endl;//"hEllo string"
//	str1.at(7) = 'T';
//	cout << str1 << endl;//"hEllo sTring"
//
//	//[]和at 的区别
//	try
//	{
//		//str1[1000]='G';//越界 []不抛出异常
//		str1.at(1000) = 'G';//越界  at会抛出异常
//	}
//	catch (exception& e)
//	{
//		cout << "异常： " << e.what() << endl;
//	}
//}
///*
//   string  拼接操作
//string& operator+=(const string& str);//重载+=操作符
//string& operator+=(const char* str);//重载+=操作符
//string& operator+=(const char c);//重载+=操作符
//string& append(const char *s);//把字符串s连接到当前字符串结尾
//string& append(const char *s,int n);//把字符串s的前n个字符连接到当前字符串结尾
//string& append(const string &s);//同operator+=（）
//string& append(const string &s,int pos,int n);//把字符串s中从pos开始的n 个字符连接到当前字符串结尾
//string& append(int n,char c);//在当前字符串结尾添加n个字符c
//*/
//
//void test03()
//{
//	string str1 = "hello";
//	string str2 = "string";
//	//string& operator+=(const string& str);//重载+=操作符
//	str1 += str2;
//	cout << str1 << endl;//"hello string"
//
//	string str3 = "app";
//	//string& operator+=(const char* str);//重载+=操作符
//	str3 += "le";
//	cout << str3 << endl;//"apple"
//
//	string str4 = "hello";
//	//string& append(const char* s, int n);//把字符串s的前n个字符连接到当前字符串结尾
//	str4.append("ing", 2);
//	cout << str4 << endl;
//
//	//string& append(const string & s, int pos, int n);//把字符串s中从pos开始的n 个字符连接到当前字符串结尾
//	string str5 = "hello";
//	string str6 = "qwertyu";
//	str5.append(str6, 4, 6);
//	cout << str5 << endl;//
//}
//
///*
//  string 查找和替换
//int find(const string& str,int pos=0) const;//查找str第一次出现位置，从pos开始查找
//int find(const char* s,int pos=0) const;//查找s第一次出现位置，从pos 开始查找
//int find(const char* s,int pos=0,int n) const;//从 pos 位置查找s的前n个字符第一次位置
//int find(const char c,int pos=0) const;//查找字符c第一次出现位置
//int rfind(const string& str,int pos=npos) const;//查找str最后一次位置，从pos开始开始查找
//int rfind(const char* s,int pos=npos) const;//查找S最后 一次出现位置，从pos开始查找
//int rfind(const char* s,int pos,int n) const;//从Pos查找s的前n个字符最后一次位置
//int rfind(const char c,int pos=0) const;//查找字符c最后一次出现位置
//string& replace(int pos,int n,const string& str);//替换从pos开始n个字符为字符串str
//string& replace(int pos,int n,const char* s);//替换从pos开始的n个字符为字符串s 
//*/
//
//void test04()
//{
//	//int find(const string & str, int pos = 0) const;//查找str第一次出现位置，从pos开始查找
//	string str1 = "hehe:haha:xixi:haha:heihei";
//	//从str1中找haha
//	string tmp = "haha";
//	cout << str1.find(tmp) << endl;//5
//	cout << str1.find(tmp, 10) << endl;//15
//
//	//int find(const char* s, int pos = 0) const;//查找s第一次出现位置，从pos 开始查找
//	cout << str1.find("haha") << endl;
//
//	str1.replace(5, 4, "###");
//	cout << str1 << endl;
//
//	string str2 = "www.sex.117114.sex.person.77.com";
//	//
//	while (1)
//	{
//		int ret = str2.find("sex");
//		if (ret > str2.size())//
//			break;
//		str2.replace(ret, strlen("sex"), "***");
//
//	}
//	cout << str2 << endl;
//}
///*
//   string比较操作
//compare函数在>时返回-1，==时返回0.
//比较区分大小写，比较时参考字典顺序，排越前面的越小。
//大写的A比小写的a小。
//
//int compare(const string& s) const;//
//int compare(const char *s)const;//与字符串比较
//
//*/
//void test05()
//{
//	string str1 = "hehe";
//	string str2 = "haha";
//	cout << str1.compare(str2) << endl;//1
//	cout << str1.compare("lala") << endl;//-1
//	cout << str1.compare("hehen") << endl;//0
//}
//
///*
//  string 提取字符串
//string substr(int pos=0,int n=npos) const;//返回由pos开始的n个字符组成的字符串
//
//*/
//void test06()
//{
//	string str1 = "hehe:haha:xixi:haha:heihei";
//	//cout << str1.substr(5, 4) << endl;
//
//	//
//	int pos = 0;
//	while (1)
//	{
//		int ret = str1.find(":", pos);
//		if (ret < 0)
//		{
//			string tmp = str1.substr(pos, str1.size() - pos);
//			cout << tmp << endl;
//			break;
//		}
//		
//		string tmp = str1.substr(pos, ret - pos);
//		cout << tmp << endl;
//
//		pos = ret + 1;
//	}
//}
//
///*
//    string 插入和删除操作
//string& insert(int pos,const char* s);//插入字符串
//string& insert(int pos,const string& str);//插入字符串
//string& insert(int pos,int n,char c);//在指定位置插入n个字符c
//string& erase(int pos,int n=npos);//删除从Pos开始的n个字符
//
//*/
//void test07()
//{
//	string str1 = "hello world";
//	str1.insert(5, "hehe");
//	cout << str1 << endl;
//
//	str1.erase(5, 4);//删除字符串中hehe
//	cout << str1 << endl;//”hello world"
//	
//	//清空字符串  str1.size()得到字符串 的总大小
//	str1.erase(0, str1.size());
//	cout << str1 << endl;
//}
//
//void test08()
//{
//	string str1;//对象
//	 const char* str2 = "hello str";
//	 
//	 //将char* 转成  string  (直接完成）
//	 str1 = str2;
//	 cout << str1 << endl;//hello str
//	 
//	 string str3 = "hello str3";
//	 //不能直接将string转换成  char*  必须借助string中的c_str方法完成
//	 //char *str4=str3;//err
//	 char* str4 = const_cast<char*> (str3.c_str());
//	 cout << str4 << endl;//
//}
//
//void test09()
//{
//	vector<int> v;
//	int i = 0;
//	for (i = 0; i < 100; i++)
//		v.push_back(i);
//	cout << "v的容量capacity: " << v.capacity() << endl;
//	cout << "v的大小size: " << v.size() << endl;//实际存放的元素个数
//}
//int main(int argc, char* argv[])
//{
//	test09();
//	return 0;
//}