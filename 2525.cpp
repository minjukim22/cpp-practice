#include <iostream>

using namespace std;

int main() {

	int h, m, v;
	
	cin >> h >> m;
	cin >> v;

	if (m + v < 60) {
		cout << h << " " << m + v;
	}
	else if (m + v >= 60) {
		if (h == 23) {
			cout << (m + v) / 60 << " " << (m + v) % 60;
		}
		else if (h >= 0) {
			cout << h + ((m + v) / 60) << " " << (m + v) % 60;
		}
	}



	return 0;
}
