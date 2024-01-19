#include <iostream>
#include <string>
using namespace std;

int main() {
	
	int n;
	int v = 665;

	cin >> n;

	while (true)
	{
		v++;
		if (to_string(v).find("666") != string::npos) {
			n--;

			if (n == 0) {
				break;
			}
		}
	}

	cout << v;

	return 0;
}