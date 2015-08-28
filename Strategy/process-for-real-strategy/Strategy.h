#ifndef STRATEGY_H
#define STRATEGY_H
#include "string"
#include "iostream"
// abstract class here

using namespace std;

class Strategy
{
public:
	Strategy();
	virtual double acceptCash(double normalCash)=0;
	~Strategy();
};

#endif

