//these program give error : no matching function for call to 'A::A()'   A obj(because we write parameterized constructor and not pass argument to it ,we write default constructor)

#include <iostream>
using namespace std;

class A
{
	int a;
public:
	A(int i)
	{
		a = i;
	}
	void assign(int i)
	{
		a = i;
	}
	int return_value(){
		return a;
	}
};
int main()
{
	A obj;
	obj.assign(5);
	cout<<obj.return_value();
	
	return 0;
}

/*
Explanation: As we have defined a constructor which takes an int parameter, so when we are trying to declare an object obj of class A without supplying any parameter then as a
 constructor is overwritten it will give an error saying that no matching function found. So whenever one writes a constructor then the default constructor is overwritten hence 
 if you want to declare an object without parameter then you also have to define that constructor.
 */
