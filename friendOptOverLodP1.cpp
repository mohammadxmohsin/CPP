#include<iostream>
using namespace std;
class Complex
{
    int real,imag;
    public:
    Complex()
    {
        real=imag=0;
    }
    Complex(int real,int imag)
    {
        this->real=real;
        this->imag=imag;
    }
    void display()
    {
        if(imag<0)
        {
            cout<<endl<<real<<imag<<"i";
        }
        else
        {
            cout<<endl<<real<<"+"<<imag<<"i";
        }
    }
    friend Complex operator +(Complex A1,Complex A2);
};
Complex operator +(Complex A1,Complex A2)
{
    Complex Answer;
    Answer.real=A1.real+A2.real;
    Answer.imag=A1.imag+A2.imag;
    return Answer;
}
int main()
{
    Complex C1(5,2),C2(4,-6),C3;
    C3=C1+C2;
    C1.display();
    C2.display();
    C3.display();
    
    return 0;
}