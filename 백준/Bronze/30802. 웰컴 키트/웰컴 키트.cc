#include <stdio.h>
#include <math.h>
using namespace std;

int main() {
	int n, t, p;
	int sizes[6];
	int tcount = 0;
	int pcount = 0;
	int pen = 0;

	scanf("%d", &n);

	for (int i = 0; i < 6; i++) {
		scanf("%d", &sizes[i]);
	}

	scanf("%d %d", &t, &p);

	for (int j = 0; j < 6; j++) {
		tcount += ceil(sizes[j] / (double)t);
	}

	pcount = n / p;
	pen = n % p;

	printf("%d\n", tcount);
	printf("%d %d", pcount, pen);
}