#include<iostream>
#include<iomanip>
using namespace std;

struct TimeStruct_t
{
    int hours;
    int minutes;
    string timePeriod;
};
struct DateStruct
{
    int year;
    int month;
    int date;
};
struct DateTimeStruct
{
    TimeStruct_t time1;
    DateStruct date1;
};

void display_time(DateTimeStruct event1[], int noOfAlarms);

int main()
{
    int noOfAlarms = 3;
    DateTimeStruct event1[noOfAlarms];

    for (int i=0; i<noOfAlarms; i++)
    {
    cout << "Enter Time for " << i+1 << " Alarm (HH MM PM/AM) : ";
    cin >> event1[i].time1.hours >> event1[i].time1.minutes >> event1[i].time1.timePeriod;
    cout << "Enter Date for " << i+1 << " Alarm (DD MM YYYY): ";
    cin >> event1[i].date1.date >> event1[i].date1.month >> event1[i].date1.year;
    cout << endl;
    }

    display_time(event1, noOfAlarms);

    return 0;
}
void display_time(DateTimeStruct event1[], int noOfAlarms)
{
    cout << endl;
    cout << "Upcoming Alarms: ";
    cout << endl;
    cout << setw(60) << setfill('_') << "_" << endl;

    for (int i=0; i<noOfAlarms; i++)
    {
    cout << endl;
    cout << "Alarm " << i+1 << " is set on ";
    cout<<setw(2) << setfill('0') <<  event1[i].date1.date<<"-"
        << setw(2) << setfill('0') << event1[i].date1.month<< "-" << setw(4) << event1[i].date1.year;
    cout << " at ";
    cout<<setw(2) << setfill('0') <<  event1[i].time1.hours<<":"
        << setw(2) << setfill('0') << event1[i].time1.minutes<< " " << event1[i].time1.timePeriod;
    cout << endl;
    }
    cout << endl;
    cout << setw(60) << setfill('_') << "_" << endl;
}
