#include <iostream>
#include <string>
using namespace std;

int main() {
	
	int n;
	string a;
	int sum = 0;

	cin >> n;
	cin.ignore();
	getline(cin, a);

	for (int i = 0; i < n; i++) {
		sum += ((int)a[i] - 48);
	}

	cout << sum;
}