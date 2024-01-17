#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

string WCh[8] = {
	"WBWBWBWB",
	"BWBWBWBW",
	"WBWBWBWB",
	"BWBWBWBW",
	"WBWBWBWB",
	"BWBWBWBW",
	"WBWBWBWB",
	"BWBWBWBW"
};

string BCh[8] = {
	"BWBWBWBW",
	"WBWBWBWB",
	"BWBWBWBW",
	"WBWBWBWB",
	"BWBWBWBW",
	"WBWBWBWB",
	"BWBWBWBW",
	"WBWBWBWB"
};

string board[50];

int WCp(int n, int m);
int BCp(int n, int m);

int main() {
	
	int n, m;
	int d = 64;

	cin >> n >> m;
	cin.ignore();

	for (int k = 0; k < n; k++) {
		getline(cin, board[k]);
	}

	for (int i = 0; i <= n - 8; i++) {
		for (int j = 0; j <= m - 8; j++) {
			int temp = min(WCp(i, j), BCp(i, j));
			if (temp < d) {
				d = temp;
			}
		}
	}
	
	cout << d;

	return 0;
}

int WCp(int n, int m) {
	int c = 0;
	
	for (int j = n; j < n + 8; j++) {
		for (int k = m; k < m + 8; k++) {
			if (board[j][k] != WCh[j - n][k - m]) {
				c++;
			}
		}
	}

	return c;
}

int BCp(int n, int m) {
	int c = 0;

	for (int j = n; j < n + 8; j++) {
		for (int k = m; k < m + 8; k++) {
			if (board[j][k] != BCh[j - n][k - m]) {
				c++;
			}
		}
	}

	return c;
}