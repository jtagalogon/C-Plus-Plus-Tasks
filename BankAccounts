#include "Account.h"
#include "CheckingAccount.h"
#include "SavingsAccount.h"
#include <iostream>
using namespace std;

int main(){

	int deps;
	int withs;

	CheckingAccount *checkingAccount = new CheckingAccount(50,10);
	SavingsAccount *savingsAccount = new SavingsAccount(20, 0);

	cout << "Enter number of deposits: " << endl;
	cin >> deps;
	cout << "Enter number of withdrawals: " << endl;
	cin >> withs;

	checkingAccount->deposits = deps;
	savingsAccount->deposits = deps;
	checkingAccount->totalDeposits += deps;
	savingsAccount->totalDeposits += deps;

	checkingAccount->withdrawals = withs;
	savingsAccount->withdrawals = withs;
	checkingAccount->totalWithdrawals += withs;
	savingsAccount->totalWithdrawals += withs;

	double beggining1 = checkingAccount->balance;
	double beggining2 = savingsAccount->balance;

	checkingAccount->deposit(100);
	checkingAccount->withdraw(160);
	checkingAccount->monthlyProc();

	savingsAccount->withdraw(10);
	savingsAccount->deposit(100);
	savingsAccount->withdraw(10);
	savingsAccount->monthlyProc();

	cout << "-----Checking Account-----" << endl;
	cout << "Beginning Balance: $" << beggining1 << endl;
	cout << "Total Deposits Made: " << checkingAccount->totalDeposits << endl;
	cout << "Total Withdrawals Made: " << checkingAccount->totalWithdrawals << endl;
	cout << "Service Charges: $" << checkingAccount->service << endl;
	cout << "Ending Balance: $" << checkingAccount->balance << endl;
	cout << endl;

	cout << "-----Savings Account------" << endl;
	cout << "Beginning Balance: $" << beggining2 << endl;
	cout << "Total Deposits Made: " << savingsAccount->totalDeposits << endl;
	cout << "Total Withdrawals Made: " << savingsAccount->totalWithdrawals << endl;
	cout << "Service Charges: $" << savingsAccount->service << endl;
	cout << "Ending Balance: $" << savingsAccount->balance << endl;
	cout << endl;

	return 0;
}

#ifndef ACCOUNT_H_
#define ACCOUNT_H_

class Account { // @suppress("Class has a virtual method and non-virtual destructor")
public:

	double balance;
	int deposits;
	int withdrawals;
	double interest;
	double monthly;
	int totalDeposits;
	int totalWithdrawals;

	Account();
	Account(double balance, double interest);
	virtual void deposit(double amt);
	virtual void withdraw(double amt);
	virtual void calcInt();
	virtual void monthlyProc();
};

#endif /* ACCOUNT_H_ */

#include "Account.h"

Account::Account(){
	balance = 0;
	interest = 0;
	deposits = 0;
	withdrawals = 0;
	monthly = 0;
	totalDeposits = 0;
}

Account::Account(double bal, double intr) {
	balance = bal;
	interest = intr;
	deposits = 0;
	withdrawals = 0;
	monthly = 0;
	totalDeposits = 0;
	totalWithdrawals = 0;
}

void Account::deposit(double amt){
	balance = balance + amt;
	deposits++;
	totalDeposits++;
}

void Account::withdraw(double amt){
	balance = balance - amt;
	withdrawals++;
}

void Account::calcInt(){
	double monthlyRate = interest / 12;
	double monthlyInterest = balance * monthlyRate;
	balance = balance + monthlyInterest;
}

void Account::monthlyProc(){
	balance = balance - monthly;
	this->calcInt();
	withdrawals = 0;
	deposits = 0;
	monthly = 0;
}

#ifndef CHECKINGACCOUNT_H_
#define CHECKINGACCOUNT_H_
#include "Account.h"

class CheckingAccount: public Account { // @suppress("Class has a virtual method and non-virtual destructor")
public:
	CheckingAccount(double bal, double intr);
	void withdraw(double amt);
	void monthlyProc();
	double service;
};

#endif /* CHECKINGACCOUNT_H_ */

#include "CheckingAccount.h"
#include <iostream>
using namespace std;

CheckingAccount::CheckingAccount(double bal, double intr){
	balance = bal;
	interest = intr;
	deposits = 0;
	withdrawals = 0;
	monthly = 0;
	service = 0;
	totalDeposits = 0;
	totalWithdrawals = 0;
}

void CheckingAccount::withdraw(double amt){
	if((balance - amt) < 0){
		balance = balance - 15;
		service = service + 15;
	}
	else{
		totalWithdrawals++;
		Account::withdraw(amt);
	}
}

void CheckingAccount::monthlyProc(){
	Account::monthly = Account::monthly + (5 + 0.10 * withdrawals);
	service = service + monthly;
	Account::monthlyProc
}

#ifndef SAVINGSACCOUNT_H_
#define SAVINGSACCOUNT_H_
#include "Account.h"

class SavingsAccount: public Account { // @suppress("Class has a virtual method and non-virtual destructor")

public:
	bool status;
	SavingsAccount(double bal, double intr);
	void withdraw(double amt);
	void deposit(double amt);
	void monthlyProc();
	double service;

};

#endif /* SAVINGSACCOUNT_H_ */

#include "SavingsAccount.h"
#include <iostream>
using namespace std;

SavingsAccount::SavingsAccount(double bal, double intr) {
	balance = bal;
	interest = intr;
	deposits = 0;
	withdrawals = 0;
	monthly = 0;
	if(balance < 25){
		status = false;
	}
	else{
		status = true;
	}
	service = 0;
	totalDeposits = 0;
	totalWithdrawals = 0;
}

void SavingsAccount::withdraw(double amt){
	if(status){
		totalWithdrawals++;
		Account::withdraw(amt);
	}
	else{
		cout << endl << "Attempted to Withdraw Inactive Account." << endl << endl;
	}
}

void SavingsAccount::deposit(double amt){
	if(status){
		Account::deposit(amt);
	}else if((balance + amt) > 25){
		Account::deposit(amt);
		status = true;
		}
}

void SavingsAccount::monthlyProc(){
	if(withdrawals > 4){
		Account::monthly = Account::monthly + (withdrawals - 4);
		service = service + monthly;
	}
	Account::monthlyProc();
	if(balance < 25){
		status = false;
	}
}
