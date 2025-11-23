#include<iostream>
using namespace std;
template<typename A>
void swap_data(A x,A y)
{
    A t;
    t=x;
    x=y;
    y=t;
    cout<<endl<<"After Swap: "<<x<<":"<<y;
}

int main()
{
    int a=20;int b=50;
    string name1="apple";string name2="mango";
    swap_data(a,b);
    swap_data(name1,name2);
    return 0;

}