#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
    ifstream inFile;
    ofstream outFile;

    double lenght, width, area, peremeter;
    double radius, carea, circumference;
    string first_name, last_name;
    int age;
    double ibalance, rate, fbalance;
    char letter;

    inFile.open("inData.txt");
    outFile.open("outData.out");

    outFile << fixed << showpoint;
    outFile << setprecision(2);

    cout << "Processing Data" << endl << endl << "Processing Done!" <<endl;

    inFile>> lenght >> width;
    area = lenght*width;
    peremeter = 2*(lenght+width);
    outFile<< "Rectangle:" <<endl<< "Length = " << lenght << ", width = " << width << ", area = " << area << ", parameter = " << peremeter << endl << endl;

    inFile>> radius;
    carea = 3.14*radius*radius;
    circumference = 2*3.14*radius;
    outFile<< "Circle:"<<endl<< "Radius = " << radius << ", area = " << carea << ", circumference = " << circumference<<endl<<endl;

    inFile>> first_name>> last_name;
    inFile>> age;
    outFile<< "Name:" << first_name<< " " << last_name<< ", age:"<< age << endl;

    inFile>> ibalance >> rate;
    fbalance = ibalance + (ibalance * 0.035);
    outFile<< "Beginning Balance = $" << ibalance << ", interest rate = " << rate << endl << "Balance at the end of the month = $" << fbalance << endl << endl;

    inFile>> letter;
    outFile<<"The Character that comes after " << letter << " in ASCII is B" <<endl;

    return 0;
}
