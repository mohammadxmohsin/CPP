#include<iostream>
#include<math.h>
using namespace std;
class Shapes
{
    public:

    void area(int s)
    {
        cout<<endl<<"Area of Square is:"<<s*s;
    }
    void area(int r,float s)
    {
        cout<<endl<<"Area of Circle is:"<<3.14*r*r;
    }
    void area(int w,int l)
    {
        cout<<endl<<"Area of Rectangle is:"<<w*l;
    }
    void area(int b,int h,int x)
    {
        int area;
        area=b*h;
    }
    void area(float side)
    {
        int area;
        area=(3 * sqrt(3) / 2) * pow(side, 2);
    }
};
int main()
{
    return 0;
}