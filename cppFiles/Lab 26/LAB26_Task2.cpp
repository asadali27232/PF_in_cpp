#include<iostream>
#include<iomanip>
using namespace std;

struct TimeStruct_t
{
    int hours;
    int minutes;
    string timeperiod;
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
void display_time(DateTimeStruct& Time);
int main()
{
    DateTimeStruct event1;

    cout << "Enter Hours: ";
    cin >> event1.time1.hours;
    cout << "Enter Minutes: ";
    cin >> event1.time1.minutes;
    cout << "Enter Time Period: ";
    cin >> event1.time1.timeperiod;
    cout << "Enter Time Date: ";
    cin >> event1.date1.date;
    cout << "Enter Time Month: ";
    cin >> event1.date1.month;
    cout << "Enter Time Year: ";
    cin >> event1.date1.year;

    display_time(event1);

    return 0;
}
void display_time(DateTimeStruct& event1)
{
    cout << endl;
    cout << "The event occourred on ";
    cout<<setw(2) << setfill('0') <<  event1.date1.date<<"-"
        << setw(2) << setfill('0') << event1.date1.month<< "-" << setw(4) << event1.date1.year;
    cout << " to ";
    cout<<setw(2) << setfill('0') <<  event1.time1.hours<<":"
        << setw(2) << setfill('0') << event1.time1.minutes<< " " << event1.time1.timeperiod;
    cout << endl;
}
