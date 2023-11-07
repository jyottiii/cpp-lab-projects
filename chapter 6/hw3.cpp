#include<iostream>
using namespace std;
static int i;
static int j;
class a
{
    public:
    void incre()
    {
        int a[i];
        i++;
    }
};
class b:public a
{
    public:
    void incre()
    {
        int a[j];
        j++;
    }
};
int main()
{
    a m,n,o,p;
    m.incre();
    n.incre();
    o.incre();
    p.incre();
    b q,r,s;
    q.incre();
    r.incre();
    s.incre();
    cout<<"no of members of class a="<<i<<endl;
    cout<<"no of members of class b="<<j<<endl;
    return 0;

}