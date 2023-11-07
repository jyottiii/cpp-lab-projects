#include<iostream>
using namespace std;
class base
{
    protected:
    int r,i;
    public:
    void getcomp()
    {
        cout<<"enter the real and imaginary part of a complex number";
        cin>>r>>i;
    }
    int ret()
    {
        return r;
    }
    int re()
    {
        return i;
    }
};
class third;
class derv:public base
{
    public:
    friend class third;
    derv add(derv a,base b)
    {
        derv temp;
        temp.r=a.r+b.r
        temp.i=a.i+b.i;
        return temp;
    }
};
class third
{
    protected:
    int d,o;
    public:
    void getdata()
    {
        cout<<"enter the real and imaginary part of a complex number";
        cin>>d>>o;
    }
    third sub(base b1,third t1)
    {
        third temp;
        temp.d=b1.ret()-t1.d;
        temp.o=b1.re()-t1.o;
        return temp;
    }
};
int main()
{
    base b1;
    b1.getcomp();
    derv d1;
    d1.getcomp();
    d1.add();
    third t;
    t.getdata();
    t.sub(b1,t);
    return 0;
}
