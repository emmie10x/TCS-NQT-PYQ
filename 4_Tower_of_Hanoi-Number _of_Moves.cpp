#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    cout << (1LL << n) - 1 << endl;

    return 0;
}

/*
#include <bits/stdc++.h>
using namespace std;

long long towerOfHanoi(int n) {
    if (n == 1)
        return 1;
    return 2 * towerOfHanoi(n - 1) + 1;
}

int main() {
    int n;
    cin >> n;

    cout << towerOfHanoi(n) << endl;
    return 0;
}
*/

/*
Type	                  Complexity
Time Complexity	          O(1) (Formula method)
Space Complexity	      O(1)
Recursive Time	          O(n)
Recursive Space	          O(n) (stack calls)
*/