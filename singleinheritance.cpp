#include<iostream>
using namespace std;
class student
{
private:
string name;
int rollno;
public:
void getstudent()
{
    cout<<"enter the student name:";
    cin>>name;
    cout<<"enter student roll no:";
    cin>>rollno;
}
void displaystudent()
{
    cout<<"name:"<<name<<endl;
    cout<<"rollno:"<<rollno<<endl;

}
};
class address:public student{
    private:
    string city;
    public:
    void getaddress()
    {
        getstudent();
        cout<<"enter city:";
        cin>>city;
    }
    void displayaddress()
    {
        displaystudent();
        cout<<"city:"<<city;
    }
};
int main()
{
    address a;
    a.getaddress();
    a.displayaddress();
}

