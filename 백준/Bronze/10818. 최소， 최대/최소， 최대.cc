#include <stdio.h>

int main() {
	
	int n;

	int max = -1000001;
	int min = 1000001;

	int i;

	scanf("%d", &n);

	for (int j = 0; j < n; j++) {
		scanf("%d", &i);

		if (i > max) {
			max = i;
		}

		if (i < min) {
			min = i;
		}
	}

	printf("%d %d", min, max);

	return 0;
}