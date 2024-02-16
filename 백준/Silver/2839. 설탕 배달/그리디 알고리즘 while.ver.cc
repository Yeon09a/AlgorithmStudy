#include <stdio.h>

int main() {

	int n;
	int count = 0;
	
	scanf("%d", &n);

	while (n >= 0) {
		if (n % 5 == 0) {
			count += n / 5;
			printf("%d", count);
			return 0;
		} 
		else {
			n -= 3;
			count++;
		}
	}

	printf("-1");
	
	return 0;
}

// 메모리 1112 KB
// 시간 0 ms
// 코드 길이 246 B
