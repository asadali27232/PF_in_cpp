#include<iostream>
#include<cmath>

using namespace std;

void circle(double x1, double x2, double y1, double y2, double &radius, double &circumfernce, double &area);
void circle(double x1, double x2, double y1, double y2, double &radius, double &circumfernce, double &area)
{
    radius = sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
    circumfernce = 2*3.14*radius ;
    area = 3.14*radius*radius;
}
int main()
{
    double x1, x2 , y1, y2,radius,circumfernce,area;
    cout << "Enter Center of the Circle (x1 y1): " ;
    cin >> x1 >> y1;
    cout << "Enter a point on Circle (x2 y2): " ;
    cin >> x2 >> y2;
    circle(x1, x2, y1, y2, radius,circumfernce,area);
    cout<< endl << "Radius of Given Circle is: " << radius << endl<<endl;
    cout << "Circumfernce of Given Circle is: " << circumfernce << endl << endl;
    cout << "Area of Given Circle is: " << area << endl << endl;


    return 0;
}
