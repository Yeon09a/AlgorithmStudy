#include <stdio.h>
#include <algorithm>

int main() {

	int arr[3];

	while (true) {
		scanf("%d %d %d", &arr[0], &arr[1], &arr[2]);

		if (arr[0] == 0 && arr[1] == 0 && arr[2] == 0) {
			return 0;
		}

		std::sort(arr, arr + 3, std::less<>());

		if (arr[0] * arr[0] + arr[1] * arr[1] == arr[2] * arr[2]) {
			printf("right\n");
		}
		else {
			printf("wrong\n");
		}
	}
	
	return 0;
}