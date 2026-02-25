#include <bits/stdc++.h>
using namespace std;

int main() {
    string s1, s2;
    cin >> s1 >> s2;

    if(s1.length() != s2.length()) {
        cout << "Not Anagrams" << endl;
        return 0;
    }

    unordered_map<char, int> mp;

    for(char c : s1)
        mp[c]++;

    for(char c : s2)
        mp[c]--;

    for(auto it : mp) {
        if(it.second != 0) {
            cout << "Not Anagrams" << endl;
            return 0;
        }
    }

    cout << "Anagrams" << endl;
    return 0;
}