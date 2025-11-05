#include<iostream>
using namespace std;
class ebill
{
    private:
    char name[50],address[50];
    int customerid,units;
    float amount;
    public:
    void getdata()
    {
        cout<<" enter customer name:";
        cin>>name;
        cout<<"enter address:";
        cin>>address;
        cout<<"enter customer id:";
        cin>>customerid;
        cout<<"enter units:";
        cin>>units;
    }
    void calculate()
    {
        if (units<=100)
        amount=0;
    else if (units<=200)
    amount=(units-100)*2.25;
    else if(units<=400)
    amount=(100*2.25)+(100-200)*4.25;
    else if (units<=500)
    amount=(100*2.25)+(200*4.25)+(units-400)*6.25;
    else
    amount=(100*2.25)+(200*4.25)+(100*6.25)+(units-600)*9;
    }
    void print()
    {
        cout<<"\n customer name"<<name<<endl;
        cout<<"\n address:"<<address<<endl;
        cout<<"\n customer id:"<<customerid<<endl;
        cout<<"\n units:"<<units<<endl;
        cout<<"\n amount:"<<amount<<endl;
    }
};
int main()
{
    ebill e;
    e.getdata();
    e.calculate();
    e.print();
}