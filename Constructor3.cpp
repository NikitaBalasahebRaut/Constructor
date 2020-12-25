#include <iostream>
using namespace std;

class A
{
	int a;
public:
	A()
	{
		cout<<"A's constructor called";
	}
};
class B
{
	static A a;
public:
	B()
	{
		cout<<"B's constructor called";
	}
	static A get()
	{
		return a;
	}
};
A B::a;
int main()
{
	B b;
	A a1 = b.get();
	A a2 = b.get();
	A a3 = b.get();
}
//output : A's constructor calledB's constructor called
/*
Explanation: As the object is defined ony once in the program at line A B::a, so the constructor of A is called only once.
 For objects a1, a2 and a3 copy constructor is called so the string will not be printed for them.
 */
