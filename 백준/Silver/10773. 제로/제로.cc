#include <stdio.h>
#include <vector>

using namespace std;

int main() {

	int k;
	int sum = 0;
	vector<int> v;

	scanf("%d", &k);

	for (int i = 0; i < k; i++) {
		int num;
		scanf("%d", &num);

		if (num == 0) {
			sum -= v.back();
			v.pop_back();
		}
		else {
			v.push_back(num);
			sum += num;
		}
	}

	printf("%d", sum);

	return 0;
}