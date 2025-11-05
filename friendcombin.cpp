#include<iostream>
using namespace std;
class student2;
class student1
{
    private:
    int marks;
    public:
    student1()
    {
        cout<<"enter marks:";
        cin>>marks;
    }
friend void comparemarks(student1,student2);
};
class student2
{
    private:
    int marks;
    public:
    student2()
    {
    cout<<"enter marks:";
    cin>>marks;
}
friend void comparemarks(student1,student2);
};
void comparemarks(student1 a,student2 b)
{
    if(a.marks>b.marks)
    cout<<"the marks of student2 is less than student1 \n";
else if (a.marks<b.marks)
cout<<"the marks of student1 is less than student2 \n";
else
cout<<"the marks of both students is equal\n";
}
int main()
{
    student1 s1;
    student2 s2;
    comparemarks(s1,s2);
}



    
