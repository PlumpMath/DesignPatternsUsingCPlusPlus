#include "calculation.h"
#include "iostream"
#include "memory.h"
#include "stdio.h"
#include "stdlib.h"
#include "string"
using namespace std;

class subtraction : public calculation
{
public:
	subtraction(std::string setFirstOperation, std::string setSecondOperation);
	double getResult(double firstOperation, double secondOperation);
	~subtraction();
	
};