#include "CashContext.h"
#include "iostream"

using namespace std;

int main() {
	string condition;
	double sumOfMoney;

	cout << "输入条件：";
	cin >> condition;
	cout << "输入总金额：";
	cin >> sumOfMoney;

	CashContext* getInstace = new CashContext(condition);
	cout << getInstace->getResult(sumOfMoney) << endl;

	return 0;
}