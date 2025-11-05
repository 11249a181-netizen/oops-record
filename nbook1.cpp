 #include<iostream>
 using namespace std;
 class book
 {
    private:
    int accno,pages;
    char bookname[50],author[50],isbno[50];
    float price;
    public:
    void getdata()
    {
        cout<<"enter book name:";
        cin>>bookname;
        cout<<"enter author:";
        cin>>author;
        cout<<"enter acc no:";
        cin>>accno;
        cout<<"enter pages:";
        cin>>pages;
        cout<<"enter price:";
        cin>>price;
    }
    void print()
    { 
        cout<<"\nbook  name:"<<bookname;
        cout<<"\nauthor:"<<author;
        cout<<"\nisbno:"<<isbno;
        cout<<"\nacc no:"<<accno;
        cout<<"\npages:"<<pages;
        cout<<"\nprice:"<<price;
    }
};
int main()
{
book b[100];
int i,n;
cout<<"enter how many books";
cin>>n;
for(i=0;i<n;i++)
{
    b[i].getdata();
}
for(i=0;i<n;i++)
{ 
    b[i].print();

}
} 
