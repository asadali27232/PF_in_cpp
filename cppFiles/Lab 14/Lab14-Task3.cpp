#include<iostream>
using namespace std;

char larger_charecter(char first , char second); //Proto Type

char larger_charecter(char first , char second)
{
    char a, b;
    if (first > second)
        return first;
    else
        return second;
}

int main()
{
	cout << larger_charecter('A', 'B') ;

	return 0;
}
