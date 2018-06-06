/*
 * Main.cpp
 *
 *  Created on: May 31, 2018
 *      Author: Justin
 */
#include "BigNumbers.h"
#include <iostream>
using namespace std;

int main() {

	BigNumbers number1;
	BigNumbers number2;
	BigNumbers number3;

	BigNumbers::update(number1.bigNumber, 200);
	BigNumbers::update(number2.bigNumber, 10);

	try{
		number3 = number1 * number2;
	}
	catch(BigNumbers::InvalidNumberSize){
		cout << "Number exceeds 10,000 digits." << endl;
	}

	cout << "number1 * number2 = " << BigNumbers::convert(number3.bigNumber);


	return 0;

}
