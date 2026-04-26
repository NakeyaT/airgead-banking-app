#include "Investment.h"
#include <iostream>
#include <iomanip>

using namespace std;

// Default constructor
Investment::Investment() {
	m_initialInvestment = 0.0;
	m_monthlyDeposit = 0.0;
	m_annualInterest = 0.0;
	m_numberOfYears = 0;
}

// Parameterized constructor
Investment::Investment(double t_initialInvestment, double t_monthlyDeposit, double t_annualInterest, int t_numberOfYears) {
	m_initialInvestment = t_initialInvestment;
	m_monthlyDeposit = t_monthlyDeposit;
	m_annualInterest = t_annualInterest;
	m_numberOfYears = t_numberOfYears;
}

// Setters
void Investment::setInitialInvestment(double t_initialInvestment) {
	m_initialInvestment = t_initialInvestment;
}

void Investment::setMonthlyDeposit(double t_monthlyDeposit) {
	m_monthlyDeposit = t_monthlyDeposit;
}

void Investment::setAnnualInterest(double t_annualInterest) {
	m_annualInterest = t_annualInterest;
}

void Investment::setNumberOfYears(int t_numberOfYears) {
	m_numberOfYears = t_numberOfYears;
}

// Getters
double Investment::getInitialInvestment() const {
	return m_initialInvestment;
}

double Investment::getMonthlyDeposit() const {
	return m_monthlyDeposit;
}

double Investment::getAnnualInterest() const {
	return m_annualInterest;
}

int Investment::getNumberOfYears() const {
	return m_numberOfYears;
}

// Display user input
void Investment::displayInputData() const {
	cout << "***********************************" << endl;
	cout << "*********** Data Input ************" << endl;
	cout << fixed << setprecision(2);
	cout << "Initial Investment Amount: $" << m_monthlyDeposit << endl;
	cout << "Monthly Deposit: $" << m_monthlyDeposit << endl;
	cout << "Annual Interest: %" << m_annualInterest << endl;
	cout << "Number of years: " << m_numberOfYears << endl;
}

// Report without monthly deposits
void Investment::displayReportWithoutMonthlyDeposits() const {
	double currentBalance = m_initialInvestment;

	cout << endl;
	cout << "     Balance and Interest Without Additional Monthly Deposits     " << endl;
	cout << "==================================================================" << endl;
	cout << left << setw(10) << "Year"
		<< setw(25) << "Year End Balance"
		<< setw(25) << "Year End Earned Interest" << endl;
	cout << "------------------------------------------------------------------" << endl;

	for (int year = 1; year <= m_numberOfYears; ++year) {
		double yearlyInterest = 0.0;

		for (int month = 1; month <= 12; ++month) {
			double monthlyInterest = currentBalance * ((m_annualInterest / 100) / 12);
			yearlyInterest += monthlyInterest;
			currentBalance += monthlyInterest;
		}

		cout << fixed << setprecision(2);
		cout << left << setw(10) << year
			<< "$" << setw(24) << currentBalance
			<< "$" << setw(24) << yearlyInterest << endl;
	}
}

// Report with monthly deposits
void Investment::displayReportWithMonthlyDeposits() const {
	double currentBalance = m_initialInvestment;

	cout << endl;
	cout << "     Balance and Interest With Additional Monthly Deposits       " << endl;
	cout << "=================================================================" << endl;
	cout << left << setw(10) << "Year"
		<< setw(25) << "Year End Balance"
		<< setw(25) << "Year End Earned Interest" << endl;
	cout << "-----------------------------------------------------------------" << endl;

	for (int year = 1; year <= m_numberOfYears; ++year) {
		double yearlyInterest = 0.0;

		for (int month = 1; month <= 12; ++month) {
			currentBalance += m_monthlyDeposit;
			double monthlyInterest = currentBalance * ((m_annualInterest / 100) / 12);
			yearlyInterest += monthlyInterest;
			currentBalance += monthlyInterest;
		}

		cout << fixed << setprecision(2);
		cout << left << setw(10) << year
			<< "$" << setw(24) << currentBalance
			<< "$" << setw(24) << yearlyInterest << endl;
}

cout << endl;
}
