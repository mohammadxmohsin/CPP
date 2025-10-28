#include<iostream>
using namespace std;
class Complex
{
    private:
    int real,imag;
    public:
    Complex()
    {
        real=0;
        imag=0;
    }
    Complex(int real,int imag)
    {
        this->real=real;
        this->imag=imag;
    }
    void display()
    {
        if(imag<0)
            cout<<endl<<real<<imag<<"j";
        else
            cout<<endl<<real<<"+"<<imag<<"j";    
    }
    Complex operator ++()
    {
        ++this->real;
        ++this->imag;
    }
    Complex operator --()
    {
        --this->real;
        --this->imag;
    }
    Complex operator ++(int)
    {
        Complex Temp=*this;
        this->real++;
        this->imag++;
        return Temp;
    }
    Complex operator --(int)
    {
        Complex Temp=*this;
        this->real--;
        this->imag--;
        return Temp;
    }
};
int main()
{
    Complex C1(3,4),C2;
    /*C1.display();
    ++C1;
    C2=C1;
    C2.display();
    --C2;
    C2.display();*/
    C2=C1++;
    C2.display();
    C1.display();
    C2=C1--;
    C1.display();

    return 0;
}