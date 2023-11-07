#include<iostream>
using namespace std;
class d
{
    int feet;

    public:
    d()
    {}
    d(int f)
    {
        feet=f;
    }

    void getdata()
    {
        cout<<"enter the value in feets="<<endl;
        cin>>feet;
    }
    int operator ++(int)
    {
        feet=feet+1;
        return feet;
    }
    void display()
    {
        cout<<"the value of distance in feet is="<<feet<<endl;
    }
    

};
int main()
{
    d dist1,dist2;
    dist1.getdata();
    dist2=dist1 ++;
    dist2.display();
    return 0;

}