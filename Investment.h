#ifndef INVESTMENT_H
#define INVESTMENT_H

class Investment {
private:
	double m_initialInvestment;
	double m_monthlyDeposit;
	double m_annualInterest;
	int m_numberOfYears;

public:
	Investment();
	Investment(double t_initialInvestment, double t_monthlyDeposit, double t_annualInterest, int t_numnerOfYears);

	void setInitialInvestment(double t_initalInvestment);
	void setMonthlyDeposit(double t_monthlyDeposit);
	void setAnnualInterest(double t_annualInterest);
	void setNumberOfYears(int t_numberOfYears);

	double getInitialInvestment() const;
	double getMonthlyDeposit() const;
	double getAnnualInterest() const;
	int getNumberOfYears() const;

	void displayInputData() const;
	void displayReportWithoutMonthlyDeposits() const;
	void displayReportWithMonthlyDeposits() const;
};

#endif
