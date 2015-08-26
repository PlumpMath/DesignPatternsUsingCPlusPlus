
#include "calculation.h"
#include "iostream"
#include "memory.h"
#include "stdio.h"
#include "stdlib.h"
#include "string"
using namespace std;

class division : public calculation
{
public:
	division(std::string setFirstOperation, std::string setSecondOperation);
	double getResult(double firstOperation, double secondOperation);
	~division();
	
};