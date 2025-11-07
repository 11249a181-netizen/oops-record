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
        cout<<"student  name :    "<<name<<endl;
        cout<<"student rollno :"<<rollno<<endl;
    }
};
class address
{
    private:
    string city;
    public:
    void getaddress()
    {
        
        cout<<"\n enter city :";
        cin>>city;
    }
    void displayaddress()
    {
        
        cout<<"\n city    :"<<city<<endl;
    }

};
class account :public student,public address
{
   private:
   int tfee,submit,balance;
   public:
   void getaccount()
   {
    getstudent();
    getaddress();
    cout<<"enter total fee :";
    cin>>tfee;
    cout<<"enter submit fee :";
    cin>>submit;
   }
   void calculateaccount()
   {
    balance=tfee-submit;
   }
   void displayaccount()
   {
    displaystudent();
    displayaddress();
    cout<<"total fee :"<<tfee<<endl;
    cout<<"submit fee: "<<submit<<endl;
    cout<<"balance fee :"<<balance<<endl;
   }
};
int main()
{
    
    account a;
    a.getaccount();
    a.calculateaccount();

    a.displayaccount();
}
