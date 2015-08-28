#ifndef FACTORY_CREATE_H
#define FACTORY_CREATE_H
#include "StrategyNormal.h"
#include "StrategyReturn.h"
#include "StrategySale.h"
#include "string"
#include "iostream"

using namespace std;

class FactoryCreate
{
public:
	FactoryCreate();
	static Strategy* createInstance(string type);
	double isOpValid(std::string Op);
	~FactoryCreate();
	
};

#endif
