#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string str;

	while (true) {
		stack<char> s;
		bool b = true;

		getline(cin, str);

		if (!str.compare(".")) {
			return 0;
		}

		int len = str.length();

		for (int i = 0; i < len; i++) {
			if (str[i] == '(' || str[i] == '[') {
				s.push(str[i]);
			}
			else if (str[i] == ')') {
				if (s.empty() || s.top() != '(') {
					b = false;
					break;
				}
				else if (s.top() == '(') {
					s.pop();
				}
			}
			else if (str[i] == ']') {
				if (s.empty() || s.top() != '[') {
					b = false;
					break;
				}
				else if (s.top() == '[') {
					s.pop();
				}
			 }
		}

		if (b && s.empty()) {
			cout << "yes\n";
		}
		else {
			cout << "no\n";
		}
	}

	return 0;
}