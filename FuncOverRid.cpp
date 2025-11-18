//Function OverRiding:
/*#include<iostream>
using namespace std;
class Base
{
    public:
    void show()
    {
        cout<<endl<<"This is Base Class";
    }
};
class Derived:public Base
{
    public:
    void show()
    {
        cout<<endl<<"This is Derived Class";
    }
};
int main()
{
    Base b1,*ptr;
    ptr=&b1;
    b1.show();
    Derived d1;
    ptr=&d1;
    d1.show();
    return 0;
}*/
#include <iostream>
using namespace std;

class Animal {
public:
    virtual void sound() 
    {
        cout << "Animal makes a sound" << endl;
    }
};

class Dog : public Animal {
public:
    void sound() override 
    { 
        cout << "Dog barks" << endl;
    }
};

int main() {
    Animal* a; 
    Dog d;

    a = &d;
    a->sound();

    return 0;
}
