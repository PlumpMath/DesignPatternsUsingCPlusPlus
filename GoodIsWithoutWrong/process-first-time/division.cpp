#include "division.h"

division::division(std::string setFirstOperation, std::string setSecondOperation) : calculation(setFirstOperation, setSecondOperation) {}

double division::getResult(double firstOperation, double secondOperation) {
	try {
		if (secondOperation == 0) {
			string errorTip =  "除数不能为0！！";
			throw errorTip;
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
