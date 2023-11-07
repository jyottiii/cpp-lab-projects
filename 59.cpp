#include<iostream>
using namespace std;
class date
{
    int year;
    int month;
    int day;

    public:
    
    void getdata()
    {
        cout<<"enter year,month and day=";
        cin>>year>>month>>day;
    }
    void operator ++()
    {
        
        day++;
        month+=day/30;
        day%=30;
        year+=month/12;
        month%=12;
    }
    
     void operator ++(int)
    {
        day++;
        month+=day/30;
        day%=30;
        year+=month/12;
        month%=12;
    }
    void display()
    {
        cout<<"year,month and day=";
        cout<<year<<endl<<month<<endl<<day<<endl;
    }

};
int main()
{
    date d1;
    d1.getdata();
    d1++;
    d1.display();
    ++d1;
    d1.display();
    return 0;
}
