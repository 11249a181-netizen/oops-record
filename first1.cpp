#include<iostream>
using namespace std;
class student
{
    private:
    int rollno, m1,m2,m3,total;
    char name[50];
    float avg;
    public:
    void getdata();
    void calculate();
    void print();
};
void student::getdata()
{
    cout<<"Enter name:";
    cin>>name;
    cout<<"rollno:";
    cin>>rollno;
    cout<<"marks:";
    cin>>m1>>m2>>m3;
}
void student::calculate()
{
    total=m1+m2+m3;
    avg=total/3;
}
void student::print()
{
    cout<<"\n name:"<<name;
    cout<<"\n rollno:"<<rollno;
    cout<<"\n marks:"<<m1<<m2<<m3;
    cout<<"\n total:"<<total;
    cout<<"\n avg"<<avg;
}
int main()
{
    student s;
    s.getdata();
    s.calculate();
    s.print();
}
