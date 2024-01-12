#include <stdio.h>

int main() {
	
	int i[8];

	for (int k = 0; k < 8; k++) {
		scanf("%d", &i[k]);
	}
	
	for (int j = 0; j < 7; j++) {
		if (i[j] == j + 1) {
			if (!(i[j + 1] == i[j] + 1)) {
				printf("mixed");
				return 0;
			}
		}
		else if (i[j] + j == 8) {
			if (!(i[j + 1] == i[j] - 1)) {
				printf("mixed");
				return 0;
			}
		}
		else {
			printf("mixed");
			return 0;
		}
	}

	if (i[0] == 1) {
		printf("ascending");
	}
	else {
		printf("descending");
	}

	return 0;
}