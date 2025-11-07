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
        cout<<"enter student name :";
        cin>>name;
        cout<<"enter student rollno :";
        cin>>rollno;
    }
    void displaystudent()
    {
        cout<<"name :"<<name;
        cout<<"rollno :"<<rollno;
    }
};
class test:public student
{
    protected:
    int mat,eng,sci;
    public:
    void gettest()
    {
        getstudent();
        cout<<"enter maths marks :";
        cin>> mat;
        cout<<"enter english marks :";
        cin>>eng;
        cout<<"enter science marks :";
        cin>>sci;
    }
    void displaytest()
    {
        displaystudent();
        cout<<"maths :" <<mat<<endl;
        cout<<"english :"<<eng<<endl;
        cout<<"science :"<<sci<<endl;
    }
};
class result :public test
{
    private:
    int total,avg;
    public:
    void getresult()
    {
        gettest();
        total=mat+eng+sci;
        avg=total/3;
    }
    void displayresult()
    {
        displaytest();
        cout<<"total :"<<total<<endl;
        cout<<"avg :"<<avg<<endl;
    }
};
int main()
{
    result r;
    
    r.getresult();

    r.displayresult();
}