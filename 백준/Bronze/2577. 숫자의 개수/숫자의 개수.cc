#include <iostream>
#include <string>
using namespace std;

int main() {
	
	int arr[10] = {0, };
	int a, b, c;
	string result;

	cin >> a;
	cin >> b;
	cin >> c;

	result = to_string(a * b * c);

	for (long i = 0; i < result.length(); i++) {
		arr[(int)result[i] - 48]++;
	}

	for (int j = 0; j < 10; j++) {
		cout << arr[j] << endl;
	}
}