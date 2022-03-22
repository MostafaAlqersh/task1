#include <iostream>
#include <cstdlip>
#include <ctime>
using namespace std;


int main()
{
	int num, guess, tries = 0;
	srand(time(0));
	num = rand() % 100 + 1;

	do
	{
		cout << " inter number between 1 : 100. ";
		cin >> guess;
		tries++;

		if (num < guess)
			cout << "the number is high" << endl;
		else if (num > guess)
		{
			cout << "the number is low" << endl;

		}
		else
			cout << "this is the correct number" << tries << endl;


	}
	while(guess!=num)











}
