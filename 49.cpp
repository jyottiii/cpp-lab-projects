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
        cout<<"enter time in hour ,minute and second";
        cin>>hour>>minute>>second;
    }
    time addition(time a,time b);
    
};
time time::addition(time a,time b)
{
    time temp;
    temp.second=a.hour*3600+a.minute*60+a.second+b.hour*3600+b.minute*60+b.second;
    temp.minute=temp.second/60;
    temp.second=temp.second%60;
    temp.hour=temp.minute/60;
    temp.minute=temp.minute%60;
    return temp;
}
int main()
{
    time t1,t2;

}