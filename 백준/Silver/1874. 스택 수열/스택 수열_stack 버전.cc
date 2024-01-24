#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main() {

	stack<int> st;
	int n;
	int putN = 1; // 넣어야 할 수
	string result = "";

	cin >> n;

	for (int i = 0; i < n; i++) {
		int num;
		cin >> num;

		while (putN <= num) {
			st.push(putN);
			putN++;
			result += "+\n";
		}

		if (st.top() == num) {
			st.pop();
			result += "-\n";
		}
		else {
			printf("NO");
			return 0;
		}
	}

	cout << result;
	
	return 0;
}

// 메모리 2780KB
// 시간 44ms
