#ifndef STRATEGY_NORMAL_H
#define STRATEGY_NORMAL_H
#include "Strategy.h"

class StrategyNormal : public Strategy
{
public:
	StrategyNormal();
	double acceptCash(double normalCash);
	~StrategyNormal();

private:
	double normalCash;
};

#endif
