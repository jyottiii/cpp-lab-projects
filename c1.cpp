#include<iostream>
using namespace std;
class complex{
    int real;
    int imag;
    public:
     void getdata()
     {
        cout<<"enter the real part="<<endl;
        cin>>real;
        cout<<"enter the imaginary part="<<endl;
        cin>>imag;
     }
     
     void display()
     {
        cout<<"the addition gives="<<endl;
        cout<<real<<"+i"<<imag<<endl;
     }
    complex addcomplex(complex);
};

complex complex::addcomplex(complex a)
{
    complex s;
    s.real=real+a.real;
    s.imag=imag+a.imag;
    return s;
}

int main()
{
    complex c1,c2,c3;
    c1.getdata();
    c2.getdata();
    c3=c2.addcomplex(c1);
    c3.display();
    return 0;
}