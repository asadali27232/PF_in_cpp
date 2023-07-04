#include<iostream>
#include<iomanip>
using namespace std;

double avg(double a, double b, double c);

double avg(double a, double b, double c)
{
    double average = 0;
    average = (a+b+c)/3.0;
    return average;
}
int main()
{
    cout << fixed << setprecision(1) <<  avg(2,2,2.0);
	return 0;
}
