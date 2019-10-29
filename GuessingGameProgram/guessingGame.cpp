#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	srand(time(NULL)); // Setting random seed for random number

	bool guessed = false;
	int tryCounter, num, randNum;
	tryCounter = 1;
	num = 0;
	randNum = rand() % 100 + 1;
	//cout << "Rand num = " << randNum << endl << endl;


	while (tryCounter < 6)
	{
		cout << "***********Guess #" << tryCounter << "**********\n";
		cout << "Enter a number to be guessed: ";
		cin >> num;

		if (randNum == num)
		{
			cout << "\n\nYou guessed!!! The number was " << num << endl;
			guessed = true;
			break;
		}
		else
		{
			if (randNum < num) 
			{
				cout << "Wrong number. randNum < num . Try Again!!!\n\n" << endl;
			}
			else
			{
				cout << "Wrong number. randNum > num . Try Again!!!\n\n" << endl;
			}
			tryCounter++;
		}
	}
	if (guessed == false)
	{
		system("CLS");
		cout << "You didn't guess the random number. The random number was " << randNum << "\n\n";
	}
	


	return 0;
}