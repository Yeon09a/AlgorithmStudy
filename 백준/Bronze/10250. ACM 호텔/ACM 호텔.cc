#include <stdio.h>

int main() {
	
	int c;
	int h, w, n;
	int r[1000];

	scanf("%d", &c);

	for (int i = 0; i < c; i++) {
		scanf("%d %d %d", &h, &w, &n);

		r[i] = (n % h == 0 ? n / h : (n / h) + 1) + ((n % h == 0 ? h : n % h) * 100);
	}

	for (int i = 0; i < c; i++ ) {
		printf("%d\n", r[i]);
	}

	return 0;
}