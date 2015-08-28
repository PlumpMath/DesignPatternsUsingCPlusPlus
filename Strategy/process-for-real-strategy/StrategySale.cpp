#include "StrategySale.h"

StrategySale::StrategySale(double moneysale) {
	this->moneysale = moneysale;
}
double StrategySale::acceptCash(double normalCash) {
	return normalCash * moneysale;
}
StrategySale::~StrategySale() {}