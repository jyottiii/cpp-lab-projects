#include<iostream>
using namespace std;
class time
{
    int hour;
    int minute;
    int second;
    int day;

    public:
    time()
    {
        hour=0;
        minute=0;
        second=0;
        day=0;
    }
    time(int a,int b,int c,int d)
    {
        hour=a;
        minute=b;
        second=c;
        day=d;
    }
    time addition(time a,time b);
    void display()
{
    cout<<"the sum of the time is"<<endl;
    cout<<"hour="<<hour;
    cout<<"minute="<<minute;
    cout<<"second="<<second;
    cout<<"day="<<day;
}
};
time time::addition(time a,time b)
{
    time temp;
    temp.second=(a.day+b.day)*86400+(a.hour+b.hour)*3600+(a.minute+b.minute)*60+(a.second+b.second);
    temp.minute=temp.second/60;
    temp.second=temp.second%60;
    temp.hour=temp.minute/60;
    temp.minute=temp.minute%60;
    temp.day=temp.hour/24;
    temp.hour=temp.hour%24;
    return temp;
}
int main()
{
    time t1(24,34,2,6),t2(4,53,6,70),t3;
    t3=t3.addition(t1,t2);
    t3.display();
    return 0;
    }