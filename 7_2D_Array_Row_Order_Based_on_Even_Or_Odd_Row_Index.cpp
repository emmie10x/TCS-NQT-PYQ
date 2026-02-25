#include <bits/stdc++.h>
using namespace std;

int main() {
    int m, n;
    cin >> m >> n;

    vector<vector<int>> matrix(m, vector<int>(n));

    // Input
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }

    // Traversal
    for(int i = 0; i < m; i++) {

        // Even index row → left to right
        if(i % 2 == 0) {
            for(int j = 0; j < n; j++) {
                cout << matrix[i][j] << " ";
            }
        }
        // Odd index row → right to left
        else {
            for(int j = n - 1; j >= 0; j--) {
                cout << matrix[i][j] << " ";
            }
        }
    }

    return 0;
}