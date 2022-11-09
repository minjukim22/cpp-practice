#include <iostream>

using namespace std;

int main(void) {

	int n, m;
	int count = 0;
	int arr[100];

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	cin >> m;

	for (int i = 0; i < n; i++) {
		if (m == arr[i])
			count = count + 1;
	}

	cout << count;

	return 0;
}