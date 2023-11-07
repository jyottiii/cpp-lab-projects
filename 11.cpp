#include<iostream>
using namespace std;

void interest(int p,int t,int r=10)
{
    int i;
    i=(p*t*r)/100;
    cout<<"the interest is="<<i<<endl;
}

int main()
{
    int p,t,r;
    cout<<"enter principle , period and rate:"<<endl;
    cin>>p>>t>>r;
    interest(p,t);
    interest(p,t,r);
    return 0;
}