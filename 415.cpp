#include<iostream>
using namespace std;
class counter
{
    int a;
    int b;
    int count;
    public:
    void getdata()
    {
        cout<<"enter the maximum and minimum values=";
        cin>>a;
        cin>>b;
        count=b;
    }
    void incre()
    {
        if (count<a)
        {count=count+1;
         cout<<count;}
        else
        {  count=b;
           cout<<count;
        }


   }
   

};
int main()
{
    counter *c1=new counter;
    c1->getdata();
    for(int i=0;i<10;i++)
    {c1->incre();}
    delete c1;
    return 0;
}