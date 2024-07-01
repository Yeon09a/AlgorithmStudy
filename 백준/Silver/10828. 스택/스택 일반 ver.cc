#include <stdio.h>
#include <string.h>
#include <stdlib.h>

using namespace std;

int stack[10000];
int topIndex = -1;

void Push(int n) {
	topIndex++;
	stack[topIndex] = n;
}

void Pop() {
	if (topIndex == -1) {
		printf("-1\n");
	}
	else {
		printf("%d\n", stack[topIndex]);
		topIndex--;
	}
}

void Size() {
	printf("%d\n", topIndex + 1);
}

void Empty() {
	if (topIndex == -1) {
		printf("1\n");
	}
	else {
		printf("0\n");
	}
}

void Top() {
	if (topIndex == -1) {
		printf("-1\n");
	}
	else {
		printf("%d\n", stack[topIndex]);
	}
}

int main() {

	int n;

	char str[100006];

	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf(" %s", str);

		if (strcmp(str, "push") == 0) {
			int num;
			scanf("%d", &num);
			Push(num);
		}
		else if (strcmp(str, "pop") == 0) {
			Pop();
		}
		else if (strcmp(str, "size") == 0) {
			Size();
		}
		else if (strcmp(str, "empty") == 0) {
			Empty();
		}
		else if (strcmp(str, "top") == 0) {
			Top();
		}
	}
}

// 메모리 1156 KB
// 시간 0 ms
