#include <iostream>

using namespace std;

int main(void) {

	int n;

	cin >> n;

	for (int i = 1; i < n+1; i++) {
		cout << endl;
		for (int j = 0; j < i; j++) {
			cout << "*";
		}
	}

	return 0;
}