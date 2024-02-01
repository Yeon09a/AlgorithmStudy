#include <stdio.h>
#include <math.h>
#include <algorithm>

int arr[500000];

int main() {

	int n;
	double sum = 0;
	int maxArr[8001] = { 0, };
	int maxCount = 0;
	int maxIndex;
	bool secondMax = false;

	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
		sum += arr[i];
		maxArr[arr[i] + 4000]++;

		if (maxCount < maxArr[arr[i] + 4000]) {
			maxCount = maxArr[arr[i] + 4000];
		}
	}

	printf("%d\n", (int)round(sum / n));

	std::sort(arr, arr + n, std::less<>());

	printf("%d\n", arr[n / 2]);

	for (int k = 0; k < 8001; k++) {

		if (maxArr[k] == maxCount) {
			maxIndex = k;
			if (secondMax) {
				break;
			}

			secondMax = true;
		}
	}

	printf("%d\n", maxIndex - 4000);

	printf("%d", abs(arr[n - 1] - arr[0]));

	return 0;
}