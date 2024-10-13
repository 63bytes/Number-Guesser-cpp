#include <iostream>

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
  //  while (true)
}

int main()
{
    std::cout << "Hello World!" std::endl;
}