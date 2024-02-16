#include <stdio.h>

int main() {

	int n;
	
	scanf("%d", &n);

	for (int five = n / 5; five >= 0; five--) {
		int r = n - five * 5;

		if (r % 3 == 0) {
			printf("%d", five + (r / 3));
			return 0;
		}
	}

	printf("-1");
	
	return 0;
}