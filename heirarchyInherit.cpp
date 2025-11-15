// CPP program to demonstrate Hierarchical Inheritance
#include<iostream>
using namespace std;
class Person
{
    protected:
    string name,gender,city;
    int age;
    public:
    Person(string name, string gender, string city, int age)
    {
        this->name=name;
        this->gender=gender;
        this->city=city; 
        this->age=age;    
    }           
};
class student:public Person
{
    private:
    int roll_no;
    string division;
    string school;
    double percentage;
    public:
    student(string name, string gender, string city, int age, int roll_no, string division, string school, double percentage):Person(name,gender,city,age)
    {
        this->roll_no=roll_no;
        this->division=division;
        this->school=school;
        this->percentage=percentage;
    }
    void show_student_details()
    {
        cout<<endl<<"Student Details:";
        cout<<endl<<"Name: "<<name;
        cout<<endl<<"Gender: "<<gender;
        cout<<endl<<"City: "<<city;
        cout<<endl<<"Age: "<<age;
        cout<<endl<<"Roll No: "<<roll_no;
        cout<<endl<<"Division: "<<division;
        cout<<endl<<"School: "<<school;
        cout<<endl<<"Percentage: "<<percentage;
        cout<<endl<<"---------------------------";
    }
};
class Staff:public Person
{
    private:
    string designation;
    double salary;
    public:
    Staff(string name, string gender, string city, int age, string designation, double salary):Person(name,gender,city,age)
    {
        this->designation=designation;
        this->salary=salary;
    }
    void show_staff_details()
    {
        cout<<endl<<"Staff Details:";
        cout<<endl<<"Name: "<<name;
        cout<<endl<<"gender: "<<gender;
        cout<<endl<<"City: "<<city;
        cout<<endl<<"Age: "<<age;
        cout<<endl<<"Designation: "<<designation;
        cout<<endl<<"Salary: "<<salary;
        cout<<endl<<"---------------------------";
    }    
};
int main()
{
    student s1("Abdullah","Male","Nashik",15,10,"B","HYC School",69.5);
    s1.show_student_details();
    Staff s2("Simmi","Female","Pune",25,"Teacher",45000);
    s2.show_staff_details();
    return 0;
};