#include <stdio.h>
#include <queue>

int main() {

	int n;
	std::queue<int> card;

	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		card.push(i + 1);
	}

	while (card.size() > 1) {
		card.pop();
		int num = card.front();
		card.pop();
		card.push(num);
	}

	printf("%d", card.front());
}