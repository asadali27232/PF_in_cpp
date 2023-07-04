/******************************************
Algorithm:
Get Total marks in FCP, Math and EE
Get obtained marks in FCP, Math and EE
Calculate percentage of FCP using formula:
    (Obtained marks in FCP / Total marks in FCP)*100
Calculate percentage of Math using formula:
    (Obtained marks in Math / Total marks in Math)*100
Calculate percentage of EE using formula:
    (Obtained marks in EE / Total marks in EE)*100
Calculate percentage of all subjects using formula;
    (Sum of obtained marks in FCP, Math and EE / Sum of total marks of FCP, Math and EE)*100
Display Percentage of FCP, EE and Math
Display Overall percentage
******************************************/
#include<iostream>

using namespace std;

int main()

{
    double obtFCP;
    double obtMath;
    double obtEE;
    double tFCP;
    double tMath;
    double tEE;
    double perFCP;
    double perMath;
    double perEE;
    double sumOBT;
    double sumTotal;
    double AVG;

    obtFCP = 90;
    obtMath = 95;
    obtEE = 70;

    tFCP = 100;
    tMath = 100;
    tEE = 100;

    perFCP = (obtFCP/tFCP)*100;
    perMath = (obtMath/tMath)*100;
    perEE = (obtEE/tEE)*100;

    sumOBT = obtFCP+obtMath+obtEE;
    sumTotal = tFCP+tMath+tEE;

    AVG = (sumOBT/sumTotal)*100;

    cout<<"Total Marks in FCP: "<< tFCP<<endl;
    cout<<"Total Marks in Math: "<< tMath<<endl;
    cout<<"Total Marks in EE: "<< tEE<<endl<<endl;

    cout<<"Obtained Mark in FCP: "<< obtFCP<<endl;
    cout<<"Obtained Mark in Math: "<< obtMath<<endl;
    cout<<"Obtained Mark in EE: "<< obtEE<<endl<<endl;

    cout<<"Percentage in FCP: "<< perFCP<<endl;
    cout<<"Percentage in Math: "<< perMath<<endl;
    cout<<"Percentage in EE: "<<perEE<<endl<<endl;


    cout<<"Overall Percentage: "<< AVG<<endl;

    return 0;
}
