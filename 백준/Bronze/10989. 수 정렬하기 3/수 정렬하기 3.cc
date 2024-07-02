#include <stdio.h>
using namespace std;

int main() {
	int n;
	int nums[10001] = {0};

	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		int num;
		scanf("%d", &num);
		nums[num]++;
	}

	for (int j = 1; j <= 10000; j++) {
		for (int k = 0; k < nums[j]; k++) {
			printf("%d\n", j);
		}
	}
}