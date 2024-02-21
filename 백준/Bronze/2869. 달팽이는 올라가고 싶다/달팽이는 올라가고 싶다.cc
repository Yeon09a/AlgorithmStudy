#include <stdio.h>

using namespace std;

int main() {

	int a, b, v;
	int d = 0;

	scanf("%d %d %d", &a, &b, &v);

	int min = v - a;
	if (min <= 0) {
		
		d = 1;
	}
	else {
		d = min / (a - b);

		if (min % (a - b) != 0) {
			d++;
		}

		d++;
	}

	printf("%d", d);

	return 0;
}