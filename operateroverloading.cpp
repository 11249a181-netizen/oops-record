#include<iostream>
using namespace std;
class Complex
{
    private:
    int a,b,c;
    public:
    Complex()
    {   
    }
    void getvalue()
    {
        cout<<"enter the two number:";
        cin>>a>>b;
    }
    void operator ++()
    {
        a=++a;
        b=++b;
    }
    void operator --()
    {
        a=--a;
        b=--b;
    }
    void display()
    {
        cout<<a<<"+"<<b<<"i"<<endl;
    }
};
int main()
{
    Complex obj;
    obj.getvalue();
    ++obj;
    cout<<"increament complex number\n";
    obj.display();
    --obj;
    cout<<"decrement complex number\n";
    obj.display();
}