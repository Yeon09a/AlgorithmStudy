#include <iostream>
#include <string>
using namespace std;

int main() {
	
	int c;

	string a[100];
	int s[100];
	int add = 0;

	cin >> c;
	cin.ignore();

	for (int i = 0; i < c; i++) {
		getline(cin, a[i]);
		
		for (int k = 0; k < a[i].length(); k++) {
			if (a[i][k] == 'O') {
				s[i] += add + 1;
				add++;
			}
			else {
				add = 0;
			}
		}
		add = 0;

		cout << s[i] << endl;
	}

	return 0;
}