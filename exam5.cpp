#include<iostream>
using namespace std;
int citz_num=1;
class person
{
    char name[50];
    int age;
    char address[100];
    int citizen_num;

    public:

    person()
    {
        cout<<"enter your name=";
        cin>>name;
        cout<<"enter your age=";
        cin>>age;
        cout<<"enter your address=";
        cin>>address;
        if(age>=16)
        {
            citizen_num=citz_num;
            citz_num++;
        }
        else
        {
            citizen_num=0;
        }
    }

    void display()
    {
        cout<<"name="<<name;
        cout<<"\n age="<<age;
        cout<<"\n address="<<address;
        cout<<"\n citizenship number="<<citizen_num;
    }  
};

int main()
{
    person p[3];
    for(int i=0;i<3;i++)
    {
        p[i].display();
    }
    return 0;
}