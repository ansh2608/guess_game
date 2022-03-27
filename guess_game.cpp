#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	int num, guess, tries = 0;
	srand(time(0)); //seed random number generator
	num = rand() % 1000 + 1; // random number between 1 and 1000
	cout << "Guess My Number Game\n\n";

	do
	{
		cout << "Enter a guess between 1 and 1000 : ";
		cin >> guess;
		tries++;

		if (guess > num)
			cout << "Too high. Try again\n\n";
		else if (guess < num)
			cout << "Too low. Try again\n\n";
		else
			cout << "\nExcellent! you guessed the number!\n";
	} while (guess != num);
    cout << "\nWould like to play again (y or n)?\n";

	return 0;
}