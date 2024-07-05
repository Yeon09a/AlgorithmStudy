#include <stdio.h>
#include <math.h>
using namespace std;

int main() {
	int n;
	int scores[31] = {0, };

	scanf("%d", &n);

	if (n == 0) {
		printf("0");
		return 0;
	}


	for (int i = 0; i < n; i++) {
		int index;
		scanf("%d", &index);
		scores[index]++;
	}

	int num = round(n * 0.15f);
	int temp = num;
	int temp1 = num;

	for (int j = 1; j <= 30; j++) {
		if (temp > 0) {
			if (scores[j] < temp) {
				temp -= scores[j];
				scores[j] = 0;
			}
			else {
				scores[j] -= temp;
				temp = 0;
			}
		}

		if (temp1 > 0) {
			if (scores[31 - j] < temp1) {
				temp1 -= scores[31 - j];
				scores[31 - j] = 0;
			}
			else {
				scores[31 - j] -= temp1;
				temp1 = 0;
			}
		}

		if (temp <= 0 && temp1 <= 0) {
			break;
		}

	}

	int average = 0;

	for (int j = 1; j <= 30; j++) {
		average += (scores[j] * j);
	}

	printf("%d", (int)round(average / (double)(n - num*2)));
}