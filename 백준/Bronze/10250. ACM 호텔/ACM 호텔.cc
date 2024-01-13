#include <stdio.h>

int main() {
	
	int c;
	int h, w, n;
	int r;

	scanf("%d", &c);

	for (int i = 0; i < c; i++) {
		scanf("%d %d %d", &h, &w, &n);

		r = (n % h == 0 ? n / h : (n / h) + 1) + ((n % h == 0 ? h : n % h) * 100);
		printf("%d\n", r);
	}

	return 0;
}