#include<iostream>
using namespace std;
class Student
{
    private:
    int roll_no,marks[3],total;
    string name;
    double percent;
    
    public:
    Student(int roll_no,string name,int marks[])
    {
        int i;
        this->roll_no=roll_no;
        this->name=name;
        this->total=0;
        for(i=0;i<3;i++)
        {
            this->marks[i]=marks[i];
            this->total+=marks[i];
        }
        this->percent=total/3.0;
    }
    void display()
    {
        cout<<endl<<"Roll Number:"<<roll_no;
        cout<<endl<<"Name:"<<name;
        cout<<endl<<"Marks:"<<marks[0]<<" "<<marks[1]<<" "<<marks[2];
        cout<<endl<<"Total:"<<total;
        cout<<endl<<"Percentage:"<<percent;
        cout<<endl;
    }
    void display(Student All_std[],int n)
    {
        cout<<endl<<"Details of All Students:";
        int i;
        for(i=0;i<n;i++)
        {
            All_std[i].display();
        }
        cout<<endl;
    }
    void display(Student All_std[],int n,double p)
    {
        int i;
        cout<<endl<<"List of Students that have Greater than 75%";
        for(i=0;i<n;i++)
        {
            if(All_std[i].percent>=p)
                All_std[i].display();
        }
    }

};
int main()
{
    int a[3]={50,60,70};
    int b[3]={80,90,70};
    int c[3]={35,40,50};
    
    Student S1(1,"Ali",a);
    Student S2(2,"Alam",b);
    Student S3(3,"Aamir",c);
    Student All_std[3]={S1,S2,S3}; 
       
    S1.display();
    S1.display(All_std,3);
    S1.display(All_std,3,75);
    return 0;
}