//#include<iostream>
//#include<string>
//using namespace std;
//class Room;//Room向前声明
//
//class GoodGay
//{
//public:
//	void visit1(Room& room);
//	void visit2(Room& room);
//};
//class Room
//{
//	//友元函数可以访问类中所有数据 但是 它不是类的成员
//friend void goodGayVisit(Room& room);
////一定记得加作用域
////friend void GoodGay::visit1(Room& room);
////friend void GoodGay::visit2(Room& room);
//friend class GoodGay;
//private:
//	string bedRoom;
//public:
//	string sittingRoom;
//public:
//	Room()
//	{
//		this->bedRoom = "卧室";
//		this->sittingRoom = "客厅";
//	}
//};
//void GoodGay::visit1(Room& room)
//{
//	cout << "好基友visit1访问了你的" << room.sittingRoom << endl;
//	cout << "好基友visit2访问了你的" << room.bedRoom << endl;
//}
//void GoodGay::visit2(Room& room)
//{
//	cout << "好基友visit1访问了你的" << room.sittingRoom << endl;
//	cout << "好基友visit2访问了你的" << room.bedRoom << endl;
//}
//void goodGayVisit(Room& room)
//{
//	cout << "好基友访问了你的" << room.sittingRoom << endl;
//	cout << "好基友访问了你的" << room.bedRoom << endl;
//}
//void test01()
//{
//	Room myRoom;
//	//goodGayVisit(myRoom);
//	GoodGay goodgay;
//	goodgay.visit1(myRoom);
//	goodgay.visit2(myRoom);
//
//
//}
//int main(int argc, char* argv[])
//{
//	test01();
//	return 0;
//}