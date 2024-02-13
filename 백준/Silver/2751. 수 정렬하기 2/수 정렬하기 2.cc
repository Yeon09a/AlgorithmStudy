#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

	int n;
	vector<int> arr;

	scanf("%d", &n);

	for (int j = 0; j < n; j++) {
		int num;
		scanf("%d", &num);
		arr.push_back(num);
	}

	sort(arr.begin(), arr.end());

	for (int i = 0; i < n; i++) {
		printf("%d\n", arr[i]);
	}

	return 0;
}