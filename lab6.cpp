#include<iostream>
using namespace std;

class person
{
    string name;

    public:

    void getdata()
    {
        cin>>name;
    }
     void display()
     {
        cout<<"name is="<<name<<endl;
     }

};

int main()
{
    person *b=new person;
    b->getdata();
    b->display();
    int i;
    cout<<"how many data would you like to give=";
    cin>>i;
    person *a=new person[i];
    for(int j=0;j<i;j++)
    {
        a[j].getdata();
        a[j].display();
    }
    return 0;
}