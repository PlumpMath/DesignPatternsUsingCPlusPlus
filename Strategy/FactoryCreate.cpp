#include "FactoryCreate.h"
#include "memory.h"
#include "stdio.h"
#include "stdlib.h"

FactoryCreate::FactoryCreate() {}

Strategy* FactoryCreate::createInstance(string type) {
	Strategy* temp = NULL;
	if (type == "normal") {
		temp = new StrategyNormal();
	} else if (type == "330 return 110") {
		temp = new StrategyReturn(330, 110);
	} else {
		temp = new StrategySale(0.8);
	}
	return temp;
}

double FactoryCreate::isOpValid(std::string Op) {
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

FactoryCreate::~FactoryCreate() {}