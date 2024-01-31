#include <stdio.h>
#include <math.h>

int main() {

	int n;
	int arr[100];
	int count = 0;
	bool isP = true;

	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);

		int t = sqrt(arr[i]);

		if (arr[i] != 1 && t == 1) {
			count++;
		}
		else {

			if (arr[i] == 1) {
				continue;
			}

			for (int j = 2; j <= t; j++) {
				if (arr[i] % j == 0) {
					isP = false;
					break;
				}
			}

			if (isP) {
				count++;
			}

		}

		isP = true;
	}

	printf("%d", count);
	
	return 0;
}