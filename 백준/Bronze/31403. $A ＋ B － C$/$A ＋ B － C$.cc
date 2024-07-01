#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	int a, b, c;
	char str1[1001];
	char str2[1001];
	
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);

	printf("%d\n", a + b - c);

	sprintf(str1, "%d", a);
	sprintf(str2, "%d", b);
	strcat(str1, str2);
	printf("%d", atoi(str1) - c);
}