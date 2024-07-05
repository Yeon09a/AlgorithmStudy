#include <stdio.h>
#include <algorithm>
#include <math.h>
using namespace std;

int scores[300000];

int main() {
	int n;

	scanf("%d", &n);

	if (n == 0) { // 예외처리 항상 살펴보기
		printf("0");
		return 0;
	}

	for (int i = 0; i < n; i++) {
		scanf("%d", &scores[i]);
	}

	sort(scores, scores + n);

	int num = round(n * 0.15f);

	double average = 0;

	for (int j = num; j < n - num; j++) {
		average += scores[j];
	}
	printf("%d", (int)round(average /( n - num * 2)));
}

// 메모리 2288 KB
// 시간 44 ms
