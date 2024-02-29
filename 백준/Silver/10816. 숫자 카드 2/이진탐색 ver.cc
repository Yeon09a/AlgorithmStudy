#include <stdio.h>
#include <algorithm>

using namespace std;

int main() {

	int n, m;
	int arr[500000];

	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}

	sort(arr, arr+n);

	scanf("%d", &m);

	for (int j = 0; j < m; j++) {
		int v;
		scanf("%d", &v);

		printf("%d ", upper_bound(arr, arr+n, v) - lower_bound(arr, arr+n, v));
	}

	return 0;
}

// 메모리 2952 KB
// 시간 412 ms
// 코드 길이 374 B
