#include<iostream>
using namespace std;
class book
{
    private:
    int accno ,pages;
    char authorname[100],bookname[100],isbn[50];
    float price;
    public:
    void getdata();
    void print();
};
void book::getdata()
{
    cout<<"enter book name:";
    cin>>bookname;
    cout<<"enter author name:";
    cin>>authorname;
    cout<<"enter the no of pages";
    cin>>pages;
    cout<<"enter acc no";
    cin>>accno;
    cout<<"enter isbn";
    cin>>isbn;
}
void book::print()
{
    cout<<"\n book name"<<bookname;
    cout<<"\n author name"<<authorname;
    cout<<"\npages"<<pages;
    cout<<"\n acc no"<< accno;
    cout<<"\n isbn"<<isbn;
}
    int main()
    {
    book b;
    b.getdata();
    b.print();
    }
