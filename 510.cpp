#include<iostream>
#include<cmath>
using namespace std;
class money
{
    int rupees;
    int paisa;

    public:
    void getdata()
    {
        cout<<"enter the value of ruppes and paisa";
        cin>>rupees>>paisa;
    }
    money operator +(money a)
    {
        money temp;
        temp.paisa=rupees*100+a.rupees*100+paisa+a.paisa;
        temp.rupees=temp.paisa/100;
        temp.paisa=temp.rupees%100;
        return temp;
    }
     money operator -(money a)
    {
        money temp;
        temp.paisa=abs((rupees*100+paisa)-(a.rupees*100+a.paisa));
        temp.rupees=temp.paisa/100;
        temp.paisa=temp.rupees%100;
        return temp;
    }
    void display()
    {
        cout<<"the sum of money is="<<"\t"<<rupees<<"rupees and "<<paisa<<"paisa";
    }
    void operator >(money b)
    {
        //if()
    }

};
int main()
{
    money m1,m2,m3,m4;
    m1.getdata();
    m2.getdata();
    m3=m1+m2;
    m4=m1-m2;
    m3.display();
    m4.display();
    return 0;

}