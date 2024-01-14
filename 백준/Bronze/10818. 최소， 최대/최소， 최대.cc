#include <stdio.h>

int main() {
	
	int n;
	int num[1000000];

	int max = 0;
	int min = 0;

	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%d", &num[i]);
	}

	for (int j = 1; j < n; j++) {
		if (num[min] >= num[j]) {
			min = j;
		}
		
		if (num[max] <= num[j]) {
			max = j;
		}
	}

	printf("%d %d", num[min], num[max]);

	return 0;
}