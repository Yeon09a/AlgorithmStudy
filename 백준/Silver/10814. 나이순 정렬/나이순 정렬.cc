#include <stdio.h>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

bool cmp(const pair<int, string>& a, const pair<int, string> b) {
	return a.first < b.first;
}

int main() {

	int n;
	vector<pair<int, string>> p;

	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		char c[101];
		int a;
		scanf("%d %s", &a, c);
		p.push_back(make_pair(a, c));
	}

	stable_sort(p.begin(), p.end(), cmp);

	for (int j = 0; j < n; j++) {
		printf("%d %s\n", p[j].first, p[j].second.c_str());
	}

	return 0;
}