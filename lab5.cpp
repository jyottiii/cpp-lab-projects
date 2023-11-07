#include<iostream>
using namespace std;

class time
{
    int h;
    int m;
    int s;

    public:
    time()
    {
        h=0;
        m=0;
        s=0;
    }
    time(int a,int b,int c)
    {
        h=a;
        m=b;
        s=c;
    }
    time add (time ,time);
    void display()
    {
        cout<<"hours="<<h<<"minutes="<<m<<"seconds"<<s;
    }
};
time time::add(time t1,time t2)
{
    time temp;
    t1.s=t1.h*3600+t1.m*60+t1.s;
    t2.s=t2.h*3600+t2.m*60+t2.s;
    temp.s=t1.s+t2.s;
    temp.m=temp.s/60;
    temp.s=temp.s%60;
    temp.h=temp.m/60;
    temp.m=temp.m%60;
    return temp;
}
int main()
{
    time t1(2,45,23),t2(4,12,34);
    time *t3= new time;
    *t3=t3->add(t1,t2);
    t3->display();
    delete t3;
    return 0;
}