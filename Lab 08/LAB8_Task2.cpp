#include<iostream>
#include<cmath>

using namespace std;
int main ()
{
    double side1,side2,side3;

    cout<<"Enter the First Side: ";
    cin>>side1;
    cout<<"Enter the Second Side: ";
    cin>>side2;
    cout<<"Enter the Third Side: ";
    cin>>side3;

    cout << endl;

    if(side1==(sqrt((pow(side2,2) + pow(side3,2)))))
        cout<<"    Triangle with sides " << side1 << ", " << side2 << ", and " << side3 << endl << "    is a Right Angled Triangle" << endl << endl;
    else if (side2==(sqrt((pow(side1,2) + pow(side3,2)))))
        cout<<"    Triangle with sides " << side1 << ", " << side2 << ", and " << side3 << endl << "    is a Right Angled Triangle" << endl << endl;
    else if(side3==(sqrt((pow(side1,2) + pow(side2,2)))))
        cout<<"    Triangle with sides " << side1 << ", " << side2 << ", and " << side3 << endl << "    is a Right Angled Triangle" << endl << endl;
    else
        cout<<"    Triangle with sides " << side1 << ", " << side2 << ", and " << side3 << endl << "    is NOT a Right Angled Triangle" << endl << endl;

    return 0;


}
