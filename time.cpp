#include<iostream>
using namespace std;
class Time
{
    private:
    int hours,minites;
    public:
    void getdata();
    void calculate(Time x,Time y);
    void print();
};
void Time::getdata()
{
    cout<<"enter the hours:";
    cin>>hours;
    cout<<"enter the minities:";
    cin>>minites;
}
void Time::calculate(Time x,Time y)
{
    minites=x.minites+y.minites;
    hours=minites/60;
    minites= minites%60;
    hours=hours+x.hours+y.hours;
}
void Time::print()
{
    cout<<"hours"<<hours<<endl;
    cout<<"minites"<<minites<<endl;
}
int main()
{
    Time t1,t2,t3;
    t1.getdata();
    t2.getdata();
    t3.calculate(t1,t2);
    t1.print();
    t2.print();
    t3.print();
}