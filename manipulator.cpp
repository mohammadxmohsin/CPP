#include<iostream>
#include<iomanip>   
using namespace std;
int main()
{
    double f=123.456789;
    int b=2000;

    cout<<endl<<setprecision(4)<<f;
    cout<<endl<<setprecision(6)<<f;

    cout<<endl<<right<<setw(10)<<b;
    cout<<endl<<left<<setw(10)<<b;

    cout<<endl<<left<<setw(20)<<setfill('!')<<b;
    cout<<endl<<right<<setw(20)<<setfill('!')<<b;

    return 0;
}