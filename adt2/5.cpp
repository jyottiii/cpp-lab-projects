#include<iostream>
using namespace std;
class rupees
{
    int rs;
    int paisa;

    public:
    rupees()
    {
        rs=0;
        paisa=0;
    }
    rupees(int a,int b)
    {
        rs=a;
        paisa=b;
    }
    void display()
    {
        cout<<"rs="<<rs;
        cout<<endl<<"paisa="<<paisa;
    }
};
class dollar
{
    int doll;
    int cents;

    public:
    dollar()
    {
        doll=0;
        cents=0;
    }
    void getdata()
    {
        cout<<"enter the value of dollar and cents=";
        cin>>doll>>cents;
    }
    operator rupees()
    {
        int r;
        int p;
        doll=doll+cents/100;      
        cents=cents%100;                   
        r=doll*132;
        p=cents*132;
        r=r+p/100;
        p=p%100;
        return (rupees(r,p));
        
    }
};
int main()
{
    dollar d1;
    rupees r1;
    d1.getdata();
    r1=d1;
    r1.display();
    return 0;
}