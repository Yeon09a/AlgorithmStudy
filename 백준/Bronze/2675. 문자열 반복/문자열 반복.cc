#include <iostream>
#include <string>
using namespace std;

int main() {
	
	int t;
	int r[1000];
	string s[1000];
	
	cin >> t;

	for (int i = 0; i < t; i++) {
		cin >> r[i] >> s[i];

		for (int k = 0; k < s[i].length(); k++) {
			for (int m = 0; m < r[i]; m++) {
				cout << s[i][k];
			}
		}
		cout << endl;
	}

	return 0;
}