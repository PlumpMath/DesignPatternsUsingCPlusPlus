#include "StrategyReturn.h"

StrategyReturn::StrategyReturn(double condition, double moneyReturn) {
	this->condition = condition;
	this->moneyReturn = moneyReturn;
}

double StrategyReturn::acceptCash(double normalCash) {
	if (normalCash < condition) {
		return normalCash;
	} else {
		return normalCash - moneyReturn;
	}
}

StrategyReturn::~StrategyReturn() {}