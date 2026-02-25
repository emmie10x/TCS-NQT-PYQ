#include <bits/stdc++.h>
using namespace std;

int main() {

    string s;
    cin >> s;

    int n = s.length();

    vector<long long> fact(11, 1);
    for(int i = 1; i <= 10; i++)
        fact[i] = fact[i-1] * i;

    unordered_map<char,int> freq;
    for(char c : s)
        freq[c]++;

    long long ans = fact[n];

    for(auto &p : freq)
        ans /= fact[p.second];

    cout << ans;

    return 0;
}