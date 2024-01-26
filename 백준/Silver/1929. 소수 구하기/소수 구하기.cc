#include <stdio.h>
#include <algorithm>

int main() {

	int m, n;
	bool arr[1000001] = {true, true, false, };

	scanf("%d %d", &m, &n);

	for (int j = 2; j * j <= n; j++) {
		if (arr[j]) {
			continue;
		}
		
		for (int k = j * j; k <= n; k += j) {
			arr[k] = true;
		}
	}

	for (int p = m; p <= n; p++) {
		if (!arr[p]) {
			printf("%d\n", p);
		}
	}

	return 0;
}