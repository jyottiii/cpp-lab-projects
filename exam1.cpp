#include<iostream>
using namespace std;

class complex 
{
    private:
    int real;
    int imag;

    public:

    void getdata()
    {
        cout<<"enter real part=";
        cin>>real;
        cout<<"enter imaginary part=";
        cin>>imag;
    }

    complex addcomp(complex);

    void display()
    {
        cout<<"the sum is="<<endl;
        cout<<real<<"+i"<<imag;
    }
};

complex complex::addcomp(complex a)
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
    c3=c1.addcomp(c2);
    c3.display();
    return 0;
}