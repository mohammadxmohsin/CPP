#include<iostream>
using namespace std;
template<typename A>
void sort_data(A x[],int l)
{
    int i,j;
    for(i=0;i<l;i++)
    {
        for(j=i+1;j<l;j++)
        {
            if(x[i] > x[j]) 
            {
                A temp;
                temp=x[i];
                x[i]=x[j];
                x[j]=temp;
            }
           
        }
    }
    cout<<endl<<"After Sort";
    for(i=0;i<l;i++)
    {
        cout<<endl<<x[i];
    }
}
int main()
{
    int x[5]={10,20,30,40,50};
    string s[3]={"C++","Python","HTML"};
    sort_data(x,5);
    sort_data(s,3);
    return 0;
}