#include<iostream>
using namespace std;
class complex
{
    int real;
    int imag;

    public:
    complex()
    {

    }
    complex(int a)
    {
        real=a;
        imag=0;
    }
    void getdata()
    {
        cout<<"enter the real and imaginary part=";
        cin>>real>>imag;
    }
    friend complex operator +(complex a,complex b)
    {
        complex temp;
        temp.real=a.real+b.real;
        temp.imag=a.imag+b.imag;
        return temp;
    }
    void display()
    {
        cout<<"the complex is="<<"="<<real<<"+"<<imag<<"i";
    }
};
int main()
{
    complex c1,c2;
    c1.getdata();
    c2=2+c1;
    c2.display();
    c2=c1+2;
    c2.display();
    return 0;

}