#include "string"

// 这里有疑问， 为什么没有using就会报错呢？
using namespace std;

class calculation {
public:
	calculation(std::string setFirstOperation, std::string setSecondOperation);
	void addition(double firstOperation, double secondOperation);
	void subtraction(double firstOperation, double secondOperation);
	void multiplication(double firstOperation, double secondOperation);
	void division(double firstOperation, double secondOperation);
	void set(double firstOperation, double secondOperation);
	double getFirstOperation(double &target);
	double getSecondOperation(double &target);
	void setFirstOperation(double target);
	void setSecondOperation(double target);
	void whichToUse(std::string calculationOp);
	double isOpValid(std::string Op);
	double getResult();
	~calculation();
private:
	double firstOperation;
	double secondOperation;
	double result;
};