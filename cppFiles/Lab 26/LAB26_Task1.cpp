#include<iostream>
#include<iomanip>
using namespace std;

struct TimeStruct_t
{
    int hours;
    int minutes;
    string timePeriod;
};
void display_time(TimeStruct_t& Time);
void apply_time_saving(TimeStruct_t pTimeArray[], int total);
int main()
{
    TimeStruct_t timeArray[2] = {{2, 20,"pm"}, {12,30 ,"am"}};
    TimeStruct_t inTime = timeArray[0];
    TimeStruct_t outTime = timeArray[1];
    display_time(inTime);
    display_time(outTime);

    int total = 2;
    apply_time_saving(timeArray, total);

    inTime = timeArray[0];
    outTime = timeArray[1];
    display_time(inTime);
    display_time(outTime);
    return 0;
}
void display_time(TimeStruct_t& Time)
{
    cout << setw(2) << setfill('0') << Time.hours << ":"
         << setw(2) << setfill('0') << Time.minutes << " " << Time.timePeriod << endl;
}
void apply_time_saving(TimeStruct_t pTimeArray[], int total)
{
    int i=0;
    while(i<total)
    {
        if(pTimeArray[i].hours==12 && pTimeArray[i].timePeriod == "pm")
            pTimeArray[i].timePeriod = "am";
        if(pTimeArray[i].hours==12 && pTimeArray[i].timePeriod == "am")
            pTimeArray[i].timePeriod = "pm";
        pTimeArray[i].hours -= 2;
        if(pTimeArray[i].hours<=0)
            pTimeArray[i].hours=12;

        i++;
    }
}
