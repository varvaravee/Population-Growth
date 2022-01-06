#include<iostream>
#include<iomanip>

using namespace std;

int main()
{

	double numberOrgs=0;
	double popIncr=0;
	double numberDays=0;


	cout << "Enter the starting number of organisms: ";
	cin >> numberOrgs;


	while (!(numberOrgs >= 2))
	{
		cout << "The starting number of organisms must be at least 2. \n";
		cout << "Enter the starting number of organisms:";
		cin >> numberOrgs;
	}

	double runningTotal = numberOrgs;

	cout << "Enter the average daily population increase (as a percentage):";
	cin >> popIncr;

	while (popIncr <= 0)
	{
		cout << "The average daily population must be a positive value. \n";
		cin >> popIncr;
	}

	cout << "Enter the number of days they will multiply:";
	cin >> numberDays;

	while (numberDays < 1)
	{
		cout << "The number of days must be at least 1.\n";
		cin >> numberDays;
	}


	for (int day = 1; day <= numberDays; day++)
	{
		runningTotal += (runningTotal * popIncr);
		cout << setprecision(0) << fixed;

		cout << "On day " << day << " the population size was " << runningTotal << "." << endl;
	}



	return 0;
}