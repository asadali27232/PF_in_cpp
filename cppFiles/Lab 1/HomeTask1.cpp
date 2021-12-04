#include<iostream>

using namespace std;

int main ()

{
    double num1;
    double num2;
    double num3;
    double sum;
    double avg;

    num1=7;
    num2=9;
    num3=18;

    sum = num1 + num2 + num3;

    avg = sum/3;

    cout<<"Average of "<<num1<<", "<<num2<<" and "<<num3<<" is: "<<avg;

    return 0;
}
