#include "string"

// 这里有疑问， 为什么没有using就会报错呢？
using namespace std;

class calculation {
public:
	calculation(std::string setFirstOperation, std::string setSecondOperation);
	double addition(double firstOperation, double secondOperation);
	double subtraction(double firstOperation, double secondOperation);
	double multiplication(double firstOperation, double secondOperation);
	double division(double firstOperation, double secondOperation);
	void set(double firstOperation, double secondOperation);
	void getFirstOperation(double &target);
	void getSecondOperation(double &target);
	void setFirstOperation(double &target);
	void setSecondOperation(double &target);
	void whichToUse(std::string calculationOp);
	double isOpValid(std::string Op);
	double getResult();
	~calculation();
private:
	double firstOperation;
	double secondOperation;
	double result;
};