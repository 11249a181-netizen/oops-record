#include<iostream>
using namespace std;
class salarybill
{
    private:
    int eno,basicpay,da,hra,epf,gpay,total,ptax,netpay;
     string ename,dept,designation,bankno,panno;
     public:
     void getdata()
     {
        cout<<"enter the e.no:";
        cin>>eno;
        cout<<"enter the e.name:";
        cin>>ename;
        cout<<"enter the basic pay:";
        cin>>basicpay;
        cout<<"enter dept:";
        cin>>dept;
        cout<<"enter designation:";
        cin>>designation;
        cout<<"enter bank no:";
        cin>>bankno;
        cout<<"enter pan.no:";
        cin>>panno;
     }
     void calculate()
     {
        da=(basicpay)/100*80;
        hra=(basicpay)/100*10;
        gpay=(basicpay+da+hra);
        epf=(basicpay+da)/100*12;
        ptax=(basicpay)/100*2;
        total=epf+ptax;
       netpay=gpay-total;
     }
     void print()
     {
        cout<<"\n e.name:"<<ename;
        cout<<"\n e.no:"<<eno;
        cout<<"\n basicpay:"<<basicpay;
        cout<<"\n dept:"<<dept;
        cout<<"\n desingation:"<<designation;
        cout<<"\n bank.no:"<<bankno;
        cout<<"\n pan.no:"<<panno;
        cout<<"\n netpay:"<<netpay;

     }
    };
     int main()
     {
        salarybill p;
        p.getdata();
        p.calculate();
        p.print();
     }
