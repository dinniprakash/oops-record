#include<iostream>
using namespace std;
class books
{
    private:
char ISBNO[50],book name [50], Author[50];
    int pages acc no;
    float price;
public;
void get details()
{
cout<<"Enter ISBNO";
 cin>>ISBNO;
cout<<"Enter book name";
 cin>>book name;
cout<<"Enter author";
 cin>>authur;
cout<<"Enter pages";
 cin>>pages;
cout<<"Enter ACC No";
 cin>>ACC No;
cout<<"Enter Price";
 cin>>Price;
}
void display()
{
    cout<<"ISBNO":<<ISBNO;
    cout<<"Book name":<<Book name;
    cout<<"author":<<author;
    cout<<"pages":<<pages;
    cout<<"ACC No":<<ACC No;
    cout<<"Price":<<Price;
}
};
int main()
{
    Book b;
    b.display();
    b.get details();
     return 0;
}