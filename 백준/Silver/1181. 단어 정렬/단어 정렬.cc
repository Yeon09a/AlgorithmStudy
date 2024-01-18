#include <iostream>
#include <algorithm>
using namespace std;

int n;
string words[20000];

bool cmp(string a, string b) {
	
	if (a.length() < b.length()) {
		return true;
	}
	else if (a.length() == b.length()) {
		if (a < b) {
			return true;
		}
	}

	return false;
}

int main() {
	

	cin >> n;
	cin.ignore();

	for (int k = 0; k < n; k++) {
		cin >> words[k];
	}

	sort(words, words + n, cmp);

	cout << words[0] << endl;
	for (int j = 1; j < n; j++) {
		
		if (words[j].compare(words[j - 1])) {
			cout << words[j] << endl;
		}
	}

	return 0;
}