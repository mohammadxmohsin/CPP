#include<iostream>
using namespace std;
class school
{
    public:
    string sch_name,city;
    school()
    {
        sch_name="ATT";
        city="Malegaon";
        sch_id="att@123";
        prn_no="72340089L";
        password="xyz@123";
    }
    void show()
    {
        cout<<endl<<password;
    }

    protected:
    string sch_id,prn_no;;

    private:
    string password;   
};
class principal:public school
{
    public:
    void display()
    {
        cout<<endl<<sch_name;
        cout<<endl<<city;
        cout<<endl<<prn_no;
        cout<<endl<<sch_id;
    }
};
int main()
{
    school obj;
    principal p1;

    p1.display();
    p1.show();
    return 0;
}