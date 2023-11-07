#include<iostream>
using namespace std;
class pound
{
    float b;
    public:
    pound()
    {
        b=0; 
    }
    pound(float z)
    {
        b=z;
    }
    void display()
    {
        cout<<"the wt in pound is="<<b;
    }
};
class kilowt
{
    float a;
    public:
    kilowt()
    {
        a=0;
    }
    void get()
    {
        cout<<"enter wt in kilo=";
        cin>>a;
    }
    operator pound()
    {
        float x;
        x=a*2.20;
        return (pound(x));
    }
};

int main()
{
    kilowt k;
    k.get();
    pound p;
    p=k;
    p.display();
    return 0;
}