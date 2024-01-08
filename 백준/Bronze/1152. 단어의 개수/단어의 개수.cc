#include <iostream>
#include <string>
using namespace std;

int main() {
	
	string a;
	long count = 0;
	getline(cin, a);
	
	if (a.empty() || !a.compare(" ")) {
		cout << count;
	}
	else {
		if (a.front() == char(' ')) {
			a.erase(0, 1);
		}

		if (a.back() == char(' ')) {
			a.pop_back();
		}

		for (long i = 0; i < a.length(); i++) {
			if (a[i] == char(' ')) {
				count++;
			}
		}

		cout << count + 1;
	}
}