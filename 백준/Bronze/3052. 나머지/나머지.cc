#include <stdio.h>
#include <algorithm>

using namespace std;

int main() {
	
	int i[10];
	int count = 1;

	for (int j = 0; j < 10; j++) {
		scanf("%d", &i[j]);
		i[j] = i[j] % 42;
	}

	sort(i, i + 10);

	for (int k = 0; k < 9; k++) {
		if (i[k] != i[k + 1]) {
			count++;
		}
	}

	printf("%d", count);


	return 0;
}