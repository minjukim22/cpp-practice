#include <iostream>

using namespace std;

int main(void) {

	int n, x;
	int arr[10000];

	cin >> n >> x;

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	for (int i = 0; i < n; i++) {
		if (x > arr[i])
			cout << arr[i];
	}

	return 0;
}