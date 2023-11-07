#include<iostream>
using namespace std;
class vector
{
    int x;
    int y;
    int z;

    public:
    void display()
    {
        cout<<x<<"ax"<<"+"<<y<<"by"<<"+"<<z<<"cz";
    }
    void cvector()
    {
        cout<<"enter 3 different values of your vector=";
        cin>>x>>y>>z;
        display();
    }
    void modify()
    {
        int p,q,r;
        cout<<"enter the values you'd like to modify the vectors to=";
        cin>>p>>q>>r;
        x=p;
        y=q;
        z=r;
        display();
    }
    void scalar()
    {
        int k;
        cout<<"enter your scalar=";
        cin>>k;
        x=k*x;
        y=k*y;
        z=z*k;
        display();
    }
    vector addition(vector a,vector b);
};
vector vector ::addition(vector &a,vector &b)
{
    vector temp;
    temp.x=a.x+b.x;
    temp.y=a.y+b.y;
    temp.z=a.z+b.z;
    return temp;
}
int main()
{
    vector *a=new vector;
    vector v;
    a->cvector();
    a->modify();
    a->scalar();
    return 0;
    vector *b=new vector[2];
    v=b.addition(b);
}