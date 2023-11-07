#include<iostream>
#include<cmath>
using namespace std;

float factorial(float n)
{
   if(n>0)
   {
        return n*factorial(n-1);
   }
   else
   {
        return 1;
   }

}
int main()
{
    float x,i,sum=0,n;
    cout<<"enter the value of n:"<<endl;
    cin>>x;
    for(i=1;i<=x;i++)
    {
        sum=sum+(pow(-1,i-1)*pow(x,2*i-1))/factorial(2*i-1);
    }
    cout<<sum<<endl;


    return 0;
}