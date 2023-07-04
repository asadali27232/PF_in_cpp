#include<iostream>
#include<cmath>

using namespace std;

void computStats (double x1 , double x2, double x3, double x4, double x5, double &x, double &deviation);

void computStats (double x1 , double x2, double x3, double x4, double x5, double &x, double &deviation)
{
    x = (x1+ x2+x3+x4+x5)/5 ;
    deviation = sqrt((x1-x)*(x1-x)+(x2-x)*(x2-x)+(x3-x)*(x3-x)+(x4-x)*(x4-x)+(x5-x)*(x5-x));

}
int main()
{
    double deviation , mean;
    computStats(1,2,3,4,5, mean, deviation);
    cout << "Mean (x) = " << mean << endl << "Standard Deviation = " << deviation ;
    return 0;

}
