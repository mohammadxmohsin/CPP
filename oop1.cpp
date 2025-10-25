#include<iostream>
using namespace std;
class AI_Tools
{
    private:
    string name,model;

    public:
    void Set_data()
    {
        cout<<endl<<"Enter Tool Name: ";
        cin>>name;
        cout<<endl<<"Enter Model Name: ";
        cin>>model;
    }
    void display_data()
    {
        cout<<endl<<"All Details";
        cout<<endl<<"Tool Name: "<<name<<endl;
        cout<<endl<<"Model: "<<model<<endl;
    }
};
int main()
{
    AI_Tools obj1,obj2;
    obj1.Set_data();
    obj2.Set_data(); 

    obj1.display_data();
    obj2.display_data(); 
    return 0;
}
