#include <stdio.h>
using namespace std;

int fac(int n) {
	if (n == 1 || n ==0) {
		return 1;
	}
	else {
		return n * fac(n - 1);
	}
}

int main() {
	int n, k;
	scanf("%d %d", &n, &k);
	int a = fac(n) / (fac(k) * fac(n - k));
	printf("%d", a);
}