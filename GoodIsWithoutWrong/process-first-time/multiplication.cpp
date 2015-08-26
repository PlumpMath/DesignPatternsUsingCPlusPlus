#include "multiplication.h"

multiplication::multiplication(std::string setFirstOperation, std::string setSecondOperation) : calculation(setFirstOperation, setSecondOperation) {}

double multiplication::getResult(double firstOperation, double secondOperation) {
	this->result = firstOperation * secondOperation;
	return result;
}

multiplication::~multiplication() {}
