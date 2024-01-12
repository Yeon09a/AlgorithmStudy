#include <stdio.h>

int main() {
	
	int i[8];
	int result = 0;

	for (int k = 0; k < 8; k++) {
		scanf("%d", &i[k]);
	}
	
	for (int j = 0; j < 7; j++) {
		if (i[j + 1] == i[j] + 1) {
			result++;
		}
		else if (i[j + 1] == i[j] - 1) {
			result--;
		}
	}

	if (result == 7) {
		printf("ascending");
	}
	else if (result == -7) {
		printf("descending");
	}
	else {
		printf("mixed");
	}

	return 0;
}