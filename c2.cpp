#include<iostream>
using namespace std;

class time
{
   int hour;
   int minute;
   int second;

   public:
    time()
    {
        cout<<"enter hours="<<endl;
        cin>>hour;
        cout<<"enter minutes="<<endl;
        cin>>minute;
        cout<<"enter seconds="<<endl;
        cin>>second;
    }
    time(int a)
    {
        hour=a;
        minute=a;
        second=a;
    }
    void display()
    {
        cout<<"the total time is="<<endl;
        cout<<"hours="<<hour;
        cout<<"\nminutes="<<minute;
        cout<<"\nseconds="<<second;
    }
    time addtime(time);
};

time time::addtime(time a)
{
    time s(0);
    s.second=second+a.second;
    s.minute=s.second/60;
    s.second=s.second%60;
    s.minute=minute+a.minute+s.minute;
    s.hour=s.minute/60;
    s.minute=s.minute%60;
    s.hour=hour+a.hour+s.hour;
    return s;
}

int main()
{
    time t1,t2,t3(0);
    t3=t2.addtime(t1);
    t3.display();
    return 0;
}