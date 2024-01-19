#include <stdio.h>

int main() {
	
	int n;
	float s[1000];
	float max = 0;
	float sum = 0;
	
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%f", &s[i]);

		if (max < s[i]) {
			max = s[i];
		}
	}

	for (int j = 0; j < n; j++) {
		sum += s[j] / max * 100;
	}

	printf("%f", sum / n);

	return 0;
}
