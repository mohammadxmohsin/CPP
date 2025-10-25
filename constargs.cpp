//Function With Constant Argument:
#include<iostream>
using namespace std;
class data
{
    public:
    void add(const int a,const int b)
    {
        /*
        a++;
        b--
        */
        cout<<endl<<a<<":"<<b;
    }
};
int main()
{
    data d1;
    d1.add(10,20);
    return 0;
}