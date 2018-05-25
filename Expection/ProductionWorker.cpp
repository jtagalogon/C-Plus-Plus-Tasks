#include "ProductionWorker.h"

ProductionWorker::ProductionWorker() {
	shift = 0;
	pay = 0;
}

ProductionWorker::ProductionWorker(int shifts, double pays){
	shift = shifts;
	pay = pays;
}

void ProductionWorker::setShift(int shifts){
	if(shifts > 2 || shifts < 0){
		throw InvalidShift();
	}
	else{
		shift = shifts;
	}
}

void ProductionWorker::setPay(double pays){
	if(pays < 0){
		throw InvalidPayRate();
	}
	else{
		pay = pays;
	}
}

int ProductionWorker::getShift(){
	return shift;
}

double ProductionWorker::getPay(){
	return pay;
}
