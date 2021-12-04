/*************************************
Algorithm:
Given distance and time, your program should Find velocity.
Input Distance and Time
Calculate Velocity
	Velocity = distance / time
Display Velocity
**************************************/

#include<iostream>

using namespace std;

int main()
{
    double distance;
    double time;
    double velocity;

    distance = 150;
    time = 60;
    velocity = distance/time;

    cout<<"Velocity = " << velocity << " when Distance = " << distance << " and time = " << time;

    return 0;
}
