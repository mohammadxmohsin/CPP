#include<iostream>
using namespace std;
class data
{
    int a,b;
    public:
    data()
    {
        a=20;
        b=10;
    }
    void display()
    {
        cout<<endl<<"A= "<<a;
        cout<<endl<<"B= "<<b;
    }
    void display(int m)
    {
        cout<<endl<<"A+M= "<<a+m;
        cout<<endl<<"B+M= "<<b+m;
    }
    void display(int p,int q)
    {
        cout<<endl<<"P= "<<p;
        cout<<endl<<"Q= "<<q;
    }
};
int main()
{
    data d1;
    d1.display();
    d1.display(30);
    d1.display(25,35);
    return 0;
}
