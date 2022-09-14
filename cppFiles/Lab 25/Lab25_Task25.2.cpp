#include <iostream>
#include<iomanip>
using namespace std;

struct TimeStruct_t
{
    int hours;
    int minutes;
    string timePeriod;
};
void display_time(TimeStruct_t& Time);
void tic(TimeStruct_t& Time);

int main()
{
    TimeStruct_t myTime;
    myTime.hours=03;
    myTime.minutes=49;
    myTime.timePeriod="pm";
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

    tic(myTime);
    //Output using Function
    display_time(myTime);

    return 0;
}
void tic(TimeStruct_t& Time)
{
        Time.minutes = Time.minutes + 1;
        if (Time.minutes>=60)
        {
           Time.minutes = 0;
           Time.hours = Time.hours + 1;
        }
        if (Time.hours==12)
        {
            if(Time.timePeriod == "pm" )
                Time.timePeriod = "am";
            else
                Time.timePeriod = "pm";
        }
        if (Time.hours>12)
        {
            Time.hours = 1;

        }
}
void display_time(TimeStruct_t& Time)
{
    cout << setw(2) << setfill('0') << Time.hours << ":"
         << setw(2) << setfill('0') << Time.minutes << " " << Time.timePeriod << endl;
}


