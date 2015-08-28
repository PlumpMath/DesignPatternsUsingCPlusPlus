#include "CashContext.h"
#include "memory.h"
#include "stdio.h"
#include "stdlib.h"


CashContext::CashContext(string type) {
	if (type == "normal") {
		stra = new StrategyNormal();
	} else if (type == "330 return 110") {
		stra = new StrategyReturn(330, 110);
	} else {
		stra = new StrategySale(0.8);
	}
}

// Strategy* CashContext::createInstance(string type) {
// 	Strategy* temp = NULL;
// 	if (type == "normal") {
// 		temp = new StrategyNormal();
// 	} else if (type == "330 return 110") {
// 		temp = new StrategyReturn(330, 110);
// 	} else {
// 		temp = new StrategySale(0.8);
// 	}
// 	return temp;
// }

double CashContext::getResult(double money) {
	return stra->acceptCash(money);
}

double CashContext::isOpValid(std::string Op) {
	double temp;
	try {
		char *a=new char[Op.size()+1];
		memcpy(a, Op.c_str(), Op.size());
		temp = atof(a);
	}
	catch(exception& e) {
		cout << e.what() << endl;
	}
	return temp;
}

CashContext::~CashContext() {}