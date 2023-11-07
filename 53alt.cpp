#include<iostream>
using namespace std;
class d
{
    int feet;

    public:
    void getdata()
    {
        cout<<"enter the value in feets="<<endl;
        cin>>feet;
    }
    d operator ++(int)
    {
        d temp;
        temp.feet=feet+1;
        return temp;
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