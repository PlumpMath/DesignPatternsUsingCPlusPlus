#ifndef STRATEGY_RETURN_H
#define STRATEGY_RETURN_H
#include "Strategy.h"

class StrategyReturn : public Strategy 
{
public:
	StrategyReturn(double condition, double moneyReturn);
	double acceptCash(double normalCash);
	~StrategyReturn();
private:
	double condition;
	double moneyReturn;
	
};

#endif
