// weight trainer.cpp : Defines the entry point for the console application.
// Max Jeanphilippe

#include <iostream>
using namespace std;


int main()
{
	char choice;
	do {
		int weight, reps, i;
		double coefficients[11] = { 0, 1.00, 1.066, 1.099, 1.132, 1.165, 1.198, 1.231, 1.264, 1.297, 1.330 };//coefficients for one rep max formula
		double max;//container for 1 rep max
		cout << "Welcome to the 1-REP MAXIMUM CALCULATOR" << endl;
		cout << endl;
		cout << "Type in the amount of weight lifted: " << endl;
		cin >> weight;
		cout << "Type in the amount of repetitions (1-10): " << endl;
		cin >> reps;
		while (reps > 10) cout << "Should have listened" << endl; EXIT_FAILURE;
		i = 0;
		while (i <= reps) i++;
		max = (coefficients[i] * weight);
		cout << "Your 1-REP MAXIMUM is: " << max << "lbs.";
		cout << endl << "DO YOU WANT TO CALCULATE AGAIN?";
		cin >> choice;
		cout << "\n\n";
	} while (choice == 'y' || choice == 'Y');
	
	
	system("PAUSE");
	return 0;

}

