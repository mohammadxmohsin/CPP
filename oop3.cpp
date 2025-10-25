/*Write a program in cpp by using OOPs
to implement following statements
Create a class of Electricity consumers
with data members
consumer_id
consumer_name
units_consumed
bill_amount

Create function to read data
Create function to calculate bill amount
bill_amount=150
if units<=200
bill_amount=150+units*3
if units<=500
bill_amount=750+(units-200)*4
if units<=1000
bill_amount=1950+(units-500)*5
else
bill_amount=4450+(units-1000)*6

Create function to display the details
display the details of 3 consumers
*/

#include<iostream>
using namespace std;

class Electricity_Consumers
{
    private:
    int con_id,units;
    string con_name;
    float bill_amount;

    public:
    void ReadData()
    {
        cout<<endl<<"Enter Consumer ID: ";
        cin>>con_id;
        cout<<endl<<"Enter Consumer Name: ";
        cin>>con_name;
        cout<<endl<<"Enter Number of units consumed by user: ";
        cin>>units;
    }
    void CalculateBill()
    {
        bill_amount=150;
        if(units<=200)
        bill_amount=150+units*3;
        else if(units<=500)
        bill_amount=750+(units-200)*4;
        else if(units<=1000)
        bill_amount=1950+(units-500)*5;
        else
        bill_amount=4450+(units-1000)*6;
    }
    void DisplayData()
    {
        cout<<endl<<"Consumer ID: "<<con_id;
        cout<<endl<<"Consumer Name: "<<con_name;
        cout<<endl<<"Number of units consumed by user: "<<units;
        cout<<endl<<"Total Bill Amount: "<<bill_amount;
    }
};
int main()
{
    Electricity_Consumers e1,e2,e3;
    e1.ReadData();
    e2.ReadData();
    e3.ReadData();
    
    e1.CalculateBill();
    e2.CalculateBill();
    e3.CalculateBill();

    e1.DisplayData();
    e2.DisplayData();
    e3.DisplayData();

    return 0;
}