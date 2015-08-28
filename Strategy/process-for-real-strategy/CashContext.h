#ifndef CASH_CONTEXT_H
#define CASH_CONTEXT_H
#include "StrategyNormal.h"
#include "StrategyReturn.h"
#include "StrategySale.h"
#include "string"
#include "iostream"

using namespace std;

class CashContext
{
public:
	CashContext(string type);
	// Strategy* createInstance(string type);
	double getResult(double money);
	double isOpValid(std::string Op);
	~CashContext();
private:
	Strategy* stra;
};

#endif
