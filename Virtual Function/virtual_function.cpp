// CPP program to illustrate
// concept of Virtual Functions

#include <iostream>
using namespace std;

class base {
public:
	virtual void print()
	{
		cout << "print base class" << endl;
	}

	void show()
	{
		cout << "show base class" << endl;
	}
};

class derived : public base {
public:
	virtual void print()
	{
		cout << "print derived class" << endl;
        base::print();
	}

	void show()
	{
		cout << "show derived class" << endl;
	}
};

int main()
{
	base* bptr;
	derived d;
	bptr = &d;

    bptr->print();  // Runtime Polymorphism
    bptr->show();   // Compile time Polymorphism
}
