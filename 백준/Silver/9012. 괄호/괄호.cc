#include <stdio.h>
#include <string.h>
#include <vector>

using namespace std;

int main() {

	int t;
	bool isVPS = true;
	
	char ps[51];
	vector<char> s;

	scanf("%d", &t);

	while (t > 0) {
		s.clear();
		isVPS = true;
		scanf("%s", ps);
		t--;
		int len = strlen(ps);
		if (len % 2 == 1 || ps[len - 1] == '(' || ps[0] == ')') {
			printf("NO\n");
			continue;
		}

		for (int i = 0; i < len; i++) {
			if (ps[i] == '(') {
				s.push_back(ps[i]);
			}
			else {
				if (s.empty()) {
					isVPS = false;
					break;
				}
				s.pop_back();
			}
		}

		if (!s.empty() || !isVPS) {
			printf("NO\n");
		}
		else {
			printf("YES\n");
		}
	}

	return 0;
}