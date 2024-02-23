#include <stdio.h>
#include <utility>

using namespace std;

int main() {

	int n;
	pair<int, int> p[50];

	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%d %d", &p[i].first, &p[i].second);
	}

	for (int k = 0; k < n ; k++) {

		int count = 1;

		for (int m = 0; m < n; m++) {
			if (p[k].first < p[m].first && p[k].second < p[m].second) {
				count++;
			}
		}

		printf("%d ",count);
	}

	return 0;
}
