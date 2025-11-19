#include <iostream>
using namespace std;

class A
{
public:
    virtual void show() = 0;  
};

class B : public A
{
public:
    void show() override  
    {
        cout << "This is Derived Class" << endl;
    }
};

int main()
{
    B obj;
    obj.show();
    return 0;
}
