#include<iostream>
using namespace std;
class triangle
{
    int a;
    int b;
    int c;

    public:
    triangle()
    {
        cout<<"enter the sides of triangle=";
        cin>>a>>b>>c;
        int p=a+b+c;
        cout<<"\nthe perimeter is="<<p;
    }
    triangle(int p,int q,int r)
    {
        a=p;
        b=q;
        c=r;
        int pe=a+b+c;
        cout<<"\nthe perimeter is="<<pe;
    }
    
};
int main()
{
    triangle t1,t2(2,3,4);
    return 0;
}