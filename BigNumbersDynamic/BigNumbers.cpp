/*
 * BigNumbers.cpp
 *
 *  Created on: May 31, 2018
 *      Author: Justin
 */

#include "BigNumbers.h"
#include <string>
#include <sstream>
using namespace std;

BigNumbers::BigNumbers(){
	vector<int> bigNumber;
}
BigNumbers BigNumbers::operator +(BigNumbers a){
	BigNumbers temp;
	vector<int> b = this->bigNumber;
	long number;
	number = convert(b) + convert(a.bigNumber);
	update(temp.bigNumber, number);
	return temp;
}

BigNumbers BigNumbers::operator -(BigNumbers a){
	BigNumbers temp;
	vector<int> b = this->bigNumber;
	long number;
	number = convert(b) - convert(a.bigNumber);
	update(temp.bigNumber, number);
	return temp;
}

BigNumbers BigNumbers::operator /(BigNumbers a){
	BigNumbers temp;
	vector<int> b = this->bigNumber;
	long number;
	number = convert(b) / convert(a.bigNumber);
	update(temp.bigNumber, number);
	return temp;
}

BigNumbers BigNumbers::operator *(BigNumbers a){
	BigNumbers temp;
	vector<int> b = this->bigNumber;
	vector<int> c = a.bigNumber;
	long number;
	number = convert(b) * convert(a.bigNumber);
	update(temp.bigNumber, number);
	return temp;
}

int BigNumbers::convert(vector<int> & c){
	string temp = "";
	for(int i = 0; i < c.size(); i++){
		string d = to_string(c[i]);
		temp.append(d);
	}
	stringstream number(temp);
	int b = 0;
	number >> b;
	return b;
}

BigNumbers BigNumbers::operator %(BigNumbers a){
	BigNumbers temp;
	vector<int> b = this->bigNumber;
	long number;
	number = convert(b) % convert(a.bigNumber);
	update(temp.bigNumber, number);
	return temp;
}

void BigNumbers::update(vector<int> &a, long b){
	string temp = to_string(b);
	if(temp.length() > 10000){
		throw InvalidNumberSize();
	}
	for(int i = 0; i < temp.length(); i++){
		a.push_back((int)(temp[i] - '0'));
	}
}

void BigNumbers::setValue(long c){
	update(this->bigNumber, c);
}



