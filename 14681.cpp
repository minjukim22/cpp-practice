#include <iostream>

using namespace std;

int main() {

	int x, y;

	cin >> x;
	cin >> y;

	if (x > 0 && x <= 1000 || y > 0 && y <= 1000) {
		cout << "1";
	}
	else if (x < 0 && x >= -1000 || y>0 && y <= 1000) {
		cout << "2";
	}
	else if (x < 0 && x >= -1000 || y < 0 && y >= -1000) {
		cout << "3";
	}
	else if (x > 0 && x <= 1000 || y < 0 && y >= -1000) {
		cout << "4";
	}



	return 0;
}