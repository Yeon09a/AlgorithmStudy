#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int queue[10001];
int fIndex = 0;
int bIndex = -1;
int count = 0;

void Push(int n) {
	bIndex++;
	if (bIndex == 10002) {
		bIndex = 0;
	}
	queue[bIndex] = n;
	count++;
 }

void Pop() {
	if (count == 0) {
		printf("-1\n");
	}
	else {
		count--;
		printf("%d\n", queue[fIndex]);
		fIndex++;
		if (fIndex == 10002) {
			fIndex = 0;
		}
	}
}

void Size() {
	printf("%d\n", count);
}

void Empty() {
	if (count == 0) {
		printf("1\n");
	}
	else {
		printf("0\n");
	}
}

void Front() {
	if (count == 0) {
		printf("-1\n");
	}
	else {
		printf("%d\n", queue[fIndex]);
	}
}

void Back() {
	if (count == 0) {
		printf("-1\n");
	}
	else {
		printf("%d\n", queue[bIndex]);
	}
}

int main() {
	int n;
	char com[100006];

	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%s", com);

		if (strcmp(com, "push") == 0) {
			int num;
			scanf("%d", &num);
			Push(num);
		}
		else if (strcmp(com, "pop") == 0) {
			Pop();
		}
		else if (strcmp(com, "size") == 0) {
			Size();
		}
		else if (strcmp(com, "empty") == 0) {
			Empty();
		}
		else if (strcmp(com, "front") == 0) {
			Front();
		}
		else if (strcmp(com, "back") == 0) {
			Back();
		}
	}
}