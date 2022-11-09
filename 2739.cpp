#include <iostream>

using namespace std;

int main(void) {

	int years;

	cin >> years;

	if (years % 4 == 0 && years % 100 != 0 || years % 400 == 0)
		cout << "1";
	else
		cout << "0";

	return 0;
}