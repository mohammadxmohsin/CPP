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
    friend istream& operator >>(istream &in,Complex &C);
    friend ostream& operator <<(ostream &out,Complex &C);
};
istream& operator >>(istream &in,Complex &C)
{
    cout<<"Enter real: ";
    in>>C.real;
    cout<<"Enter imag: ";
    in>>C.imag;
    return in;
}
ostream& operator <<(ostream &out,Complex &C)
{
    out<<endl;
    out<<C.real;
    if(C.imag<0)
    {
        out<<C.real;
    }
    else
    {
        out<<"+";
        out<<C.imag;
    }
    out<<"i";
    return out;
}
int main()
{
    Complex C1(4,2);
    cout<<C1;
    cin>>C1;
    cout<<C1;
    return 0;
}