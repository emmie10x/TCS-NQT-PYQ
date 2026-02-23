#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);

    // Input and negative check
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        if(arr[i] < 0) {
            cout << "invalid";
            return 0;
        }
    }

    unordered_map<int, int> freq;

    // Calculate absolute differences
    for(int i = 1; i < n; i++) {
        int diff = abs(arr[i] - arr[i-1]);
        freq[diff]++;
    }

    int maxFreq = 0;
    int result = -1;

    // Find most frequent difference
    for(auto it : freq) {
        if(it.second > maxFreq) {
            maxFreq = it.second;
            result = it.first;
        }
    }

    if(maxFreq == 1)
        cout << "non";
    else
        cout << result;

    return 0;
}