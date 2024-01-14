#include <stdio.h>

int main() {
	
	int n, x, m;

	scanf("%d %d", &n, &x);

	for (int i = 0; i < n; i++) {
		scanf("%d", &m);
		if (m < x) {
			printf("%d ", m);
		}
	}

	return 0;
}