#include "calculation.h"
#include "iostream"
#include "memory.h"
#include "stdio.h"
#include "stdlib.h"
#include "string"

using namespace std;

calculation::calculation(std::string setFirstOperation, std::string setSecondOperation) {
	this->result = 0.00000;
	this->firstOperation = isOpValid(setFirstOperation);
	this->secondOperation = isOpValid(setSecondOperation);
}

void calculation::set(double firstOperation, double secondOperation) {
	this->firstOperation = firstOperation;
	this->secondOperation = secondOperation;
}


double calculation::getFirstOperation(double &target) {
	target = firstOperation;
	return firstOperation;
}

double calculation::getSecondOperation(double &target) {
	target = secondOperation;
	return secondOperation;
}

double calculation::getFirstOperation() {
	return firstOperation;
}

double calculation::getSecondOperation() {
	return secondOperation;
}

void calculation::setFirstOperation(double target) {
	firstOperation = target;
}

void calculation::setSecondOperation(double target) {
	secondOperation = target;
}

double calculation::isOpValid(std::string Op) {
	double temp;
	try {
		char *a=new char[Op.size()+1];
		memcpy(a, Op.c_str(), Op.size());
		temp = atof(a);
	}
	catch(exception& e) {
		cout << e.what() << endl;
	}
	return temp;
}

double calculation::getResult(double firstOperation, double secondOperation) {
	return result;
}


calculation::~calculation() {}