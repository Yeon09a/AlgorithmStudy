#include <stdio.h>
#include <string.h>

int main() {
	
	char f[99999];
	bool id = false;

	while (true) {
		scanf("%s", f);

		if (strcmp(f, "0") == 0) {
			break;
		}

		for (int i = 0; i < (strlen(f) + 1) / 2; i++) {
			if (f[i] != f[strlen(f) - 1 - i]) {
				id = true;
				break;
			}
		}

		if (id) {
			printf("no\n");
			id = false;
		}
		else {
			printf("yes\n");
		}
	}

	return 0;
}