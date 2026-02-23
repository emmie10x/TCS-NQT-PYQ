#include <bits/stdc++.h>
using namespace std;

int main() {
    int m, n;
    cin >> m >> n;

    // Validation check
    if(m <= 0 || n <= 0) {
        cout << "invalid input";
        return 0;
    }

    int ans = INT_MAX;

    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            int x;
            cin >> x;
            ans = min(ans, x);
        }
    }

    cout << ans;
    return 0;
}