//Flag-controlled while loop.
//Number guessing game.
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
    int num;
    int diff;
    int guess;
    bool isGuessed;

    srand(time(0));
    num = rand() % 100;
    isGuessed = false;
    while (!isGuessed)
    {
        cout << "Enter an integer greater"
            << " than or equal to 0 and "
            << "less than 100: ";
        cin >> guess;
        cout << endl;
    if (num - guess == 0)
    {
        cout << "You guessed the correct "
            << "number." << endl;
        isGuessed = true;
    }
    else if (guess > num)
    {
        diff = num - guess;

        if (abs(diff) >= 50)
            cout << "Your Guess is Very High.\nGuess again! ";
        else if (abs(diff) >= 30)
            cout << "Your Guess is High.\nGuess again! " ;
        else if (abs(diff) >= 15)
            cout << "Your Guess is Moderately High.\nGuess again! " ;
        else if (abs(diff) > 0)
            cout << "Your Guess is Somewhat High.\nGuess again! " ;
    }
    else if (guess < num)
    {
        diff = num - guess;

        if (abs(diff) >= 50)
            cout << "Your Guess is Very Low.\nGuess again! ";
        else if (abs(diff) >= 30)
            cout << "Your Guess is Low.\nGuess again! " ;
        else if (abs(diff) >= 15)
            cout << "Your Guess is Moderately Low.\nGuess again! " ;
        else if (abs(diff) > 0)
            cout << "Your Guess is Somewhat Low.\nGuess again! " ;
    }

    }
    return 0;
}
