#include<iostream>
using namespace std;
class student
{
    int roll;
    string name;
    int age;
    int score;
    string faculty;

    public:

    student()
    {
        cout<<"enter your roll number,name,age,percentage and faculty you're enrolled in= ";
        cin>>roll;
        cin>>name;
        cin>>age;
        cin>>score;
        cin>>faculty;
    }
    void display()
    {
        cout<<roll<<"\t"<<name<<"\t"<<age<<"\t"<<score<<"\t"<<faculty<<endl;
    }
    ~student()
    {
        cout<<"\nthis is your required data for"<<name;
    }

};
int main()
{
    int n;
    cout<<"how many datas would you like to enter=";
    cin>>n;
    student s[n];
    cout<<"roll"<<"\t"<<"name"<<"\t"<<"age"<<"\t"<<"score"<<"\t"<<"faculty"<<endl;
    for(int i=0;i<n;i++)
        s[i].display();
    return 0;
}