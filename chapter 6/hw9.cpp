#include<iostream>
using namespace std;
class author
{
    protected:
    char name[40];
    char degree[40];
    public:
    void getdata()
    {
        cout<<"enter the name of author=";
        cin>>name;
        cout<<endl<<"enter their degree=";
        cin>>degree;
    }
    void print()
    {
        cout<<endl<<"name of the author="<<name;
        cout<<endl<<"degree="<<degree;
    }
};
class publication
{
    
    protected:
    char location[40];
    char nname[40];
    public:
    void getdata()
    {
        cout<<"enter the location of publication and its name=";
        cin>>location;
        cout<<"enter the name of publication=";
        cin>>nname;
    }
    void print()
    {
        cout<<endl<<"name of publication="<<nname;
        cout<<endl<<"location="<<location;
    }
};
class book:public author,public publication
{
    public:
   void getdata()
    {
        author::getdata();
        publication::getdata();
    }
    void print()
    {
       author::print();
       publication::print();
    } 
};
int main()
{
    book b1;
    b1.getdata();
    b1.print();
    return 0;
}