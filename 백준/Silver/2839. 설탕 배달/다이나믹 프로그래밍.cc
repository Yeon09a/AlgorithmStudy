#include <stdio.h>
#include <algorithm>

int arr[5001] = { 0, };

int dp(int n) {
	if (n < 0) {
		return 99998;
	}

	if (n == 3 || n == 5) {
		return 1;
	}

	if (arr[n] != 0) { 
		return arr[n];
	}

	arr[n] = std::min(dp(n - 3), dp(n - 5)) + 1;

	return arr[n];
}

int main() {

	int n;
	
	scanf("%d", &n);

	arr[3] = 1;
	arr[5] = 1;

	int count = dp(n);

	if (count >= 2000) {
		printf("-1");
	}
	else {
		printf("%d", count);
	}
	
	return 0;
}

// 메모리 1132 KB
// 시간 0 ms
// 코드 길이 445 B
