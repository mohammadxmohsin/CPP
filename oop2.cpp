/*
Create a Program by Using OOP to implement the Student Class with 
Following data members:
roll_no,name,marks,total,percent,grade.
Create functions to:
1:ReadData
2:DisplayData
*/

#include<iostream>
using namespace std;
class Student
{
    private:
    int roll,marks[3],total=0,i;
    string name;
    char grade;
    float percent;

    public:
    void ReadData()
    {
        cout<<endl<<"Enter Your Roll Number: ";
        cin>>roll;
        cout<<endl<<"Enter Your Name: ";
        cin>>name;
        cout<<endl<<"Enter Your 3 Subject Marks: ";
        for(i=0;i<3;i++)
        {
            cin>>marks[i];
            total+=marks[i];
        }
        percent=(total/3.0);
        if(percent>=75)
        {
            grade='A';
        }
        else if(percent>=65)
        {
            grade='B';
        }
        else if(percent>=50)
        {
            grade='C';
        }
        else
        {
            grade='D';
        }      
    }
    void DisplayData()
    {
        cout<<endl<<"Name: "<<name;
        cout<<endl<<"Roll No: "<<roll;
        cout<<endl<<"Total: "<<total;
        cout<<endl<<"Percentage is: "<<percent;   
        cout<<endl<<"Grade is: "<<grade;  
    }

};
int main()
{ Student S[5];
    int i;
    for(i=0;i<5;i++)
    {
        S[i].ReadData();
    }
    for(i=0;i<5;i++)
    {
        S[i].DisplayData();
    }
    return 0;
}