#include "FactoryCreate.h"
#include "iostream"

using namespace std;

int main() {
	string condition;
	double sumOfMoney;

	cout << "输入条件：" << endl;
	cin >> condition;
	cout << "输入总金额：" << endl;
	cin >> sumOfMoney;

	FactoryCreate getInstace;
	Strategy* singleInstace = getInstace.createInstance(condition);
	cout << singleInstace->acceptCash(sumOfMoney) << endl;

	return 0;
}