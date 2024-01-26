#include <stdio.h>
#include <algorithm>

int main() {

	int m, n;
	int arr[1000001];

	scanf("%d %d", &m, &n);

	for (int i = 2; i <= n; i++) {
		arr[i] = i;
	}

	for (int j = 2; j * j <= n; j++) {
		if (arr[j] == 0) {
			continue;
		}
		
		for (int k = j * j; k <= n; k += j) {
			arr[k] = 0;
		}
	}

	for (int p = m; p <= n; p++) {
		if (arr[p] != 0) {
			printf("%d\n", arr[p]);
		}
	}

	return 0;
}