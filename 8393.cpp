#include <iostream>

using namespace std;

int main(void) {

	int num;
	int sum = 0;

	cin >> num;

	for (int i = 1; i < num+1; i++) {
		sum = sum + i;
	}

	cout << sum;

	return 0;
}