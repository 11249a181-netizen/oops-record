#include<iostream>
using namespace std;
class student
{
    private:
    int roll_no;
    string name;
    public:
    student()
    {
        roll_no=1;
        name="siri";
    }
    student(int r,string n)
    {
        roll_no=r;
        name=n;
    }
    student (student &s)
    {
    roll_no=s.roll_no;
    name=s.name;
    }
void display()
{
    cout<<"roll_no:"<<roll_no<<endl;
    cout<<"name:"<<name<<endl;
}
~student()
{
    cout<<"destructor has been called"<<endl;
}
};
int main()
{
    student s1;
    student s2(101,"manogna");
    student s3=s2;
    s1.display();
    s2.display();
    s3.display();
}