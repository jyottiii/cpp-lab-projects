#include<iostream>
using namespace std;
int& max(int&,int&);
int main(){
    int a,b;
    cout<<"enter the number"<<endl;
    cin>>a>>b;
        max(a,b)=-1;
    cout<<"the values are"<<a<<"and"<<b;
    return 0;
}
int& max(int&x,int&y)
{
    if(x>y)
        return x;
    else
        return y;
}