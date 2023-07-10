// lab 5
// Name : Chaudhary Shoaib Hamza
// Student ID : F2022065283
// Section w3 
#include<iostream>
using namespace std;
class Date
{
    private:
    int date,month,year;
    public:
    Date()
    {
        date=month=year=0;
    }
    void setdate(int d)
    {
        date=d;
    }
    void setmon(int m)
    {
        month=m;
    }
    void setyear(int y)
    {
        year=y;
    }
    int getdate()
    {
        return date;
    }
    int getmon()
    {
        return month;
    }
    int getyear()
    {
        return year;
    }
    void dis1()
    {
        cout<<date<<"/"<<month<<"/"<<year<<endl;
    }
    void dis2()
    {
        cout<<month<<"/"<<date<<"/"<<year<<endl;
    }
    void increment()
    {
        date++;
        month++;
        year++;
    }
    void decrement()
    {
        date--;
        month--;
        year--;
    }
};
class Time
{
    private:
    int hour,minutes,seconds;
    public:
    Time()
    {
        hour=minutes=seconds=0;
    }
    void sethour(int h)
    {
        hour=h;
    }
    void setmin(int m)
    {
        minutes=m;
    }
    void setsec(int s)
    {
        seconds=s;
    }
    int gethour()
    {
        return hour;
    }
    int getmin()
    {
        return minutes;
    }
    int getsec()
    {
        return seconds;
    }
    void dis3()
    {
        cout<<hour<<":"<<minutes<<":"<<seconds<<endl;
    }
    void dis4()
    {
        cout<<hour<<":"<<minutes<<endl;
    }
    void inc()
    {
        hour++;
        minutes++;
        seconds++;
    }
    void dec()
    {
        hour--;
        minutes--;
        seconds--;
    }
};
int main()
{
    class Date obj1;
    class Time obj2;
    obj1.setdate(20);
    obj1.setmon(04);
    obj1.setyear(2023);
    obj2.sethour(10);
    obj2.setmin(38);
    obj2.setsec(44);
    // Your date : 20/04/2023
    // Your time : 10:38:44
    cout<<"Date Format 1 : \n";
    obj1.dis1();
    cout<<"Date Format 2 : \n";
    obj1.dis2();
    cout<<endl;
    cout<<endl;
    cout<<"Time Format 1 : \n";
    obj2.dis3();
    cout<<"Time Format 2 : \n";
    obj2.dis4();
    cout<<endl;
    cout<<endl;
    cout<<"Date after Incrementing : \n";
    obj1.increment();
    cout<<"Date Format 1 : \n";
    obj1.dis1();
    cout<<"Date Format 2 : \n";
    obj1.dis2();
    cout<<endl;
    cout<<endl;
    cout<<"Date after Decrementing : \n";
    obj1.decrement();
    cout<<"Date Format 1 : \n";
    obj1.dis1();
    cout<<"Date Format 2 : \n";
    obj1.dis2();

    cout<<endl;
    cout<<endl;

    cout<<"Time after Incrementing : \n";
    obj2.inc();
    cout<<"Time Format 1 : \n";
    obj2.dis3();
    cout<<"Time Format 2 : \n";
    obj2.dis4();
    cout<<endl;
    cout<<endl;
    cout<<"Time after Decrementing : \n";
    obj2.dec();
    cout<<"Time Format 1 : \n";
    obj2.dis3();
    cout<<"Time Format 2 : \n";
    obj2.dis4();
}