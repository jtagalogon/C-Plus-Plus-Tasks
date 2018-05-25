#include "Employee.h"
#include "ProductionWorker.h"
using namespace std;

int main(){

	int shift;
	double pay;

	cout << "Enter shift: ";
	cin >> shift;
	cout <<"Enter pay (hourly): ";
	cin >> pay;

	ProductionWorker worker(10,10);
	worker.setName("Kylie Minogue");
	worker.setDate("February 2, 2018");

	try{
		worker.setNumber(1000000000);
		worker.setShift(shift);
		worker.setPay(pay);
	}
	catch(Employee::InvalidEmployeeNumber){
		cout << "Invalid Employee Number (0-9999)" << endl;
	}
	catch(ProductionWorker::InvalidShift){
		cout << "Invalid Shift" << endl;
	}
	catch(ProductionWorker::InvalidPayRate){
		cout << "Invalid PayRate (Can't be negative)" << endl;
	}

	cout << "Name: " << worker.getName() << endl;
	cout << "Number: " << worker.getNumber() << endl;
	cout << "Hired On: " << worker.getDate() << endl;
	cout << "Shift: " << worker.getShift() << endl;
	cout << "Pay: " << worker.getPay() << endl;


	return 0;
}
