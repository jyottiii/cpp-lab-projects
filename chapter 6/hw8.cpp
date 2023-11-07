#include<iostream>
using namespace std;
class book
{
    protected:
    string name;
    float price;
    public:
    void getdata()
    {
        cout<<"enter name of author and the book's price=";
        cin>>name>>price;
    }
    void print()
    {
        cout<<endl<<"name of author="<<name;
        cout<<endl<<"price="<<price;
    }
};
class stock
{
    protected:
    int nob;
    string category;
     public:
    void getdata()
    {
        cout<<"enter number of books in stock and its category=";
        cin>>nob>>category;
    }
    void print()
    {
        cout<<endl<<"number of books present="<<nob;
        cout<<endl<<"category="<<category;
    }
};
class library:public book,public stock
{
    public:
    void getdata()
    {
        book::getdata();
        stock::getdata();
    }
    void print()
    {
        book::print();
        stock::print();
    }

};
int main()
{
    library l1;
    l1.getdata();
    l1.print();
    return 0;
}