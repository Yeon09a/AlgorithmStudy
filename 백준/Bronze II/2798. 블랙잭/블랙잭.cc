#include <stdio.h>

int main() {

	int n, m;
	int arr[100];
	int v = 0;

	scanf("%d %d", &n, &m);

	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}

	for (int j = 0; j < n - 2; j++) {
		for (int k = j + 1; k < n - 1; k++) {
			for (int p = k + 1; p < n; p++) {
				int num = arr[j] + arr[k] + arr[p];
				if (num <= m && v < num) {
					v = num;
				}
			}
		}
	}

	printf("%d", v);
	
	return 0;
}