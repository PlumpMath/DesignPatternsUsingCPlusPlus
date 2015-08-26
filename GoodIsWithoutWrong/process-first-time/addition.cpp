#include "addition.h"


addition::addition(std::string setFirstOperation, std::string setSecondOperation) : calculation(setFirstOperation, setSecondOperation) {}

double addition::getResult(double firstOperation, double secondOperation) {
	this->result = firstOperation * secondOperation;
	return result;
}

addition::~addition(){}