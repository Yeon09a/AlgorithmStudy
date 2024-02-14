#include <stdio.h>

int getPeople(int k, int n) {
	int count = 0;
	
	if (k == 0) {
		for (int i = 1; i <= n; i++) {
			count += i;
		}
	}
	else {
		for (int i = 1; i <= n; i++) {
			count += getPeople(k - 1, i);
		}
	}

	return count;
}

int main() {

	int k, n, t;

	scanf("%d", &t);

	for (int i = 0; i < t; i++) {
		scanf("%d", &k);
		scanf("%d", &n);

		printf("%d\n", getPeople(k - 1, n));
	}
	
	return 0;
}