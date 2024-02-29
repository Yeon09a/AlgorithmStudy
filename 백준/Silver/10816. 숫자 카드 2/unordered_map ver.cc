#include <stdio.h>
#include <unordered_map>

using namespace std;

int main() {

	int n, m;
	unordered_map<int, int> ma;

	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		int num;
		scanf("%d", &num);

		ma[num]++;
	}

	scanf("%d", &m);

	for (int j = 0; j < m; j++) {
		int v;
		scanf("%d", &v);

		printf("%d ", ma[v]);
	}

	return 0;
}

// 메모리 42920 KB
// 시간 624 ms
// 코드 길이 341 B
