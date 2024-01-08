#include <iostream>
#include <string>
using namespace std;

int main() {
	
	string a;
	int count = 1;
	getline(cin, a);
	
	for (int i = 0; i < a.length(); i++) {
		if (a[i] == char(' ')) {
			count++;
		}
	}

	if (a.front() == ' ') {
		count--;
	}

	if (a.back() == ' ') {
		count--;
	}

	cout << count;
}