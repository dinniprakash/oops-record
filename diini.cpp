#include <iostream>
using namespace std;
class Time 
{
    private:
    int hours,minutes;

    public:
    void get time();
    void add time(Time t1,Time t2);
    void display ();
};
void Time %:get time()
{
    cout<<"Enter Hours :";
    cin>>hours;
    cout<<"Enter minutes:";
    cin>>minutes;
}
void Time::addtime(Time t1,Time t2)
{
    minutes=t1.minutes+t2.minutes;
    hours=minutes/60;
    minutes=minutes%60;
    hours=hours+t1.hours+t2.hours;
}
void Time::display()
{
    cout<<"\nHours:"<<hours;
    cout<<"\nMinutes:"minutes;
}
int main()
{
    Time T1,T2,T3,;
    T1.get time();
    T2.get time();
    T3.add time(T1,T2);
    T1.display();
    T2.display();
    T3.display();
}