#include<iostream>
using namespace std;

inline void add(int a,int b)
{
    cout<<a+b;
}

int main()
{
    int a,b;
    cout<<"enter two numbers=";
    cin>>a>>b;
    add(a,b);
    return 0;

}