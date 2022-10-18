//#include<iostream>
//#include<algorithm>
//#include<string>
//#include<set>
//#include<numeric>
//using namespace std;
////set容器的键值  不允许相同
////set容器提供的是只读迭代器（不允许用户修改元素的内容）
///*
//         set构造函数
//set<T> st;//set默认构造函数
//mulitest<T> mst;//multiset默认构造函数
//set(const set &st);//拷贝构造函数
//
//         set赋值操作
//set& operator=(const set &st);//重载等号操作符
//swap(st);//交换两个集合容器
//
//         set大小操作
//size();//返回容器中元素的个数
//empty();//判断容器是否为空
//         set插入和删除操作
//insert(elem);//在容器中插入元素
//clear();//移除容器的所有数据
//erase(beg,end);//删除[beg,end)区间的所有数据，返回下一个数据的迭代器
//erase(pos);//删除pos迭代器所指的数据，返回下一个数据的迭代器
//erase(elem);//删除容器中值为elem的元素
//*/
//void test01()
//{
//    set<int> s;
//    //set容器自动根据键值排序
//    s.insert(30);
//    s.insert(10);
//    s.insert(20);
//    s.insert(40);
//    s.insert(50);
//
//    for_each(s.begin(), s.end(), [](int val) {
//        cout << val << "   ";
//        });//10   20   30   40   50
//    cout << endl;
//
//    //set容器提供的是只读迭代器const_iterator
//    //用户不可以修改set容器的元素
//    set<int>::const_iterator it = s.begin();
//    //*it=100;//err
//    cout << "size = " << s.size() << endl;
//
//    //删除起始位置的元素
//    s.erase(s.begin());
//    for_each(s.begin(), s.end(), [](int val) {
//        cout << val << "   ";
//        });//   20   30   40   50
//    cout << endl;
//
//    //根据元素删除
//    s.erase(30);
//    for_each(s.begin(), s.end(), [](int val) {
//        cout << val << "   ";
//        });//10   20      40   50
//    cout << endl;
//}
///*
//         set查找操作
//find(key);//查找键Key是否存在，若存在，返回该键的元素的迭代器  ，若不存在，返回set.end();
//count(key);//查找键key的元素个数
//lower_bound(keyElem);//返回第一个key>=keyElem元素的迭代器
//upper_bound(keyElem);//返回第一个key>keyElem元素的迭代器
//equal_range(keyElem);//返回容器中Key与keyElem相等的上下限的两个迭代器
//
//*/
//void test02()
//{
//    set<int> s;
//    //set容器自动根据键值排序
//    s.insert(30);
//    s.insert(10);
//    s.insert(20);
//    s.insert(40);
//    s.insert(50);
//
//    //find(key);//查找键Key是否存在，若存在，返回该键的元素的迭代器  ，若不存在，返回set.end();
//    set<int>::iterator ret ;
//    ret = s.find(200);
//    if (ret == s.end())
//    {
//        cout << "没有找到" << endl;
//    }
//    else
//    {
//        cout << "找到" << *ret << endl;
//    }
//
//    //count(key);//查找键key的元素个数
//    //set容器的键值  是不重复的  那么count(key)只能是1或0
//    cout << s.count(20) << endl;//1
//    cout << s.count(200) << endl;//0
//}
//void test03()
//{
//    set<int> s;
//    //set容器自动根据键值排序
//    s.insert(30);
//    s.insert(10);
//    s.insert(20);
//    s.insert(40);
//    s.insert(50);
//
//    //lower_bound(keyElem);//返回第一个key>=keyElem元素的迭代器
//    set<int>::const_iterator lower_ret;
//    lower_ret = s.lower_bound(30);
//    if (lower_ret == s.end())
//    {
//        cout << "没有找到30的下限" << endl;
//    }
//    else
//    {
//        cout << "找到30的下限：" << *lower_ret << endl;
//    }
//    //upper_bound(keyElem);//返回第一个key>keyElem元素的迭代器
//    set<int>::const_iterator up_ret;
//    up_ret = s.upper_bound(30);
//    if (up_ret == s.end())
//    {
//        cout << "没有找到30的上限" << endl;
//    }
//    else
//    {
//        cout << "找到30的上限：" << *up_ret << endl;
//    }
//    //equal_range(keyElem);//返回容器中Key与keyElem相等的上下限的两个迭代器
//    //equal_range返回的是对组
//    //first对组中第一个值  second对组中第二个值
//    pair< set<int>::const_iterator, set<int>::const_iterator> pair_ret;
//    pair_ret = s.equal_range(30);
//    //下限：lower_bound
//    if (pair_ret.first == s.end())
//    {
//        cout << "没有找到下限" << endl;
//    }
//    else
//    {
//        cout << "找到下限：" << *(pair_ret.first)<< endl;
//    }
//    //上限：upper_bound
//    if (pair_ret.second == s.end())
//    {
//        cout << "没有找到上限" << endl;
//    }
//    else
//    {
//        cout << "找到上限：" << *(pair_ret.second) << endl;
//    }
//}
//void test04()
//{
//    //9527--星爷    10086--移动     10010--联通
//    //定义对组方式1：
//    pair<int, string> pair1(9527, "星爷");
//    cout << "编号：" << pair1.first << ",人物：" << pair1.second << endl;
//
//    //定义对组方式1：(推荐)
//    pair<int, string> pair2(10086, "移动");
//    cout << "编号：" << pair2.first << ",人物：" << pair2.second << endl;
//}
//class MyGreater
//{
//public:
//    bool operator()(int val1,int val2)  const
//    {
//        return val1 > val2;
//    }
//};
//bool myGreater(int v1, int v2)
//{
//    return v1 > v2;
//}
////更改set默认排序规则
//void test05()
//{
//    //默认从小-->大排
//    //改成从大-->小排
//    //set<int,排序规则> s
//    //尖括号里需要既是类型也是函数，所以使用仿函数
//    set<int,MyGreater> s;
//    //set容器自动根据键值排序
//    s.insert(30);
//    s.insert(10);
//    s.insert(20);
//    s.insert(40);
//    s.insert(50);
//
//    for_each(s.begin(), s.end(), [](int val) {
//        cout << val << "   ";
//        });
//    cout << endl;
//}
//class Person
//{
//public:
//    string name;
//    int age;
//    Person(string name, int age)
//    {
//        this->name = name;
//        this->age = age;
//    }
//    //方法一：重载<运算符  小-->大
//    bool operator<(const Person& ob) const
//    {
//        return this->age < ob.age;
//    }
//};
////方法二：重载<运算符  小-->大
//class myGreaterPerson
//{
//public:
//    bool operator()(const Person& ob1, const Person& ob2)const
//    {
//        return ob1.age > ob2.age;
//    }
//};
//void test06()
//{
//    set<Person,myGreaterPerson> s;
//    s.insert(Person("麦克", 25));
//    s.insert(Person("乔治", 35));
//    s.insert(Person("威斯布鲁克", 29));
//    s.insert(Person("迈克尔", 21));
//
//    for_each(s.begin(), s.end(), [](Person val) {
//        cout << "name = " << val.name << ", age =" << val.age << endl;
//        });
//}
//void test07()
//{
//    set<int> s;
//    pair<set<int>::const_iterator, bool> ret1;
//    pair<set<int>::const_iterator, bool> ret2;
//
//    ret1 = s.insert(10);
//    if (ret1.second == true)
//    {
//        cout << "第一次插入成功" << endl;
//    }
//    else
//    {
//        cout << "第一次插入失败" << endl;
//    }
//    ret2 = s.insert(10);
//    if (ret2.second == true)
//    {
//        cout << "第二次插入成功" << endl;
//    }
//    else
//    {
//        cout << "第二次插入失败" << endl;
//    }
//    for_each(s.begin(), s.end(), [](int val) {
//        cout << val<<"    " << endl;
//        });
//}
//void test08()
//{
//
//    //可以插入重复的键值
//    multiset<int> s;
//
//    s.insert(10);
//    s.insert(10);
//
//    for_each(s.begin(), s.end(), [](int val) {
//        cout << val << "    " << endl;
//        });
//    cout << endl;
//}
//int main(int argc, char* argv[])
//{
//	test08();
//	return 0;
//}