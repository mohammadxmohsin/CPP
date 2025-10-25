/*Create Two Objects of Class Time
1:Create Methods to read and Dislay the Time.
2:Display addition of those times.
4:Display substraction of those times.*/
#include<iostream>
using namespace std;

class Time
{
    private:
    int hour,minut,second;

    public:
    void ReadTime()
    {
        cout<<endl<<"Enter Hour: ";
        cin>>hour;
        cout<<endl<<"Enter Minut: ";
        cin>>minut;
        cout<<endl<<"Enter Second: ";
        cin>>second;

        if(hour>24 || hour <0 && minut>60 || minut<0 && second>60 || second<0)
        {
            cout<<endl<<"Invalid Time";
            exit(0);
        }
    }
    void DisplayTime()
    {
        cout<<endl<<hour<<":"<<minut<<":"<<second;
    }
    void AddTime(Time t1,Time t2,Time t3)
    {
        Time R;
        R.second=t1.second+t2.second+t3.second;
        R.minut=t1.minut+t2.minut+t3.minut+R.second/60;
        R.hour=t1.hour+t2.hour+t3.hour+R.minut/60;

        R.second=R.second%60;
        R.minut=R.minut%60;
        R.hour=R.hour%24;

        cout<<endl<<R.hour<<":"<<R.minut<<":"<<R.second;     
    }
    void SubTime(Time t1,Time t2,Time t3)
    {
        Time R;
        R.hour=abs(t1.hour-t2.hour-t3.hour);
        R.minut=abs(t1.minut-t2.minut-t3.minut+R.second/60);
        R.second=abs(t1.second-t2.second-t3.second+R.minut/60);

        cout<<endl<<R.hour<<":"<<R.minut<<":"<<R.second;
    }
};
int main()
{
    Time t1,t2,t3;
    cout<<endl<<"1st Time:";
    t1.ReadTime();
    cout<<endl<<"2nd Time:";
    t2.ReadTime();
    cout<<endl<<"3rd Time:";
    t3.ReadTime();

    cout<<endl<<"1st Time:";
    t1.DisplayTime();
    cout<<endl<<"2nd Time:";
    t2.DisplayTime();
    cout<<endl<<"3rd Time:";
    t3.DisplayTime();

    t1.AddTime(t1,t2,t3);

    Time t1,t2,t3;
    cout<<endl<<"1st Time:";
    t1.ReadTime();
    cout<<endl<<"2nd Time:";
    t2.ReadTime();
    cout<<endl<<"3rd Time:";
    t3.ReadTime();

    cout<<endl<<"1st Time:";
    t1.DisplayTime();
    cout<<endl<<"2nd Time:";
    t2.DisplayTime();
    cout<<endl<<"3rd Time:";
    t3.DisplayTime();

    t1.SubTime(t1,t2,t3);


    return 0;
}