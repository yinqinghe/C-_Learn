//#include<iostream>
//#include<algorithm>
//#include<vector>
//#include<numeric>
//#include <functional>
//using namespace std;
////常用排序算法
////merge算法  容器元素合并，并存储到另一个容器中（每个容器必须有序）
//void test01()
//{
//	vector<int> v1;
//	v1.push_back(2);
//	v1.push_back(20);
//	v1.push_back(39);
//	v1.push_back(40);
//	v1.push_back(53);
//
//	vector<int> v2;
//	v2.push_back(2);
//	v2.push_back(4);
//	v2.push_back(19);
//	v2.push_back(40);
//	v2.push_back(73);
//
//	vector<int> v3;
//	//预先：设置v3的大小
//	v3.resize(v1.size() + v2.size());
//	merge(v1.begin(), v1.end(), v2.begin(), v2.end(), v3.begin());
//	for_each(v3.begin(), v3.end(), [](int val) {cout << val << "   "; });
//	cout << endl;
//}
//
////random_shuffle算法  对指定范围内的元素随机调整次序
//void test02()
//{
//	//srand设置随机种子
//	srand(time(NULL));
//	vector<int> v1;
//	v1.push_back(2);
//	v1.push_back(20);
//	v1.push_back(39);
//	v1.push_back(40);
//	v1.push_back(53);
//	for_each(v1.begin(), v1.end(), [](int val) {cout << val << "   "; });
//	cout << endl;
//	//需要配置随机种子
//	random_shuffle(v1.begin(), v1.end());
//
//	for_each(v1.begin(), v1.end(), [](int val) {cout << val << "   "; });
//	cout << endl;
//}
////reverse算法  反转指定范围的元素
//void test03()
//{
//	vector<int> v1;
//	v1.push_back(2);
//	v1.push_back(20);
//	v1.push_back(39);
//	v1.push_back(40);
//	v1.push_back(53);
//	for_each(v1.begin(), v1.end(), [](int val) {cout << val << "   "; });
//	cout << endl;
//	reverse(v1.begin() + 1, v1.end() - 1);
//
//	for_each(v1.begin(), v1.end(), [](int val) {cout << val << "   "; });
//	cout << endl;
//}
////常用拷贝和替换算法
////copy算法 将容器内指定范围的元素拷贝到另一容器中
//#include<iterator>
//void test04()
//{
//	vector<int> v1;
//	v1.push_back(2);
//	v1.push_back(20);
//	v1.push_back(39);
//	v1.push_back(40);
//	v1.push_back(53);
//
//	vector<int> v2;
//	//预先：设置大小
//	v2.resize(v1.size());
//
//	copy(v1.begin(), v1.end(), v2.begin());
//	for_each(v2.begin(), v2.end(), [](int val) {cout << val << "   "; });
//	cout << endl;
//
//	//用copy输出
//	copy(v1.begin(), v1.end(),ostream_iterator<int>(cout,"  "));
//}
////replace 算法  将容器内指定范围的旧元素修改为新元素
//void test05()
//{
//	vector<int> v1;
//	v1.push_back(2);
//	v1.push_back(20);
//	v1.push_back(39);
//	v1.push_back(40);
//	v1.push_back(53);
//	//将容器中的3替换成3000
//	replace(v1.begin(), v1.end(), 39, 93);
//	copy(v1.begin(), v1.end(), ostream_iterator<int>(cout, ","));
//	cout << endl;
//
//	//将容器的大于3的替换成3000
//	replace_if(v1.begin(), v1.end(), bind2nd(greater<int>(),3),1000);
//	copy(v1.begin(), v1.end(), ostream_iterator<int>(cout, ","));
//}
////swap算法  互换两个容器的元素
//
////常用算数生成算法
////accumulate算法  计算容器元素累计总和
//void test06()
//{
//	vector<int> v1;
//	v1.push_back(2);
//	v1.push_back(20);
//	v1.push_back(39);
//	v1.push_back(40);
//	v1.push_back(53);
//
//	int sum = accumulate(v1.begin(), v1.end(), 100);
//	cout << "sum = " << sum << endl;
//}
////fill算法  向容器中添加元素
//void test07()
//{
//	vector<int> v;
//	v.resize(9);
//	fill(v.begin(), v.end(), 115);
//	copy(v.begin(), v.end(), ostream_iterator<int>(cout, "  "));
//}
////常用集合算法
////set_intersection算法  求两个set集合的交集
//void test08()
//{
//	vector<int> A;
//	A.push_back(1);
//	A.push_back(11);
//	A.push_back(7);
//	A.push_back(9);
//	A.push_back(3);
//
//	vector<int> B;
//	B.push_back(1);
//	B.push_back(13);
//	B.push_back(3);
//	B.push_back(17);
//	A.push_back(9);
//	//求交集
//	vector<int> v1;//存放交集
//	v1.resize(min(A.size(), B.size()));
//	vector<int>::iterator myEnd;
//	myEnd=set_intersection(A.begin(), A.end(), B.begin(), B.end(), v1.begin());
//	copy(v1.begin(), v1.end(), ostream_iterator<int>(cout, " ,"));
//	copy(v1.begin(), myEnd, ostream_iterator<int>(cout, " ,"));
//	cout << endl;
//
//	//set_union算法  求两个set集合的并集
//		//求并集
//	vector<int> v2;//存放并集
//	v2.resize(A.size() + B.size());
//	vector<int>::iterator myEnd2;
//	myEnd2 = set_union(A.begin(), A.end(), B.begin(), B.end(), v2.begin());
//	copy(v2.begin(), v2.end(), ostream_iterator<int>(cout, " ,"));
//	copy(v2.begin(), myEnd2, ostream_iterator<int>(cout, " ,"));
//	cout << endl;
//
//	//set_difference算法  求两个set集合的差集
//		//求差集
//	vector<int> v3;//存放差集
//	v3.resize(max(A.size(), B.size()));
//	vector<int>::iterator myEnd3;
//	myEnd3 = set_difference(A.begin(), A.end(), B.begin(), B.end(), v3.begin());
//	copy(v3.begin(), v3.end(), ostream_iterator<int>(cout, " ,"));
//	copy(v3.begin(), myEnd3, ostream_iterator<int>(cout, " ,"));
//	cout << endl;
//}
//int main(int argc, char* argv[])
//{
//	test08();
//	return 0;
//}