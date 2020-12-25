#include <iostream>
using namespace std;

class A
{
	mutable int a;
public:
	A()
	{
		cout<<"Default constructor called\n";
	}
	A(const A& a)
	{
		cout<<"Copy Constructor called\n";
	}
};
int main()
{
	A obj;
	A a1 = obj;         //copy constructor call
	A a2(obj);
}

/*
output
Default constructor called
Copy Constructor called
Copy Constructor called
*/
/*
Explanation: When object obj is declared then the default constructor is called. When we are declaring the a1 object as we are equating obj to a1 object obj will be copied 
to a1 hence copy constructor is called, similarly when object a2 is created obj is passed as a parameter to function which is available as copy constructor function, hence 
copy constructor will be called. So one time Default constructor and two times copy constructor.
*/