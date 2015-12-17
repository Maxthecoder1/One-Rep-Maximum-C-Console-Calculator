//calcmain.cpp : Defines the entry point for the console application.
// Max Jeanphilippe aka Maxthecoder

#include <iostream>
using namespace std;

class onerepmax_calc 
{

private:
	
	const double coefficients[11] = { 0, 1.00, 1.066, 1.099, 1.132, 1.165, 1.198, 1.231, 1.264, 1.297, 1.330 };//coefficients for one rep max formula
	double max;//container for 1 rep max
	double weight;//container for weight in lbs. lifted
	int reps;//container for amount of repetitions done
	
public:
	
	onerepmax_calc()//default constructor calls the menu function
	{
		menu();
	}
	
	void menu() //main menu function that calls calculating/storage functions
	{
		cout << "Welcome to the 1-REP MAXIMUM CALCULATOR\n\n";
		setweight();//step 1. set weight
		setreps();//step 2. set reps
		onerepmax_reloop();//step 3. calculate max, offer choice to calculate again
	}


	void setweight() ////weight mutator
	{
		cout << "Type in the amount of weight in lbs. lifted: " << endl;
		cin >> weight;
		cout << "\n\n";
	}


	void setreps()//reps mutator memeber function using a do while and try{,throw,}catch for exception handling 
	{
		do {
			try {
				cout << "Type in the amount of repetitions (1-10): ";
				cin >> reps;
				cout << endl;
				if (reps < 1 || reps>10) {
					throw reps;
				}
			}
			catch (int reps) {
				cerr << "Error! The amount of repetitions must be between 1 and 10!\n\n";
			}
		} while (reps < 1 || reps>10);
		cout << "\n\n";
	}


	void onerepmax_reloop() 
	{
		int i = reps; //container to access array index with proper coefficient
		max = (coefficients[i] * weight);
		cout << "Your 1-REP MAXIMUM is: " << max << "lbs.\n\n";
		cout <<  "DO YOU WANT TO CALCULATE AGAIN?  [Y/N]";
		char choice = 0;
		cin >> choice;
		if (choice == 'y' || choice == 'Y') { clear(); menu(); }
		else {
			cout << "\nThank you for using MAXTHECODER's ONE REP MAX CALCULATOR! GOOD BYE!";
			cin.get();
			EXIT_SUCCESS;
		}
	}

	void clear()//clear console screen function
	{
		int n;
		for (n = 0; n < 5; n++)
			printf("\n\n\n\n\n\n\n\n\n");
	}



}onerepcalc;

void main()
{
	onerepcalc;
	
}

