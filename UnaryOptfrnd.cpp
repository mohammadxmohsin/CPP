#include<iostream>
using namespace std;
class Box
{
    private:
    int l,w,d;
    public:
    Box()
    {
        l=d=1;
    }
    Box(int l,int w,int d)
    {
        this->l=l;
        this->w=w;
        this->d=d;
    }
    void volume()
    {
        cout<<endl<<l*w*d;
    }
    friend Box operator ++(Box &B);
};
Box operator ++(Box &B)
{
    Box Answer;
    Answer.l=++B.l;
    Answer.w=++B.w;
    Answer.d=++B.d;
    return Answer;
}

int main()
{
    Box b1(2,3,4),b2(4,5,6),b3;
    b1.volume();
    b3=++b1;
    b3.volume();
    b1.volume();
    return 0;
}