#include <stdio.h>
using namespace std;

#define Inf 100000

int FloyWarshall(int graph[][101], int n) {
	
	for (int i = 1; i <= n; i++) { // 거쳐가는 노드
		for (int j = 1; j <= n; j++) { // 출발 노드
			for (int k = 1; k <= n; k++) { // 도착 노드
				if (graph[j][i] + graph[i][k] < graph[j][k]) {
					graph[j][k] = graph[j][i] + graph[i][k];
				}
			}
		}
	}

	int min = Inf;
	int person;

	for (int m = 1; m <= n; m++) {
		int val = 0;
		
		for (int p = 1; p <= n; p++) {
			val += graph[m][p];
		}

		if (val < min) {
			min = val;
			person = m;
		}
	}

	return person;
}


int main() {
	int n, m;

	int graph[101][101] = {0, };

	scanf("%d %d", &n, &m);

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			if (i != j) {
				graph[i][j] = Inf;
			}
		}
	}

	while (m > 0) {
		int a, b;

		scanf("%d %d", &a, &b);

		graph[a][b] = 1;
		graph[b][a] = 1;

		m--;
	}

	printf("%d", FloyWarshall(graph, n));
}