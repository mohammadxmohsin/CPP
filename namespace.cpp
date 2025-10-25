#include<iostream>
using namespace std;

namespace Student
{
    int count=500;
}
namespace Staff
{
    int count=100;
}
int main()
{
    cout<<endl<<Student::count;
    cout<<endl<<Staff::count;
    return 0;
}
