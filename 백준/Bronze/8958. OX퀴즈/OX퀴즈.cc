#include <iostream>
#include <string>
using namespace std;

int main() {
	
	int c;

	string a;
	int s = 0;
	int add = 0;

	cin >> c;
	cin.ignore();

	for (int i = 0; i < c; i++) {
		getline(cin, a);
		
		for (int k = 0; k < a.length(); k++) {
			if (a[k] == 'O') {
				s += add + 1;
				add++;
			}
			else {
				add = 0;
			}
		}

		cout << s << endl;

		s = 0;
		add = 0;
	}

	return 0;
}