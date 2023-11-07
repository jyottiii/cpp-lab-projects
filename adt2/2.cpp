#include<iostream>
using namespace std;
class b;
class a
{
    int num1;
    public:
    a(int x)
    {
        num1=x;
    }
    friend void swap(a&,b&);
    void display()
{
    cout<<"num1="<<num1;
}

};
class b
{
    int num2;
    public:
    b(int y)
    {
        num2=y;
    }
    friend void swap(a&,b&);
    void display()
{
    // cout<<"num1="<<a.num1;
    cout<<"num2="<<num2;
}
    
};
void swap(a &x,b &y)
{
    int temp;
    temp=x.num1;
    x.num1=y.num2;
    y.num2=temp;
}

int main()
{
    a a1(3);
    b b1(4);
    swap(a1,b1);
    a1.display();
    b1.display();
    return 0;
}