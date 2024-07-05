#include <stdio.h>
#include <ctype.h>
using namespace std;

unsigned long sum = 0;
unsigned long temp;

int main() {
	int l;
	char str[51];

	scanf("%d", &l);
	scanf("%s", str);

	for (int i = 0; i < l; i++) {
		temp = 1;
		
		for (int j = 0; j < i; j++) {
			temp *= 31;
		}
		
		int asc = isupper(str[i]) == 0 ? 96 : 64;
		
		sum += (unsigned long)(str[i] - asc) * temp;
	}

	sum %= 1234567891;

	printf("%ld", sum);
}