#include "calculation.h"
#include "iostream"
// #include "string"

using namespace std;

int main() {
	std::string firstOp, secondOp, Operand;
	cout << "输入第一个数：";
	cin >> firstOp;
	cout << "输入第二个数：";
	cin >> secondOp;
	cout << "输入一个计算符号：";
	cin >> Operand;

	calculation calculationInstance(firstOp, secondOp);

	calculationInstance.whichToUse(Operand);

	cout << calculationInstance.getResult() << endl;

	return 0;
}