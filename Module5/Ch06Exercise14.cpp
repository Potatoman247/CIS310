#include <iostream>

using namespace std;

static double costA(double rate, int timeM)
{
	double rateCost = (rate / 60) * .4;
	int consultTime = timeM - 30;

	if (consultTime <= 0)
	{
		consultTime = 0;
	}

	double finalCost = rateCost * consultTime;

	return finalCost;
}

static double costB(double rate, int timeM)
{
	double rateCost = (rate / 60) * .7;
	int consultTime = timeM - 20;

	if (consultTime <= 0)
	{
		consultTime = 0;
	}

	double finalCost = rateCost * consultTime;

	return finalCost;
}

int main()
{
	double rate;
	int timeM;
	int income;
	double totalCost;

	cout << "Hello User!\nPlease Input The Hourly Rate, The Consulting Time, And The Client's Income;\nHourly Rate: ";
		cin >> rate;
	cout << "\nConsultancy Time: ";
		cin >> timeM;
	cout << "\nIncome: ";
		cin >> income;

		if (income <= 25000)
		{
			totalCost = costA(rate, timeM);
		}
		else
		{
			totalCost = costB(rate, timeM);
		}
	
		cout << "\nThe Client's Final Cost Is: $" << totalCost;

		return 0;
	
}
