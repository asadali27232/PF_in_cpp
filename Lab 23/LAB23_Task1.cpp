#include<iostream>
using namespace std;
int main()
{
    int x = 10;
    int *p;
    p = &x;
    cout << &x << " ";
    cout << p << " ";
    cout << x << " ";
    cout << *p << " ";
    int *ptr1 , *ptr2;
    int *ptr3 , y;
    int *ptr4, z, arr[3];
    int *ptr5 = &x , *ptr6 = &x ;
    int *ptr7 = &x , a = 10;
    int *ptr8 = &y, b = 20 , arri[3] = {1,2,3};

    return 0;
}
