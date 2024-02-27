#include <stdio.h>
#include <stack>

using namespace std;

int main() {

	int k;
	int sum = 0;
	stack<int> s;

	scanf("%d", &k);

	for (int i = 0; i < k; i++) {
		int num;
		scanf("%d", &num);

		if (num == 0) {
			sum -= s.top();
			s.pop();
		}
		else {
			s.push(num);
			sum += num;
		}
	}

	printf("%d", sum);

	return 0;
}

// 메모리 1624 KB
// 시간 12 ms
// 코드 328 B
