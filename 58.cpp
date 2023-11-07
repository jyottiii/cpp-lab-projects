#include<iostream>
using namespace std;
class t
{
    int year;
    int month;
    int day;

    public:
    t()
    {
        cout<<"enter year,month and day=";
        cin>>year>>month>>day;
    }
    void operator >(t a)
    {
        if(year>a.year||(year==a.year&&month>a.month)||(year==a.year&&month==a.month&&day>a.day))
        cout<<"first time is greater";
        else
        cout<<"first time is not greater";
    }
    void operator <(t a)
    {
        if(year<a.year||(year==a.year&&month<a.month)||(year==a.year&&month==a.month&&day<a.day))
        cout<<"first time is smaller";
        else
        cout<<"first time is not smaller";
    }
     void operator ==(t a)
    {
        if(year==a.year&&month==a.month&&day==a.day)
        cout<<"both times are equal";
        else
        cout<<"the times are not equal";
    }
     void operator !=(t a)
    {
        if(year!=a.year||month!=a.month||day!=a.day)
        cout<<"both times are not equal";
        else
        cout<<"the times are equal";
    }



};
int main()
{
    t t1,t2;
    t1>t2;
    t1<t2;
    t1==t2;
    t1!=t2;
    return 0;
}