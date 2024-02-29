#include <stdio.h>
#include <map>

using namespace std;

int main() {

	int n, m;
	map<int, int> ma;

	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		int num;
		scanf("%d", &num);

		map<int, int>::iterator iter = ma.find(num);
		if (iter != ma.end()) {
			(iter->second)++;
		}
		else {
			ma.insert({num, 1});
		}
	}

	scanf("%d", &m);

	for (int j = 0; j < m; j++) {
		int v;
		scanf("%d", &v);

		map<int, int>::iterator iter = ma.find(v);
		if (iter != ma.end()) {
			printf("%d ", iter->second);
		}
		else {
			printf("0 ");
		}
	}

	return 0;
}