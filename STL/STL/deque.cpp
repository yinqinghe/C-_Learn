//#include<iostream>
//#include<deque>
//#include<algorithm>
//#include<string>
//using namespace std;
////双端动态数组
///*
//     deque构造函数
//deque<T> deqT;//默认构造形式
//deque(beg,end);//构造函数将[beg,end]区间中的元素拷贝给本身
//deque(n,elem);//构造函数将n个elem拷贝给本身
//deque(const deque &deq);//拷贝构造函数
//
//      deque赋值操作
//assign(beg,end);//将[beg,end]区间中的数据拷贝赋值给本身
//assign(n,elem);//将n个elem拷贝赋值给本身
//deque& operator=(const deque &deq);//重载等号操作符
//swap(deq);//将deq与本身的元素互换
//*/
//void printDequeInt(deque<int>& d)
//{
//	for (deque<int>::iterator it = d.begin(); it != d.end(); it++)
//	{
//		cout << *it << "   ";
//	}
//	cout << endl;
//}
//
//void test01()
//{
//	deque<int> d(5, 13);
//	printDequeInt(d);
//
//	//assign(n, elem);//将n个elem拷贝赋值给本身
//	deque<int> d1;
//	d1.assign(5, 99);
//	printDequeInt(d);
//
//	//deque& operator=(const deque & deq);//重载等号操作符
//	deque<int> d2;
//	d2 = d1;
//	printDequeInt(d);
//
//	//swap(deq);//将deq与本身的元素互换
//	deque<int> d3(5, 102);
//	deque<int> d4(8, 98);
//	printDequeInt(d3);//102   102   102   102   102
//	printDequeInt(d4);//98   98   98   98   98   98   98   98
//	d3.swap(d4);
//	printDequeInt(d3);//98   98   98   98   98   98   98   98
//	printDequeInt(d4);//102   102   102   102   102
//
//}
///*
//       deque大小操作
//deque.size();//返回容器中元素的个数
//deque.empty();//判断容器是否为空
//deque.resize(num);//重新指定容器的长度为num,若容器变长，则以默认值0填充新位置。如果容器变短，则末尾超出容器长度的元素被删除
//deque.resize(num,elem);//重新指定容器的长度为num,若容器变长，则以elem值填充。如果容器变短，则末尾超出容器长度的元素被删除
//       
//	   deque双端插入和删除操作
//push_back(ele);//尾部插入元素ele
//push_front(ele);//在容器尾部添加一个数据
//pop_back();//删除最后一个元素
//pop_front();//删除容器第一个数据
//
//       deque  数据存取操作
//at(int idx);//返回索引idx所指的数据，如果idx越界,抛出out_of_range异常
//operator[];//返回索引idx所指的数据，越界时，运行直接报错
//front();//返回容器中第一个数据元素
//back();//返回容器中最后一个数据元素
//*/
//void test02()
//{
//	deque<int> d;
//	//尾部插入
//	d.push_back(19);
//	d.push_back(21);
//	d.push_back(22);
//
//	//头部插入
//	d.push_front(11);
//	d.push_front(12);
//	d.push_front(13);
//	printDequeInt(d);//13   12   11   19   21   22
//
//	//头部删除
//	d.pop_front();//12   11   19   21   22
//	//尾部删除
//	d.pop_back();//12   11   19   21   
//	printDequeInt(d);//12   11   19   21   
//
//	if (d.empty())
//	{
//		cout << "d容器为空" << endl;
//	}
//	else
//	{
//		cout << "d容器非空" << endl;
//		cout << "size = " << d.size() << endl;//
//	}
//
//	//[]访问第二个元素
//	cout << "d[2] = " << d[2] << endl;//19
//	cout << "d.at(2) = " << d.at(2) << endl;//19
//	cout << "头元素 = " << d.front() << endl;//12
//	cout << "尾元素=" << d.back() << endl;//21
//}
///*
//          deque插入操作
//insert(pos,elem);//在pos位置插入一个elem元素的拷贝，返回新数据的位置
//insert(pos,n,elem);//在pos位置插入n个elem数据，无返回值
//insert(pos,beg,end);//在pos位置插入[beg,end]区间的数据，无返回值。
//
//          deque删除操作
//erase(const_iterator start,const_iterator end);//删除迭代器从start到end之间的元素
//erase(const_iterator pos);//删除迭代器指向的元素
//clear();//删除容器中所以元素
//
//*/
//void test03()
//{
//	deque<int> d;
//	d.insert(d.begin(), 5, 100);
//	printDequeInt(d);
//
//	d.clear();
//	cout << "size = " << d.size() << endl;
//}
//int main(int argc, char* argv[])
//{
//	test03();
//	return 0;
//}