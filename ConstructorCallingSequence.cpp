#include <iostream>
using namespace std;

class X
{
public: X()
        {
			cout<<"X"<<"\n";
		}
        ~X()
        { 
		cout<<"~X"<<"\n"; 
		}
};

class Y : public X
{
public: Y()
        {
			cout<<"Y"<<"\n"; 
		}
        ~Y()
        { 
		cout<<"~Y"<<"\n";
		}
};

int main()
{
    Y obj;
    return 0;
}

/*
X
Y
~Y
~X
*/