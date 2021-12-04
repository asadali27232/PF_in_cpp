#include<iostream>
#include<cmath>
using namespace std;

double f(double x);
double Trap(double a, double b,double n);

double f(double x)
{
    double fx;
    fx = sqrt(4 - pow(x, 2));
    return fx;
}

double Trap(double a, double b,double n)
{
    double h, T, fa, fb;
    double sum = 0;
    double sumx = 0;
    double intervalx = a;
    int i;

    h = (b - a)/n;
    fa = f(a);
    fb = f(b);
    for (i=1; i<=n-1 ; i++)
    {
            intervalx = intervalx + h;
            sumx = f(intervalx);
            sum = sum + sumx;
    }

    T = ((h/2) * (fa + fb + 2 * (sum)));
    return T;
}
int main()
{
    double a = -2;
    double b = 2;
    double Area_of_T;
    int n;
    int j = 2;

    for (n=j ; n<=128 ; n = j*n)
    {
        cout << "N = " << n << endl;
        Area_of_T = Trap(a, b, n);
        cout << "T = " << Area_of_T << endl << endl;
    }

    return 0;
}
