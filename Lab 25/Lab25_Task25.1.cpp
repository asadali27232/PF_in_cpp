#include <iostream>
#include<iomanip>
using namespace std;

struct TimeStruct_t
{
    int hours;
    int minutes;
    string timePeriod;
};
int main()
{
    TimeStruct_t myTime;
    myTime.hours = 03;
    myTime.minutes = 49;
    myTime.timePeriod = "pm";
    cout << setw(2) << setfill('0') << myTime.hours << ":" << setw(2) << setfill('0') << myTime.minutes << " " << myTime.timePeriod << endl;
    cout<<"Enter the Hour: ";
    cin>>myTime.hours;
    cout<<endl;
    cout<<"Enter the Minutes: ";
    cin>>myTime.minutes;
    cout<<endl;
    cout<<"Enter the Time period: ";
    cin>>myTime.timePeriod;
    cout<<endl;
    cout << setw(2) << setfill('0') << myTime.hours << ":" << setw(2) << setfill('0') << myTime.minutes << " " << myTime.timePeriod << endl;
   return 0;
}
