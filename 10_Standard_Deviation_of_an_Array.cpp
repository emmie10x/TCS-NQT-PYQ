#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    double sum = 0.0;

    // Input and sum calculation
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];
    }

    // Calculate mean
    double mean = sum / n;

    // Calculate variance
    double variance = 0.0;
    for(int i = 0; i < n; i++) {
        double diff = arr[i] - mean;
        variance += diff * diff;
    }

    variance /= n;

    // Standard deviation
    double sd = sqrt(variance);

    // Print with 2 decimal places
    cout << fixed << setprecision(2) << sd;

    return 0;
}