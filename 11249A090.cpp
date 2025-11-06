#include<iostream>
#include<string>
using namespace std;
class students
{
private:
 string name;
 int rollnumber;
 double marks;
public:
 void getdetails() 
 {
       cout<<"Enter student name:";
       cin>>name;
       cout<<"Enter rollnumber:";
       cin>>rollnumber;
       cout<<"Enter marks:";
       cin>>marks;
 }
  void displaydetails(){
    cout<<"name:"<<name<<endl;
    cout<<"rollnumber:"<<rollnumber<<endl;
    cout<<"marks:"<<marks<<endl;
 }
};
int main()
{
    students s[60];
    int n;
    cout<<"Enter the name of student:";
    cin>>n;
 
    for(int i=0;i<n;i++)
             s[i].getdetails();
    
    cout<<"\n--students information--"<<endl;
    for(int i=0;i<n;i++)
        s[i].displaydetails();
    
    return 0;
} 