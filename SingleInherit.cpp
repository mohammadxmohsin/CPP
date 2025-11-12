//Single Inheritance Example in C++
#include<iostream>
using namespace std;
class college
{
    private:
    int college_id;
    string college_name;
    public:
    college()
    {
        college_id=101;
        college_name="ATT College";
    }
    college(int college_id, string college_name)
    {
        this->college_id=college_id;
        this->college_name=college_name;
    }
    void display_college()
    {
        cout<<endl<<"College Id: "<<college_id;
        cout<<endl<<"College Name: "<<college_name;
    }
};
class student:public college
{
    private:
    int student_id;
    string student_name;
    string student_branch;
    public:
    student()
    {
        student_id=201;
        student_name="Mohammad";
        student_branch="Computer Science";
    }
    student(int college_id,string college_name,int student_id, string student_name, string student_branch):college(college_id,college_name) 
    {
        this->student_id=student_id;
        this->student_name=student_name;
        this->student_branch=student_branch;
    }
    void display_student()
    {
        cout<<endl<<"Student Id: "<<student_id;
        cout<<endl<<"Student Name: "<<student_name;
        cout<<endl<<"Student Branch: "<<student_branch;
    }
};
int main()
{
    student s1;
    student s2(102,"MHS College",202,"Ali","Mechanical");
    s1.display_college();
    cout<<endl;
    s1.display_student();
    cout<<endl;
    s2.display_college();
    cout<<endl;
    s2.display_student();

    return 0;
}