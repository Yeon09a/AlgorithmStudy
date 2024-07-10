#include <stdio.h>
#include <algorithm>
using namespace std;

pair<int, int> arr[41];

pair<int, int> fibonacci(int n) {
    if (n == 0) {
        return arr[0];
    }
    else if (n == 1) {
        return arr[1];
    }

    if (arr[n] == make_pair(0, 0)){
        arr[n] = make_pair(fibonacci(n - 1).first + fibonacci(n - 2).first, fibonacci(n - 1).second + fibonacci(n - 2).second);
    }

    return arr[n];
}

int main() {
	int t;

    scanf("%d", &t);

    arr[0].first = 1;
    arr[0].second = 0;
    arr[1].first = 0;
    arr[1].second = 1;

    for (int i = 0; i < t; i++) {
        int num;
        scanf("%d", &num);

        pair<int, int> p = fibonacci(num);

        printf("%d %d\n", p.first, p.second);
    }

}