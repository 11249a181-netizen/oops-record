#include<iostream>
using namespace std;
class Time
{
    private:
    int hrs,min,secs;
    public:
    Time()
    {
        hrs=0,min=0,secs=0;
    }
    Time(int h,int m,int s)
    {
        if(h>0&&h<23&&m>0&&m<=59&&s>0&&s<=59)
        {
            hrs=h;
            min=m;
            secs=s;
        }
        else
        cout<<"invalid time:";
    }
    int operator==(Time t3)
    {
        return(hrs==t3.hrs&&min==t3.min&&secs==t3.secs);
    }
};
int main()
{
    Time t1(7,11,30);
    Time t2(3,30,41);
    if(t1==t2)
    cout<<"clock shows same time"<<endl;
else
cout<<"clock shows different time"<<endl;
}