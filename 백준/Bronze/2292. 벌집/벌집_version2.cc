#include <stdio.h>

int main() {

	unsigned int n;

	scanf("%d", &n);

	if (n == 1) {
		printf("1");
		return 0;
	}
	int i = 1;
	for (int value = 2; value <= n; i++) {
		value += i * 6;
	}

	printf("%d", i);

	return 0;
}

// 메모리 1112KB
// 시간 0ms
// 코드길이 221B
