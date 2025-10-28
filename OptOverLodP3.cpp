/*
Join two Strings Using Operator Loading*/
#include<iostream>
#include<cstring>
using namespace std;
class Mystring
{
    char str[100];
    public:
    Mystring()
    {
        cout<<endl<<"Enter String:";
        cin>>str; 
    }
    void display()
    {
        cout<<endl<<str;
    }
    Mystring operator +(Mystring T)
    {
        Mystring Answer;
        strcpy(Answer.str,this->str);
        strcat(Answer.str,T.str);
    }
};
int main()
{
    Mystring S1,S2;
    Mystring S3=S1+S2;
    S1.display();
    S2.display();
    S3.display();

    return 0;
}