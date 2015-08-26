#ifndef CALCULATION_H
#define CALCULATION_H
#include "string"

// 这里有疑问， 为什么没有using就会报错呢？
using namespace std;

class calculation {
public:
	calculation(std::string setFirstOperation, std::string setSecondOperation);
	void set(double firstOperation, double secondOperation);
	double getFirstOperation(double &target);
	double getSecondOperation(double &target);
	double getFirstOperation();
	double getSecondOperation();
	void setFirstOperation(double target);
	void setSecondOperation(double target);
	double isOpValid(std::string Op);
	virtual double getResult(double firstOperation, double secondOperation);
	~calculation();
private:
	double firstOperation;
	double secondOperation;
// 为了给子类访问
protected:
	double result;
};
#endif
