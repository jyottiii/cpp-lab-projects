#include<iostream>
using namespace std;
class a
{
    protected:
    string name;
    public:
    void getdata()
    {
        cin>>name;
    }

};
class b:public a
{
    public:
    void print()
    {
        cout<<"name="<<name<<endl;
    }
};
int main()
{
    b obj;
    cout<<"enter name="<<endl;
    obj.getdata();
    obj.print();
    return 0;
}