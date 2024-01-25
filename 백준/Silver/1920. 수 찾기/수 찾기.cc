#include <stdio.h>
#include <algorithm>

int main() {

	int n, m;
	int arr[100000];
	bool isIn = false;

	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}

	std::sort(arr, arr + n, std::less<>());
	
	scanf("%d", &m);

	for (int j = 0; j < m; j++) {
		int num, mid;
		int from = 0;
		int to = n - 1;
					
		scanf("%d", &num);

		while (from <= to)
		{
			mid = (from + to) / 2;

			if (arr[mid] > num) {
				to = mid - 1;
			}
			else if (arr[mid] < num) {
				from = mid + 1;
			}
			else {
				isIn = true;
				break;
			}
		}

		if (isIn) {
			printf("1\n");
			isIn = false;
		}
		else {
			printf("0\n");
		}
	}

	return 0;
}