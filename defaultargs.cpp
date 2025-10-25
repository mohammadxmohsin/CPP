//Function With Default Argument:
#include<iostream>
using namespace std;

class Airthmetics
{
    public:
    int add(int a,int b=0)
    {
        cout<<endl<<"Addition is: "<<a+b;
    }
    int sub(int a,int b)
    {
        cout<<endl<<"Substraction is: "<<a-b;
    }
    int mul(int a,int b)
    {
        cout<<endl<<"Multiplication is: "<<a*b;
    }
    int div(int a,int b)
    {
        if(b==0)
        {
            cout<<endl<<"Division is Not Posiible!";
            return 0;
        }
        cout<<endl<<"Division is: "<<a/b;
    }
};
int main()
{
    Airthmetics obj;
    obj.add(10,20);
    obj.sub(10,20);
    obj.mul(10,20);
    obj.div(10,20);
    return 0;
}