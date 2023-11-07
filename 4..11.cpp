#include<iostream>
using namespace std;
class rectangle
{
    int l;
    int b;

    public:
    rectangle()
    {
        cout<<"enter length and breadth=";
        cin>>l;
        cin>>b;
        cout<<"the sides are="<<l<< "  "<<b;
    }
    void area()
    {
        cout<<"\nthe area is="<<l*b;
    }
    void perimeter()
    {
        cout<<"\nthe perimeter is="<<2*(l+b);
    }

};
int main()
{
    rectangle r1;
    r1.area();
    r1.perimeter();

}