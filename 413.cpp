#include<iostream>
using namespace std;
class fraction
{
    int n;
    int d;

    public:
    fraction()
    {
        cout<<"enter the numerator and denomenator of your fraction=";
        cin>>n;
        cin>>d;
    }
    void addition(fraction f1,fraction f2)
    {
        cout<<"the addition of fractios is="<<(f1.n*f2.d)+(f2.n*f1.d)<<"/"<<(f1.d*f2.d);
    }
    void subtraction(fraction f1,fraction f2)
    {
        cout<<"\nthe subtraction of fractios is="<<(f1.n*f2.d)-(f2.n*f1.d)<<"/"<<(f1.d*f2.d);
    }
    void multiplication(fraction f1,fraction f2)
    {
        cout<<"\nthe multiplication of fraction is="<<(f1.n*f2.n)<<"/"<<(f1.d*f2.d);
    }
    void division(fraction f1,fraction f2)
    {
        cout<<"\nthe division of fraction is="<<(f1.n*f2.d)<<"/"<<(f1.d*f2.n);
    }
};
int main()
{
    fraction f1,f2;
    f1.addition(f1,f2);
    f1.subtraction(f1,f2);
    f1.multiplication(f1,f2);
    f1.division(f1,f2);
    return 0;
}