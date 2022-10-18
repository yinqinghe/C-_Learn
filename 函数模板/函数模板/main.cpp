//#include<iostream>
//#include"myarray.hpp"
//using namespace std;
//class Person
//{
//	friend ostream& operator<<(ostream& out, const Person& ob);
//private:
//	string name;
//	int age;
//public:
//	Person()
//	{
//		;
//	}
//	Person(string name, int age)
//	{
//		this->name = name;
//		this->age = age;
//	}
//	~Person()
//	{
//
//	}
//};
//ostream& operator<<(ostream& out, const Person& ob)
//{
//	out << "name=" << ob.name << ", age= " << ob.age<<endl;
//	return out;
//}
//int main(int argc, char* argv[])
//{
//	MyArray<char> ob(10);
//	ob.push_back('a');
//	ob.push_back('aba');
//	ob.push_back('vdgv');
//	ob.push_back('dzc');
//	ob.push_back('a');
//
//	ob.printArray();
//	MyArray<int> ob2(10);
//	ob2.push_back(10);
//	ob2.push_back(15);
//	ob2.push_back(11);
//	ob2.push_back(14);
//	ob2.push_back(22);
//	ob2.printArray();
//
//	MyArray<Person> ob3(10);
//	ob3.push_back(Person("¬Ì∂°", 11));
//	ob3.push_back(Person("¥”ƒ„ «", 11));
//	ob3.push_back(Person("∂≈∆’", 11));
//	ob3.push_back(Person("∆—À…¡‰", 11));
//	ob3.printArray();
//	return 0;
//}