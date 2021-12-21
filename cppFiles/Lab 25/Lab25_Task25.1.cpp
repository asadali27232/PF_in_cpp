#include <iostream>
#include<iomanip>
using namespace std;

struct TimeStruct_t
{
    int hours;
    int minutes;
    string timeperiod;
};
int main()
{
    TimeStruct_t myTime;
    myTime.hours=03;
    myTime.minutes=49;
    myTime.timeperiod="pm";
    cout<< setw(2) << setfill('0') << myTime.hours<<":"<<setw(2) << setfill('0')<< myTime.minutes<< " " <<myTime.timeperiod<<endl;
    cout<<"Enter the Hour: ";
    cin>>myTime.hours;
    cout<<endl;
    cout<<"Enter the Minutes: ";
    cin>>myTime.minutes;
    cout<<endl;
    cout<<"Enter the Time period: ";
    cin>>myTime.timeperiod;
    cout<<endl;
    cout<<setw(2) << setfill('0') <<  myTime.hours<<":"<< setw(2) << setfill('0') << myTime.minutes<< " " << myTime.timeperiod<<endl;
   return 0;
}
