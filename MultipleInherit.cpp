#include<iostream>
using namespace std; 
class Profile
{
    private:
    string name;
    string city;;
    public:
    Profile(string name, string city)
    {
        this->name=name;
        this->city=city;
    }
    void display_profile()
    {
        cout<<endl<<"Name: "<<name;
        cout<<endl<<"City: "<<city;
    }
};   
class Education
{
    private:
    string Course;
    int cgpa;
    public:
    Education(string Course, int cgpa)
    {
        this->Course=Course;
        this->cgpa=cgpa;
    }
    void display_education()
    {
        cout<<endl<<"Course: "<<Course;
        cout<<endl<<"CGPA: "<<cgpa;
    }
};
class Skills
{
    private:
    string skill;
    int experience;
    public: 
    Skills(string skill, int experience)
    {
        this->skill=skill;
        this->experience=experience;
    }
    void display_skills()
    {
        cout<<endl<<"Skill: "<<skill;
        cout<<endl<<"Experience: "<<experience<<" years";
    }
};
class Personal:public Profile, public Education, public Skills
{
    private:
    string title;
    public:
    Personal(string name, string city, string Course, int cgpa, string skill, int experience)
    :Profile(name, city), Education(Course, cgpa), Skills(skill, experience)
    {
        this->title="---PERSONAL DETAILS---";
    }
    void display_personal()
    {
        cout<<endl<<title;
        display_profile();
        display_education();
        display_skills();
    }
};
int main()
{
    Personal p("Abdul", "New York", "Computer Science", 8.5, "C++ Programming", 5);
    p.display_personal();
    return 0;
}