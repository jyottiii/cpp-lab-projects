#include<iostream>
using namespace std;

class number
{
    static int c;
    public:
    number()
    {
        c++;
    }
    static void count()
    {
        cout<<"c="<<c;
    }
};
int main()
{
    number a,s,d,f,g,h,j,k,l;
    number::count();
    return 0;
}

