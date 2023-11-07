#include<iostream>
using namespace std;
//simple interest ma usual rate 10 ho but if user wants j sukai thapos

void si(int p,int t,int r=10)
{
    int si=(p*t*r)/100;
    cout<<"the simple interest is="<<si;
}
int main()
{
    int p,t,r;
    cout<<"enter amount of money,time and rate=";
    cin>>p>>t>>r;
    si(p,t,r);
    si(p,t);
    return 0;
}