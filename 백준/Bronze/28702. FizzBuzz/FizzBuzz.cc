#include <stdio.h>
#include <stdlib.h>
using namespace std;

void PrintAnswer(int num) {
	if (num % 3 == 0) {
		if (num % 5 == 0) {
			printf("FizzBuzz");
		}
		else {
			printf("Fizz");
		}
	}
	else if (num % 5 == 0) {
		printf("Buzz");
	}
	else {
		printf("%d", num);
	}
}

int main() {
	char str1[9];
	char str2[9];
	char str3[9];

	scanf("%s", str1);
	scanf("%s", str2);
	scanf("%s", str3);

	if (48 <= (int)str1[0] && (int)str1[0] < 58) {
		int num = atoi(str1);
		PrintAnswer(num + 3);
	}
	else if (48 <= (int)str2[0] && (int)str2[0] < 58) {
		int num = atoi(str2);
		PrintAnswer(num + 2);
	}
	else if (48 <= (int)str3[0] && (int)str3[0] < 58) {
		int num = atoi(str3);
		PrintAnswer(num + 1);
	}
}