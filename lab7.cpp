#include<iostream>
using namespace std;
class person
{
    string name;
    int age;

    public:
        void getdata()
        {
            cout<<"enter name=";
            cin>>name;
            cout<<"\nenter age=";
            cin>>age;
        }
        void showdata()
        {
            cout<<"the elder person is="<<name;
        }
        person elder(person a)
        {
            if(a.age>age)
            {
                return a;
            }
            else
            {
                return *this;
            }
        }
};
int main()
{
    person p1,p2,p;
    p1.getdata();
    p2.getdata();
    p=p1.elder(p2);
    p.showdata();
    return 0;
}