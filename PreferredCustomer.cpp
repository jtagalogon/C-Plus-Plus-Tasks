#include <iostream>
#include "PersonData.h"
#include "CustomerData.h"
#include "PreferredCustomer.h"

int main(){

	PreferredCustomer *customer = new PreferredCustomer();

	cout << "Enter last name: " << endl;
	cin >> customer->lastName;
	cout << "Enter first name: " << endl;
	cin >> customer->firstName;
	cout << "Enter address: " << endl;
	cin >> customer->address;
	cout << "Enter city: " << endl;
	cin >> customer->city;
	cout << "Enter zip code: " << endl;
	cin >> customer->zip;
	cout << "Enter number: " << endl;
	cin >> customer->phone;
	cout << "Enter purchases: " << endl;
	cin >> customer->purchasesAmount;
	while(customer->purchasesAmount < 0){
		cout << "Enter purchases(Above 0): " << endl;
		cin >> customer->purchasesAmount;
	}
	customer->setCustomerNumber(1);
	customer->setMail(1);

	cout << "Last Name: " << customer->lastName << endl;
	cout << "First Name: " << customer->firstName<< endl;
	cout << "Address: " << customer->address << endl;
	cout << "City: " << customer->city << endl;
	cout << "Zip Code: " << customer->zip << endl;
	cout << "Number: " << customer->phone << endl;
	cout << "Customer Number: " << customer->customerNumber << endl;
	cout << "Purchases: " << customer->purchasesAmount << endl;
	cout << "Customer Number: " << customer->customerNumber << endl;

	if(customer->mail){
		cout << "On Mailing List";
	}
	else{
		cout << "Not of Mailing List";
	}

	if((customer->purchasesAmount >= 500) && (customer->purchasesAmount <= 1000)){
		customer->discountLevel = 5;
	}
	else if((customer->purchasesAmount >= 1000) && (customer->purchasesAmount <= 1000)){
		customer->discountLevel = 6;
	}
	else if((customer->purchasesAmount >= 1500) && (customer->purchasesAmount < 2000)){
		customer->discountLevel = 7;
	}
	else{
		customer->discountLevel = 10;
	}

	cout << "Discount (percent): " << customer->discountLevel << endl;

	return 0;
}
