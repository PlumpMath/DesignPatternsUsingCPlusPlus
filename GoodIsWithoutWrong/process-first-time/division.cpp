#include "division.h"

division::division(std::string setFirstOperation, std::string setSecondOperation) : calculation(setFirstOperation, setSecondOperation) {}

double division::getResult(double firstOperation, double secondOperation) {
	try {
		if (secondOperation == 0) {
			throw "除数不能为0！！";
		} else {
			result = firstOperation / secondOperation;
		}
	}
	catch(std::string e) {
		cout << e << endl;
	}
	return result;
}

division::~division() {}
