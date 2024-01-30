#include <stdio.h>
#include <vector>
#include <utility>

int main() {

	int testCase, n, m;
	int count = 0;
	bool replace = false;
	std::vector<std::pair<int, bool>> queue;

	scanf("%d", &testCase);

	for (int i = 0; i < testCase; i++) {

		scanf("%d %d", &n, &m);

		for (int j = 0; j < n; j++) {
			int num;
			scanf("%d", &num);

			queue.emplace_back(std::make_pair(num, false));
		}

		queue[m].second = true;

		while (!queue.empty()) {
			for (int p = 1; p < queue.size(); p++) {
				if (queue.front().first < queue[p].first) {
					std::pair<int, bool> temp = queue[0];
					queue.emplace_back(temp);
					queue.erase(queue.begin());
					replace = true;
					break;
				}
			}

			if (!replace) {
				count++;
				if (queue.front().second) {
					printf("%d\n", count);
					break;
				}
				queue.erase(queue.begin());
			}

			replace = false;
		}

		count = 0;
		queue.clear();
	}
}