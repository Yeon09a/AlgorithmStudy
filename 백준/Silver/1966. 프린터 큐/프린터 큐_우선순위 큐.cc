#include <iostream>
#include <queue>

using namespace std;

int main() {

	int testCase, n, m;
	bool replace = false;

	cin >> testCase;

	while (testCase--) {

		cin >> n >> m;

		int count = 0;

		queue<pair<int, int>> q;
		priority_queue<int> pq;

		for (int j = 0; j < n; j++) {
			int num;
			cin >> num;

			q.push({ j, num });
			pq.push(num);
		}

		while (!q.empty()) {

			int index = q.front().first;
			int pri = q.front().second;
			q.pop();

			if (pri == pq.top()) {
				pq.pop();
				count++;

				if (index == m) {
					cout << count << "\n";
					break;
				}
			}
			else {
				q.push({index, pri});
			}
		}
	}

	return 0;
}

// 메모리 : 2024KB
// 시간 : 4ms
