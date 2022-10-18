#include<iostream>
using namespace std;

template<class T>
class MyArray {
private:
	T* addr;
	int capacity;
	int size;
public:
	MyArray(int capacity);
	MyArray(const MyArray& ob);
	~MyArray();

	//尾插法
	void push_back(const T& val);
	//遍历数组
	void printArray(void);
};


template<class T>
MyArray<T>::MyArray(int capacity)
{
	this->addr = new T[capacity];
	this->capacity = capacity;
	this->size = 0;
}

template<class T>
inline MyArray<T>::MyArray(const MyArray& ob)
{
	this->capacity = ob.capacity;
	this->addr = new T[this->capacity];

	int i;
	for (i = 0; i < ob.size; i++)
	{
		this->addr[i] = ob.addr[i];
	}
	this->size = ob.size;
}

template<class T>
inline MyArray<T>::~MyArray()
{
	if (this->addr != NULL)
	{
		delete[] this->addr;
		this->addr = NULL;
	}
}

template<class T>
inline void MyArray<T>::push_back(const T& val)
{
	//数组的实际个数size  不能超过capacity
	if (this->size == this->capacity)
	{
		cout << "容器已满" << endl;
		return;
	}
	this->addr[this->size] = val;
	this->size++;
}

template<class T>
inline void MyArray<T>::printArray()
{
	int i;
	for (i = 0; i < this->size; i++)
	{
		//如果输出的是自定义数据  必须重载<<
		cout << this->addr[i] << "   ";
	}
	cout << endl;

}
