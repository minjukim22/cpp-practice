#include <iostream>

using namespace std;

int main(void) {

	int n;
	int max=-1000000, min=1000000;
	int arr[100];

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	for (int i = 0; i < n; i++) {
		if (max < arr[i])
			max = arr[i];
		else if (min > arr[i])
			min = arr[i];
	}
	cout << min << " " << max;

	return 0;
}