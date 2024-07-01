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
		scanf(" %[^\n]s", str);

		if (strncmp(str, "push", 4) == 0) {
			char* temp = strtok(str, " ");
			char* numStr = strtok(NULL, " ");
			int num = atoi(numStr);
			Push(num);
		}
		else if (strncmp(str, "pop", 3) == 0) {
			Pop();
		}
		else if (strncmp(str, "size", 4) == 0) {
			Size();
		}
		else if (strncmp(str, "empty", 5) == 0) {
			Empty();
		}
		else if (strncmp(str, "top", 3) == 0) {
			Top();
		}
	}
}