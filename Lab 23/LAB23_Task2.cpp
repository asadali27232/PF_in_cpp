#include<iostream>
#include<cmath>

using namespace std;

void computeStats(double x1, double x2, double x3, double x4, double x5, double *xout, double *deviation);

void computeStats(double x1, double x2, double x3, double x4, double x5, double *xout, double *deviation) {
    *xout = (x1 + x2 + x3 + x4 + x5) / 5;
    int x = *xout;
    *deviation = sqrt((x1 - x) * (x1 - x) + (x2 - x) * (x2 - x) + (x3 - x) * (x3 - x) + (x4 - x) * (x4 - x) +
                      (x5 - x) * (x5 - x));

}

int main() {
    double devi, mean;
    computeStats(1, 2, 3, 4, 5, &mean, &devi);
    cout << "Mean (x) = " << mean << endl << "Standard Deviation = " << devi;
    return 0;

}
