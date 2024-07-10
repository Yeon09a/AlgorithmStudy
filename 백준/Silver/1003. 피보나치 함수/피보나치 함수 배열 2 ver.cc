#include <stdio.h>
using namespace std;

int arr[41] = { 0, };

int fibonacci(int n) {
    if (n == 0 || n == 1) {
        return n;
    }

    if (arr[n] == 0) {
        arr[n] = fibonacci(n - 1) + fibonacci(n - 2);
    }
    return arr[n];
}

int main() {
    int t;

    scanf("%d", &t);

    for (int i = 0; i < t; i++) {
        int num;
        scanf("%d", &num);

        if (num == 0) {
            printf("1 0\n");
        }
        else {
            printf("%d %d\n", fibonacci(num - 1), fibonacci(num));
        }
    }

}

// 메모리 1116 KB
// 시간 0ms
