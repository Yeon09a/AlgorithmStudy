#include <stdio.h>

int getGCD(int max, int min) {
	int rm = max % min;

	while (rm != 0) {
		max = min;
		min = rm;
		rm = max % min;
	}

	return min;
}

int getLCM(int max, int min) {
	return (max * min) / getGCD(max, min);
}

int main() {

	int min, max;
	int i = 1;

	scanf("%d %d", &min, &max);

	if (min > max) {
		int temp = min;
		min = max;
		max = temp;
	}

	printf("%d\n%d", getGCD(max, min), getLCM(max, min));

	return 0;
}

// 메모리 1112 KB
// 시간 0ms
// 코드 길이 426B
