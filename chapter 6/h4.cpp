#include<iostream>
using namespace std;
class person
{
    protected:
    string name;
    public:
    void getdata()
    {
        cout<<"enter your name=";
        cin>>name;
    }
};
class employee:public person
{
    protected:
    string post;
    public:
    void getdata()
    {
        cout<<endl<<"enter your post=";
        cin>>post;
    }
    void print()
    {
        cout<<endl<<"name="<<name;
        cout<<endl<<"post="<<post;
    }
};
int main()
{
    
    employee e1;
    e1.person::getdata();
    e1.getdata();
    e1.print();
    return 0;
}