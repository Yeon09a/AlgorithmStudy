#include <stdio.h>
#include <string>

using namespace std;

int main() {

	int n;
	int stack[100000];
	int numStack[100000];
	int putN = 1; // 넣어야 할 수
	int tIndex = -1; // 가장 위에 있는 인덱스 

	string result = "";

	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%d", &stack[i]);
	}

	for (int j = 0; j < n; j++) {
		
		while (putN <= stack[j]){
			tIndex++;
			numStack[tIndex] = putN;
			putN++;
			result += "+\n";
		}

		if (numStack[tIndex] == stack[j]) {
			tIndex--;
			result += "-\n";
		}
		else {
			printf("NO");
			return 0;
		}
	}

	printf("%s", result.c_str());
	
	return 0;
}