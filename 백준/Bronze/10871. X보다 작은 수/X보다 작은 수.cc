#include <stdio.h>
#include <vector>
using namespace std;

int main() {
	
	int n, x, m;
	vector<int> result = {};

	scanf("%d %d", &n, &x);

	for (int i = 0; i < n; i++) {
		scanf("%d", &m);
		if (m < x) {
			result.push_back(m);
		}
	}

	for (int j = 0; j < result.size(); j++) {
		printf("%d ", result.at(j));
	}

	return 0;
}