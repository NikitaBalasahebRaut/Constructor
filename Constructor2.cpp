#include <iostream>
using namespace std;

class A
{
	public:
	int a;
	A()
	{
		a = 5;
	}
	void assign(int i)
	{
		a = i;
	}
	int return_value()
	{
		return a;
	}
};
int main()
{
	A obj;
	obj.assign(10);
	cout<<obj.return_value();
}
//output 10