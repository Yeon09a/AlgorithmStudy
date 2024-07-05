#include <stdio.h>
#include <ctype.h>
using namespace std;

unsigned long long sum = 0;

int main() {
	int l;
	char str[51];
	unsigned long long m = 1234567891;
	unsigned long long r = 1;

	scanf("%d", &l);
	scanf("%s", str);

	for (int i = 0; i < l; i++) {
		int asc = isupper(str[i]) == 0 ? 96 : 64;
		sum += ((str[i] - asc) * r) % m;
		r = (r * 31) % m;
	}

	sum %= m;

	printf("%lld", sum);
}