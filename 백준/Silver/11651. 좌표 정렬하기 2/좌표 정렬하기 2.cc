#include <stdio.h>
#include <algorithm>

using namespace std;

pair<int, int> p[100000];

bool cmp(const pair<int, int>& a, const pair<int, int>& b) {
	if (a.second == b.second) {
		return a.first < b.first;
	}
	else {
		return a.second < b.second;
	}
}

int main() {
	int n;
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		int x, y;
		scanf("%d %d", &x, &y);
		p[i] = make_pair(x, y);
	}

	sort(p, p + n, cmp);

	for (int j = 0; j < n;  j++) {
		printf("%d %d\n", p[j].first, p[j].second);
	}
}