#include<iostream>
using namespace std;
inline float circle(float x)
{
    return 3.14*x*x;
}
int main()
{
    int k1,k2;
    k1=circle(5.5);
    k2=circle(10.5);
    cout<<"area of circle is:"<<k1<<endl;
    cout<<"area of circle is:"<<k2<<endl;
}