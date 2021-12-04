/************************************************
Algorithm:
Get m, v, g and h
Calculate Total Energy (E) using Formula:
	E = mv2/(2 + mgh)
Display total Energy E
*************************************************/

#include<iostream>

using namespace std;

int main()
{
    double m = 500;
    double v = 100;
    double g = 9.8;
    double h = 20;

    double E = m*(v*v)/(2+m*g*h);

    cout<< "Total Energy E = " << E;

    return 0;
}
