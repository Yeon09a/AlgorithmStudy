#include <iostream>
#include <string>
using namespace std;

int main() {
	
	string s;
	int a[26];

	getline(cin, s);
	
	for (int i = 0; i < 26; i++) {
		if (s.find((char)(97 + i)) != string::npos) {
			a[i] = s.find((char)(97 + i));
		}
		else {
			a[i] = -1;
		}

		cout << a[i] << " ";
	}

	return 0;
}