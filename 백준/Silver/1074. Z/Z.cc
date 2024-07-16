#include <stdio.h>
#include <math.h>
using namespace std;

int n, r, c;
int answer = 0;

void FindZ(int x, int y, int size) { 
	if (x == r && y == c) { 
		printf("%d", answer);
		return;
	}

	if (r >= x && r < x + size && c >= y && c < y + size) {
		int half = size / 2;
		FindZ(x, y, half);
		FindZ(x, y + half, half);
		FindZ(x + half, y, half);
		FindZ(x + half, y + half, half);
	}
	else {
		answer += size * size;
	}
}

int main() {
	
	scanf("%d %d %d", &n, &r, &c);

	int h = pow(2, n);

	FindZ(0 , 0, h);
}