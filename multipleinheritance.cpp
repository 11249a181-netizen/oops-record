#include<iostream>
#include<conio.h>
#include<stdio.h>
class student
{
    private:
    char name[20];
    int rno;
    public:
    void getstudent()
    {
        cout<<"enter name of the student:";
        cin>>name;
        cout<<"enter thec roll number of the student;
        cin>>rno;
    }
        void displaystudent()
        {
        cout<<"name of the student"<<name;
        cout<<"roll no of the student"<<rno;
    }
    };
    class address
    {
    private:
    char city[20];
    public:
    void getadress()
    {
    cout<<"enter the city ";
    cin>>city;
    }
    void displayaddress()
    {
    cout<<"city"<<city;
    }
    };
    class account: public student,public address
    {
    private:
    int tfee,submit,balance;
    public:
    void getaccount()
    {
    getstudent();
    getaddress();
    cout<<"enter submit fee";
    cin>>tfee;
    cout<<"enter the total fee";
    cin>>submit;
    }
    void displayaccount()
    {
    displaystudent();
    displayaddress();
    cout<<"total fee"<<tfee;
    cout<<"submit"<<submit;
    balance=tfee-submit;
    cout<<"balance fee"<<balance;
    }
    };
    void main()
    {
    account a1;
    a1.getaccount();
    a1.displayaccount();
    getch();
    }
