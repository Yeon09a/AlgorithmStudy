#include <stdio.h>

using namespace std;

int main() {
	int n, k;
	bool bnums[1001] = { false, };
	int nums[1001];

	scanf("%d %d", &n, &k);
	
	int count = n;
	int bindex = 0;
	int index = 0;

	while (count > 0) {
		int i = k;

		while (i > 0) {
			bindex++;

			if (bindex > n) {
				bindex = 1;
			}
			
			if (!bnums[bindex]) {
				i--;
			}
		}

		bnums[bindex] = true;
		nums[index] = bindex;
		index++;
		count--;
	}

	printf("<");
	for (int i = 0; i < n - 1; i++) {
		printf("%d, ", nums[i]);
	}
	printf("%d>", nums[n - 1]);
}