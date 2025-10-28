/*
Multiplication of Two Complex Numbers using operator Overloading.
*/
#include<iostream>
using namespace std;
class Complex
{
    private:
    int real,img;

    public:
    Complex()
    {
        real=img=0;
    }
    Complex(int real,int img)
    {
        this->real=real;
        this->img=img;
    }
    Complex operator*(Complex P)
    {
        Complex Answer;
        Answer.real = (real * P.real) - (img * P.img);
        Answer.img = (real * P.img) + (img * P.real);
        return Answer;
    }
    void display()
    {
        if(img<0)
            cout<<endl<<real<<img<<"j";
        else
            cout<<endl<<real<<"+"<<img<<"j";
    }
};
int main()
{
    Complex C1(20,5),C2(10,-2),C3;
    C3=C1*C2;
    C1.display();
    C2.display();
    cout<<endl<<"Multiplication of Two Complex NO are is:";
    C3.display();
    return 0;
}    