#include "OperationFactory.h"

OperationFactory::OperationFactory() {}

calculation* OperationFactory::getInstance(std::string calculationOp, std::string setFirstOperation, std::string setSecondOperation) {
	calculation *singleInstance = NULL;
	try {
		if (calculationOp.size() >= 2) {
			string errorTip = "计算符号不正确！！";
			throw errorTip;
		}
		switch(calculationOp[0]) {
			case '+':
				singleInstance = new addition(setFirstOperation, setSecondOperation);
				break;
			case '-':
				singleInstance = new subtraction(setFirstOperation, setSecondOperation);
				break;
			case '/':
				singleInstance = new division(setFirstOperation, setSecondOperation);
				break;
			case '*':
				singleInstance = new multiplication(setFirstOperation, setSecondOperation);
				break;
			default: 
				string errorTip = "计算符号不正确！！";
				throw errorTip;
		}
	}
	catch(std::string e) {
		cout << e << endl;
	}
	return singleInstance;
}
OperationFactory::~OperationFactory() {}