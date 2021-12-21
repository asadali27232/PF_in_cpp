#include <iostream>
#include<iomanip>
using namespace std;

struct TimeStruct_t
{
    int hours;
    int minutes;
    string timeperiod;
};
void display_time(TimeStruct_t myTime);
void tic(TimeStruct_t myTime);
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
    //Adding 1
    tic(myTime);
    //Output using Function
    display_time(myTime);

    return 0;
}
void display_time(TimeStruct_t myTime)
{
    cout<<setw(2) << setfill('0') <<  myTime.hours<<":"
        << setw(2) << setfill('0') << myTime.minutes<< " " << myTime.timeperiod<<endl;
}
void tic(TimeStruct_t myTime)
{
        myTime.minutes = myTime.minutes + 1;
        if (myTime.minutes>60)
        {
           myTime.minutes = 0;
           myTime.hours = myTime.hours + 1;
        }
        if (myTime.hours>12)
        {
            myTime.hours = 1;
            if(myTime.timeperiod == "pm" )
                myTime.timeperiod = "am";
            else
                myTime.timeperiod = "pm";
        }
}

