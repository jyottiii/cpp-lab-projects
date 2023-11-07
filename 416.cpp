#include<iostream>
using namespace std;
class bank
{
    string name;
    double acno;
    string type;
    double bal;

    public:
    void choose()
    {
        int n;
        cout<<"what would you like to do=";
        cout<<"\n 1.deposit an amount=";
        cout<<"\n2.display your name and current balance=";
        cout<<"\n3.withdraw an amount=";
        cout<<"\nenter the number=";
        cin>>n;
        switch(n)
        {
            case 1:
            deposit();
            break;

            case 2:
            display();
            break;

            case 3:
            withdraw();
            break;
    

        }

    }
    bank()
    {
        cout<<"enter your name=";
        cin>>name;
        cout<<"\nenter your account number=";
        cin>>acno;
        cout<<"\nenter the type of your account=";
        cin>>type;
        cout<<"\nenter the balance amount in your account=";
        cin>>bal;
    }
    void deposit()
    {
        double a;
        cout<<"\nenter the amount you want to deposit=";
        cin>>a;
        bal=bal+a;
        cout<<"current balance is="<<bal;
    }
    void display()
    {
        cout<<"\nname="<<name;
        cout<<"\ncurrent balance is="<<bal;
    }
    void withdraw()
    {
        int b;
        cout<<"\nenter the amount you'd like to withdraw=";
        cin>>b;
        if(bal<b)
        {
            cout<<"\nyou cannot withdraw";
        }
        else
        {
            cout<<"\nyour withdrawn amount is="<<b;
            bal=bal-b;
            cout<<"\ncurrent balance is="<<bal;
        }
    }
};
int main()
{
    bank *a=new bank[10];
    a[2].choose();
    return 0;
}