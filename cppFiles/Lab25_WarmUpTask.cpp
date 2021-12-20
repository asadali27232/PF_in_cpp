#include<iostream>
using namespace std;
struct partType
{
    string partName;
    int partNum;
    double price;
    int quantitiesInStock;
};
void input (partType x)
{

    cout << "Part Name: ";
    cin >> x.partName;
    cout << "Part Number:";
    cin >> x.partNum;
    cout << "Price:";
    cin >> x.price;
    cout << "Quantities in Stock:";
    cin >> x.quantitiesInStock;

}
int main()
{
    partType x;
    input(x);
    return 0;
}
