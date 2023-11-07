#include<iostream>
using namespace std;

class pound
{
    float p;

public:

    pound ()
    {
        p=0;
    }
    pound(float r)
    {
        p=r;
    }

    void show()
    {
        cout<<"Value in pound = "<<p<<endl;
    }

};

class kilo
{
    float k;

public:
    kilo()
    {
        k=0;
    }

    void get()
    {
        cout<<"\nEnter weight in kilogram = ";
        cin>>k;
    }

    operator pound()
    {
        float a;
        a=k*2.20;
        return (pound (a));
    }
};


int main()
{
    pound c;
    kilo d;
    d.get();
    c=d;
    c.show();
    return 0;

}