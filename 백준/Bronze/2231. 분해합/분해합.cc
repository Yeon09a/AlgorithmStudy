#include <stdio.h>
#include <string>

int main() {

	unsigned int n;
	unsigned int sum = 0;
	scanf("%d", &n);

	for (int i = 1; i <= n; i++) {
		sum += i;
		std::string num = std::to_string(i);
		for (int j = 0; j < num.size(); j++) {
			sum += (int)num[j] - '0';
		}

		if (sum == n) {
			printf("%d", i);
			return 0;;
		}

		sum = 0;
	}

	printf("0");

	return 0;
}