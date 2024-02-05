#include <stdio.h>

int main() {

	unsigned int n;
	unsigned int addValue = 1;
	unsigned int beforeValue = 2;
	unsigned int count = 1;

	scanf("%d", &n);

	if (n == 1) {
		printf("1");
		return 0;
	}

	while (true) {
		
		if (n < beforeValue) {
			printf("%d", count);
			break;
		}
		else {
			count++;
			beforeValue = beforeValue + (addValue * 6);
			addValue++;
		}
	}

	return 0;
}