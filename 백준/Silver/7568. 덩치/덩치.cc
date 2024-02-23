#include <stdio.h>
#include <utility>

using namespace std;

int main() {

	int n;
	pair<int[2], int> p[50];

	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%d %d", &p[i].first[0], &p[i].first[1]);
		p[i].second = 1;
	}

	for (int k = 0; k < n - 1; k++) {
		for (int m = k + 1; m < n; m++) {
			if (p[k].first[0] > p[m].first[0] && p[k].first[1] > p[m].first[1]) {
				p[m].second++;
			}
			else if (p[k].first[0] < p[m].first[0] && p[k].first[1] < p[m].first[1]) {
				p[k].second++;
			}
		}
	}

	for (int j = 0; j < n; j++) {
		printf("%d ", p[j].second);
	}

	return 0;
}