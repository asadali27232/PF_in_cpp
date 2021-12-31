#include<iostream>
#include<cstring>
#include<fstream>
#include<string>
#include<iomanip>
#include<cmath>

using namespace std;
char discard;
struct H_W
{
    double h;
    double w;
};
struct artWork
{
    string artist;
    string title;
    H_W s;
    string room;
    double price;
};

artWork allArt[25];
int n;
void buy();
void buy()
{
    string buy_name;
    int no_products = 0;
    double cost = 0;
    char sentinal_value = 'y';

    while(sentinal_value=='y')
    {
    int notFound = 0;
    cout << "enter author's name, whose art work you want to buy: ";
    cin >> buy_name;
    for(int i=0; i<n; i++)
    {
    if(buy_name == allArt[i].artist)
    {
    no_products++;
    cost = cost + allArt[i].price;
    notFound++;
    }
    }
    if (notFound == 0)
        cout << endl << "no such author in authors list. You may try again!" << endl << endl;

    cout << "total no_productss: " << no_products << endl;
    cout << "total cost: " << cost << endl;

    cout << "do you want to continue more purchase (y/n): ";
    cin >> sentinal_value;
    cout << endl;
    }
    cout << endl <<  "total no_productss purchased: " << no_products << endl;
    cout << "total purchase cost: " << cost << endl;
}

int main()
{
    ifstream input;
    input.open("art.txt");
    if(!input)
    {
        cout << "file not found" << endl;
        return 1;
    }
    while(!input.eof())
    {
    getline(input, allArt[n].artist);
    getline(input, allArt[n].title);
    input >> allArt[n].s.h;
    input.get(discard);
    input.get(discard);
    input >> allArt[n].s.w;
    input.get(discard);
    getline(input, allArt[n].room);
    input >> allArt[n].price;
    input.get(discard);
    input.get(discard);
    n++;
    }
    for(int i=0; i<n; i++)
    {cout << "The art work of '" << allArt[i].artist<< "' with title '" << allArt[i].title<< "' and size=" << allArt[i].s.h*allArt[i].s.w<< " SqFT. is available at " << allArt[i].price << "$."<< endl;}
    buy();
    return 0;
}
