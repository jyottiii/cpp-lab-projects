#include<iostream>
using namespace std;

class time
{
    private:
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

        time addtime(time t1,time t2);

        void display()
        {
            cout<<h<<":"<<m<<":"<<s;
        }
};

time time ::addtime(time a,time b)
{
    time temp;
    temp.s=a.s+b.s;
    temp.m=a.m+b.m+temp.s/60;
    temp.s=temp.s%60;
    temp.h=a.h+b.h+temp.m/60;
    temp.m=temp.m%60;
    return temp;
}

int main()
{
    time t1(12,34,56),t2(10,35,14),t3;
    t3=t3.addtime(t1,t2);
    t3.display();
    return 0;
}