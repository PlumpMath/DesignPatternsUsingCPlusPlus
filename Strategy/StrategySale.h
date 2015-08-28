#ifndef STRATEGY_SALE_H
#define STRATEGY_SALE_H
#include "Strategy.h"

class StrategySale : public Strategy
{
public:
	StrategySale(double moneysale);
	double acceptCash(double normalCash);
	~StrategySale();
private:
	double moneysale;
	
};

#endif
