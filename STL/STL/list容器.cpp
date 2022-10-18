//#include<iostream>
//#include<algorithm>
//#include<string>
//#include<list>
//#include<numeric>
//using namespace std;
///*
//        list构造函数
//list<T> lstT;//list采用模板类实现 ，对象的默认构造形式
//list(beg,end);//构造函数将[beg,end)区间中的元素拷贝给本身
//list(n,elem);//构造函数将n个elem拷贝给本身
//list(const list &lst);//拷贝构造函数
//
//        list数据元素插入和删除操作
//push_back(elem);//在容器尾部加入一个元素
//pop_back();//删除容器中最后一个元素
//push_front(elem);//在容器开头插入一个元素
//pop_front();//在容器开头移除第一个元素
//insert(pos,elem);//在pos位置插入elem元素的拷贝，返回新数据的位置
//insert(pos,n,elem);//在pos位置插入n个elem数据，无返回值
//insert(pos,beg,end);//在pos位置插入[beg,end)区间的数据，无返回值
//clear();//移除容器的所有数据
//erase(beg,end);//删除[beg,end)区间的数据，返回下一个数据的位置
//erase(pos);//删除pos位置的数据，返回下一个数据的位置
//remove(elem);//删除容器中所有与elem值匹配的元素
//
//       list大小操作
//size();//返回容器中元素的个数
//empty();//判断容器是否为空
//resize(num);//重新指定容器的长度为num,若容器变长，则以默认值0填充新位置。如果容器变短，则末尾超出容器长度的元素被删除
//resize(num,elem);//重新指定容器的长度为num,若容器变长，则以elem值填充新位置。如果容器变短，则末尾超出容器长度的元素被删除
//
//       list赋值操作
//assign(beg,end);//
//
//
//
//       list数据的存取
////front();//返回容器中第一个数据元素
////back();//返回容器中最后一个数据元素
//
//       list反转排序
//reverse();//反转链表，比如lst包含1，3，5元素，运行此方法后，lst就包含5，3，1元素
//sort();//list排序
//*/
//void printListInt(list<int>& L)
//{
//    for (list<int>::iterator it = L.begin(); it != L.end(); it++)
//    {
//        cout << (*it) <<"   ";
//    }
//    cout << endl;
//}
//void test01()
//{
//    list<int> L;
//    L.push_back(10);
//    L.push_back(20);
//    L.push_back(30);
//    L.push_back(40);
//
//    printListInt(L);//10   20   30   40
//    //迭代器+n  只有随机访问迭代器支持
//    //而list容器的迭代器是双向迭代器  不支持+n
//    //L.insert(L.begin() + 2, 3, 100);//err
//    list<int>::iterator it = L.begin();
//    //++ 随机访问迭代器  以及  双向迭代器  都支持
//    it++;
//    it++;
//    L.insert(it, 3, 100);
//    printListInt(L);//10   20   100   100   100   30   40
//
//    //remove(elem);//删除容器中所有与elem值匹配的元素
//    L.remove(100);//删除所有100
//    printListInt(L);//10   20   30   40
//
//    //链表反转
//    L.reverse();
//    printListInt(L);//40   30   20   10
//
//    //sort是系统提供的算法  仅支持  随机访问迭代器（不支持list)
//    //list容器不能使用系统算法  list会自己提供算法
//    //sort（L.begin(),L.end());
//    L.sort();
//    printListInt(L);//10   20   30   40
//}
//class Person
//{
//public:
//    string name;
//    int age;
//public:
//    Person(string name, int age)
//    {
//        this->name = name;
//        this->age = age;
//    }
//    //成员函数重载==运算符
//    bool operator==(const Person& ob)
//    {
//        if (this->name == ob.name && this->age == ob.age)
//            return true;
//        return false;
//    }
//    //成员函数重载<运算符
//    bool operator<(const Person& ob)
//    {
//        return this->age<ob.age;
//    }
//};
//void printListPerson(list<Person>& L)
//{
//    cout << "--------------" << endl;
//    for (list<Person>::iterator it = L.begin(); it != L.end(); it++)
//    {
//        cout << (*it).name << "   "<<(*it).age<<endl;
//    }
//}
//void test02()
//{
//    //存放自定义数据
//    list<Person> L;
//    L.push_back(Person("001", 44));
//    L.push_back(Person("002", 35));
//    L.push_back(Person("003", 46));
//    L.push_back(Person("004", 47));
//
//    printListPerson(L);
//
//    //删除 003
//    Person tmp("003", 46);
//    //重载==运算符
//    //L.remove(tmp);
//    //printListPerson(L);
//
//}
//bool myComparePerson(const Person& ob1, const Person& ob2)
//{
//    return ob1.age > ob2.age;
//}
//void test03()
//{
//    //存放自定义数据
//    list<Person> L;
//    L.push_back(Person("001", 44));
//    L.push_back(Person("002", 35));
//    L.push_back(Person("003", 46));
//    L.push_back(Person("004", 47));
//
//    printListPerson(L);
//
//    //对于自定义数据  我们可以重载<运算符
//    L.sort();
//    printListPerson(L);
//}
//void test04()
//{
//    //存放自定义数据
//    list<Person> L;
//    L.push_back(Person("001", 44));
//    L.push_back(Person("002", 35));
//    L.push_back(Person("003", 46));
//    L.push_back(Person("004", 47));
//
//    printListPerson(L);
//
//    //对于自定义数据  我们可以重载<运算符
//    L.sort(myComparePerson);
//    printListPerson(L);
//}
//#include<vector>
//void printListPerson(vector<Person>& L)
//{
//    cout << "--------------" << endl;
//    for (vector<Person>::iterator it = L.begin(); it != L.end(); it++)
//    {
//        cout << (*it).name << "   " << (*it).age << endl;
//    }
//}
//class myComparePerson2
//{
//public:
//    bool operator()(Person& ob1, Person& ob2)
//    {
//        return ob1.age < ob2.age;
//    }
//};
//void test05()
//{
//    //存放自定义数据
//    vector<Person> v;
//    v.push_back(Person("001", 44));
//    v.push_back(Person("002", 35));
//    v.push_back(Person("003", 46));
//    v.push_back(Person("004", 47));
//    printListPerson(v);
//
//    //默认比较方式从小到大
//    //vector存放自定义数据  可指定排序规则（普通函数）
//    sort(v.begin(), v.end(),myComparePerson);
//    printListPerson(v);
//
//    //vector存放自定义数据  可指定排序规则（仿函数）
//    sort(v.begin(), v.end(), myComparePerson2());
//    printListPerson(v);
//}
//void printVectorInt(vector<int>& L)
//{
//    cout << "--------------" << endl;
//    for (vector<int>::iterator it = L.begin(); it != L.end(); it++)
//    {
//        cout << *it<< "   " ;
//    }
//    cout << endl;
//}
//void myPrint01(int val)
//{
//    cout << val << "    ";
//}
//void test06()
//{
//    //存放自定义数据
//    vector<int> v;
//    v.push_back(int( 44));
//    v.push_back(int( 35));
//    v.push_back(int( 46));
//    v.push_back(int( 47));
//    //方法1.访问v容器  普通函数
//    printVectorInt(v);
//
//    //方法2.访问v容器  系统算法for_each
//    for_each(v.begin(), v.end(), myPrint01);
//
//    //方法3.访问v容器  lambda表达式
//    //[]表示函数名   （）参数列表  {}函数体
//    for_each(v.begin(), v.end(), [](int val) {
//        cout << val << "  ";
//        });
//}
//int main(int argc, char* argv[])
//{
//	test06();
//	return 0;
//}