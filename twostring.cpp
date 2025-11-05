#include<iostream>
#include<cstring>
using namespace std;
const int sz=90;
class string1
{
    private:
    char str[sz];
    public:
    String1()
    {
        strcpy(str,"");
    }
    String1(const char s[])
    {
        strcpy(str,s);
    }
    void display()
    {
        cout<str<<"\n";
    }
    String1 operator+ (string ss)
    {
        if(strlen(str)+ strlen(ss.str)<sz)
        {
            String1 temp;
            strcpy(temp.str,str);
            strcat(temp.str,ss.str);
            return temp;
        }
        else 
        cout<<"string overflow";
    return 0;
    }
};
int main()
{
    String1 s1="hello";
    String1 s2= "world";
    String1 s3;
    s3=s1+s2;
    s1.display();
    s2.display();
    s3.display();
}