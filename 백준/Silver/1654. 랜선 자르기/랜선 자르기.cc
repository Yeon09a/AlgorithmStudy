#include <iostream>
#include <algorithm>
using namespace std;

int main() {

	int k, n;
	unsigned int from = 1, to = 0, mid;
	unsigned int result = 0;
	unsigned int lan[10000];

	cin >> k >> n;

	for (int i = 0; i < k; i++) {
		cin >> lan[i];
		to = max(to, lan[i]);
	}

	while (from <= to) {
		int sum = 0;

		mid = (from + to) / 2;

		for (int j = 0; j < k; j++) {
			sum += lan[j] / mid;
		}

		if (sum >= n) {
			from = mid + 1;
			result = max(result, mid);
		}
		else {
			to = mid - 1;
		}
	}

	cout << result;

	return 0;
}
