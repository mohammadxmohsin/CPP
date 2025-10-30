#include<iostream>
using namespace std;
class y;
class x
{
    int A;
    public:
    x()
    {
        A=200;
    }
    friend void display(x a1,y b1);
};
class y
{
    int B;
    public:
    y()
    {
        B=400;
    }
    friend void display(x a1,y b1);
};
void display(x a1,y a2)
{
    cout<<endl<<"A="<<a1.A;
    cout<<endl<<"B="<<a2.B;
}
int main()
{
    x obj1;
    y obj2;
    display(obj1, obj2);
    return 0;
}