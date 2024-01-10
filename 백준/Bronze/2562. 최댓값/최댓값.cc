#include <iostream>
using namespace std;

int main() {
	
	int arr[9];
	int maxIndex = 0;

	for (int i = 0; i < 9; i++) {
		cin >> arr[i];
		if (arr[maxIndex] <= arr[i]) {
			maxIndex = i;
		}
	}

	cout << arr[maxIndex] << endl;
	cout << maxIndex + 1;
}