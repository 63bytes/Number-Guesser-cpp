#include <iostream>
#include <random>
#include <string>
using namespace std;

int randint(int min, int max)
{
    random_device rd;   // Seed for the random number engine
    mt19937 gen(rd());  // Mersenne Twister engine to generate random numbers

    // Define a distribution to generate random numbers between 1 and 100
    uniform_int_distribution<> distrib(min, max);

    // Generate and print a random number
    return distrib(gen);
}

void runGame(int number)
{
    int guess;
    while (guess!=number)
    {
        cout << "Guess a number:";
        cin >> guess;
        if (guess<number)
        {
            cout << "Guess higher" << endl;
        }
        if (guess>number)
        {
            cout << "Guess lower" << endl;
        }
    }
    cout << "You guessed correct, the number was " + to_string(number) << endl;
}

int main()
{
    int min,max;
    string answer;
    cout << "Minimum number:";
    cin >> min;
    cout << "Maximum number:";
    cin >> max;
    runGame(randint(min,max));
    while (true)
    {
        cout << "Enter 'y' to play again?";
        cin >> answer;
        if (answer=="y")
        {
            runGame(randint(min,max));
        }
        else
        {
            break;
        }
    }
    return 0;
}