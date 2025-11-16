//CPP program to demonstrate Hybrid Inheritance
#include<iostream>
using namespace std;
class Product
{
    protected:
    int pid;
    string pname;
    double price;
    public:
    Product(int pid, string pname, double price)
    {
        this->pid=pid;
        this->pname=pname;
        this->price=price;
    }
};
class Electronics:virtual public Product
{
    protected:
    string category;
    int warranty;
    public:
    Electronics(int pid, string pname, double price, string category, int warranty):Product(pid, pname, price)
    {
        this->category=category;
        this->warranty=warranty;
    }
};
class Clothing:virtual public Product
{
    protected:
    string size;
    string Brand;
    public:
    Clothing(int pid, string pname, double price, string size, string Brand):Product(pid, pname, price)
    {
        this->size=size;
        this->Brand=Brand;
    }
};
class Order:virtual Electronics, public Clothing
{
    private:
    int order_id;
    int quantity;
    string ordername;
    public:
    Order(int pid, string pname, double price, string category, int warranty, string size, string Brand, int order_id, int quantity, string ordername):Product(pid, pname, price),Electronics(pid, pname, price, category, warranty),Clothing(pid, pname, price, size, Brand)
    {
        this->order_id=order_id;
        this->quantity=quantity;
        this->ordername=ordername;
    }
    void show_order_details()
    {
        cout<<endl<<"Order Details:";
        cout<<endl<<"Order ID: "<<order_id;
        cout<<endl<<"Order Name: "<<ordername;
        cout<<endl<<"Quantity: "<<quantity;
        cout<<endl<<"Product ID: "<<pid;
        cout<<endl<<"Product Name: "<<pname;
        cout<<endl<<"Price: "<<price;
        cout<<endl<<"Category: "<<category;
        cout<<endl<<"Warranty: "<<warranty;
        cout<<endl<<"Size: "<<size;
        cout<<endl<<"Brand: "<<Brand;
        cout<<endl<<"---------------------------";
    }
};
int main()
{
    Order O1(101,"SmartPhone",24000,"Gadget",4,"-","-",402,3,"Mohammad");
    O1.show_order_details();
    Order O2(202,"T-Shirt",1000,"-",0,"L","Nike",301,2,"Usman");
    O2.show_order_details();
    return 0;
}