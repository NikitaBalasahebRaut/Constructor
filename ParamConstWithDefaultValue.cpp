//Program to demonstrate the concept of parameterized constructor with the default value
//if we dont pass the value at the time of object creation then it take default value,if we pass value then it take that value 

#include<iostream>
using namespace std;

class Demo
{
  public:
         int i;
		 int j;
		 Demo(int a = 11,int b = 21)
		 {
		   i = a;
		   j = b;
		 }
};

int main()
{
  cout<<"Inside main\n";
  Demo obj;
  cout<<"default value of i"<<obj.i<<"\n";
  cout<<"default value of j"<<obj.j<<"\n";
  
  Demo obj1(100,200);
  cout<<"value of i"<<obj1.i<<"\n";
  cout<<"value of j"<<obj1.j<<"\n";
  

return 0;
}
/*
Inside main
default value of i11
default value of j21
 value of i100
 value of j200
*/