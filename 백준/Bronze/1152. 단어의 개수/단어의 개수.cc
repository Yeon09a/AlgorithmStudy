#include <iostream>
#include <string>
using namespace std;

int main() {
	
	string a;
	int count = 1;
	getline(cin, a);
	
	for (int i = 0; i < a.length() - 1; i++) {
		if (a[i] == char(' ')) {
			count++;
		}
	}

	if (a.front() == ' ') {
		count--;
	}

	cout << count;
}