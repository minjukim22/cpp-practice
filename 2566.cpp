#include <iostream>

using namespace std;

int main(void) {

	int max = -1;
	int arr[9][9];
	int n, m;

	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			arr[i][j] = rand() % 100;
			cout << arr[i][j] << " ";
		}
	}

	cout << endl;

	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			if (max < arr[i][j])
				max = arr[i][j];
			n = i;
			m = j;
		}
	}

	cout << max << endl;
	cout << n << " " << m;
	return 0;
}