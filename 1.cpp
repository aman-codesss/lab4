
// Write a program that has a class to represent time. The class should have constructors to initialize data members hour, minute, and second to 0 and to initialize them to values passed as arguments. The class should have a member function to add time objects and return the result as a time object. There should be functions to display time in 12-hour and 24-hour format.

#include<iostream>
#include<iomanip>
using namespace std;
class Time{
    private:
        int hr,min,sec;
    public:
        Time(int h=0,int m=0,int s=0):hr{h},min{m},sec{s} {}

        Time add(Time& b){
            Time t;
            t.hr=hr+b.hr;
            t.min=min + b.min;
            t.sec = sec+ b.sec;

            t.min +=t.sec/60;
            t.sec%=60;

            t.hr += t.min/60;
            t.min%=60;
            return t;
        }
        void formatOne(Time &t){
            cout<<setfill('0')<<setw(2)<< (t.hr>12?t.hr-12:t.hr)<<":";
            cout<<setfill('0')<<setw(2)<< t.min<<":";
            cout<<setfill('0')<<setw(2)<< t.sec<<(t.hr>12?" PM":" AM")<<endl;
        }
        void formatTwo(Time &t){
            cout<<setfill('0')<<setw(2)<< (t.hr>24?t.hr-24:t.hr)<<":";
            cout<<setfill('0')<<setw(2)<< t.min<<":";
            cout<<setfill('0')<<setw(2)<< t.sec<<endl;
        }


};
int main(){
    Time a(6,45,40);
    Time b(8,19,50);
    Time c = a.add(b);
    c.formatOne(c);
    c.formatTwo(c);

}