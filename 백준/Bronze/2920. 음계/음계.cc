#include <stdio.h>

int main() {
	
	int i[8];
	int r[8] = {1, 2, 3, 4, 5, 6, 7, 8};

	scanf("%d %d %d %d %d %d %d %d", &i[0], &i[1], &i[2], &i[3], &i[4], &i[5], &i[6], &i[7]);

	for (int j = 0; j < 7; j++) {
		if (i[j] == r[j]) {
			if (!(i[j + 1] == i[j] + 1)) {
				printf("mixed");
				return 0;
			}
		}
		else if (i[j] + r[j] == 9) {
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