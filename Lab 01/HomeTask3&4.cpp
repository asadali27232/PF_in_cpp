/*************************************************
Given initial velocity, acceleration and time, your program should Find final velocity according to Newton’s first law of Motion. Vf = Vi + a*t;
Get initial velocity, acceleration and time
Find final velocity using formula
	Vf = Vi + a*t
Find Distance using Formula
    S = Vi*t + 0.5*a*t^2
Display velocity
*************************************************/

#include<iostream>

using namespace std;

int main()
{
    double vf;
    double vi = 50;
    double acceleration = 20;
    double time = 10;
    double s;

    vf = vi + acceleration * time;
    s = (vi*time) + 0.5*(acceleration*2*time);

    cout<< "Distance is: " << s << endl;
    cout<< "Final Velocity is: " << vf;

    return 0;
}
