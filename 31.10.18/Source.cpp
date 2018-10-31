#include <iostream>
using namespace std;
class counter
{
	static int aliveObjects;
	static int createdObjects;
public:
	static void info()
	{
		cout << "Created " << createdObjects;
		cout << "\nAlive " << aliveObjects;
	}
	counter()
	{
		aliveObjects++;
		createdObjects++;
	}
	~counter()
	{
		aliveObjects--;
	}
};
int counter::aliveObjects=0;
int counter::createdObjects = 0;

class time_
{
	static void getSystemTime()
	{

	}
};


//int createdObjects=0;
//int aliveObjects=0;
//class A {	
//	static int createdObjects;
//	static int aliveObjects;
//	int number;
//public:
//	static void setCreatedObjects()
//	{
//		createdObjects++;
//	}
//	
//	A()
//	{
//		createdObjects++;
//		aliveObjects++;
//	}
//	~A()
//	{
//		aliveObjects--;
//	}
//};
//int A::createdObjects;// = 0;
//int A::aliveObjects;// = 0;
void main()
{
	counter arr[1000];
	counter *c = new counter[5];
	delete[]c;
	counter::info();
	/*arr[0].info();
	arr[777].info();*/
	/*A arr[1000];
	arr[30].setCreatedObjects();
	A::setCreatedObjects();*/
	/*A a, b, c, d;
	{
		A h;
	}
	cout << a.createdObjects << " " << d.aliveObjects;
	A::aliveObjects;*/
	system("pause");
}
//class drob
//{
//	int x, y;
//	friend drob operator+(const drob&a, const drob&b);
//public:
//	void setX(int x){}
//	void setY(int y){}
//	int getX() const{ return 1; }
//	int getY()const { return 1; }
//	friend void f();	
//};
//void f(){
//}
//drob operator+(const drob&a, const drob&b)
//{
//	drob res;
//	res.x = a.x*b.y + a.y*b.x;
//	res.y=a.y*b.y;
//}