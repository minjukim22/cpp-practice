#include <iostream>

using namespace std;

int main() {

	int n;
	int sum = 0;
	char c;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> c;
		sum = sum + int(c);
	}


	return 0;
}
