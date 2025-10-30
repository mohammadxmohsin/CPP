#include<iostream>
using namespace std;
class Data
{
    int x,y;
    protected:
    int z;
    public:
    string w;

    Data(int x,int y,int z,string w)
    {
        this->x=x;
        this->y=y;
        this->z=z;
        this->w=w;
    }
    void show()
    {
        cout<<endl<<"x:"<<x;
        cout<<endl<<"y:"<<y;
        cout<<endl<<"z:"<<z;
        cout<<endl<<"w:"<<w;
    }
    friend void display(Data T);

    void display(Data T)
    {
        cout<<endl<<"x:"<<T.x;
        cout<<endl<<"y:"<<T.y;
        cout<<endl<<"z:"<<T.z;
        cout<<endl<<"w:"<<T.w;
    }
    
};
int main()
{
    Data d(10,20,30,"Alpha");
    //d.show();
    display(d);
    return 0;
}