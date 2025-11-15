//CPP program to demonstrate Multilevel Inheritance
#include<iostream>
using namespace std;
class Store
{
    private:
    string store_name;
    string url;
    public:
    Store(string store_name, string url)
    {
        this->store_name=store_name;
        this->url=url;
    }
    void display_store()
    {
        cout<<endl<<"Store Name: "<<store_name;
        cout<<endl<<"URL: "<<url;
    }
};
class Category:public Store
{
    private:
    string category_name;
    int item_count;
    public:
    Category(string store_name, string url, string category_name, int item_count):Store(store_name, url)
    {
        this->category_name=category_name;
        this->item_count=item_count;
    }
    void display_category()
    {
        cout<<endl<<"Category Name: "<<category_name;
        cout<<endl<<"Item Count: "<<item_count;
    }
};
class Product:public Category
{
    private:
    string product_name;
    double price;
    public:
    Product(string store_name, string url, string category_name, int item_count, string product_name, double price)
    :Category(store_name, url, category_name, item_count)
    {
        this->product_name=product_name;
        this->price=price;
    }
    void display_product()
    {
        cout<<endl<<"Product Name: "<<product_name;
        cout<<endl<<"Price: $"<<price;
    }
};
int main()
{
    Product p("TechStore", "www.techstore.com", "Electronics", 150, "Smartphone", 699.99);
    p.display_store();
    p.display_category();
    p.display_product();
    
    return 0;
}