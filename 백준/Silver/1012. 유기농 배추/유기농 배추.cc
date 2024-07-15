#include <stdio.h>
using namespace std;

int t, m, n, k;
bool arr[50][50] = { false, };
int xPos[4] = {0, 0, -1, 1};
int yPos[4] = { 1, -1, 0, 0 };


void DFS(int x, int y) {
    arr[x][y] = false;

    for (int i = 0; i < 4; i++) {
        int xi = x + xPos[i];
        int yi = y + yPos[i];

        if (xi < 0 || yi < 0 || xi >= m || yi >= n) {
            continue;
        }

        if (arr[xi][yi]) {
            DFS(xi, yi);
        }
    }
}


int main() {
    
   scanf("%d", &t);

    for (int c = 0; c < t; c++) {
        int count = 0;

        scanf("%d %d %d", &m, &n, &k);

        while (k > 0) {
            int x, y;
            scanf("%d %d", &x, &y);
            arr[x][y] = true;
            k--;
        }

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (arr[i][j]) {
                    DFS(i, j);
                    count++;
                }
            }
        }

        printf("%d\n", count);
    }
    
}