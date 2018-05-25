#include "Employee.h"

Employee::Employee() {
	name = "";
	number = 0;
	date = " ";
}

Employee::Employee(string names, int numbers, string dates){
	name = names;
	number = numbers;
	date = dates;
}

void Employee::setName(string names){
	name = names;
}

void Employee::setNumber(int numbers){
	if(numbers < 0 || numbers > 9999){
		throw InvalidEmployeeNumber();
	}
	else{
		number = numbers;
	}
}

void Employee::setDate(string dates){
	date = dates;
}

string Employee::getName(){
	return name;
}

int Employee::getNumber(){
	return number;
}

string Employee::getDate(){
	return date;
}
