#include<iostream>
using namespace std;
/*namespace Alpha
{
    int a=10;
}
namespace Gamma
{
    int a=10;
}*/

/*class sample
{
    public:
    static int a;
    int b;
};
int sample::a=20;*/
/*int globalVar=100;
class data
{
    public:
    void display();
    
};*/
class show
{
    public:
    void display();
};
void show::display()
{
    cout<<endl<<"Hello World!";
}
int main()
{
    /*cout<<endl<<Alpha::a;
    cout<<endl<<Gamma::a;*/
    //std::cout<<std::endl<<"Hello World!";
    //cout<<endl<<sample::a;
    /*cout<<endl<<::globalVar;
    int localVar=200;
    cout<<endl<<localVar;*/

    return 0;
}