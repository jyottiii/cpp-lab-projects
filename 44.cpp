#include<iostream>
using namespace std;

class animal
{
    char name[20];
    int id_number;
    float cost ;

    public:
    void setdata(char a[20],int b,float c)
    {
        name[20]=a;
        id_number=b;
        cost=c;
    }
    void showdata()
    {
        cout<<"animal name="<<name<<endl;
        cout<<"animal number="<<id_number<<endl;
        cout<<"animal price="<<cost<<endl;

    }
};
int main()
{
    animal a1,a2;
    a1.setdata('lion',1,45000.45);
    a2.setdata('dog',2,15000.69);
    a1.showdata();
    a2.showdata();
    return 0;
}