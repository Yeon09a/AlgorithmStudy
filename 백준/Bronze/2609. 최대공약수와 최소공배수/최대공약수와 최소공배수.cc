#include <stdio.h>

int main() {

	int min, max;
	int i = 1;

	scanf("%d %d", &min, &max);

	if (min > max) {
		int temp = min;
		min = max;
		max = temp;
	}

	for (int j = min; min >= 1; j--) {
		if (min % j == 0 && max % j == 0) {
			printf("%d\n", j);
			break;
		}
	}

	while (1) {
		int num = max * i;
		if (num % min == 0) {
			printf("%d", num);
			break;
		}
		i++;
	}

	return 0;
}