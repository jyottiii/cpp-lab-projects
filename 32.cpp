#include<iostream>
using namespace std;
 
 void average(float &a,float&b)
 {
    float avg;
    avg=(a+b)/2;
    if (a<b)
    {
       a=avg;
    }
    else
    {
        b=avg;
    }


 }

 int main()
 {
    float a=1,b=2;
    cout<<a<<" "<<b<<endl;
    average(a,b);
    cout<<a<<"\n"<<b;
    return 0;
 }