#include <iostream>
using namespace std;

class bankAccount {
private:
	int accountNumber = 0;
	double balance = 0.00;
	static int accNum;

public:

	bankAccount(int accountNumber, double balance) {
		this->accountNumber = accountNumber;
		this->balance = balance;
	}

	bankAccount() {
		accNum += 1;
		accountNumber = accNum;
	}
	void getBalance(double inBalance) {
		balance = inBalance;
	}

	int accountNumOut() {
		return accountNumber;
	}
	double balanceOut() {
		return balance;
	}

	void deposit(double depositAmount) {
		balance += depositAmount;
	}

	void withdraw(double withdrawAmount) {
		balance -= withdrawAmount;
	}

	void print() {
		cout << "Account Number: " << accountNumber << "\n";
		cout << "Balance: " << balance << "\n";
	}
};

class checkingAccount : public bankAccount {
private:
	double interestRate;
	double minBalance;
	double serviceCharge;

public:

	checkingAccount(int accountNumber, double balance, double interestRate, double minBalance, double serviceCharge) : bankAccount(accountNumber, balance) {
		this->interestRate = interestRate;
		this->minBalance = minBalance;
		this->serviceCharge = serviceCharge;
	}

	double getMinimumBalance() {
		return minBalance;
	}

	void setMinimumBalance(double minBalance) {
		this->minBalance = minBalance;
	}

	double getInterestRate() {
		return interestRate;
	}

	void setInterestRate(double interestRate) {
		this->interestRate = interestRate;
	}

	double getServiceCharge() {
		return serviceCharge;
	}

	void setServiceCharge(double serviceCharge) {
		this->serviceCharge = serviceCharge;
	}

	double postInterest() {
		double interest;
		interest = this->balanceOut() * interestRate;
		return interest;
	}

	bool underBalance() {
		if (this->balanceOut() <= minBalance) {
			return true;
		}
		else {
			return false;
		}
	}
	void postServiceCharge() {
		this->bankAccount::withdraw(this->getServiceCharge());
		cout << "Your Account Has Received a $" << this->getServiceCharge() << " Service Charge.  Your New Balance Is: $" << this->balanceOut() << endl;
	}
	void writeCheck() {
		double checkAmount;
		cout << "Please Input Check Amount: ";
		cin >> checkAmount;
		this->bankAccount::withdraw(checkAmount);
		cout << "\nYou Wrote A Check For $" << checkAmount << ".  Your New Balance Is: $" << this->balanceOut() << endl;
		if (this->underBalance() == true) {
			this->postServiceCharge();
		}
	}


	void withdraw() {
		double tempBal;
		tempBal = this->balanceOut();
		double withdrawAmount;
		cout << "Please Input The Amount You Would Like To Withdraw: ";
		cin >> withdrawAmount;
		this->bankAccount::withdraw(withdrawAmount);
		cout << "\nYou Withdrew $" << withdrawAmount << ".  Your New Balance Is: $" << this->balanceOut() << endl;
		if (this->underBalance() == true) {
			this->postServiceCharge();
		}

	}

	void print() {
		cout << "Account Number: " << this->accountNumOut() << "\n";
		cout << "Balance: " << this->balanceOut() << "\n";
		cout << "Interest Rate: " << this->getInterestRate() << "\n";
		cout << "Interest: " << this->postInterest() << "\n";
		cout << "Minimum Balance: " << this->getMinimumBalance() << "\n";
		cout << "Service Charge: " << this->getServiceCharge() << "\n";
	}
};

class savingsAccount : public bankAccount {
private:
	double interestRate;
public:
	savingsAccount(int accountNumber, double balance, double interestRate) : bankAccount(accountNumber, balance) {
		this->interestRate = interestRate;
	}

	double getInterestRate() {
		return interestRate;
	}

	void setInterestRate(double interestRate) {
		this->interestRate = interestRate;
	}

	double postInterest() {
		double interest;
		interest = this->balanceOut() * interestRate;
		return interest;
	}

	void withdraw() {
		double withdrawAmount;
		cout << "Please Input The Amount You Would Like To Withdraw: ";
		cin >> withdrawAmount;
		this->bankAccount::withdraw(withdrawAmount);
		cout << "\nYou Withdrew $" << withdrawAmount << ".  Your New Balance Is: $" << this->balanceOut() << endl;
	}
	
	void print() {
		cout << "Account Number: " << this->accountNumOut() << "\n";
		cout << "Balance: " << this->balanceOut() << "\n";
		cout << "Interest Rate: " << this->getInterestRate() << "\n";
		cout << "Interest: " << this->postInterest() << "\n";
	}
};

int bankAccount::accNum = 0;

int main()
{
	checkingAccount checking(1, 500, .3, 300, 40);
	savingsAccount savings(2, 500, .08);

	checking.deposit(200);
	checking.withdraw();
	checking.writeCheck();
	checking.print();

	savings.deposit(1000);
	savings.withdraw();
	savings.print();



}
