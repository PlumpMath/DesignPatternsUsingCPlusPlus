
#include "string"
#include "division.h"
#include "addition.h"
#include "multiplication.h"
#include "subtraction.h"
#include "iostream"

using namespace std;

class OperationFactory
{
public:
	OperationFactory();
	static calculation* getInstance(std::string calculationOp, std::string setFirstOperation, std::string setSecondOperation);
	~OperationFactory();
	
};