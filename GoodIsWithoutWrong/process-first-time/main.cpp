#include "OperationFactory.h"
#include "iostream"


using namespace std;

int main() {
	std::string firstOp, secondOp, Operand;
	cout << "输入第一个数：";
	cin >> firstOp;
	cout << "输入第二个数：";
	cin >> secondOp;
	cout << "输入一个计算符号：";
	cin >> Operand;

	OperationFactory createOperate;
	calculation* calculationInstance = createOperate.getInstance(Operand, firstOp, secondOp);

	cout << calculationInstance->getResult(calculationInstance->getFirstOperation(), calculationInstance->getSecondOperation()) << endl;

	return 0;
}