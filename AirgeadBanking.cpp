// AirgeadBanking.cpp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <limits>
#include "Investment.h"

using namespace std;

int main() {
	double initialInvestment = 0.0;
	double monthlyDeposit = 0.0;
	double annualInterest = 0.0;
	int numberOfYears = 0;

	// Ask the user for input
	cout << "*************************************************" << endl;
	cout << "***************** Data Input ********************" << endl;

	cout << "Initial Investment Amount: ";
	cin >> initialInvestment;

	cout << "Monthly Deposit: ";
	cin >> monthlyDeposit;

	cout << "Annual Interest (%): ";
	cin >> annualInterest;

	cout << "Number of years: ";
	cin >> numberOfYears;

	cout << endl;
	cout << "Press Enter to continue..." << endl;

	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	cin.get();

	// Create object
	Investment investmentData(initialInvestment, monthlyDeposit, annualInterest, numberOfYears);

	// Display input and reports
	investmentData.displayInputData();
	investmentData.displayReportWithoutMonthlyDeposits();
	investmentData.displayReportWithMonthlyDeposits();

	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
