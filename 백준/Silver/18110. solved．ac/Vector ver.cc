#include <stdio.h>
#include <algorithm>
#include <vector>
#include <math.h>
using namespace std;

int scores[300000];

int main() {
	int n;

	scanf("%d", &n);

	vector<int> v(n); // 벡터의 크기 포함 선언 -> 크기가 n인 벡터 선언

	if (n == 0) { // 예외처리 항상 살펴보기
		printf("0");
		return 0;
	}

	for (int i = 0; i < n; i++) {
		scanf("%d", &v[i]);
	}

	sort(v.begin(), v.end());

	int num = round(n * 0.15f);

	double average = 0;

	for (int j = num; j < n - num; j++) {
		average += v[j];
	}
	printf("%d", (int)round(average /( n - num * 2)));
}

// 메모리 3572 KB
// 시간 36 ms
