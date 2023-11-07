#include<iostream>
using namespace std;
class vec
{
    int x,y,z;

    public:
    vec()
    {
        cout<<"enter x,y and z co-ordinates=";
        cin>>x>>y>>z;
    }
    friend vec operator +(vec a,vec b)
    {
        cout<<"the sum of vectors is="<<a.x+b.x<<"i+"<<a.y+b.y<<"j+"<<a.z+b.z<<"k"<<endl;
    }
     friend vec operator -(vec a,vec b)
    {
        cout<<"the difference of vectors is="<<a.x-b.x<<"i+"<<a.y-b.y<<"j+"<<a.z-b.z<<"k"<<endl;
    }


};
int main()
{
    vec v1,v2;
    v1+v2;
    v1-v2;
}