#include <iostream>

using namespace std;

int main(void) {

	int n, m;
	int sum;

	cin >> n >> m;

	int** A = new int* [n];
	for (int i = 0; i < n; i++) {
		A[i] = new int[m];
		for (int j = 0; j < i; j++) {
			cin >> new int[m];
		}
	}

	int** B = new int* [n];
	for (int i = 0; i < n; i++) {
		B[i] = new int[m];
		for (int j = 0; j < m; j++) {
			cin >> new int[m];
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			sum = A[i] + B[i];
		}
	}
	
	return 0;
}