#ifndef EMPLOYEE_H_
#define EMPLOYEE_H_
using namespace std;
#include <iostream>
#include <string>

class Employee {

private:
	string name;
	int number;
	string date;

public:
	Employee();
	Employee(string name, int number, string date);
	void setName(string);
	void setNumber(int);
	void setDate(string);
	string getName();
	int getNumber();
	string getDate();

	class InvalidEmployeeNumber{};
};

#endif /* EMPLOYEE_H_ */
