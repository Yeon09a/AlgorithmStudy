#include <iostream>
#include <string>

using namespace std;

int stack[10000];
int topIndex = -1;

void Push(int n) {
	topIndex++;
	stack[topIndex] = n;
}

void Pop() {
	if (topIndex == -1) {
		cout << "-1\n";
	}
	else {
		cout << stack[topIndex] << "\n";
		topIndex--;
	}
}

void Size() {
	cout << topIndex + 1 << "\n";
}

void Empty() {
	if (topIndex == -1) {
		cout << "1\n";
	}
	else {
		cout << "0\n";
	}
}

void Top() {
	if (topIndex == -1) {
		cout << "-1\n";
	}
	else {
		cout << stack[topIndex] << "\n";
	}
}

int main() {

	int n;
	cin >> n;
	string str;
	cin.ignore();

	for (int i = 0; i < n; i++) {
		getline(cin, str);

		if (str.compare(0, 4, "push") == 0) {
			int num = stoi(str.substr(5));
			Push(num);
		}
		else if (str.compare("pop") == 0) {
			Pop();
		}
		else if (str.compare("size") == 0) {
			Size();
		}
		else if (str.compare("empty") == 0) {
			Empty();
		}
		else if (str.compare("top") == 0) {
			Top();
		}
	}
}


// 메모리 2064 KB
// 시간 224 ms
