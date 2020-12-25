#include <iostream>
using namespace std;

class A
{
	mutable int a;
	
public:
	A()
	{
		cout<<"A's default constructor called\n";
	}
	A(const A& a)
	{
		cout<<"A's copy Constructor called\n";
	}
};
class B
{
	A obj;
public:
	B()
	{
		cout<<"B's Constructor called\n";
	}
};
int main()
{
	B b1;
	B b2;
}
/*
A's default constructor called
B's Constructor called
A's default constructor called
B's Constructor called
*/

/*
Explanation: Here when we are declaring the object b1 of class B then first the constructor of class B will be called, in which first it will initialize all the
 members of class B and as obj from class A is member of class B and it should be initialized so the A’s default constructor will be called and terminates after that B’s\
 constructor terminates hence A’s default constructor called is printed before B’s constructor called.
 */