#include <stdio.h>
using namespace std;

int arr_0[41] = { 0, };
int arr_1[41] = { 0, };

int fibonacci_0(int n) {
    if (n == 0) {
        return 1;
    }
    else if (n == 1) {
        return 0;
    }

    if (arr_0[n] == 0) {
        arr_0[n] = fibonacci_0(n - 1) + fibonacci_0(n - 2);
    }
    return arr_0[n];
}

int fibonacci_1(int n) {
    if (n == 0) {
        return 0;
    }
    else if (n == 1) {
        return 1;
    }

    if (arr_1[n] == 0) {
        arr_1[n] = fibonacci_1(n - 1) + fibonacci_1(n - 2);
    }

    return arr_1[n];
}

int main() {
	int t;

    scanf("%d", &t);

    for (int i = 0; i < t; i++) {
        int num;
        scanf("%d", &num);

        printf("%d %d\n", fibonacci_0(num), fibonacci_1(num));
    }

}