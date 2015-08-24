#include "calculation.h"
#include "iostream"
#include "memory.h"
#include "stdio.h"
#include "string"

using namespace std;

calculation::calculation(std::string setFirstOperation, std::string setSecondOperation) {

	this.firstOperation = isOpValid(setFirstOperation);
	this.secondOperation = isOpValid(setSecondOperation);
}

void calculation::addition(double firstOperation, double secondOperation) {
		this.result = firstOperation + secondOperation;
}

void calculation::subtraction(double firstOperation, double secondOperation) {
	this.result = firstOperation - secondOperation;
}

void calculation::multiplication(double firstOperation, double secondOperation) {
	this.result = firstOperation * secondOperation;
}

void calculation::division(double firstOperation, double secondOperation) {
	try {
		if (secondOperation == 0) {
			throw "除数不能为0！！";
		} else {
			this.result = firstOperation / secondOperation;
		}
	}
	catch(std::string e) {
		cout << e << endl;
	}
}

void calculation::set(double firstOperation, double secondOperation) {
	this.firstOperation = firstOperation;
	this.secondOperation = secondOperation;
}


double calculation::getFirstOperation(double &target) {
	target = firstOperation;
	return firstOperation;
}

double calculation::getSecondOperation(double &target) {
	target = secondOperation;
	return secondOperation;
}

void calculation::setFirstOperation(double target) {
	firstOperation = target;
}

void calculation::setSecondOperation(double target) {
	secondOperation = target;
}

void calculation::whichToUse(std::string calculationOp) {
	try {
		switch(calculationOp) {
			case "+":
				addition(firstOperation, secondOperation);
				break;
			case "-":
				subtraction(firstOperation, secondOperation);
				break;
			case "/":
				division(firstOperation, secondOperation);
				break;
			case "*":
				multiplication(firstOperation, secondOperation);
				break;
			default: 
				throw "符号不正确！！";
		}
	}
	catch(std::string e) {
		cout << e << endl;
	}
}

double calculation::isOpValid(std::string Op) {
	double temp;
	try {
		char *a=new char[Op.size()+1];
		memcpy(a, OP.c_str(), s.size());
		temp = atof(a);
	}
	catch(exception& e) {
		cout << e.what() << endl;
	}
	return temp;
}

double getResult() {
	return this.result;
}


calculation::~calculation() {}