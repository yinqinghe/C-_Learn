//#include<iostream>
//#include<algorithm>
//#include<string>
//#include<map>
//#include<numeric>
//using namespace std;
////1.所有元素都会根据元素的键值自动排序
////2.所有的元素都是pair，同时拥有键值和实值
////第一个参数：键值  第二个参数：实值
//
///*
//           map/multimap常用API
//		   map构造函数
//map<T1,T2> mapTT;//map默认构造函数
//map(const map &map);//拷贝构造函数
//
//           map赋值操作
//map& operator=(const map &map);//重载等号操作符
//swap(mp);//交换两个集合容器
//
//           map大小操作
//size();//返回容器中元素的数目
//empty();//判断容器是否为空
//
//           map插入数据元素操作
//map.insert(...);//往容器插入元素，返回Pair<iterator,bool>
//map<int ,string>  mapStu;
////第一种  通过pair的方式插入对象
//mapStu.insert(pair<int,string>(3,"老李"));
////第二种  通过pair的方式插入对象
//mapStu.insert(make_pair(-1,"老师"));
////第三种  通过value_type的方式插入对象
//mapStu.insert(map<int,string>::value_type(1,"大理"));
////第四种通过数组 的方式插入值
//mapStu[3]="小明";
//mapStu[5]="小红";
//
//          map删除操作
//clear();//移除容器的所有数据
//erase(beg,end);//删除[beg,end)区间的所有数据，返回下一个数据的迭代器
//erase(pos);//删除pos迭代器所指的数据，返回下一个数据的迭代器
//erase(KeyElem);//删除容器中key为keyElem的对组
//
//          map查找操作
//find(key);//查找键Key是否存在，若存在，返回该键的元素的迭代器  ，若不存在，返回map.end();
//count(key);//返回容器中key为keyElem的对组个数。对map来说，要么是0，要么是1.
//lower_bound(keyElem);//返回第一个key>=keyElem元素的迭代器
//upper_bound(keyElem);//返回第一个key>keyElem元素的迭代器
//equal_range(keyElem);//返回容器中Key与keyElem相等的上下限的两个迭代器
//
//*/
//
//void myPrintMap01(map<int, string>& m)
//{
//    for (map<int, string>::const_iterator it = m.begin(); it != m.end(); it++)
//    {
//        //*it==<int,string>
//        cout << "key = " << (*it).first << ", value" << (*it).second << endl;
//    }
//}
//void test01()
//{
//    //9527--星爷    10086--移动     10010--联通
//    //int为键值的类型  string为实值的类型
//    map<int, string> m;
//
//    //第一种：
//    m.insert(pair<int, string>(9527, "星爷"));
//    //第二种：（推荐）
//    m.insert(make_pair(10086, "移动"));
//    //第三种
//    m.insert(map<int, string>::value_type(10010, "联通"));
//    //第四种  读map容器数据的时候  推荐
//    m[10000] = "电信";//
//
//    //m[10]  寻找key为10的实值
//    //但是：如果容器中没有key为10  使用m[10]  会创建一个key为10实值为空的  对组
//    //如果容器中有Key为10   那么m[10]代表key=10的实值
//    cout << m[10] << endl;
//    myPrintMap01(m);
//    for_each(m.begin(), m.end(), [](pair<int, string> val) {
//        cout << "key = " << val.first << ", value = " << val.second << endl;
//        });
//    cout << endl;
//    //只想查看Key==9527的实值
//    cout << m[9527] << endl;//"星爷"
//    cout << m[10010] << endl;//"联通"
//
//    //如果不能确定 key值是否存在
//    map<int, string>::iterator ret;
//    ret = m.find(10086);
//    if (ret == m.end())
//    {
//        cout << "未找到相关节点" << endl;
//    }
//    else
//    {
//        //ret代表的是key=10086的对组的迭代器
//        cout << "找到相关节点:key=" <<(*ret).first<<", value"<<(*ret).second<< endl;
//    }
//}
//#include<vector>
//void test02()
//{
//    //设置种子
//    srand(time(NULL));
//    //战队容器  （战队编号，战队名称）
//    map<int, string> m;
//    m.insert(make_pair(1, "RNG"));
//    m.insert(make_pair(2, "IG"));
//    m.insert(make_pair(3, "WE"));
//    m.insert(make_pair(4, "EDG"));
//
//    //使用vector存放战队编号
//    vector<int> v;
//    v.push_back(1);
//    v.push_back(2);
//    v.push_back(3);
//    v.push_back(4);
//
//    //随机抽签（洗牌）  打乱容器的元素顺序
//    random_shuffle(v.begin(), v.end());
//
//    //随机出场
//    for_each(v.begin(), v.end(), [&](int val) {
//        //val就是m容器中的Key值
//        cout << m[val] << "战队出场了" << endl;
//        });
//}
////multimap允许Key相同  ，map不允许key相同
//void test03()
//{
//    //战队容器  （战队编号，战队名称）
//    map<int, string> m;
//    m.insert(make_pair(1, "RNG"));
//    m.insert(make_pair(1, "IG"));
//
//    cout << m[1] << endl;
//    cout << m.count(1) << endl;
//
//    multimap<int, string> m1;
//    m1.insert(make_pair(1, "RNG"));
//    m1.insert(make_pair(1, "IG"));
//
//    //cout << m1[1] << endl;
//    cout << m1.count(1) << endl;
//}
//class Person
//{
//public:
//    string name;
//    int age;
//    Person(string name,int age)
//    {
//        this->name = name;
//        this->age = age;
//    }
//};
//void createVectorPerson(vector<Person> &v)
//{
//    v.push_back(Person("员工A", 28));
//    v.push_back(Person("员工B", 32));
//    v.push_back(Person("员工C", 26));
//    v.push_back(Person("员工D", 21));
//    v.push_back(Person("员工E", 30));
//
//}
//void PersonByGroup(vector<Person>& v, multimap<int, Person>& m)
//{
//    for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
//    {
//        //*it==Person
//        cout << "请输入" << (*it).name << "将要加入的部门：1，2，3" << endl;
//        int operate=0;
//        cin >> operate;
//        if (operate >= 1 && operate <= 3)
//        {
//            m.insert(make_pair(operate, *it));
//        }
//    }
//}
////void showPersonList(multimap<int, Person>& m)
////{
////    for (multimap<int, Person>::const_iterator it = m.begin(); it != m.end(); it++)
////    {
////        //*it==<int,string>
////        cout << "key = " << (*it).first << ", value" << (*it).second << endl;
////    }
////}
//void showPersonList01(multimap<int, Person>& m,int op)
//{
//    switch (op)
//    {
//    case 1:
//        cout << "研发部：" << endl;
//        break;
//    case 2:
//        cout << "测试部：" << endl;
//        break;
//    case 3:
//        cout << "人事部：" << endl;
//        break;
//    }
//
//    //注意：m中存放的数据<部门号，员工信息>
//    //统计部门号的元素个数
//    int n = m.count(op);
//    cout << "部门的人数个数：" << n << endl;
//    //由于multimap将key自动排序  重复  相同Key 一定挨在一起
//    multimap<int, Person>::const_iterator ret;
//    ret = m.find(op);
//    if (ret != m.end())//寻找到key
//    {
//        for (int i = 0; i < n; i++, ret++)
//        {
//            //(*ret)==<int,Person>
//            //(*ret).second==Person
//            cout << "name = " << (*ret).second.name << ", age = " << (*ret).second.age << endl;
//        }
//    }
//}
//void test04()
//{
//    //使用vector容器将员工信息存储起来
//    vector<Person> v;
//    //创建5名员工
//    createVectorPerson(v);
//
//    //将员工分配到不同的部门（员工<部门号，员工信息>)
//    multimap<int, Person> m;//存放员工<部门号，员工信息>
//    PersonByGroup(v, m);
//  //  showPersonList(m);
//
//    showPersonList01(m,1);
//    showPersonList01(m, 2);
//    showPersonList01(m, 3);
//}
//int main(int argc, char* argv[])
//{
//	test04();
//	return 0;
//}