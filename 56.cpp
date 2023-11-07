#include<iostream>
#include<cstring>
using namespace std;
class city
{
    char cityname[20];
    float distfromktm;

    public:
    city()
    {}
    city(float a)
    {
        distfromktm=a;
    }
    void setdata(char a[20])
    {
        strcpy (cityname,a);
        cout<<"enter distance from kathmandu for "<<cityname<<"=";
        cin>>distfromktm;
    }
    void display()
    {
        cout<<"city name="<<cityname<<endl;
        cout<<"distance from kathmandu="<<distfromktm<<endl;
    }
    float operator -(city a)
    {
        cout<<"the distance between the cities is="<<distfromktm-a.distfromktm<<endl;
    }
    float operator +(city a)
    {
        cout<<"the sum of distance between the cities is="<<distfromktm+a.distfromktm<<endl;
    }


};
int main()
{
    city c1,c2,c3;
    c1.setdata("pokhara");
    c2.setdata("dhangadi");
    c1.display();
    c2.display();
    c3=c1-c2;
    c3=c1+c2;
    return 0;
}