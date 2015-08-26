#include "subtraction.h"

subtraction::subtraction(std::string setFirstOperation, std::string setSecondOperation) : calculation(setFirstOperation, setSecondOperation) {}


double subtraction::getResult(double firstOperation, double secondOperation) {
	this->result = firstOperation - secondOperation;
	return result;
}

subtraction::~subtraction() {}
