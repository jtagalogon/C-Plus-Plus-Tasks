#include "Employee.h"
#ifndef PRODUCTIONWORKER_H_
#define PRODUCTIONWORKER_H_

class ProductionWorker: public Employee {

private:
	int shift;
	double pay;

public:
	ProductionWorker();
	ProductionWorker(int shifts, double pays);

	void setShift(int);
	void setPay(double);
	int getShift();
	double getPay();

	class InvalidShift{};
	class InvalidPayRate{};
};

#endif /* PRODUCTIONWORKER_H_ */
