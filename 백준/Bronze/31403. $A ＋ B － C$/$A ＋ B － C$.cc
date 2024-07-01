#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	char a[1001];
	char b[1001];
	char c[1001];
	
	scanf("%s", &a);
	scanf("%s", &b);
	scanf("%s", &c);

	printf("%d\n", atoi(a) + atoi(b) - atoi(c));

	strcat(a, b);
	printf("%d", atoi(a) - atoi(c));
}