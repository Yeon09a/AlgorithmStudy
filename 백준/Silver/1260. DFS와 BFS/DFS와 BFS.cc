#include <stdio.h>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

void DFS(int node, vector<int> graph[], bool visited[]) {
	visited[node] = true;
	printf("%d ", node);

	for (int i = 0; i < graph[node].size(); i++) {
		int next = graph[node][i];
		if (!visited[next]) {
			DFS(next, graph, visited);
		}
	}
}

void BFS(int node, vector<int> graph[], bool visited[]) {
	queue<int> q;

	q.push(node);
	visited[node] = true;

	while (!q.empty()) {
		int cur = q.front();
		q.pop();
		printf("%d ", cur);

		for (int i = 0; i < graph[cur].size(); i++) {
			int next = graph[cur][i];

			if (!visited[next]) {
				q.push(next);
				visited[next] = true;
			}
		}
	}
}

int main() {
	int n, m, v;
	vector<int> graph[1001];
	bool visited[1001] = {false, };

	scanf("%d %d %d", &n, &m, &v);

	while (m > 0) {
		int a, b;
		scanf("%d %d", &a, &b);
		graph[a].push_back(b);
		graph[b].push_back(a);
		m--;
	}

	for (int k = 1; k <= n; k++) {
		sort(graph[k].begin(), graph[k].end());
	}

	DFS(v, graph, visited);
	
	for (int j = 1; j <= n; j++) {
		visited[j] = false;
	}

	printf("\n");

	BFS(v, graph, visited);
	
}