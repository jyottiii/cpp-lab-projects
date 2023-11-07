#include<iostream>
using namespace std;

class perimeter
{
    int a;
    int b;
    int c;

    public:
    perimeter()
    {
        cout<<"enter the three sides of a triangle=";
        cin>>a>>b>>c;
    }
    perimeter(int x, int y,int z)
    {
        a=x;
        b=y;
        c=z;
    }
    void display()
    {
        cout<<"the perimeter is="<<a+b+c;
    }
};

int main()
{
    perimeter p1,p2(3,6,2);
    p1.display();
    p2.display();
    return 0;

}