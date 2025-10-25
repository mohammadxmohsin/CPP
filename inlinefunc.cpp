#include<iostream>
using namespace std;
class Arithmetics
{
    int a,b;
    public:
    Arithmetics()
    {
        this->a=1000;
        this->b=5000;
        cout<<endl<<"Constructor is Called.........";
    }
    Arithmetics(int a,int b)
    {
        this->a=a;
        this->b=b;
        cout<<endl<<"Constructor is Called";
    }
    inline void add()
    {
        cout<<endl<<"Addition is: "<<a+b;
    };
    inline void sub()
    {
        cout<<endl<<"substaction is: "<<a-b;
    };
};
int main()
{
    Arithmetics a1(100,200);
    Arithmetics a2(500,300);
    Arithmetics a3;
    
    a1.add();
    a2.sub();
    return 0;
}