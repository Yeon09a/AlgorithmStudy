#include <iostream>
#include <string>
using namespace std;

int main() {
	
	string a;
	int count[26] = {0, };
	int max = 0;
	bool same = false;

	getline(cin, a);

	for (int i = 0; i < a.length(); i++) {
		a[i] = toupper(a[i]);
		count[a[i] - 65]++;
	}


	for (int j = 1; j < 26; j++) {
		
		if (count[max] < count[j]) {
			max = j;
			same = false;
		}
		else if(count[max] == count[j]) {
			same = true;
		}
	}
	
	if (same) {
		cout << '?';
	}
	else {
		cout << (char)(max + 65);
	}
}